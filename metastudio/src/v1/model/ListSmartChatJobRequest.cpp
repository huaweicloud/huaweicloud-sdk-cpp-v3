

#include "huaweicloud/metastudio/v1/model/ListSmartChatJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartChatJobRequest::ListSmartChatJobRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSmartChatJobRequest::~ListSmartChatJobRequest() = default;

void ListSmartChatJobRequest::validate()
{
}

web::json::value ListSmartChatJobRequest::toJson() const
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
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSmartChatJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
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
    return ok;
}


std::string ListSmartChatJobRequest::getAuthorization() const
{
    return authorization_;
}

void ListSmartChatJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListSmartChatJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListSmartChatJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListSmartChatJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListSmartChatJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListSmartChatJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListSmartChatJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListSmartChatJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListSmartChatJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListSmartChatJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListSmartChatJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListSmartChatJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListSmartChatJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListSmartChatJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListSmartChatJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ListSmartChatJobRequest::getRoomId() const
{
    return roomId_;
}

void ListSmartChatJobRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ListSmartChatJobRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ListSmartChatJobRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ListSmartChatJobRequest::getState() const
{
    return state_;
}

void ListSmartChatJobRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListSmartChatJobRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListSmartChatJobRequest::unsetstate()
{
    stateIsSet_ = false;
}

int32_t ListSmartChatJobRequest::getOffset() const
{
    return offset_;
}

void ListSmartChatJobRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSmartChatJobRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSmartChatJobRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSmartChatJobRequest::getLimit() const
{
    return limit_;
}

void ListSmartChatJobRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSmartChatJobRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSmartChatJobRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


