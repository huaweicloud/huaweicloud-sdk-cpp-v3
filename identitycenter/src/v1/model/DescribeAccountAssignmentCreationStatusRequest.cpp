

#include "huaweicloud/identitycenter/v1/model/DescribeAccountAssignmentCreationStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeAccountAssignmentCreationStatusRequest::DescribeAccountAssignmentCreationStatusRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

DescribeAccountAssignmentCreationStatusRequest::~DescribeAccountAssignmentCreationStatusRequest() = default;

void DescribeAccountAssignmentCreationStatusRequest::validate()
{
}

web::json::value DescribeAccountAssignmentCreationStatusRequest::toJson() const
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
bool DescribeAccountAssignmentCreationStatusRequest::fromJson(const web::json::value& val)
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


std::string DescribeAccountAssignmentCreationStatusRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribeAccountAssignmentCreationStatusRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribeAccountAssignmentCreationStatusRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribeAccountAssignmentCreationStatusRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DescribeAccountAssignmentCreationStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void DescribeAccountAssignmentCreationStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DescribeAccountAssignmentCreationStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DescribeAccountAssignmentCreationStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DescribeAccountAssignmentCreationStatusRequest::getRequestId() const
{
    return requestId_;
}

void DescribeAccountAssignmentCreationStatusRequest::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DescribeAccountAssignmentCreationStatusRequest::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DescribeAccountAssignmentCreationStatusRequest::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


