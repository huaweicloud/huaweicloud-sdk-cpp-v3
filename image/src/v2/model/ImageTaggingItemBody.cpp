

#include "huaweicloud/image/v2/model/ImageTaggingItemBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageTaggingItemBody::ImageTaggingItemBody()
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

ImageTaggingItemBody::~ImageTaggingItemBody() = default;

void ImageTaggingItemBody::validate()
{
}

web::json::value ImageTaggingItemBody::toJson() const
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
bool ImageTaggingItemBody::fromJson(const web::json::value& val)
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
            ImageTaggingItemBody_i18n_tag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setI18nTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("i18n_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("i18n_type"));
        if(!fieldValue.is_null())
        {
            ImageTaggingItemBody_i18n_type refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setI18nType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageTaggingInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::string ImageTaggingItemBody::getConfidence() const
{
    return confidence_;
}

void ImageTaggingItemBody::setConfidence(const std::string& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ImageTaggingItemBody::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ImageTaggingItemBody::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::string ImageTaggingItemBody::getType() const
{
    return type_;
}

void ImageTaggingItemBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ImageTaggingItemBody::typeIsSet() const
{
    return typeIsSet_;
}

void ImageTaggingItemBody::unsettype()
{
    typeIsSet_ = false;
}

std::string ImageTaggingItemBody::getTag() const
{
    return tag_;
}

void ImageTaggingItemBody::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ImageTaggingItemBody::tagIsSet() const
{
    return tagIsSet_;
}

void ImageTaggingItemBody::unsettag()
{
    tagIsSet_ = false;
}

ImageTaggingItemBody_i18n_tag ImageTaggingItemBody::getI18nTag() const
{
    return i18nTag_;
}

void ImageTaggingItemBody::setI18nTag(const ImageTaggingItemBody_i18n_tag& value)
{
    i18nTag_ = value;
    i18nTagIsSet_ = true;
}

bool ImageTaggingItemBody::i18nTagIsSet() const
{
    return i18nTagIsSet_;
}

void ImageTaggingItemBody::unseti18nTag()
{
    i18nTagIsSet_ = false;
}

ImageTaggingItemBody_i18n_type ImageTaggingItemBody::getI18nType() const
{
    return i18nType_;
}

void ImageTaggingItemBody::setI18nType(const ImageTaggingItemBody_i18n_type& value)
{
    i18nType_ = value;
    i18nTypeIsSet_ = true;
}

bool ImageTaggingItemBody::i18nTypeIsSet() const
{
    return i18nTypeIsSet_;
}

void ImageTaggingItemBody::unseti18nType()
{
    i18nTypeIsSet_ = false;
}

std::vector<ImageTaggingInstance>& ImageTaggingItemBody::getInstances()
{
    return instances_;
}

void ImageTaggingItemBody::setInstances(const std::vector<ImageTaggingInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ImageTaggingItemBody::instancesIsSet() const
{
    return instancesIsSet_;
}

void ImageTaggingItemBody::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


