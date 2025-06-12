

#include "huaweicloud/metastudio/v1/model/ListSmartLiveJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveJobsRequest::ListSmartLiveJobsRequest()
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
    createSince_ = "";
    createSinceIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
    roomName_ = "";
    roomNameIsSet_ = false;
}

ListSmartLiveJobsRequest::~ListSmartLiveJobsRequest() = default;

void ListSmartLiveJobsRequest::validate()
{
}

web::json::value ListSmartLiveJobsRequest::toJson() const
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
    if(createSinceIsSet_) {
        val[utility::conversions::to_string_t("create_since")] = ModelBase::toJson(createSince_);
    }
    if(createUntilIsSet_) {
        val[utility::conversions::to_string_t("create_until")] = ModelBase::toJson(createUntil_);
    }
    if(roomNameIsSet_) {
        val[utility::conversions::to_string_t("room_name")] = ModelBase::toJson(roomName_);
    }

    return val;
}
bool ListSmartLiveJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("room_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomName(refVal);
        }
    }
    return ok;
}


std::string ListSmartLiveJobsRequest::getAuthorization() const
{
    return authorization_;
}

void ListSmartLiveJobsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListSmartLiveJobsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListSmartLiveJobsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListSmartLiveJobsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListSmartLiveJobsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListSmartLiveJobsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListSmartLiveJobsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListSmartLiveJobsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListSmartLiveJobsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListSmartLiveJobsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListSmartLiveJobsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListSmartLiveJobsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListSmartLiveJobsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListSmartLiveJobsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListSmartLiveJobsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListSmartLiveJobsRequest::getOffset() const
{
    return offset_;
}

void ListSmartLiveJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSmartLiveJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSmartLiveJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSmartLiveJobsRequest::getLimit() const
{
    return limit_;
}

void ListSmartLiveJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSmartLiveJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSmartLiveJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSmartLiveJobsRequest::getState() const
{
    return state_;
}

void ListSmartLiveJobsRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListSmartLiveJobsRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListSmartLiveJobsRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListSmartLiveJobsRequest::getSortKey() const
{
    return sortKey_;
}

void ListSmartLiveJobsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListSmartLiveJobsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListSmartLiveJobsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListSmartLiveJobsRequest::getSortDir() const
{
    return sortDir_;
}

void ListSmartLiveJobsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListSmartLiveJobsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListSmartLiveJobsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListSmartLiveJobsRequest::getCreateSince() const
{
    return createSince_;
}

void ListSmartLiveJobsRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListSmartLiveJobsRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListSmartLiveJobsRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::string ListSmartLiveJobsRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListSmartLiveJobsRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListSmartLiveJobsRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListSmartLiveJobsRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ListSmartLiveJobsRequest::getRoomName() const
{
    return roomName_;
}

void ListSmartLiveJobsRequest::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool ListSmartLiveJobsRequest::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void ListSmartLiveJobsRequest::unsetroomName()
{
    roomNameIsSet_ = false;
}

}
}
}
}
}


