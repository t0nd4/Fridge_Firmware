#include <tasks.h>

Tasks::Tasks() :
    m_current_index(0)
{
}

void Tasks::add(const Task& task)
{
    m_tasks[m_current_index] = task;
    m_current_index++;
}

const Task Tasks::get_task()
{
    Task task = m_tasks[m_current_index];
    m_current_index--;
    return task;
}