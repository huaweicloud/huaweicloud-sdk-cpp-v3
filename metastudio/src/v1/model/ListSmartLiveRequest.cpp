

#include "huaweicloud/metastudio/v1/model/ListSmartLiveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveRequest::ListSmartLiveRequest()
{
    roomId_ = "";
    roomIdIsSet_ = false;
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
    createSince_ = "";
    createSinceIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
}

ListSmartLiveRequest::~ListSmartLiveRequest() = default;

void ListSmartLiveRequest::validate()
{
}

web::json::value ListSmartLiveRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
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
    if(createSinceIsSet_) {
        val[utility::conversions::to_string_t("create_since")] = ModelBase::toJson(createSince_);
    }
    if(createUntilIsSet_) {
        val[utility::conversions::to_string_t("create_until")] = ModelBase::toJson(createUntil_);
    }

    return val;
}
bool ListSmartLiveRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("create_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSince(refVal);
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
    return ok;
}


std::string ListSmartLiveRequest::getRoomId() const
{
    return roomId_;
}

void ListSmartLiveRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ListSmartLiveRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ListSmartLiveRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ListSmartLiveRequest::getAuthorization() const
{
    return authorization_;
}

void ListSmartLiveRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListSmartLiveRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListSmartLiveRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListSmartLiveRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListSmartLiveRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListSmartLiveRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListSmartLiveRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListSmartLiveRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListSmartLiveRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListSmartLiveRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListSmartLiveRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListSmartLiveRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListSmartLiveRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListSmartLiveRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListSmartLiveRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListSmartLiveRequest::getOffset() const
{
    return offset_;
}

void ListSmartLiveRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSmartLiveRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSmartLiveRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSmartLiveRequest::getLimit() const
{
    return limit_;
}

void ListSmartLiveRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSmartLiveRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSmartLiveRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSmartLiveRequest::getState() const
{
    return state_;
}

void ListSmartLiveRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListSmartLiveRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListSmartLiveRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListSmartLiveRequest::getSortKey() const
{
    return sortKey_;
}

void ListSmartLiveRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListSmartLiveRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListSmartLiveRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListSmartLiveRequest::getSortDir() const
{
    return sortDir_;
}

void ListSmartLiveRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListSmartLiveRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListSmartLiveRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListSmartLiveRequest::getCreateSince() const
{
    return createSince_;
}

void ListSmartLiveRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListSmartLiveRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListSmartLiveRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::string ListSmartLiveRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListSmartLiveRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListSmartLiveRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListSmartLiveRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

}
}
}
}
}


