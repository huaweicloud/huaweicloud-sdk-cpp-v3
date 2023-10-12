

#include "huaweicloud/ivs/v2/model/StandardReqDataByVideoAndNameAndId.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {




StandardReqDataByVideoAndNameAndId::StandardReqDataByVideoAndNameAndId()
{
    verificationName_ = "";
    verificationNameIsSet_ = false;
    verificationId_ = "";
    verificationIdIsSet_ = false;
    video_ = "";
    videoIsSet_ = false;
    actions_ = "";
    actionsIsSet_ = false;
    nodThreshold_ = 0.0;
    nodThresholdIsSet_ = false;
}

StandardReqDataByVideoAndNameAndId::~StandardReqDataByVideoAndNameAndId() = default;

void StandardReqDataByVideoAndNameAndId::validate()
{
}

web::json::value StandardReqDataByVideoAndNameAndId::toJson() const
{
    web::json::value val = web::json::value::object();

    if(verificationNameIsSet_) {
        val[utility::conversions::to_string_t("verification_name")] = ModelBase::toJson(verificationName_);
    }
    if(verificationIdIsSet_) {
        val[utility::conversions::to_string_t("verification_id")] = ModelBase::toJson(verificationId_);
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
bool StandardReqDataByVideoAndNameAndId::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("verification_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationId(refVal);
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


std::string StandardReqDataByVideoAndNameAndId::getVerificationName() const
{
    return verificationName_;
}

void StandardReqDataByVideoAndNameAndId::setVerificationName(const std::string& value)
{
    verificationName_ = value;
    verificationNameIsSet_ = true;
}

bool StandardReqDataByVideoAndNameAndId::verificationNameIsSet() const
{
    return verificationNameIsSet_;
}

void StandardReqDataByVideoAndNameAndId::unsetverificationName()
{
    verificationNameIsSet_ = false;
}

std::string StandardReqDataByVideoAndNameAndId::getVerificationId() const
{
    return verificationId_;
}

void StandardReqDataByVideoAndNameAndId::setVerificationId(const std::string& value)
{
    verificationId_ = value;
    verificationIdIsSet_ = true;
}

bool StandardReqDataByVideoAndNameAndId::verificationIdIsSet() const
{
    return verificationIdIsSet_;
}

void StandardReqDataByVideoAndNameAndId::unsetverificationId()
{
    verificationIdIsSet_ = false;
}

std::string StandardReqDataByVideoAndNameAndId::getVideo() const
{
    return video_;
}

void StandardReqDataByVideoAndNameAndId::setVideo(const std::string& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool StandardReqDataByVideoAndNameAndId::videoIsSet() const
{
    return videoIsSet_;
}

void StandardReqDataByVideoAndNameAndId::unsetvideo()
{
    videoIsSet_ = false;
}

std::string StandardReqDataByVideoAndNameAndId::getActions() const
{
    return actions_;
}

void StandardReqDataByVideoAndNameAndId::setActions(const std::string& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool StandardReqDataByVideoAndNameAndId::actionsIsSet() const
{
    return actionsIsSet_;
}

void StandardReqDataByVideoAndNameAndId::unsetactions()
{
    actionsIsSet_ = false;
}

double StandardReqDataByVideoAndNameAndId::getNodThreshold() const
{
    return nodThreshold_;
}

void StandardReqDataByVideoAndNameAndId::setNodThreshold(double value)
{
    nodThreshold_ = value;
    nodThresholdIsSet_ = true;
}

bool StandardReqDataByVideoAndNameAndId::nodThresholdIsSet() const
{
    return nodThresholdIsSet_;
}

void StandardReqDataByVideoAndNameAndId::unsetnodThreshold()
{
    nodThresholdIsSet_ = false;
}

}
}
}
}
}


