

#include "huaweicloud/gaussdb/v3/model/ShowLockWaitSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowLockWaitSessionRequest::ShowLockWaitSessionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    pid_ = 0L;
    pidIsSet_ = false;
}

ShowLockWaitSessionRequest::~ShowLockWaitSessionRequest() = default;

void ShowLockWaitSessionRequest::validate()
{
}

web::json::value ShowLockWaitSessionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }

    return val;
}
bool ShowLockWaitSessionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pid"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPid(refVal);
        }
    }
    return ok;
}


std::string ShowLockWaitSessionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowLockWaitSessionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowLockWaitSessionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowLockWaitSessionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowLockWaitSessionRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowLockWaitSessionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowLockWaitSessionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowLockWaitSessionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowLockWaitSessionRequest::getNodeId() const
{
    return nodeId_;
}

void ShowLockWaitSessionRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowLockWaitSessionRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowLockWaitSessionRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int64_t ShowLockWaitSessionRequest::getPid() const
{
    return pid_;
}

void ShowLockWaitSessionRequest::setPid(int64_t value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool ShowLockWaitSessionRequest::pidIsSet() const
{
    return pidIsSet_;
}

void ShowLockWaitSessionRequest::unsetpid()
{
    pidIsSet_ = false;
}

}
}
}
}
}


