

#include "huaweicloud/frs/v2/model/AddFacesBase64Req.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




AddFacesBase64Req::AddFacesBase64Req()
{
    imageBase64_ = "";
    imageBase64IsSet_ = false;
    externalFieldsIsSet_ = false;
    externalImageId_ = "";
    externalImageIdIsSet_ = false;
}

AddFacesBase64Req::~AddFacesBase64Req() = default;

void AddFacesBase64Req::validate()
{
}

web::json::value AddFacesBase64Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageBase64IsSet_) {
        val[utility::conversions::to_string_t("image_base64")] = ModelBase::toJson(imageBase64_);
    }
    if(externalFieldsIsSet_) {
        val[utility::conversions::to_string_t("external_fields")] = ModelBase::toJson(externalFields_);
    }
    if(externalImageIdIsSet_) {
        val[utility::conversions::to_string_t("external_image_id")] = ModelBase::toJson(externalImageId_);
    }

    return val;
}

bool AddFacesBase64Req::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_base64"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_base64"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageBase64(refVal);
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
    return ok;
}


std::string AddFacesBase64Req::getImageBase64() const
{
    return imageBase64_;
}

void AddFacesBase64Req::setImageBase64(const std::string& value)
{
    imageBase64_ = value;
    imageBase64IsSet_ = true;
}

bool AddFacesBase64Req::imageBase64IsSet() const
{
    return imageBase64IsSet_;
}

void AddFacesBase64Req::unsetimageBase64()
{
    imageBase64IsSet_ = false;
}

Object AddFacesBase64Req::getExternalFields() const
{
    return externalFields_;
}

void AddFacesBase64Req::setExternalFields(const Object& value)
{
    externalFields_ = value;
    externalFieldsIsSet_ = true;
}

bool AddFacesBase64Req::externalFieldsIsSet() const
{
    return externalFieldsIsSet_;
}

void AddFacesBase64Req::unsetexternalFields()
{
    externalFieldsIsSet_ = false;
}

std::string AddFacesBase64Req::getExternalImageId() const
{
    return externalImageId_;
}

void AddFacesBase64Req::setExternalImageId(const std::string& value)
{
    externalImageId_ = value;
    externalImageIdIsSet_ = true;
}

bool AddFacesBase64Req::externalImageIdIsSet() const
{
    return externalImageIdIsSet_;
}

void AddFacesBase64Req::unsetexternalImageId()
{
    externalImageIdIsSet_ = false;
}

}
}
}
}
}


