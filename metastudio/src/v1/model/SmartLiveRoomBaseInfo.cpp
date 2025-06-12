

#include "huaweicloud/metastudio/v1/model/SmartLiveRoomBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartLiveRoomBaseInfo::SmartLiveRoomBaseInfo()
{
    roomId_ = "";
    roomIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    roomName_ = "";
    roomNameIsSet_ = false;
    roomType_ = "";
    roomTypeIsSet_ = false;
    roomState_ = "";
    roomStateIsSet_ = false;
    viewMode_ = "";
    viewModeIsSet_ = false;
    errorInfoIsSet_ = false;
    sharedConfigIsSet_ = false;
    roomDescription_ = "";
    roomDescriptionIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
    thumbnail_ = "";
    thumbnailIsSet_ = false;
    modelInfosIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    lastJobStartTime_ = "";
    lastJobStartTimeIsSet_ = false;
    lastJobEndTime_ = "";
    lastJobEndTimeIsSet_ = false;
    lastJobStatus_ = "";
    lastJobStatusIsSet_ = false;
    privData_ = "";
    privDataIsSet_ = false;
    confirmState_ = "";
    confirmStateIsSet_ = false;
}

SmartLiveRoomBaseInfo::~SmartLiveRoomBaseInfo() = default;

void SmartLiveRoomBaseInfo::validate()
{
}

