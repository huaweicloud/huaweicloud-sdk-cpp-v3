

#include "huaweicloud/frs/v2/model/AddFacesUrlReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




AddFacesUrlReq::AddFacesUrlReq()
{
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    externalFieldsIsSet_ = false;
    externalImageId_ = "";
    externalImageIdIsSet_ = false;
    single_ = false;
    singleIsSet_ = false;
}

AddFacesUrlReq::~AddFacesUrlReq() = default;

void AddFacesUrlReq::validate()
{
}

web::json::value AddFacesUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }
    if(externalFieldsIsSet_) {
        val[utility::conversions::to_string_t("external_fields")] = ModelBase::toJson(externalFields_);
    }
    if(externalImageIdIsSet_) {
        val[utility::conversions::to_string_t("external_image_id")] = ModelBase::toJson(externalImageId_);
    }
    if(singleIsSet_) {
        val[utility::conversions::to_string_t("single")] = ModelBase::toJson(single_);
    }

    return val;
}

bool AddFacesUrlReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("single"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("single"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSingle(refVal);
        }
    }
    return ok;
}

std::string AddFacesUrlReq::getImageUrl() const
{
    return imageUrl_;
}

void AddFacesUrlReq::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool AddFacesUrlReq::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void AddFacesUrlReq::unsetimageUrl()
{
    imageUrlIsSet_ = false;
}

Object AddFacesUrlReq::getExternalFields() const
{
    return externalFields_;
}

void AddFacesUrlReq::setExternalFields(const Object& value)
{
    externalFields_ = value;
    externalFieldsIsSet_ = true;
}

bool AddFacesUrlReq::externalFieldsIsSet() const
{
    return externalFieldsIsSet_;
}

void AddFacesUrlReq::unsetexternalFields()
{
    externalFieldsIsSet_ = false;
}

std::string AddFacesUrlReq::getExternalImageId() const
{
    return externalImageId_;
}

void AddFacesUrlReq::setExternalImageId(const std::string& value)
{
    externalImageId_ = value;
    externalImageIdIsSet_ = true;
}

bool AddFacesUrlReq::externalImageIdIsSet() const
{
    return externalImageIdIsSet_;
}

void AddFacesUrlReq::unsetexternalImageId()
{
    externalImageIdIsSet_ = false;
}

bool AddFacesUrlReq::isSingle() const
{
    return single_;
}

void AddFacesUrlReq::setSingle(bool value)
{
    single_ = value;
    singleIsSet_ = true;
}

bool AddFacesUrlReq::singleIsSet() const
{
    return singleIsSet_;
}

void AddFacesUrlReq::unsetsingle()
{
    singleIsSet_ = false;
}

}
}
}
}
}


