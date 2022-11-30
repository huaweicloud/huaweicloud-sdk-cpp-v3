

#include "huaweicloud/sis/v1/model/PostShortAudioAssessmentReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PostShortAudioAssessmentReq::PostShortAudioAssessmentReq()
{
    configIsSet_ = false;
    audioData_ = "";
    audioDataIsSet_ = false;
    refText_ = "";
    refTextIsSet_ = false;
}

PostShortAudioAssessmentReq::~PostShortAudioAssessmentReq() = default;

void PostShortAudioAssessmentReq::validate()
{
}

web::json::value PostShortAudioAssessmentReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }
    if(audioDataIsSet_) {
        val[utility::conversions::to_string_t("audio_data")] = ModelBase::toJson(audioData_);
    }
    if(refTextIsSet_) {
        val[utility::conversions::to_string_t("ref_text")] = ModelBase::toJson(refText_);
    }

    return val;
}

bool PostShortAudioAssessmentReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            AudioConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefText(refVal);
        }
    }
    return ok;
}


AudioConfig PostShortAudioAssessmentReq::getConfig() const
{
    return config_;
}

void PostShortAudioAssessmentReq::setConfig(const AudioConfig& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool PostShortAudioAssessmentReq::configIsSet() const
{
    return configIsSet_;
}

void PostShortAudioAssessmentReq::unsetconfig()
{
    configIsSet_ = false;
}

std::string PostShortAudioAssessmentReq::getAudioData() const
{
    return audioData_;
}

void PostShortAudioAssessmentReq::setAudioData(const std::string& value)
{
    audioData_ = value;
    audioDataIsSet_ = true;
}

bool PostShortAudioAssessmentReq::audioDataIsSet() const
{
    return audioDataIsSet_;
}

void PostShortAudioAssessmentReq::unsetaudioData()
{
    audioDataIsSet_ = false;
}

std::string PostShortAudioAssessmentReq::getRefText() const
{
    return refText_;
}

void PostShortAudioAssessmentReq::setRefText(const std::string& value)
{
    refText_ = value;
    refTextIsSet_ = true;
}

bool PostShortAudioAssessmentReq::refTextIsSet() const
{
    return refTextIsSet_;
}

void PostShortAudioAssessmentReq::unsetrefText()
{
    refTextIsSet_ = false;
}

}
}
}
}
}


