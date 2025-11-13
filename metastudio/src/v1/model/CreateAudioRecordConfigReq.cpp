

#include "huaweicloud/metastudio/v1/model/CreateAudioRecordConfigReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAudioRecordConfigReq::CreateAudioRecordConfigReq()
{
    obsBucketName_ = "";
    obsBucketNameIsSet_ = false;
    obsEndpoint_ = "";
    obsEndpointIsSet_ = false;
    enableAudioRecord_ = false;
    enableAudioRecordIsSet_ = false;
}

CreateAudioRecordConfigReq::~CreateAudioRecordConfigReq() = default;

void CreateAudioRecordConfigReq::validate()
{
}

web::json::value CreateAudioRecordConfigReq::toJson() const
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
bool CreateAudioRecordConfigReq::fromJson(const web::json::value& val)
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


std::string CreateAudioRecordConfigReq::getObsBucketName() const
{
    return obsBucketName_;
}

void CreateAudioRecordConfigReq::setObsBucketName(const std::string& value)
{
    obsBucketName_ = value;
    obsBucketNameIsSet_ = true;
}

bool CreateAudioRecordConfigReq::obsBucketNameIsSet() const
{
    return obsBucketNameIsSet_;
}

void CreateAudioRecordConfigReq::unsetobsBucketName()
{
    obsBucketNameIsSet_ = false;
}

std::string CreateAudioRecordConfigReq::getObsEndpoint() const
{
    return obsEndpoint_;
}

void CreateAudioRecordConfigReq::setObsEndpoint(const std::string& value)
{
    obsEndpoint_ = value;
    obsEndpointIsSet_ = true;
}

bool CreateAudioRecordConfigReq::obsEndpointIsSet() const
{
    return obsEndpointIsSet_;
}

void CreateAudioRecordConfigReq::unsetobsEndpoint()
{
    obsEndpointIsSet_ = false;
}

bool CreateAudioRecordConfigReq::isEnableAudioRecord() const
{
    return enableAudioRecord_;
}

void CreateAudioRecordConfigReq::setEnableAudioRecord(bool value)
{
    enableAudioRecord_ = value;
    enableAudioRecordIsSet_ = true;
}

bool CreateAudioRecordConfigReq::enableAudioRecordIsSet() const
{
    return enableAudioRecordIsSet_;
}

void CreateAudioRecordConfigReq::unsetenableAudioRecord()
{
    enableAudioRecordIsSet_ = false;
}

}
}
}
}
}


