

#include "huaweicloud/metastudio/v1/model/ListTransferAssetJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTransferAssetJobsRequest::ListTransferAssetJobsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    role_ = "";
    roleIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    transferType_ = "";
    transferTypeIsSet_ = false;
}

ListTransferAssetJobsRequest::~ListTransferAssetJobsRequest() = default;

void ListTransferAssetJobsRequest::validate()
{
}

web::json::value ListTransferAssetJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(transferTypeIsSet_) {
        val[utility::conversions::to_string_t("transfer_type")] = ModelBase::toJson(transferType_);
    }

    return val;
}
bool ListTransferAssetJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transfer_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferType(refVal);
        }
    }
    return ok;
}


std::string ListTransferAssetJobsRequest::getAuthorization() const
{
    return authorization_;
}

void ListTransferAssetJobsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListTransferAssetJobsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListTransferAssetJobsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListTransferAssetJobsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTransferAssetJobsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTransferAssetJobsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTransferAssetJobsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

int32_t ListTransferAssetJobsRequest::getOffset() const
{
    return offset_;
}

void ListTransferAssetJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTransferAssetJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTransferAssetJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTransferAssetJobsRequest::getLimit() const
{
    return limit_;
}

void ListTransferAssetJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTransferAssetJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTransferAssetJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTransferAssetJobsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListTransferAssetJobsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListTransferAssetJobsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListTransferAssetJobsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ListTransferAssetJobsRequest::getRole() const
{
    return role_;
}

void ListTransferAssetJobsRequest::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool ListTransferAssetJobsRequest::roleIsSet() const
{
    return roleIsSet_;
}

void ListTransferAssetJobsRequest::unsetrole()
{
    roleIsSet_ = false;
}

std::string ListTransferAssetJobsRequest::getState() const
{
    return state_;
}

void ListTransferAssetJobsRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListTransferAssetJobsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListTransferAssetJobsRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListTransferAssetJobsRequest::getTransferType() const
{
    return transferType_;
}

void ListTransferAssetJobsRequest::setTransferType(const std::string& value)
{
    transferType_ = value;
    transferTypeIsSet_ = true;
}

bool ListTransferAssetJobsRequest::transferTypeIsSet() const
{
    return transferTypeIsSet_;
}

void ListTransferAssetJobsRequest::unsettransferType()
{
    transferTypeIsSet_ = false;
}

}
}
}
}
}


