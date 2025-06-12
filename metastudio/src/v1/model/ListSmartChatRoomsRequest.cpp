

#include "huaweicloud/metastudio/v1/model/ListSmartChatRoomsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartChatRoomsRequest::ListSmartChatRoomsRequest()
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
    roomName_ = "";
    roomNameIsSet_ = false;
    modelName_ = "";
    modelNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListSmartChatRoomsRequest::~ListSmartChatRoomsRequest() = default;

void ListSmartChatRoomsRequest::validate()
{
}

web::json::value ListSmartChatRoomsRequest::toJson() const
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
    if(roomNameIsSet_) {
        val[utility::conversions::to_string_t("room_name")] = ModelBase::toJson(roomName_);
    }
    if(modelNameIsSet_) {
        val[utility::conversions::to_string_t("model_name")] = ModelBase::toJson(modelName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListSmartChatRoomsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("room_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListSmartChatRoomsRequest::getAuthorization() const
{
    return authorization_;
}

void ListSmartChatRoomsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListSmartChatRoomsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListSmartChatRoomsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListSmartChatRoomsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListSmartChatRoomsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListSmartChatRoomsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListSmartChatRoomsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListSmartChatRoomsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListSmartChatRoomsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListSmartChatRoomsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListSmartChatRoomsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListSmartChatRoomsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListSmartChatRoomsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListSmartChatRoomsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListSmartChatRoomsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListSmartChatRoomsRequest::getOffset() const
{
    return offset_;
}

void ListSmartChatRoomsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSmartChatRoomsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSmartChatRoomsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSmartChatRoomsRequest::getLimit() const
{
    return limit_;
}

void ListSmartChatRoomsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSmartChatRoomsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSmartChatRoomsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSmartChatRoomsRequest::getRoomName() const
{
    return roomName_;
}

void ListSmartChatRoomsRequest::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool ListSmartChatRoomsRequest::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void ListSmartChatRoomsRequest::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string ListSmartChatRoomsRequest::getModelName() const
{
    return modelName_;
}

void ListSmartChatRoomsRequest::setModelName(const std::string& value)
{
    modelName_ = value;
    modelNameIsSet_ = true;
}

bool ListSmartChatRoomsRequest::modelNameIsSet() const
{
    return modelNameIsSet_;
}

void ListSmartChatRoomsRequest::unsetmodelName()
{
    modelNameIsSet_ = false;
}

std::string ListSmartChatRoomsRequest::getStartTime() const
{
    return startTime_;
}

void ListSmartChatRoomsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSmartChatRoomsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSmartChatRoomsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListSmartChatRoomsRequest::getEndTime() const
{
    return endTime_;
}

void ListSmartChatRoomsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSmartChatRoomsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSmartChatRoomsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


