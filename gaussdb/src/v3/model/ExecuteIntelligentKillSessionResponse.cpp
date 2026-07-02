

#include "huaweicloud/gaussdb/v3/model/ExecuteIntelligentKillSessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ExecuteIntelligentKillSessionResponse::ExecuteIntelligentKillSessionResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
}

ExecuteIntelligentKillSessionResponse::~ExecuteIntelligentKillSessionResponse() = default;

void ExecuteIntelligentKillSessionResponse::validate()
{
}

web::json::value ExecuteIntelligentKillSessionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ExecuteIntelligentKillSessionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string ExecuteIntelligentKillSessionResponse::getTaskId() const
{
    return taskId_;
}

void ExecuteIntelligentKillSessionResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ExecuteIntelligentKillSessionResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ExecuteIntelligentKillSessionResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


