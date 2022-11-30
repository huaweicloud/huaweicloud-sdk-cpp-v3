

#include "huaweicloud/frs/v2/model/CreateFaceSetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CreateFaceSetResponse::CreateFaceSetResponse()
{
    faceSetInfoIsSet_ = false;
}

CreateFaceSetResponse::~CreateFaceSetResponse() = default;

void CreateFaceSetResponse::validate()
{
}

web::json::value CreateFaceSetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetInfoIsSet_) {
        val[utility::conversions::to_string_t("face_set_info")] = ModelBase::toJson(faceSetInfo_);
    }

    return val;
}

bool CreateFaceSetResponse::fromJson(const web::json::value& val)
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


FaceSetInfo CreateFaceSetResponse::getFaceSetInfo() const
{
    return faceSetInfo_;
}

void CreateFaceSetResponse::setFaceSetInfo(const FaceSetInfo& value)
{
    faceSetInfo_ = value;
    faceSetInfoIsSet_ = true;
}

bool CreateFaceSetResponse::faceSetInfoIsSet() const
{
    return faceSetInfoIsSet_;
}

void CreateFaceSetResponse::unsetfaceSetInfo()
{
    faceSetInfoIsSet_ = false;
}

}
}
}
}
}


