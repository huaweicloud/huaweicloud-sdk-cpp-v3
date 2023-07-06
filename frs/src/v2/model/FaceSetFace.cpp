

#include "huaweicloud/frs/v2/model/FaceSetFace.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




FaceSetFace::FaceSetFace()
{
    boundingBoxIsSet_ = false;
    externalFieldsIsSet_ = false;
    externalImageId_ = "";
    externalImageIdIsSet_ = false;
    faceId_ = "";
    faceIdIsSet_ = false;
}

FaceSetFace::~FaceSetFace() = default;

void FaceSetFace::validate()
{
}

web::json::value FaceSetFace::toJson() const
{
    web::json::value val = web::json::value::object();

    if(boundingBoxIsSet_) {
        val[utility::conversions::to_string_t("bounding_box")] = ModelBase::toJson(boundingBox_);
    }
    if(externalFieldsIsSet_) {
        val[utility::conversions::to_string_t("external_fields")] = ModelBase::toJson(externalFields_);
    }
    if(externalImageIdIsSet_) {
        val[utility::conversions::to_string_t("external_image_id")] = ModelBase::toJson(externalImageId_);
    }
    if(faceIdIsSet_) {
        val[utility::conversions::to_string_t("face_id")] = ModelBase::toJson(faceId_);
    }

    return val;
}

bool FaceSetFace::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bounding_box"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bounding_box"));
        if(!fieldValue.is_null())
        {
            BoundingBox refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoundingBox(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_fields"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalImageId(refVal);
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

BoundingBox FaceSetFace::getBoundingBox() const
{
    return boundingBox_;
}

void FaceSetFace::setBoundingBox(const BoundingBox& value)
{
    boundingBox_ = value;
    boundingBoxIsSet_ = true;
}

bool FaceSetFace::boundingBoxIsSet() const
{
    return boundingBoxIsSet_;
}

void FaceSetFace::unsetboundingBox()
{
    boundingBoxIsSet_ = false;
}

Object FaceSetFace::getExternalFields() const
{
    return externalFields_;
}

void FaceSetFace::setExternalFields(const Object& value)
{
    externalFields_ = value;
    externalFieldsIsSet_ = true;
}

bool FaceSetFace::externalFieldsIsSet() const
{
    return externalFieldsIsSet_;
}

void FaceSetFace::unsetexternalFields()
{
    externalFieldsIsSet_ = false;
}

std::string FaceSetFace::getExternalImageId() const
{
    return externalImageId_;
}

void FaceSetFace::setExternalImageId(const std::string& value)
{
    externalImageId_ = value;
    externalImageIdIsSet_ = true;
}

bool FaceSetFace::externalImageIdIsSet() const
{
    return externalImageIdIsSet_;
}

void FaceSetFace::unsetexternalImageId()
{
    externalImageIdIsSet_ = false;
}

std::string FaceSetFace::getFaceId() const
{
    return faceId_;
}

void FaceSetFace::setFaceId(const std::string& value)
{
    faceId_ = value;
    faceIdIsSet_ = true;
}

bool FaceSetFace::faceIdIsSet() const
{
    return faceIdIsSet_;
}

void FaceSetFace::unsetfaceId()
{
    faceIdIsSet_ = false;
}

}
}
}
}
}


