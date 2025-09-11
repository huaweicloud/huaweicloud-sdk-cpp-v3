

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSlowSqlStackRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSlowSqlStackRequest::ShowSlowSqlStackRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    pid_ = "";
    pidIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    compId_ = "";
    compIdIsSet_ = false;
}

ShowSlowSqlStackRequest::~ShowSlowSqlStackRequest() = default;

void ShowSlowSqlStackRequest::validate()
{
}

web::json::value ShowSlowSqlStackRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(compIdIsSet_) {
        val[utility::conversions::to_string_t("comp_id")] = ModelBase::toJson(compId_);
    }

    return val;
}
bool ShowSlowSqlStackRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("comp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompId(refVal);
        }
    }
    return ok;
}


std::string ShowSlowSqlStackRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSlowSqlStackRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSlowSqlStackRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSlowSqlStackRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSlowSqlStackRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSlowSqlStackRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSlowSqlStackRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSlowSqlStackRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowSlowSqlStackRequest::getPid() const
{
    return pid_;
}

void ShowSlowSqlStackRequest::setPid(const std::string& value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool ShowSlowSqlStackRequest::pidIsSet() const
{
    return pidIsSet_;
}

void ShowSlowSqlStackRequest::unsetpid()
{
    pidIsSet_ = false;
}

std::string ShowSlowSqlStackRequest::getNodeId() const
{
    return nodeId_;
}

void ShowSlowSqlStackRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowSlowSqlStackRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowSlowSqlStackRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowSlowSqlStackRequest::getCompId() const
{
    return compId_;
}

void ShowSlowSqlStackRequest::setCompId(const std::string& value)
{
    compId_ = value;
    compIdIsSet_ = true;
}

bool ShowSlowSqlStackRequest::compIdIsSet() const
{
    return compIdIsSet_;
}

void ShowSlowSqlStackRequest::unsetcompId()
{
    compIdIsSet_ = false;
}

}
}
}
}
}


