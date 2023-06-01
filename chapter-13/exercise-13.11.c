#include <stdio.h>

void add_front (int);
void add_rear (int);
void display (void);
int retrieve_front (void);
int retrieve_rear (void);

int *front, *rear;
int a[20];

int main()
{
    int item;

    front = NULL;
    rear = NULL;

    printf ("\nAdding elements at front of a deque:");

    add_front (10);
    add_front (40);
    add_front (30);
    display();

    printf ("\n\nAdding an element at rear of a deque:");

    add_rear (50);
    display();

    printf ("\n\nRetreiving an element from front of a deque:");

    item = retrieve_front();

    if (item == -1)
    {
    	printf ("\nDeQueue Empty");
	}
    else
    {
    	printf ("\n\nFront Item = %d", item);
	}

    display();

    printf ("\n\nRetreiving an element from rear of a deque:");

    item = retrieve_rear();

    if (item == -1)
    {
    	printf ("\nDeQueue Empty");
	}
    else
    {
    	printf ("\n\nRear Item = %d", item);
	}

    display();

    return 0;
}

/* Function to retrieve item from rear */
int retrieve_rear (void)
{
    int item, i;

    if (rear == NULL)
    {
        printf ("\n DeQueue Empty");
        return -1;
    }
    else
    {
        item = *rear;
        i = rear - front;
        if (i == 0)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            *rear = 0;
            rear--;
        }
    }
    return item;
}

/* Function to retrieve item from front */
int retrieve_front (void)
{
    int item, i, j;
    if (front == NULL)
    {
        printf ("\n DeQueue Empty");
        return -1;
    }
    else
    {
        item = *front;
        i = rear - front;
        if (i == 0)
        {
            front = NULL;
            rear = NULL;
        }
        else
        {
            for (j = 0; j <= i - 1; j ++)
            front [j] = front [j + 1];
            *rear = 0;
            rear--;
        }
    }
    return item;
}

/* Function to add item to rear */
void add_rear (int item)
{
    int i;
    if (front == NULL)
    {
        front = a;
        *front = item;
        rear = a;
    }
    else
    {
        i = rear - front;
        if (i != 25)
        {
            rear++;
            *rear = item;
        }
        else
        {
        	printf ("\nDeQueue full");
		}
    }
}

/* Function to add item at front */
void add_front (int item)
{
    int i, j;
    if (front == NULL)
    {
        front = a;
        *(front) = item;
        rear = a;
    }
    else
    {
        front = a;
        j = rear - front;
        if (j != 25)
        {
            for (i = j + 1; i >= 0; i--)
            front [i] = front [i - 1];
            *(front + 0) = item;
            rear++;
        }
        else
        {
        	printf ("\n DeQueue Full");
		}
    }
}
    
/* Function to display the deque */
void display (void)
{
    int i;
    int *p = front;
    
    if (p == NULL)
    {
    	printf ("\n\nDeQueue Empty");
	}
    else
    {
        printf ("\n");
        for (i = 0; i <= (rear - front); i++)
        {
        	printf ("\n a[%d] = %d", i, *p++);
		}
    }
}
