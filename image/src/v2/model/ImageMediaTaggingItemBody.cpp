

#include "huaweicloud/image/v2/model/ImageMediaTaggingItemBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMediaTaggingItemBody::ImageMediaTaggingItemBody()
{
    confidence_ = "";
    confidenceIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    i18nTagIsSet_ = false;
    i18nTypeIsSet_ = false;
    instancesIsSet_ = false;
}

ImageMediaTaggingItemBody::~ImageMediaTaggingItemBody() = default;

void ImageMediaTaggingItemBody::validate()
{
}

web::json::value ImageMediaTaggingItemBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(i18nTagIsSet_) {
        val[utility::conversions::to_string_t("i18n_tag")] = ModelBase::toJson(i18nTag_);
    }
    if(i18nTypeIsSet_) {
        val[utility::conversions::to_string_t("i18n_type")] = ModelBase::toJson(i18nType_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ImageMediaTaggingItemBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("i18n_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("i18n_tag"));
        if(!fieldValue.is_null())
        {
            ImageMediaTaggingItemBody_i18n_tag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setI18nTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("i18n_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("i18n_type"));
        if(!fieldValue.is_null())
        {
            ImageMediaTaggingItemBody_i18n_type refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setI18nType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageMediaTaggingInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::string ImageMediaTaggingItemBody::getConfidence() const
{
    return confidence_;
}

void ImageMediaTaggingItemBody::setConfidence(const std::string& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ImageMediaTaggingItemBody::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ImageMediaTaggingItemBody::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::string ImageMediaTaggingItemBody::getType() const
{
    return type_;
}

void ImageMediaTaggingItemBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ImageMediaTaggingItemBody::typeIsSet() const
{
    return typeIsSet_;
}

void ImageMediaTaggingItemBody::unsettype()
{
    typeIsSet_ = false;
}

std::string ImageMediaTaggingItemBody::getTag() const
{
    return tag_;
}

void ImageMediaTaggingItemBody::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ImageMediaTaggingItemBody::tagIsSet() const
{
    return tagIsSet_;
}

void ImageMediaTaggingItemBody::unsettag()
{
    tagIsSet_ = false;
}

ImageMediaTaggingItemBody_i18n_tag ImageMediaTaggingItemBody::getI18nTag() const
{
    return i18nTag_;
}

void ImageMediaTaggingItemBody::setI18nTag(const ImageMediaTaggingItemBody_i18n_tag& value)
{
    i18nTag_ = value;
    i18nTagIsSet_ = true;
}

bool ImageMediaTaggingItemBody::i18nTagIsSet() const
{
    return i18nTagIsSet_;
}

void ImageMediaTaggingItemBody::unseti18nTag()
{
    i18nTagIsSet_ = false;
}

ImageMediaTaggingItemBody_i18n_type ImageMediaTaggingItemBody::getI18nType() const
{
    return i18nType_;
}

void ImageMediaTaggingItemBody::setI18nType(const ImageMediaTaggingItemBody_i18n_type& value)
{
    i18nType_ = value;
    i18nTypeIsSet_ = true;
}

bool ImageMediaTaggingItemBody::i18nTypeIsSet() const
{
    return i18nTypeIsSet_;
}

void ImageMediaTaggingItemBody::unseti18nType()
{
    i18nTypeIsSet_ = false;
}

std::vector<ImageMediaTaggingInstance>& ImageMediaTaggingItemBody::getInstances()
{
    return instances_;
}

void ImageMediaTaggingItemBody::setInstances(const std::vector<ImageMediaTaggingInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ImageMediaTaggingItemBody::instancesIsSet() const
{
    return instancesIsSet_;
}

void ImageMediaTaggingItemBody::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


