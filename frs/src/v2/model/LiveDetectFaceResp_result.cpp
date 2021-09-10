

#include "huaweicloud/frs/v2/model/LiveDetectFaceResp_result.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




LiveDetectFaceResp_result::LiveDetectFaceResp_result()
{
    alive_ = false;
    aliveIsSet_ = false;
    confidence_ = 0.0;
    confidenceIsSet_ = false;
    picture_ = "";
    pictureIsSet_ = false;
}

LiveDetectFaceResp_result::~LiveDetectFaceResp_result() = default;

void LiveDetectFaceResp_result::validate()
{
}

web::json::value LiveDetectFaceResp_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aliveIsSet_) {
        val[utility::conversions::to_string_t("alive")] = ModelBase::toJson(alive_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(pictureIsSet_) {
        val[utility::conversions::to_string_t("picture")] = ModelBase::toJson(picture_);
    }

    return val;
}

bool LiveDetectFaceResp_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("alive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("picture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picture"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicture(refVal);
        }
    }
    return ok;
}


bool LiveDetectFaceResp_result::isAlive() const
{
    return alive_;
}

void LiveDetectFaceResp_result::setAlive(bool value)
{
    alive_ = value;
    aliveIsSet_ = true;
}

bool LiveDetectFaceResp_result::aliveIsSet() const
{
    return aliveIsSet_;
}

void LiveDetectFaceResp_result::unsetalive()
{
    aliveIsSet_ = false;
}

double LiveDetectFaceResp_result::getConfidence() const
{
    return confidence_;
}

void LiveDetectFaceResp_result::setConfidence(double value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool LiveDetectFaceResp_result::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void LiveDetectFaceResp_result::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::string LiveDetectFaceResp_result::getPicture() const
{
    return picture_;
}

void LiveDetectFaceResp_result::setPicture(const std::string& value)
{
    picture_ = value;
    pictureIsSet_ = true;
}

bool LiveDetectFaceResp_result::pictureIsSet() const
{
    return pictureIsSet_;
}

void LiveDetectFaceResp_result::unsetpicture()
{
    pictureIsSet_ = false;
}

}
}
}
}
}


