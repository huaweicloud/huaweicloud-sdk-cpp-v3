

#include "huaweicloud/identitycenter/v1/model/PermissionSetProvisioningStatusMetadataDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




PermissionSetProvisioningStatusMetadataDto::PermissionSetProvisioningStatusMetadataDto()
{
    createdDate_ = 0L;
    createdDateIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

PermissionSetProvisioningStatusMetadataDto::~PermissionSetProvisioningStatusMetadataDto() = default;

void PermissionSetProvisioningStatusMetadataDto::validate()
{
}

web::json::value PermissionSetProvisioningStatusMetadataDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool PermissionSetProvisioningStatusMetadataDto::fromJson(const web::json::value& val)
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


int64_t PermissionSetProvisioningStatusMetadataDto::getCreatedDate() const
{
    return createdDate_;
}

void PermissionSetProvisioningStatusMetadataDto::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool PermissionSetProvisioningStatusMetadataDto::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void PermissionSetProvisioningStatusMetadataDto::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string PermissionSetProvisioningStatusMetadataDto::getRequestId() const
{
    return requestId_;
}

void PermissionSetProvisioningStatusMetadataDto::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool PermissionSetProvisioningStatusMetadataDto::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void PermissionSetProvisioningStatusMetadataDto::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string PermissionSetProvisioningStatusMetadataDto::getStatus() const
{
    return status_;
}

void PermissionSetProvisioningStatusMetadataDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PermissionSetProvisioningStatusMetadataDto::statusIsSet() const
{
    return statusIsSet_;
}

void PermissionSetProvisioningStatusMetadataDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


