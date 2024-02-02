#include <task.h>

Task::Task(bool (*task)(Packet, int)) :
    m_task(task)
{
}

bool Task::execute(Packet packet, int index)
{
    return m_task(packet, index);
}