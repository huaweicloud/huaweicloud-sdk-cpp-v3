

#include "huaweicloud/frs/v2/model/FaceCompareUrlReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceCompareUrlReq::FaceCompareUrlReq()
{
    image1Url_ = "";
    image1UrlIsSet_ = false;
    image2Url_ = "";
    image2UrlIsSet_ = false;
}

FaceCompareUrlReq::~FaceCompareUrlReq() = default;

void FaceCompareUrlReq::validate()
{
}

web::json::value FaceCompareUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(image1UrlIsSet_) {
        val[utility::conversions::to_string_t("image1_url")] = ModelBase::toJson(image1Url_);
    }
    if(image2UrlIsSet_) {
        val[utility::conversions::to_string_t("image2_url")] = ModelBase::toJson(image2Url_);
    }

    return val;
}

bool FaceCompareUrlReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image1_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image1_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage1Url(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image2_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image2_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage2Url(refVal);
        }
    }
    return ok;
}


std::string FaceCompareUrlReq::getImage1Url() const
{
    return image1Url_;
}

void FaceCompareUrlReq::setImage1Url(const std::string& value)
{
    image1Url_ = value;
    image1UrlIsSet_ = true;
}

bool FaceCompareUrlReq::image1UrlIsSet() const
{
    return image1UrlIsSet_;
}

void FaceCompareUrlReq::unsetimage1Url()
{
    image1UrlIsSet_ = false;
}

std::string FaceCompareUrlReq::getImage2Url() const
{
    return image2Url_;
}

void FaceCompareUrlReq::setImage2Url(const std::string& value)
{
    image2Url_ = value;
    image2UrlIsSet_ = true;
}

bool FaceCompareUrlReq::image2UrlIsSet() const
{
    return image2UrlIsSet_;
}

void FaceCompareUrlReq::unsetimage2Url()
{
    image2UrlIsSet_ = false;
}

}
}
}
}
}


