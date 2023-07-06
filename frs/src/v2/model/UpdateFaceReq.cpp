

#include "huaweicloud/frs/v2/model/UpdateFaceReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




UpdateFaceReq::UpdateFaceReq()
{
    externalFieldsIsSet_ = false;
    externalImageId_ = "";
    externalImageIdIsSet_ = false;
    faceId_ = "";
    faceIdIsSet_ = false;
}

UpdateFaceReq::~UpdateFaceReq() = default;

void UpdateFaceReq::validate()
{
}

web::json::value UpdateFaceReq::toJson() const
{
    web::json::value val = web::json::value::object();

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

bool UpdateFaceReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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

Object UpdateFaceReq::getExternalFields() const
{
    return externalFields_;
}

void UpdateFaceReq::setExternalFields(const Object& value)
{
    externalFields_ = value;
    externalFieldsIsSet_ = true;
}

bool UpdateFaceReq::externalFieldsIsSet() const
{
    return externalFieldsIsSet_;
}

void UpdateFaceReq::unsetexternalFields()
{
    externalFieldsIsSet_ = false;
}

std::string UpdateFaceReq::getExternalImageId() const
{
    return externalImageId_;
}

void UpdateFaceReq::setExternalImageId(const std::string& value)
{
    externalImageId_ = value;
    externalImageIdIsSet_ = true;
}

bool UpdateFaceReq::externalImageIdIsSet() const
{
    return externalImageIdIsSet_;
}

void UpdateFaceReq::unsetexternalImageId()
{
    externalImageIdIsSet_ = false;
}

std::string UpdateFaceReq::getFaceId() const
{
    return faceId_;
}

void UpdateFaceReq::setFaceId(const std::string& value)
{
    faceId_ = value;
    faceIdIsSet_ = true;
}

bool UpdateFaceReq::faceIdIsSet() const
{
    return faceIdIsSet_;
}

void UpdateFaceReq::unsetfaceId()
{
    faceIdIsSet_ = false;
}

}
}
}
}
}


