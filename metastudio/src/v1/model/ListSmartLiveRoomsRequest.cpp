

#include "huaweicloud/metastudio/v1/model/ListSmartLiveRoomsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListSmartLiveRoomsRequest::ListSmartLiveRoomsRequest()
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
    dhId_ = "";
    dhIdIsSet_ = false;
    modelName_ = "";
    modelNameIsSet_ = false;
    liveState_ = "";
    liveStateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    roomType_ = "";
    roomTypeIsSet_ = false;
    templateOwnType_ = "";
    templateOwnTypeIsSet_ = false;
    confirmState_ = "";
    confirmStateIsSet_ = false;
}

ListSmartLiveRoomsRequest::~ListSmartLiveRoomsRequest() = default;

void ListSmartLiveRoomsRequest::validate()
{
}

web::json::value ListSmartLiveRoomsRequest::toJson() const
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
    if(dhIdIsSet_) {
        val[utility::conversions::to_string_t("dh_id")] = ModelBase::toJson(dhId_);
    }
    if(modelNameIsSet_) {
        val[utility::conversions::to_string_t("model_name")] = ModelBase::toJson(modelName_);
    }
    if(liveStateIsSet_) {
        val[utility::conversions::to_string_t("live_state")] = ModelBase::toJson(liveState_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(roomTypeIsSet_) {
        val[utility::conversions::to_string_t("room_type")] = ModelBase::toJson(roomType_);
    }
    if(templateOwnTypeIsSet_) {
        val[utility::conversions::to_string_t("template_own_type")] = ModelBase::toJson(templateOwnType_);
    }
    if(confirmStateIsSet_) {
        val[utility::conversions::to_string_t("confirm_state")] = ModelBase::toJson(confirmState_);
    }

    return val;
}
bool ListSmartLiveRoomsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dh_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dh_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDhId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("live_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("room_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_own_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_own_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateOwnType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confirm_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confirm_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfirmState(refVal);
        }
    }
    return ok;
}


std::string ListSmartLiveRoomsRequest::getAuthorization() const
{
    return authorization_;
}

void ListSmartLiveRoomsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListSmartLiveRoomsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListSmartLiveRoomsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListSmartLiveRoomsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListSmartLiveRoomsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListSmartLiveRoomsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListSmartLiveRoomsRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListSmartLiveRoomsRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListSmartLiveRoomsRequest::getOffset() const
{
    return offset_;
}

void ListSmartLiveRoomsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSmartLiveRoomsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSmartLiveRoomsRequest::getLimit() const
{
    return limit_;
}

void ListSmartLiveRoomsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSmartLiveRoomsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getRoomName() const
{
    return roomName_;
}

void ListSmartLiveRoomsRequest::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void ListSmartLiveRoomsRequest::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getDhId() const
{
    return dhId_;
}

void ListSmartLiveRoomsRequest::setDhId(const std::string& value)
{
    dhId_ = value;
    dhIdIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::dhIdIsSet() const
{
    return dhIdIsSet_;
}

void ListSmartLiveRoomsRequest::unsetdhId()
{
    dhIdIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getModelName() const
{
    return modelName_;
}

void ListSmartLiveRoomsRequest::setModelName(const std::string& value)
{
    modelName_ = value;
    modelNameIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::modelNameIsSet() const
{
    return modelNameIsSet_;
}

void ListSmartLiveRoomsRequest::unsetmodelName()
{
    modelNameIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getLiveState() const
{
    return liveState_;
}

void ListSmartLiveRoomsRequest::setLiveState(const std::string& value)
{
    liveState_ = value;
    liveStateIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::liveStateIsSet() const
{
    return liveStateIsSet_;
}

void ListSmartLiveRoomsRequest::unsetliveState()
{
    liveStateIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getStartTime() const
{
    return startTime_;
}

void ListSmartLiveRoomsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSmartLiveRoomsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getEndTime() const
{
    return endTime_;
}

void ListSmartLiveRoomsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSmartLiveRoomsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getRoomType() const
{
    return roomType_;
}

void ListSmartLiveRoomsRequest::setRoomType(const std::string& value)
{
    roomType_ = value;
    roomTypeIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::roomTypeIsSet() const
{
    return roomTypeIsSet_;
}

void ListSmartLiveRoomsRequest::unsetroomType()
{
    roomTypeIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getTemplateOwnType() const
{
    return templateOwnType_;
}

void ListSmartLiveRoomsRequest::setTemplateOwnType(const std::string& value)
{
    templateOwnType_ = value;
    templateOwnTypeIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::templateOwnTypeIsSet() const
{
    return templateOwnTypeIsSet_;
}

void ListSmartLiveRoomsRequest::unsettemplateOwnType()
{
    templateOwnTypeIsSet_ = false;
}

std::string ListSmartLiveRoomsRequest::getConfirmState() const
{
    return confirmState_;
}

void ListSmartLiveRoomsRequest::setConfirmState(const std::string& value)
{
    confirmState_ = value;
    confirmStateIsSet_ = true;
}

bool ListSmartLiveRoomsRequest::confirmStateIsSet() const
{
    return confirmStateIsSet_;
}

void ListSmartLiveRoomsRequest::unsetconfirmState()
{
    confirmStateIsSet_ = false;
}

}
}
}
}
}


