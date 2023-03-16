

#include "huaweicloud/ivs/v2/model/ReqDataByVideoAndIdCardImage.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




ReqDataByVideoAndIdCardImage::ReqDataByVideoAndIdCardImage()
{
    idcardImage1_ = "";
    idcardImage1IsSet_ = false;
    idcardImage2_ = "";
    idcardImage2IsSet_ = false;
    video_ = "";
    videoIsSet_ = false;
    actions_ = "";
    actionsIsSet_ = false;
    nodThreshold_ = 0.0;
    nodThresholdIsSet_ = false;
}

ReqDataByVideoAndIdCardImage::~ReqDataByVideoAndIdCardImage() = default;

void ReqDataByVideoAndIdCardImage::validate()
{
}

web::json::value ReqDataByVideoAndIdCardImage::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idcardImage1IsSet_) {
        val[utility::conversions::to_string_t("idcard_image1")] = ModelBase::toJson(idcardImage1_);
    }
    if(idcardImage2IsSet_) {
        val[utility::conversions::to_string_t("idcard_image2")] = ModelBase::toJson(idcardImage2_);
    }
    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(nodThresholdIsSet_) {
        val[utility::conversions::to_string_t("nod_threshold")] = ModelBase::toJson(nodThreshold_);
    }

    return val;
}

bool ReqDataByVideoAndIdCardImage::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("idcard_image1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idcard_image1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdcardImage1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("idcard_image2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idcard_image2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdcardImage2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nod_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nod_threshold"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodThreshold(refVal);
        }
    }
    return ok;
}


std::string ReqDataByVideoAndIdCardImage::getIdcardImage1() const
{
    return idcardImage1_;
}

void ReqDataByVideoAndIdCardImage::setIdcardImage1(const std::string& value)
{
    idcardImage1_ = value;
    idcardImage1IsSet_ = true;
}

bool ReqDataByVideoAndIdCardImage::idcardImage1IsSet() const
{
    return idcardImage1IsSet_;
}

void ReqDataByVideoAndIdCardImage::unsetidcardImage1()
{
    idcardImage1IsSet_ = false;
}

std::string ReqDataByVideoAndIdCardImage::getIdcardImage2() const
{
    return idcardImage2_;
}

void ReqDataByVideoAndIdCardImage::setIdcardImage2(const std::string& value)
{
    idcardImage2_ = value;
    idcardImage2IsSet_ = true;
}

bool ReqDataByVideoAndIdCardImage::idcardImage2IsSet() const
{
    return idcardImage2IsSet_;
}

void ReqDataByVideoAndIdCardImage::unsetidcardImage2()
{
    idcardImage2IsSet_ = false;
}

std::string ReqDataByVideoAndIdCardImage::getVideo() const
{
    return video_;
}

void ReqDataByVideoAndIdCardImage::setVideo(const std::string& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool ReqDataByVideoAndIdCardImage::videoIsSet() const
{
    return videoIsSet_;
}

void ReqDataByVideoAndIdCardImage::unsetvideo()
{
    videoIsSet_ = false;
}

std::string ReqDataByVideoAndIdCardImage::getActions() const
{
    return actions_;
}

void ReqDataByVideoAndIdCardImage::setActions(const std::string& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ReqDataByVideoAndIdCardImage::actionsIsSet() const
{
    return actionsIsSet_;
}

void ReqDataByVideoAndIdCardImage::unsetactions()
{
    actionsIsSet_ = false;
}

double ReqDataByVideoAndIdCardImage::getNodThreshold() const
{
    return nodThreshold_;
}

void ReqDataByVideoAndIdCardImage::setNodThreshold(double value)
{
    nodThreshold_ = value;
    nodThresholdIsSet_ = true;
}

bool ReqDataByVideoAndIdCardImage::nodThresholdIsSet() const
{
    return nodThresholdIsSet_;
}

void ReqDataByVideoAndIdCardImage::unsetnodThreshold()
{
    nodThresholdIsSet_ = false;
}

}
}
}
}
}


