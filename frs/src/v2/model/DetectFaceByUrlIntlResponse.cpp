

#include "huaweicloud/frs/v2/model/DetectFaceByUrlIntlResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




DetectFaceByUrlIntlResponse::DetectFaceByUrlIntlResponse()
{
    facesIsSet_ = false;
}

DetectFaceByUrlIntlResponse::~DetectFaceByUrlIntlResponse() = default;

void DetectFaceByUrlIntlResponse::validate()
{
}

web::json::value DetectFaceByUrlIntlResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }

    return val;
}
bool DetectFaceByUrlIntlResponse::fromJson(const web::json::value& val)
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


std::vector<DetectFace>& DetectFaceByUrlIntlResponse::getFaces()
{
    return faces_;
}

void DetectFaceByUrlIntlResponse::setFaces(const std::vector<DetectFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool DetectFaceByUrlIntlResponse::facesIsSet() const
{
    return facesIsSet_;
}

void DetectFaceByUrlIntlResponse::unsetfaces()
{
    facesIsSet_ = false;
}

}
}
}
}
}