web::json::value SmartLiveRoomBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(roomNameIsSet_) {
        val[utility::conversions::to_string_t("room_name")] = ModelBase::toJson(roomName_);
    }
    if(roomTypeIsSet_) {
        val[utility::conversions::to_string_t("room_type")] = ModelBase::toJson(roomType_);
    }
    if(roomStateIsSet_) {
        val[utility::conversions::to_string_t("room_state")] = ModelBase::toJson(roomState_);
    }
    if(viewModeIsSet_) {
        val[utility::conversions::to_string_t("view_mode")] = ModelBase::toJson(viewMode_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(sharedConfigIsSet_) {
        val[utility::conversions::to_string_t("shared_config")] = ModelBase::toJson(sharedConfig_);
    }
    if(roomDescriptionIsSet_) {
        val[utility::conversions::to_string_t("room_description")] = ModelBase::toJson(roomDescription_);
    }
    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }
    if(thumbnailIsSet_) {
        val[utility::conversions::to_string_t("thumbnail")] = ModelBase::toJson(thumbnail_);
    }
    if(modelInfosIsSet_) {
        val[utility::conversions::to_string_t("model_infos")] = ModelBase::toJson(modelInfos_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(lastJobStartTimeIsSet_) {
        val[utility::conversions::to_string_t("last_job_start_time")] = ModelBase::toJson(lastJobStartTime_);
    }
    if(lastJobEndTimeIsSet_) {
        val[utility::conversions::to_string_t("last_job_end_time")] = ModelBase::toJson(lastJobEndTime_);
    }
    if(lastJobStatusIsSet_) {
        val[utility::conversions::to_string_t("last_job_status")] = ModelBase::toJson(lastJobStatus_);
    }
    if(privDataIsSet_) {
        val[utility::conversions::to_string_t("priv_data")] = ModelBase::toJson(privData_);
    }
    if(confirmStateIsSet_) {
        val[utility::conversions::to_string_t("confirm_state")] = ModelBase::toJson(confirmState_);
    }

    return val;
}
bool SmartLiveRoomBaseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("room_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared_config"));
        if(!fieldValue.is_null())
        {
            SharedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSharedConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<ModelInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_job_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_job_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastJobStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_job_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_job_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastJobEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_job_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_job_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastJobStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priv_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priv_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivData(refVal);
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


std::string SmartLiveRoomBaseInfo::getRoomId() const
{
    return roomId_;
}

void SmartLiveRoomBaseInfo::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void SmartLiveRoomBaseInfo::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getProjectId() const
{
    return projectId_;
}

void SmartLiveRoomBaseInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void SmartLiveRoomBaseInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getRoomName() const
{
    return roomName_;
}

void SmartLiveRoomBaseInfo::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void SmartLiveRoomBaseInfo::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getRoomType() const
{
    return roomType_;
}

void SmartLiveRoomBaseInfo::setRoomType(const std::string& value)
{
    roomType_ = value;
    roomTypeIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::roomTypeIsSet() const
{
    return roomTypeIsSet_;
}

void SmartLiveRoomBaseInfo::unsetroomType()
{
    roomTypeIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getRoomState() const
{
    return roomState_;
}

void SmartLiveRoomBaseInfo::setRoomState(const std::string& value)
{
    roomState_ = value;
    roomStateIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::roomStateIsSet() const
{
    return roomStateIsSet_;
}

void SmartLiveRoomBaseInfo::unsetroomState()
{
    roomStateIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getViewMode() const
{
    return viewMode_;
}

void SmartLiveRoomBaseInfo::setViewMode(const std::string& value)
{
    viewMode_ = value;
    viewModeIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::viewModeIsSet() const
{
    return viewModeIsSet_;
}

void SmartLiveRoomBaseInfo::unsetviewMode()
{
    viewModeIsSet_ = false;
}

ErrorResponse SmartLiveRoomBaseInfo::getErrorInfo() const
{
    return errorInfo_;
}

void SmartLiveRoomBaseInfo::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void SmartLiveRoomBaseInfo::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

SharedConfig SmartLiveRoomBaseInfo::getSharedConfig() const
{
    return sharedConfig_;
}

void SmartLiveRoomBaseInfo::setSharedConfig(const SharedConfig& value)
{
    sharedConfig_ = value;
    sharedConfigIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::sharedConfigIsSet() const
{
    return sharedConfigIsSet_;
}

void SmartLiveRoomBaseInfo::unsetsharedConfig()
{
    sharedConfigIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getRoomDescription() const
{
    return roomDescription_;
}

void SmartLiveRoomBaseInfo::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void SmartLiveRoomBaseInfo::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getCoverUrl() const
{
    return coverUrl_;
}

void SmartLiveRoomBaseInfo::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void SmartLiveRoomBaseInfo::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getThumbnail() const
{
    return thumbnail_;
}

void SmartLiveRoomBaseInfo::setThumbnail(const std::string& value)
{
    thumbnail_ = value;
    thumbnailIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::thumbnailIsSet() const
{
    return thumbnailIsSet_;
}

void SmartLiveRoomBaseInfo::unsetthumbnail()
{
    thumbnailIsSet_ = false;
}

std::vector<ModelInfo>& SmartLiveRoomBaseInfo::getModelInfos()
{
    return modelInfos_;
}

void SmartLiveRoomBaseInfo::setModelInfos(const std::vector<ModelInfo>& value)
{
    modelInfos_ = value;
    modelInfosIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::modelInfosIsSet() const
{
    return modelInfosIsSet_;
}

void SmartLiveRoomBaseInfo::unsetmodelInfos()
{
    modelInfosIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getCreateTime() const
{
    return createTime_;
}

void SmartLiveRoomBaseInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SmartLiveRoomBaseInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getUpdateTime() const
{
    return updateTime_;
}

void SmartLiveRoomBaseInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void SmartLiveRoomBaseInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getLastJobStartTime() const
{
    return lastJobStartTime_;
}

void SmartLiveRoomBaseInfo::setLastJobStartTime(const std::string& value)
{
    lastJobStartTime_ = value;
    lastJobStartTimeIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::lastJobStartTimeIsSet() const
{
    return lastJobStartTimeIsSet_;
}

void SmartLiveRoomBaseInfo::unsetlastJobStartTime()
{
    lastJobStartTimeIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getLastJobEndTime() const
{
    return lastJobEndTime_;
}

void SmartLiveRoomBaseInfo::setLastJobEndTime(const std::string& value)
{
    lastJobEndTime_ = value;
    lastJobEndTimeIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::lastJobEndTimeIsSet() const
{
    return lastJobEndTimeIsSet_;
}

void SmartLiveRoomBaseInfo::unsetlastJobEndTime()
{
    lastJobEndTimeIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getLastJobStatus() const
{
    return lastJobStatus_;
}

void SmartLiveRoomBaseInfo::setLastJobStatus(const std::string& value)
{
    lastJobStatus_ = value;
    lastJobStatusIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::lastJobStatusIsSet() const
{
    return lastJobStatusIsSet_;
}

void SmartLiveRoomBaseInfo::unsetlastJobStatus()
{
    lastJobStatusIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getPrivData() const
{
    return privData_;
}

void SmartLiveRoomBaseInfo::setPrivData(const std::string& value)
{
    privData_ = value;
    privDataIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::privDataIsSet() const
{
    return privDataIsSet_;
}

void SmartLiveRoomBaseInfo::unsetprivData()
{
    privDataIsSet_ = false;
}

std::string SmartLiveRoomBaseInfo::getConfirmState() const
{
    return confirmState_;
}

void SmartLiveRoomBaseInfo::setConfirmState(const std::string& value)
{
    confirmState_ = value;
    confirmStateIsSet_ = true;
}

bool SmartLiveRoomBaseInfo::confirmStateIsSet() const
{
    return confirmStateIsSet_;
}

void SmartLiveRoomBaseInfo::unsetconfirmState()
{
    confirmStateIsSet_ = false;
}

}
}
}
}
}


