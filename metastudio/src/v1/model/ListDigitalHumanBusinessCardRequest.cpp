

#include "huaweicloud/metastudio/v1/model/ListDigitalHumanBusinessCardRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListDigitalHumanBusinessCardRequest::ListDigitalHumanBusinessCardRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
    createSince_ = "";
    createSinceIsSet_ = false;
    videoAssetName_ = "";
    videoAssetNameIsSet_ = false;
}

ListDigitalHumanBusinessCardRequest::~ListDigitalHumanBusinessCardRequest() = default;

void ListDigitalHumanBusinessCardRequest::validate()
{
}

web::json::value ListDigitalHumanBusinessCardRequest::toJson() const
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
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(createUntilIsSet_) {
        val[utility::conversions::to_string_t("create_until")] = ModelBase::toJson(createUntil_);
    }
    if(createSinceIsSet_) {
        val[utility::conversions::to_string_t("create_since")] = ModelBase::toJson(createSince_);
    }
    if(videoAssetNameIsSet_) {
        val[utility::conversions::to_string_t("video_asset_name")] = ModelBase::toJson(videoAssetName_);
    }

    return val;
}
bool ListDigitalHumanBusinessCardRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoAssetName(refVal);
        }
    }
    return ok;
}


std::string ListDigitalHumanBusinessCardRequest::getAuthorization() const
{
    return authorization_;
}

void ListDigitalHumanBusinessCardRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListDigitalHumanBusinessCardRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListDigitalHumanBusinessCardRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListDigitalHumanBusinessCardRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListDigitalHumanBusinessCardRequest::getOffset() const
{
    return offset_;
}

void ListDigitalHumanBusinessCardRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDigitalHumanBusinessCardRequest::getLimit() const
{
    return limit_;
}

void ListDigitalHumanBusinessCardRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardRequest::getState() const
{
    return state_;
}

void ListDigitalHumanBusinessCardRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardRequest::getSortKey() const
{
    return sortKey_;
}

void ListDigitalHumanBusinessCardRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardRequest::getSortDir() const
{
    return sortDir_;
}

void ListDigitalHumanBusinessCardRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListDigitalHumanBusinessCardRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardRequest::getCreateSince() const
{
    return createSince_;
}

void ListDigitalHumanBusinessCardRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::string ListDigitalHumanBusinessCardRequest::getVideoAssetName() const
{
    return videoAssetName_;
}

void ListDigitalHumanBusinessCardRequest::setVideoAssetName(const std::string& value)
{
    videoAssetName_ = value;
    videoAssetNameIsSet_ = true;
}

bool ListDigitalHumanBusinessCardRequest::videoAssetNameIsSet() const
{
    return videoAssetNameIsSet_;
}

void ListDigitalHumanBusinessCardRequest::unsetvideoAssetName()
{
    videoAssetNameIsSet_ = false;
}

}
}
}
}
}


