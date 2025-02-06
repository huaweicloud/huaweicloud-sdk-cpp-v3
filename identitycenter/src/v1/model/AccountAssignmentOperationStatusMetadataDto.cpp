

#include "huaweicloud/identitycenter/v1/model/AccountAssignmentOperationStatusMetadataDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




AccountAssignmentOperationStatusMetadataDto::AccountAssignmentOperationStatusMetadataDto()
{
    createdDate_ = 0L;
    createdDateIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AccountAssignmentOperationStatusMetadataDto::~AccountAssignmentOperationStatusMetadataDto() = default;

void AccountAssignmentOperationStatusMetadataDto::validate()
{
}

web::json::value AccountAssignmentOperationStatusMetadataDto::toJson() const
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
bool AccountAssignmentOperationStatusMetadataDto::fromJson(const web::json::value& val)
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


int64_t AccountAssignmentOperationStatusMetadataDto::getCreatedDate() const
{
    return createdDate_;
}

void AccountAssignmentOperationStatusMetadataDto::setCreatedDate(int64_t value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool AccountAssignmentOperationStatusMetadataDto::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void AccountAssignmentOperationStatusMetadataDto::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string AccountAssignmentOperationStatusMetadataDto::getRequestId() const
{
    return requestId_;
}

void AccountAssignmentOperationStatusMetadataDto::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool AccountAssignmentOperationStatusMetadataDto::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void AccountAssignmentOperationStatusMetadataDto::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string AccountAssignmentOperationStatusMetadataDto::getStatus() const
{
    return status_;
}

void AccountAssignmentOperationStatusMetadataDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AccountAssignmentOperationStatusMetadataDto::statusIsSet() const
{
    return statusIsSet_;
}

void AccountAssignmentOperationStatusMetadataDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


