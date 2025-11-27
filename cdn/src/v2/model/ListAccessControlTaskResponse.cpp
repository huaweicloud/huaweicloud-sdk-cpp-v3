

#include "huaweicloud/cdn/v2/model/ListAccessControlTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListAccessControlTaskResponse::ListAccessControlTaskResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    accessControlTasksIsSet_ = false;
}

ListAccessControlTaskResponse::~ListAccessControlTaskResponse() = default;

void ListAccessControlTaskResponse::validate()
{
}

web::json::value ListAccessControlTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(accessControlTasksIsSet_) {
        val[utility::conversions::to_string_t("access_control_tasks")] = ModelBase::toJson(accessControlTasks_);
    }

    return val;
}
bool ListAccessControlTaskResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("access_control_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_control_tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<AccessControlTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessControlTasks(refVal);
        }
    }
    return ok;
}


int32_t ListAccessControlTaskResponse::getTotal() const
{
    return total_;
}

void ListAccessControlTaskResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAccessControlTaskResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAccessControlTaskResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<AccessControlTask>& ListAccessControlTaskResponse::getAccessControlTasks()
{
    return accessControlTasks_;
}

void ListAccessControlTaskResponse::setAccessControlTasks(const std::vector<AccessControlTask>& value)
{
    accessControlTasks_ = value;
    accessControlTasksIsSet_ = true;
}

bool ListAccessControlTaskResponse::accessControlTasksIsSet() const
{
    return accessControlTasksIsSet_;
}

void ListAccessControlTaskResponse::unsetaccessControlTasks()
{
    accessControlTasksIsSet_ = false;
}

}
}
}
}
}


