

#include "huaweicloud/identitycenter/v1/model/AccountAssignmentOperationStatusDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AccountAssignmentOperationStatusDto::AccountAssignmentOperationStatusDto()
{
    createdDate_ = 0L;
    createdDateIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    principalId_ = "";
    principalIdIsSet_ = false;
    principalType_ = "";
    principalTypeIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
}

AccountAssignmentOperationStatusDto::~AccountAssignmentOperationStatusDto() = default;

void AccountAssignmentOperationStatusDto::validate()
{
}

web::json::value AccountAssignmentOperationStatusDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(failureReasonIsSet_) {
        val[utility::conversions::to_string_t("failure_reason")] = ModelBase::toJson(failureReason_);
    }
    if(permissionSetIdIsSet_) {
        val[utility::conversions::to_string_t("permission_set_id")] = ModelBase::toJson(permissionSetId_);
    }
    if(principalIdIsSet_) {
        val[utility::conversions::to_string_t("principal_id")] = ModelBase::toJson(principalId_);
    }
    if(principalTypeIsSet_) {
        val[utility::conversions::to_string_t("principal_type")] = ModelBase::toJson(principalType_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }

    return val;
}
bool AccountAssignmentOperationStatusDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissionSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("principal_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("principal_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrincipalType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    return ok;
}


int64_t AccountAssignmentOperationStatusDto::getCreatedDate() const
{
    return createdDate_;
}

void AccountAssignmentOperationStatusDto::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool AccountAssignmentOperationStatusDto::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void AccountAssignmentOperationStatusDto::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string AccountAssignmentOperationStatusDto::getFailureReason() const
{
    return failureReason_;
}

void AccountAssignmentOperationStatusDto::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool AccountAssignmentOperationStatusDto::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void AccountAssignmentOperationStatusDto::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

std::string AccountAssignmentOperationStatusDto::getPermissionSetId() const
{
    return permissionSetId_;
}

void AccountAssignmentOperationStatusDto::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool AccountAssignmentOperationStatusDto::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void AccountAssignmentOperationStatusDto::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

std::string AccountAssignmentOperationStatusDto::getPrincipalId() const
{
    return principalId_;
}

void AccountAssignmentOperationStatusDto::setPrincipalId(const std::string& value)
{
    principalId_ = value;
    principalIdIsSet_ = true;
}

bool AccountAssignmentOperationStatusDto::principalIdIsSet() const
{
    return principalIdIsSet_;
}

void AccountAssignmentOperationStatusDto::unsetprincipalId()
{
    principalIdIsSet_ = false;
}

std::string AccountAssignmentOperationStatusDto::getPrincipalType() const
{
    return principalType_;
}

void AccountAssignmentOperationStatusDto::setPrincipalType(const std::string& value)
{
    principalType_ = value;
    principalTypeIsSet_ = true;
}

bool AccountAssignmentOperationStatusDto::principalTypeIsSet() const
{
    return principalTypeIsSet_;
}

void AccountAssignmentOperationStatusDto::unsetprincipalType()
{
    principalTypeIsSet_ = false;
}

std::string AccountAssignmentOperationStatusDto::getRequestId() const
{
    return requestId_;
}

void AccountAssignmentOperationStatusDto::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AccountAssignmentOperationStatusDto::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AccountAssignmentOperationStatusDto::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string AccountAssignmentOperationStatusDto::getStatus() const
{
    return status_;
}

void AccountAssignmentOperationStatusDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AccountAssignmentOperationStatusDto::statusIsSet() const
{
    return statusIsSet_;
}

void AccountAssignmentOperationStatusDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AccountAssignmentOperationStatusDto::getTargetId() const
{
    return targetId_;
}

void AccountAssignmentOperationStatusDto::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool AccountAssignmentOperationStatusDto::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void AccountAssignmentOperationStatusDto::unsettargetId()
{
    targetIdIsSet_ = false;
}

std::string AccountAssignmentOperationStatusDto::getTargetType() const
{
    return targetType_;
}

void AccountAssignmentOperationStatusDto::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool AccountAssignmentOperationStatusDto::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void AccountAssignmentOperationStatusDto::unsettargetType()
{
    targetTypeIsSet_ = false;
}

}
}
}
}
}


