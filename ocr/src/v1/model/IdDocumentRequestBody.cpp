

#include "huaweicloud/ocr/v1/model/IdDocumentRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdDocumentRequestBody::IdDocumentRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    countryRegionIsSet_ = false;
    idTypeIsSet_ = false;
    returnPortraitImage_ = false;
    returnPortraitImageIsSet_ = false;
}

IdDocumentRequestBody::~IdDocumentRequestBody() = default;

void IdDocumentRequestBody::validate()
{
}

web::json::value IdDocumentRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(countryRegionIsSet_) {
        val[utility::conversions::to_string_t("country_region")] = ModelBase::toJson(countryRegion_);
    }
    if(idTypeIsSet_) {
        val[utility::conversions::to_string_t("id_type")] = ModelBase::toJson(idType_);
    }
    if(returnPortraitImageIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_image")] = ModelBase::toJson(returnPortraitImage_);
    }

    return val;
}
bool IdDocumentRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country_region"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountryRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_portrait_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_portrait_image"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnPortraitImage(refVal);
        }
    }
    return ok;
}


std::string IdDocumentRequestBody::getImage() const
{
    return image_;
}

void IdDocumentRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool IdDocumentRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void IdDocumentRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string IdDocumentRequestBody::getUrl() const
{
    return url_;
}

void IdDocumentRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool IdDocumentRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void IdDocumentRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::vector<std::string>& IdDocumentRequestBody::getCountryRegion()
{
    return countryRegion_;
}

void IdDocumentRequestBody::setCountryRegion(const std::vector<std::string>& value)
{
    countryRegion_ = value;
    countryRegionIsSet_ = true;
}

bool IdDocumentRequestBody::countryRegionIsSet() const
{
    return countryRegionIsSet_;
}

void IdDocumentRequestBody::unsetcountryRegion()
{
    countryRegionIsSet_ = false;
}

std::vector<std::string>& IdDocumentRequestBody::getIdType()
{
    return idType_;
}

void IdDocumentRequestBody::setIdType(const std::vector<std::string>& value)
{
    idType_ = value;
    idTypeIsSet_ = true;
}

bool IdDocumentRequestBody::idTypeIsSet() const
{
    return idTypeIsSet_;
}

void IdDocumentRequestBody::unsetidType()
{
    idTypeIsSet_ = false;
}

bool IdDocumentRequestBody::isReturnPortraitImage() const
{
    return returnPortraitImage_;
}

void IdDocumentRequestBody::setReturnPortraitImage(bool value)
{
    returnPortraitImage_ = value;
    returnPortraitImageIsSet_ = true;
}

bool IdDocumentRequestBody::returnPortraitImageIsSet() const
{
    return returnPortraitImageIsSet_;
}

void IdDocumentRequestBody::unsetreturnPortraitImage()
{
    returnPortraitImageIsSet_ = false;
}

}
}
}
}
}


