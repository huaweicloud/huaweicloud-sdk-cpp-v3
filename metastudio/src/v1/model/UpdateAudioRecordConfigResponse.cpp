

#include "huaweicloud/metastudio/v1/model/UpdateAudioRecordConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateAudioRecordConfigResponse::UpdateAudioRecordConfigResponse()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    obsBucketName_ = "";
    obsBucketNameIsSet_ = false;
    obsEndpoint_ = "";
    obsEndpointIsSet_ = false;
    enableAudioRecord_ = false;
    enableAudioRecordIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateAudioRecordConfigResponse::~UpdateAudioRecordConfigResponse() = default;

void UpdateAudioRecordConfigResponse::validate()
{
}

web::json::value UpdateAudioRecordConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(obsBucketNameIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_name")] = ModelBase::toJson(obsBucketName_);
    }
    if(obsEndpointIsSet_) {
        val[utility::conversions::to_string_t("obs_endpoint")] = ModelBase::toJson(obsEndpoint_);
    }
    if(enableAudioRecordIsSet_) {
        val[utility::conversions::to_string_t("enable_audio_record")] = ModelBase::toJson(enableAudioRecord_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateAudioRecordConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_audio_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_audio_record"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAudioRecord(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string UpdateAudioRecordConfigResponse::getProjectId() const
{
    return projectId_;
}

void UpdateAudioRecordConfigResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateAudioRecordConfigResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateAudioRecordConfigResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateAudioRecordConfigResponse::getObsBucketName() const
{
    return obsBucketName_;
}

void UpdateAudioRecordConfigResponse::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool UpdateAudioRecordConfigResponse::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void UpdateAudioRecordConfigResponse::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string UpdateAudioRecordConfigResponse::getObsEndpoint() const
{
    return obsEndpoint_;
}

void UpdateAudioRecordConfigResponse::setObsEndpoint(const std::string& value)
{
    obsEndpoint_ = value;
    obsEndpointIsSet_ = true;
}

bool UpdateAudioRecordConfigResponse::obsEndpointIsSet() const
{
    return obsEndpointIsSet_;
}

void UpdateAudioRecordConfigResponse::unsetobsEndpoint()
{
    obsEndpointIsSet_ = false;
}

bool UpdateAudioRecordConfigResponse::isEnableAudioRecord() const
{
    return enableAudioRecord_;
}

void UpdateAudioRecordConfigResponse::setEnableAudioRecord(bool value)
{
    enableAudioRecord_ = value;
    enableAudioRecordIsSet_ = true;
}

bool UpdateAudioRecordConfigResponse::enableAudioRecordIsSet() const
{
    return enableAudioRecordIsSet_;
}

void UpdateAudioRecordConfigResponse::unsetenableAudioRecord()
{
    enableAudioRecordIsSet_ = false;
}

std::string UpdateAudioRecordConfigResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateAudioRecordConfigResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateAudioRecordConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateAudioRecordConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateAudioRecordConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateAudioRecordConfigResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateAudioRecordConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateAudioRecordConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateAudioRecordConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateAudioRecordConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateAudioRecordConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateAudioRecordConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


