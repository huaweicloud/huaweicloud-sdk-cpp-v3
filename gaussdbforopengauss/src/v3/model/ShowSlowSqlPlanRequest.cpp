

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSlowSqlPlanRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSlowSqlPlanRequest::ShowSlowSqlPlanRequest()
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

ShowSlowSqlPlanRequest::~ShowSlowSqlPlanRequest() = default;

void ShowSlowSqlPlanRequest::validate()
{
}

web::json::value ShowSlowSqlPlanRequest::toJson() const
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
bool ShowSlowSqlPlanRequest::fromJson(const web::json::value& val)
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


std::string ShowSlowSqlPlanRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSlowSqlPlanRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSlowSqlPlanRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSlowSqlPlanRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSlowSqlPlanRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSlowSqlPlanRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSlowSqlPlanRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSlowSqlPlanRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowSlowSqlPlanRequest::getPid() const
{
    return pid_;
}

void ShowSlowSqlPlanRequest::setPid(const std::string& value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool ShowSlowSqlPlanRequest::pidIsSet() const
{
    return pidIsSet_;
}

void ShowSlowSqlPlanRequest::unsetpid()
{
    pidIsSet_ = false;
}

std::string ShowSlowSqlPlanRequest::getNodeId() const
{
    return nodeId_;
}

void ShowSlowSqlPlanRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ShowSlowSqlPlanRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ShowSlowSqlPlanRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ShowSlowSqlPlanRequest::getCompId() const
{
    return compId_;
}

void ShowSlowSqlPlanRequest::setCompId(const std::string& value)
{
    compId_ = value;
    compIdIsSet_ = true;
}

bool ShowSlowSqlPlanRequest::compIdIsSet() const
{
    return compIdIsSet_;
}

void ShowSlowSqlPlanRequest::unsetcompId()
{
    compIdIsSet_ = false;
}

}
}
}
}
}


