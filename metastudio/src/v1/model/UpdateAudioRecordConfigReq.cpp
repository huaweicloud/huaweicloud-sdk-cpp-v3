

#include "huaweicloud/metastudio/v1/model/UpdateAudioRecordConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateAudioRecordConfigReq::UpdateAudioRecordConfigReq()
{
    obsBucketName_ = "";
    obsBucketNameIsSet_ = false;
    obsEndpoint_ = "";
    obsEndpointIsSet_ = false;
    enableAudioRecord_ = false;
    enableAudioRecordIsSet_ = false;
}

UpdateAudioRecordConfigReq::~UpdateAudioRecordConfigReq() = default;

void UpdateAudioRecordConfigReq::validate()
{
}

web::json::value UpdateAudioRecordConfigReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsBucketNameIsSet_) {
        val[utility::conversions::to_string_t("obs_bucket_name")] = ModelBase::toJson(obsBucketName_);
    }
    if(obsEndpointIsSet_) {
        val[utility::conversions::to_string_t("obs_endpoint")] = ModelBase::toJson(obsEndpoint_);
    }
    if(enableAudioRecordIsSet_) {
        val[utility::conversions::to_string_t("enable_audio_record")] = ModelBase::toJson(enableAudioRecord_);
    }

    return val;
}
bool UpdateAudioRecordConfigReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string UpdateAudioRecordConfigReq::getObsBucketName() const
{
    return obsBucketName_;
}

void UpdateAudioRecordConfigReq::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool UpdateAudioRecordConfigReq::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void UpdateAudioRecordConfigReq::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string UpdateAudioRecordConfigReq::getObsEndpoint() const
{
    return obsEndpoint_;
}

void UpdateAudioRecordConfigReq::setObsEndpoint(const std::string& value)
{
    obsEndpoint_ = value;
    obsEndpointIsSet_ = true;
}

bool UpdateAudioRecordConfigReq::obsEndpointIsSet() const
{
    return obsEndpointIsSet_;
}

void UpdateAudioRecordConfigReq::unsetobsEndpoint()
{
    obsEndpointIsSet_ = false;
}

bool UpdateAudioRecordConfigReq::isEnableAudioRecord() const
{
    return enableAudioRecord_;
}

void UpdateAudioRecordConfigReq::setEnableAudioRecord(bool value)
{
    enableAudioRecord_ = value;
    enableAudioRecordIsSet_ = true;
}

bool UpdateAudioRecordConfigReq::enableAudioRecordIsSet() const
{
    return enableAudioRecordIsSet_;
}

void UpdateAudioRecordConfigReq::unsetenableAudioRecord()
{
    enableAudioRecordIsSet_ = false;
}

}
}
}
}
}


