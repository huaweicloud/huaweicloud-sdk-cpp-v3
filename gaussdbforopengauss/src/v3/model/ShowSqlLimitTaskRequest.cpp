

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSqlLimitTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSqlLimitTaskRequest::ShowSqlLimitTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowSqlLimitTaskRequest::~ShowSqlLimitTaskRequest() = default;

void ShowSqlLimitTaskRequest::validate()
{
}

web::json::value ShowSqlLimitTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowSqlLimitTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowSqlLimitTaskRequest::getTaskId() const
{
    return taskId_;
}

void ShowSqlLimitTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowSqlLimitTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowSqlLimitTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowSqlLimitTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSqlLimitTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSqlLimitTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSqlLimitTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowSqlLimitTaskRequest::getNodeId() const
{
    return nodeId_;
}

void ShowSqlLimitTaskRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowSqlLimitTaskRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowSqlLimitTaskRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowSqlLimitTaskRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSqlLimitTaskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSqlLimitTaskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSqlLimitTaskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


