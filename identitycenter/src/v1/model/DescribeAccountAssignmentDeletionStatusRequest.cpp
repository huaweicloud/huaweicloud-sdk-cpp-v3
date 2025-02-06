

#include "huaweicloud/identitycenter/v1/model/DescribeAccountAssignmentDeletionStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




DescribeAccountAssignmentDeletionStatusRequest::DescribeAccountAssignmentDeletionStatusRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

DescribeAccountAssignmentDeletionStatusRequest::~DescribeAccountAssignmentDeletionStatusRequest() = default;

void DescribeAccountAssignmentDeletionStatusRequest::validate()
{
}

web::json::value DescribeAccountAssignmentDeletionStatusRequest::toJson() const
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
bool DescribeAccountAssignmentDeletionStatusRequest::fromJson(const web::json::value& val)
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


std::string DescribeAccountAssignmentDeletionStatusRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribeAccountAssignmentDeletionStatusRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribeAccountAssignmentDeletionStatusRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribeAccountAssignmentDeletionStatusRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DescribeAccountAssignmentDeletionStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void DescribeAccountAssignmentDeletionStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DescribeAccountAssignmentDeletionStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DescribeAccountAssignmentDeletionStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DescribeAccountAssignmentDeletionStatusRequest::getRequestId() const
{
    return requestId_;
}

void DescribeAccountAssignmentDeletionStatusRequest::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DescribeAccountAssignmentDeletionStatusRequest::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DescribeAccountAssignmentDeletionStatusRequest::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


