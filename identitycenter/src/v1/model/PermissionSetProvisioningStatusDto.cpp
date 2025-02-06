

#include "huaweicloud/identitycenter/v1/model/PermissionSetProvisioningStatusDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PermissionSetProvisioningStatusDto::PermissionSetProvisioningStatusDto()
{
    accountId_ = "";
    accountIdIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    failureReason_ = "";
    failureReasonIsSet_ = false;
    permissionSetId_ = "";
    permissionSetIdIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

PermissionSetProvisioningStatusDto::~PermissionSetProvisioningStatusDto() = default;

void PermissionSetProvisioningStatusDto::validate()
{
}

web::json::value PermissionSetProvisioningStatusDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accountIdIsSet_) {
        val[utility::conversions::to_string_t("account_id")] = ModelBase::toJson(accountId_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(failureReasonIsSet_) {
        val[utility::conversions::to_string_t("failure_reason")] = ModelBase::toJson(failureReason_);
    }
    if(permissionSetIdIsSet_) {
        val[utility::conversions::to_string_t("permission_set_id")] = ModelBase::toJson(permissionSetId_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool PermissionSetProvisioningStatusDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    return ok;
}


std::string PermissionSetProvisioningStatusDto::getAccountId() const
{
    return accountId_;
}

void PermissionSetProvisioningStatusDto::setAccountId(const std::string& value)
{
    accountId_ = value;
    accountIdIsSet_ = true;
}

bool PermissionSetProvisioningStatusDto::accountIdIsSet() const
{
    return accountIdIsSet_;
}

void PermissionSetProvisioningStatusDto::unsetaccountId()
{
    accountIdIsSet_ = false;
}

std::string PermissionSetProvisioningStatusDto::getCreatedDate() const
{
    return createdDate_;
}

void PermissionSetProvisioningStatusDto::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool PermissionSetProvisioningStatusDto::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void PermissionSetProvisioningStatusDto::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string PermissionSetProvisioningStatusDto::getFailureReason() const
{
    return failureReason_;
}

void PermissionSetProvisioningStatusDto::setFailureReason(const std::string& value)
{
    failureReason_ = value;
    failureReasonIsSet_ = true;
}

bool PermissionSetProvisioningStatusDto::failureReasonIsSet() const
{
    return failureReasonIsSet_;
}

void PermissionSetProvisioningStatusDto::unsetfailureReason()
{
    failureReasonIsSet_ = false;
}

std::string PermissionSetProvisioningStatusDto::getPermissionSetId() const
{
    return permissionSetId_;
}

void PermissionSetProvisioningStatusDto::setPermissionSetId(const std::string& value)
{
    permissionSetId_ = value;
    permissionSetIdIsSet_ = true;
}

bool PermissionSetProvisioningStatusDto::permissionSetIdIsSet() const
{
    return permissionSetIdIsSet_;
}

void PermissionSetProvisioningStatusDto::unsetpermissionSetId()
{
    permissionSetIdIsSet_ = false;
}

std::string PermissionSetProvisioningStatusDto::getRequestId() const
{
    return requestId_;
}

void PermissionSetProvisioningStatusDto::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool PermissionSetProvisioningStatusDto::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void PermissionSetProvisioningStatusDto::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string PermissionSetProvisioningStatusDto::getStatus() const
{
    return status_;
}

void PermissionSetProvisioningStatusDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PermissionSetProvisioningStatusDto::statusIsSet() const
{
    return statusIsSet_;
}

void PermissionSetProvisioningStatusDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


