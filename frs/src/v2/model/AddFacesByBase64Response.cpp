

#include "huaweicloud/frs/v2/model/AddFacesByBase64Response.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




AddFacesByBase64Response::AddFacesByBase64Response()
{
    faceSetId_ = "";
    faceSetIdIsSet_ = false;
    faceSetName_ = "";
    faceSetNameIsSet_ = false;
    facesIsSet_ = false;
}

AddFacesByBase64Response::~AddFacesByBase64Response() = default;

void AddFacesByBase64Response::validate()
{
}

web::json::value AddFacesByBase64Response::toJson() const
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

bool AddFacesByBase64Response::fromJson(const web::json::value& val)
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

std::string AddFacesByBase64Response::getFaceSetId() const
{
    return faceSetId_;
}

void AddFacesByBase64Response::setFaceSetId(const std::string& value)
{
    faceSetId_ = value;
    faceSetIdIsSet_ = true;
}

bool AddFacesByBase64Response::faceSetIdIsSet() const
{
    return faceSetIdIsSet_;
}

void AddFacesByBase64Response::unsetfaceSetId()
{
    faceSetIdIsSet_ = false;
}

std::string AddFacesByBase64Response::getFaceSetName() const
{
    return faceSetName_;
}

void AddFacesByBase64Response::setFaceSetName(const std::string& value)
{
    faceSetName_ = value;
    faceSetNameIsSet_ = true;
}

bool AddFacesByBase64Response::faceSetNameIsSet() const
{
    return faceSetNameIsSet_;
}

void AddFacesByBase64Response::unsetfaceSetName()
{
    faceSetNameIsSet_ = false;
}

std::vector<FaceSetFace>& AddFacesByBase64Response::getFaces()
{
    return faces_;
}

void AddFacesByBase64Response::setFaces(const std::vector<FaceSetFace>& value)
{
    faces_ = value;
    facesIsSet_ = true;
}

bool AddFacesByBase64Response::facesIsSet() const
{
    return facesIsSet_;
}

void AddFacesByBase64Response::unsetfaces()
{
    facesIsSet_ = false;
}

}
}
}
}
}


