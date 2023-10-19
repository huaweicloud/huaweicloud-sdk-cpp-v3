

#include "huaweicloud/frs/v2/model/DetectFaceByUrlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByUrlResponse::DetectFaceByUrlResponse()
{
    facesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DetectFaceByUrlResponse::~DetectFaceByUrlResponse() = default;

void DetectFaceByUrlResponse::validate()
{
}

web::json::value DetectFaceByUrlResponse::toJson() const
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
bool DetectFaceByUrlResponse::fromJson(const web::json::value& val)
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


std::vector<DetectFace>& DetectFaceByUrlResponse::getFaces()
{
    return faces_;
}

void DetectFaceByUrlResponse::setFaces(const std::vector<DetectFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool DetectFaceByUrlResponse::facesIsSet() const
{
    return facesIsSet_;
}

void DetectFaceByUrlResponse::unsetfaces()
{
    facesIsSet_ = false;
}

std::string DetectFaceByUrlResponse::getXRequestId() const
{
    return xRequestId_;
}

void DetectFaceByUrlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DetectFaceByUrlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DetectFaceByUrlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


