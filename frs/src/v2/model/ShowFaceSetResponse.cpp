

#include "huaweicloud/frs/v2/model/ShowFaceSetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




ShowFaceSetResponse::ShowFaceSetResponse()
{
    faceSetInfoIsSet_ = false;
}

ShowFaceSetResponse::~ShowFaceSetResponse() = default;

void ShowFaceSetResponse::validate()
{
}

web::json::value ShowFaceSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetInfoIsSet_) {
        val[utility::conversions::to_string_t("face_set_info")] = ModelBase::toJson(faceSetInfo_);
    }

    return val;
}

bool ShowFaceSetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("face_set_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_info"));
        if(!fieldValue.is_null())
        {
            FaceSetInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetInfo(refVal);
        }
    }
    return ok;
}

FaceSetInfo ShowFaceSetResponse::getFaceSetInfo() const
{
    return faceSetInfo_;
}

void ShowFaceSetResponse::setFaceSetInfo(const FaceSetInfo& value)
{
    faceSetInfo_ = value;
    faceSetInfoIsSet_ = true;
}

bool ShowFaceSetResponse::faceSetInfoIsSet() const
{
    return faceSetInfoIsSet_;
}

void ShowFaceSetResponse::unsetfaceSetInfo()
{
    faceSetInfoIsSet_ = false;
}

}
}
}
}
}


