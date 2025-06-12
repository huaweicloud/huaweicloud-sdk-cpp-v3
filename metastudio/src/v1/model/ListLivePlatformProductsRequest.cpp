

#include "huaweicloud/metastudio/v1/model/ListLivePlatformProductsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListLivePlatformProductsRequest::ListLivePlatformProductsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    platformId_ = "";
    platformIdIsSet_ = false;
    liveId_ = "";
    liveIdIsSet_ = false;
}

ListLivePlatformProductsRequest::~ListLivePlatformProductsRequest() = default;

void ListLivePlatformProductsRequest::validate()
{
}

web::json::value ListLivePlatformProductsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(platformIdIsSet_) {
        val[utility::conversions::to_string_t("platform_id")] = ModelBase::toJson(platformId_);
    }
    if(liveIdIsSet_) {
        val[utility::conversions::to_string_t("live_id")] = ModelBase::toJson(liveId_);
    }

    return val;
}
bool ListLivePlatformProductsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("platform_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveId(refVal);
        }
    }
    return ok;
}


std::string ListLivePlatformProductsRequest::getAuthorization() const
{
    return authorization_;
}

void ListLivePlatformProductsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListLivePlatformProductsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListLivePlatformProductsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListLivePlatformProductsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListLivePlatformProductsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListLivePlatformProductsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListLivePlatformProductsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListLivePlatformProductsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListLivePlatformProductsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListLivePlatformProductsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListLivePlatformProductsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

int32_t ListLivePlatformProductsRequest::getOffset() const
{
    return offset_;
}

void ListLivePlatformProductsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListLivePlatformProductsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListLivePlatformProductsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListLivePlatformProductsRequest::getLimit() const
{
    return limit_;
}

void ListLivePlatformProductsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLivePlatformProductsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListLivePlatformProductsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLivePlatformProductsRequest::getPlatformId() const
{
    return platformId_;
}

void ListLivePlatformProductsRequest::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool ListLivePlatformProductsRequest::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void ListLivePlatformProductsRequest::unsetplatformId()
{
    platformIdIsSet_ = false;
}

std::string ListLivePlatformProductsRequest::getLiveId() const
{
    return liveId_;
}

void ListLivePlatformProductsRequest::setLiveId(const std::string& value)
{
    liveId_ = value;
    liveIdIsSet_ = true;
}

bool ListLivePlatformProductsRequest::liveIdIsSet() const
{
    return liveIdIsSet_;
}

void ListLivePlatformProductsRequest::unsetliveId()
{
    liveIdIsSet_ = false;
}

}
}
}
}
}


