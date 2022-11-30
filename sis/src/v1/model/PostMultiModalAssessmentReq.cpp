

#include "huaweicloud/sis/v1/model/PostMultiModalAssessmentReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PostMultiModalAssessmentReq::PostMultiModalAssessmentReq()
{
    configIsSet_ = false;
    videoData_ = "";
    videoDataIsSet_ = false;
    refText_ = "";
    refTextIsSet_ = false;
}

PostMultiModalAssessmentReq::~PostMultiModalAssessmentReq() = default;

void PostMultiModalAssessmentReq::validate()
{
}

web::json::value PostMultiModalAssessmentReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIsSet_) {
        val[utility::conversions::to_string_t("config")] = ModelBase::toJson(config_);
    }
    if(videoDataIsSet_) {
        val[utility::conversions::to_string_t("video_data")] = ModelBase::toJson(videoData_);
    }
    if(refTextIsSet_) {
        val[utility::conversions::to_string_t("ref_text")] = ModelBase::toJson(refText_);
    }

    return val;
}

bool PostMultiModalAssessmentReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config"));
        if(!fieldValue.is_null())
        {
            MultiModalConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoData(refVal);
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


MultiModalConfig PostMultiModalAssessmentReq::getConfig() const
{
    return config_;
}

void PostMultiModalAssessmentReq::setConfig(const MultiModalConfig& value)
{
    config_ = value;
    configIsSet_ = true;
}

bool PostMultiModalAssessmentReq::configIsSet() const
{
    return configIsSet_;
}

void PostMultiModalAssessmentReq::unsetconfig()
{
    configIsSet_ = false;
}

std::string PostMultiModalAssessmentReq::getVideoData() const
{
    return videoData_;
}

void PostMultiModalAssessmentReq::setVideoData(const std::string& value)
{
    videoData_ = value;
    videoDataIsSet_ = true;
}

bool PostMultiModalAssessmentReq::videoDataIsSet() const
{
    return videoDataIsSet_;
}

void PostMultiModalAssessmentReq::unsetvideoData()
{
    videoDataIsSet_ = false;
}

std::string PostMultiModalAssessmentReq::getRefText() const
{
    return refText_;
}

void PostMultiModalAssessmentReq::setRefText(const std::string& value)
{
    refText_ = value;
    refTextIsSet_ = true;
}

bool PostMultiModalAssessmentReq::refTextIsSet() const
{
    return refTextIsSet_;
}

void PostMultiModalAssessmentReq::unsetrefText()
{
    refTextIsSet_ = false;
}

}
}
}
}
}


