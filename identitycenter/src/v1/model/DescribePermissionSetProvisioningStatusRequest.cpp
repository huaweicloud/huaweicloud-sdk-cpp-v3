

#include "huaweicloud/identitycenter/v1/model/DescribePermissionSetProvisioningStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribePermissionSetProvisioningStatusRequest::DescribePermissionSetProvisioningStatusRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

DescribePermissionSetProvisioningStatusRequest::~DescribePermissionSetProvisioningStatusRequest() = default;

void DescribePermissionSetProvisioningStatusRequest::validate()
{
}

web::json::value DescribePermissionSetProvisioningStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool DescribePermissionSetProvisioningStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string DescribePermissionSetProvisioningStatusRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribePermissionSetProvisioningStatusRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribePermissionSetProvisioningStatusRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribePermissionSetProvisioningStatusRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DescribePermissionSetProvisioningStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void DescribePermissionSetProvisioningStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DescribePermissionSetProvisioningStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DescribePermissionSetProvisioningStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DescribePermissionSetProvisioningStatusRequest::getRequestId() const
{
    return requestId_;
}

void DescribePermissionSetProvisioningStatusRequest::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DescribePermissionSetProvisioningStatusRequest::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DescribePermissionSetProvisioningStatusRequest::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


