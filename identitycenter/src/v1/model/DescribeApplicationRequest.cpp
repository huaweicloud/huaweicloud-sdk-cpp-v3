

#include "huaweicloud/identitycenter/v1/model/DescribeApplicationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeApplicationRequest::DescribeApplicationRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    applicationInstanceId_ = "";
    applicationInstanceIdIsSet_ = false;
}

DescribeApplicationRequest::~DescribeApplicationRequest() = default;

void DescribeApplicationRequest::validate()
{
}

web::json::value DescribeApplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(applicationInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("application_instance_id")] = ModelBase::toJson(applicationInstanceId_);
    }

    return val;
}
bool DescribeApplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("application_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationInstanceId(refVal);
        }
    }
    return ok;
}


std::string DescribeApplicationRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribeApplicationRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribeApplicationRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribeApplicationRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DescribeApplicationRequest::getInstanceId() const
{
    return instanceId_;
}

void DescribeApplicationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DescribeApplicationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DescribeApplicationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DescribeApplicationRequest::getApplicationInstanceId() const
{
    return applicationInstanceId_;
}

void DescribeApplicationRequest::setApplicationInstanceId(const std::string& value)
{
    applicationInstanceId_ = value;
    applicationInstanceIdIsSet_ = true;
}

bool DescribeApplicationRequest::applicationInstanceIdIsSet() const
{
    return applicationInstanceIdIsSet_;
}

void DescribeApplicationRequest::unsetapplicationInstanceId()
{
    applicationInstanceIdIsSet_ = false;
}

}
}
}
}
}


