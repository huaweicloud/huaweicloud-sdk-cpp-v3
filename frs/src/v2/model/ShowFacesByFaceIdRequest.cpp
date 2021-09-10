

#include "huaweicloud/frs/v2/model/ShowFacesByFaceIdRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




ShowFacesByFaceIdRequest::ShowFacesByFaceIdRequest()
{
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    faceId_ = "";
    faceIdIsSet_ = false;
}

ShowFacesByFaceIdRequest::~ShowFacesByFaceIdRequest() = default;

void ShowFacesByFaceIdRequest::validate()
{
}

web::json::value ShowFacesByFaceIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(faceIdIsSet_) {
        val[utility::conversions::to_string_t("face_id")] = ModelBase::toJson(faceId_);
    }

    return val;
}

bool ShowFacesByFaceIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("face_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceId(refVal);
        }
    }
    return ok;
}


std::string ShowFacesByFaceIdRequest::getFaceSetName() const
{
    return faceSetName_;
}

void ShowFacesByFaceIdRequest::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool ShowFacesByFaceIdRequest::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void ShowFacesByFaceIdRequest::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::string ShowFacesByFaceIdRequest::getFaceId() const
{
    return faceId_;
}

void ShowFacesByFaceIdRequest::setFaceId(const std::string& value)
{
    faceId_ = value;
    faceIdIsSet_ = true;
}

bool ShowFacesByFaceIdRequest::faceIdIsSet() const
{
    return faceIdIsSet_;
}

void ShowFacesByFaceIdRequest::unsetfaceId()
{
    faceIdIsSet_ = false;
}

}
}
}
}
}


