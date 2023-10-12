

#include "huaweicloud/frs/v2/model/ShowFacesByLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




ShowFacesByLimitResponse::ShowFacesByLimitResponse()
{
    faceSetId_ = "";
    faceSetIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    facesIsSet_ = false;
}

ShowFacesByLimitResponse::~ShowFacesByLimitResponse() = default;

void ShowFacesByLimitResponse::validate()
{
}

web::json::value ShowFacesByLimitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(faceSetIdIsSet_) {
        val[utility::conversions::to_string_t("face_set_id")] = ModelBase::toJson(faceSetId_);
    }
    if(faceSetNameIsSet_) {
        val[utility::conversions::to_string_t("face_set_name")] = ModelBase::toJson(faceSetName_);
    }
    if(facesIsSet_) {
        val[utility::conversions::to_string_t("faces")] = ModelBase::toJson(faces_);
    }

    return val;
}
bool ShowFacesByLimitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("face_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("face_set_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("face_set_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaceSetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("faces"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faces"));
        if(!fieldValue.is_null())
        {
            std::vector<FaceSetFace> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaces(refVal);
        }
    }
    return ok;
}


std::string ShowFacesByLimitResponse::getFaceSetId() const
{
    return faceSetId_;
}

void ShowFacesByLimitResponse::setFaceSetId(const std::string& value)
{
    faceSetId_ = value;
    faceSetIdIsSet_ = true;
}

bool ShowFacesByLimitResponse::faceSetIdIsSet() const
{
    return faceSetIdIsSet_;
}

void ShowFacesByLimitResponse::unsetfaceSetId()
{
    faceSetIdIsSet_ = false;
}

std::string ShowFacesByLimitResponse::getFaceSetName() const
{
    return faceSetName_;
}

void ShowFacesByLimitResponse::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool ShowFacesByLimitResponse::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void ShowFacesByLimitResponse::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::vector<FaceSetFace>& ShowFacesByLimitResponse::getFaces()
{
    return faces_;
}

void ShowFacesByLimitResponse::setFaces(const std::vector<FaceSetFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool ShowFacesByLimitResponse::facesIsSet() const
{
    return facesIsSet_;
}

void ShowFacesByLimitResponse::unsetfaces()
{
    facesIsSet_ = false;
}

}
}
}
}
}


