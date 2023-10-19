

#include "huaweicloud/frs/v2/model/DetectFaceByBase64IntlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByBase64IntlResponse::DetectFaceByBase64IntlResponse()
{
    facesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DetectFaceByBase64IntlResponse::~DetectFaceByBase64IntlResponse() = default;

void DetectFaceByBase64IntlResponse::validate()
{
}

web::json::value DetectFaceByBase64IntlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DetectFaceByBase64IntlResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("faces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faces"));
        if(!fieldValue.is_null())
        {
            std::vector<DetectFace> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaces(refVal);
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


std::vector<DetectFace>& DetectFaceByBase64IntlResponse::getFaces()
{
    return faces_;
}

void DetectFaceByBase64IntlResponse::setFaces(const std::vector<DetectFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool DetectFaceByBase64IntlResponse::facesIsSet() const
{
    return facesIsSet_;
}

void DetectFaceByBase64IntlResponse::unsetfaces()
{
    facesIsSet_ = false;
}

std::string DetectFaceByBase64IntlResponse::getXRequestId() const
{
    return xRequestId_;
}

void DetectFaceByBase64IntlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DetectFaceByBase64IntlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DetectFaceByBase64IntlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


