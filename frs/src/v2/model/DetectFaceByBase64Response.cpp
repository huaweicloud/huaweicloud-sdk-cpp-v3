

#include "huaweicloud/frs/v2/model/DetectFaceByBase64Response.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByBase64Response::DetectFaceByBase64Response()
{
    facesIsSet_ = false;
}

DetectFaceByBase64Response::~DetectFaceByBase64Response() = default;

void DetectFaceByBase64Response::validate()
{
}

web::json::value DetectFaceByBase64Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }

    return val;
}

bool DetectFaceByBase64Response::fromJson(const web::json::value& val)
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
    return ok;
}

std::vector<DetectFace>& DetectFaceByBase64Response::getFaces()
{
    return faces_;
}

void DetectFaceByBase64Response::setFaces(const std::vector<DetectFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool DetectFaceByBase64Response::facesIsSet() const
{
    return facesIsSet_;
}

void DetectFaceByBase64Response::unsetfaces()
{
    facesIsSet_ = false;
}

}
}
}
}
}


