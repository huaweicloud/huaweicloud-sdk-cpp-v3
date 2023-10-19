

#include "huaweicloud/frs/v2/model/DetectFaceByFileIntlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByFileIntlResponse::DetectFaceByFileIntlResponse()
{
    facesIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DetectFaceByFileIntlResponse::~DetectFaceByFileIntlResponse() = default;

void DetectFaceByFileIntlResponse::validate()
{
}

web::json::value DetectFaceByFileIntlResponse::toJson() const
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
bool DetectFaceByFileIntlResponse::fromJson(const web::json::value& val)
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


std::vector<DetectFace>& DetectFaceByFileIntlResponse::getFaces()
{
    return faces_;
}

void DetectFaceByFileIntlResponse::setFaces(const std::vector<DetectFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool DetectFaceByFileIntlResponse::facesIsSet() const
{
    return facesIsSet_;
}

void DetectFaceByFileIntlResponse::unsetfaces()
{
    facesIsSet_ = false;
}

std::string DetectFaceByFileIntlResponse::getXRequestId() const
{
    return xRequestId_;
}

void DetectFaceByFileIntlResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DetectFaceByFileIntlResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DetectFaceByFileIntlResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


