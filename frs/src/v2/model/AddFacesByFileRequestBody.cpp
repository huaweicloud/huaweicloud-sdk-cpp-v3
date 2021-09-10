

#include "huaweicloud/frs/v2/model/AddFacesByFileRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




AddFacesByFileRequestBody::AddFacesByFileRequestBody()
{
    imageFileIsSet_ = false;
    externalImageId_ = "";
    externalImageIdIsSet_ = false;
    externalFields_ = "";
    externalFieldsIsSet_ = false;
}

AddFacesByFileRequestBody::~AddFacesByFileRequestBody() = default;

void AddFacesByFileRequestBody::validate()
{
}

web::json::value AddFacesByFileRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageFileIsSet_) {
        val[utility::conversions::to_string_t("image_file")] = ModelBase::toJson(imageFile_);
    }
    if(externalImageIdIsSet_) {
        val[utility::conversions::to_string_t("external_image_id")] = ModelBase::toJson(externalImageId_);
    }
    if(externalFieldsIsSet_) {
        val[utility::conversions::to_string_t("external_fields")] = ModelBase::toJson(externalFields_);
    }

    return val;
}

bool AddFacesByFileRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_file"));
        if(!fieldValue.is_null())
        {
            HttpContent refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageFile(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("external_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalFields(refVal);
        }
    }
    return ok;
}


HttpContent AddFacesByFileRequestBody::getImageFile() const
{
    return imageFile_;
}

void AddFacesByFileRequestBody::setImageFile(const HttpContent& value)
{
    imageFile_ = value;
    imageFileIsSet_ = true;
}

bool AddFacesByFileRequestBody::imageFileIsSet() const
{
    return imageFileIsSet_;
}

void AddFacesByFileRequestBody::unsetimageFile()
{
    imageFileIsSet_ = false;
}

std::string AddFacesByFileRequestBody::getExternalImageId() const
{
    return externalImageId_;
}

void AddFacesByFileRequestBody::setExternalImageId(const std::string& value)
{
    externalImageId_ = value;
    externalImageIdIsSet_ = true;
}

bool AddFacesByFileRequestBody::externalImageIdIsSet() const
{
    return externalImageIdIsSet_;
}

void AddFacesByFileRequestBody::unsetexternalImageId()
{
    externalImageIdIsSet_ = false;
}

std::string AddFacesByFileRequestBody::getExternalFields() const
{
    return externalFields_;
}

void AddFacesByFileRequestBody::setExternalFields(const std::string& value)
{
    externalFields_ = value;
    externalFieldsIsSet_ = true;
}

bool AddFacesByFileRequestBody::externalFieldsIsSet() const
{
    return externalFieldsIsSet_;
}

void AddFacesByFileRequestBody::unsetexternalFields()
{
    externalFieldsIsSet_ = false;
}

}
}
}
}
}


