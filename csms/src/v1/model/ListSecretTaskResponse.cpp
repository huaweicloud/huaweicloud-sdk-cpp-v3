

#include "huaweicloud/csms/v1/model/ListSecretTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListSecretTaskResponse::ListSecretTaskResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    tasksIsSet_ = false;
    nextMarker_ = "";
    nextMarkerIsSet_ = false;
}

ListSecretTaskResponse::~ListSecretTaskResponse() = default;

void ListSecretTaskResponse::validate()
{
}

web::json::value ListSecretTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }
    if(nextMarkerIsSet_) {
        val[utility::conversions::to_string_t("next_marker")] = ModelBase::toJson(nextMarker_);
    }

    return val;
}
bool ListSecretTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<SecretTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextMarker(refVal);
        }
    }
    return ok;
}


int32_t ListSecretTaskResponse::getTotal() const
{
    return total_;
}

void ListSecretTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSecretTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSecretTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SecretTask>& ListSecretTaskResponse::getTasks()
{
    return tasks_;
}

void ListSecretTaskResponse::setTasks(const std::vector<SecretTask>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListSecretTaskResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListSecretTaskResponse::unsettasks()
{
    tasksIsSet_ = false;
}

std::string ListSecretTaskResponse::getNextMarker() const
{
    return nextMarker_;
}

void ListSecretTaskResponse::setNextMarker(const std::string& value)
{
    nextMarker_ = value;
    nextMarkerIsSet_ = true;
}

bool ListSecretTaskResponse::nextMarkerIsSet() const
{
    return nextMarkerIsSet_;
}

void ListSecretTaskResponse::unsetnextMarker()
{
    nextMarkerIsSet_ = false;
}

}
}
}
}
}


