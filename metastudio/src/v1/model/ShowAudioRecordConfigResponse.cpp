

#include "huaweicloud/metastudio/v1/model/ShowAudioRecordConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAudioRecordConfigResponse::ShowAudioRecordConfigResponse()
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

ShowAudioRecordConfigResponse::~ShowAudioRecordConfigResponse() = default;

void ShowAudioRecordConfigResponse::validate()
{
}

web::json::value ShowAudioRecordConfigResponse::toJson() const
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
bool ShowAudioRecordConfigResponse::fromJson(const web::json::value& val)
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


std::string ShowAudioRecordConfigResponse::getProjectId() const
{
    return projectId_;
}

void ShowAudioRecordConfigResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAudioRecordConfigResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAudioRecordConfigResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowAudioRecordConfigResponse::getObsBucketName() const
{
    return obsBucketName_;
}

void ShowAudioRecordConfigResponse::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool ShowAudioRecordConfigResponse::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void ShowAudioRecordConfigResponse::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string ShowAudioRecordConfigResponse::getObsEndpoint() const
{
    return obsEndpoint_;
}

void ShowAudioRecordConfigResponse::setObsEndpoint(const std::string& value)
{
    obsEndpoint_ = value;
    obsEndpointIsSet_ = true;
}

bool ShowAudioRecordConfigResponse::obsEndpointIsSet() const
{
    return obsEndpointIsSet_;
}

void ShowAudioRecordConfigResponse::unsetobsEndpoint()
{
    obsEndpointIsSet_ = false;
}

bool ShowAudioRecordConfigResponse::isEnableAudioRecord() const
{
    return enableAudioRecord_;
}

void ShowAudioRecordConfigResponse::setEnableAudioRecord(bool value)
{
    enableAudioRecord_ = value;
    enableAudioRecordIsSet_ = true;
}

bool ShowAudioRecordConfigResponse::enableAudioRecordIsSet() const
{
    return enableAudioRecordIsSet_;
}

void ShowAudioRecordConfigResponse::unsetenableAudioRecord()
{
    enableAudioRecordIsSet_ = false;
}

std::string ShowAudioRecordConfigResponse::getCreateTime() const
{
    return createTime_;
}

void ShowAudioRecordConfigResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowAudioRecordConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowAudioRecordConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowAudioRecordConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowAudioRecordConfigResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowAudioRecordConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowAudioRecordConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowAudioRecordConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowAudioRecordConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowAudioRecordConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowAudioRecordConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


