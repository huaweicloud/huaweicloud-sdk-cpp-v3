

#include "huaweicloud/metastudio/v1/model/CreateAudioRecordConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAudioRecordConfigResponse::CreateAudioRecordConfigResponse()
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

CreateAudioRecordConfigResponse::~CreateAudioRecordConfigResponse() = default;

void CreateAudioRecordConfigResponse::validate()
{
}

web::json::value CreateAudioRecordConfigResponse::toJson() const
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
bool CreateAudioRecordConfigResponse::fromJson(const web::json::value& val)
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


std::string CreateAudioRecordConfigResponse::getProjectId() const
{
    return projectId_;
}

void CreateAudioRecordConfigResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateAudioRecordConfigResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateAudioRecordConfigResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateAudioRecordConfigResponse::getObsBucketName() const
{
    return obsBucketName_;
}

void CreateAudioRecordConfigResponse::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool CreateAudioRecordConfigResponse::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void CreateAudioRecordConfigResponse::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string CreateAudioRecordConfigResponse::getObsEndpoint() const
{
    return obsEndpoint_;
}

void CreateAudioRecordConfigResponse::setObsEndpoint(const std::string& value)
{
    obsEndpoint_ = value;
    obsEndpointIsSet_ = true;
}

bool CreateAudioRecordConfigResponse::obsEndpointIsSet() const
{
    return obsEndpointIsSet_;
}

void CreateAudioRecordConfigResponse::unsetobsEndpoint()
{
    obsEndpointIsSet_ = false;
}

bool CreateAudioRecordConfigResponse::isEnableAudioRecord() const
{
    return enableAudioRecord_;
}

void CreateAudioRecordConfigResponse::setEnableAudioRecord(bool value)
{
    enableAudioRecord_ = value;
    enableAudioRecordIsSet_ = true;
}

bool CreateAudioRecordConfigResponse::enableAudioRecordIsSet() const
{
    return enableAudioRecordIsSet_;
}

void CreateAudioRecordConfigResponse::unsetenableAudioRecord()
{
    enableAudioRecordIsSet_ = false;
}

std::string CreateAudioRecordConfigResponse::getCreateTime() const
{
    return createTime_;
}

void CreateAudioRecordConfigResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateAudioRecordConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateAudioRecordConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateAudioRecordConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateAudioRecordConfigResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateAudioRecordConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateAudioRecordConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CreateAudioRecordConfigResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateAudioRecordConfigResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateAudioRecordConfigResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateAudioRecordConfigResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


