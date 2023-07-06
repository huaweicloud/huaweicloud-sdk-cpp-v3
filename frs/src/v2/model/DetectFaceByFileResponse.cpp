

#include "huaweicloud/frs/v2/model/DetectFaceByFileResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByFileResponse::DetectFaceByFileResponse()
{
    facesIsSet_ = false;
}

DetectFaceByFileResponse::~DetectFaceByFileResponse() = default;

void DetectFaceByFileResponse::validate()
{
}

web::json::value DetectFaceByFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }

    return val;
}

bool DetectFaceByFileResponse::fromJson(const web::json::value& val)
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

std::vector<DetectFace>& DetectFaceByFileResponse::getFaces()
{
    return faces_;
}

void DetectFaceByFileResponse::setFaces(const std::vector<DetectFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool DetectFaceByFileResponse::facesIsSet() const
{
    return facesIsSet_;
}

void DetectFaceByFileResponse::unsetfaces()
{
    facesIsSet_ = false;
}

}
}
}
}
}


