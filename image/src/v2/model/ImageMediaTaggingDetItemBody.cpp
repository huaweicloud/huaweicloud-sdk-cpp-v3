

#include "huaweicloud/image/v2/model/ImageMediaTaggingDetItemBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




ImageMediaTaggingDetItemBody::ImageMediaTaggingDetItemBody()
{
    confidence_ = "";
    confidenceIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    i18nTagIsSet_ = false;
    instancesIsSet_ = false;
}

ImageMediaTaggingDetItemBody::~ImageMediaTaggingDetItemBody() = default;

void ImageMediaTaggingDetItemBody::validate()
{
}

web::json::value ImageMediaTaggingDetItemBody::toJson() const
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
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ImageMediaTaggingDetItemBody::fromJson(const web::json::value& val)
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
            ImageMediaTaggingDetItemBody_i18n_tag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setI18nTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageMediaTaggingDetInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


std::string ImageMediaTaggingDetItemBody::getConfidence() const
{
    return confidence_;
}

void ImageMediaTaggingDetItemBody::setConfidence(const std::string& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ImageMediaTaggingDetItemBody::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ImageMediaTaggingDetItemBody::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::string ImageMediaTaggingDetItemBody::getType() const
{
    return type_;
}

void ImageMediaTaggingDetItemBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ImageMediaTaggingDetItemBody::typeIsSet() const
{
    return typeIsSet_;
}

void ImageMediaTaggingDetItemBody::unsettype()
{
    typeIsSet_ = false;
}

std::string ImageMediaTaggingDetItemBody::getTag() const
{
    return tag_;
}

void ImageMediaTaggingDetItemBody::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ImageMediaTaggingDetItemBody::tagIsSet() const
{
    return tagIsSet_;
}

void ImageMediaTaggingDetItemBody::unsettag()
{
    tagIsSet_ = false;
}

ImageMediaTaggingDetItemBody_i18n_tag ImageMediaTaggingDetItemBody::getI18nTag() const
{
    return i18nTag_;
}

void ImageMediaTaggingDetItemBody::setI18nTag(const ImageMediaTaggingDetItemBody_i18n_tag& value)
{
    i18nTag_ = value;
    i18nTagIsSet_ = true;
}

bool ImageMediaTaggingDetItemBody::i18nTagIsSet() const
{
    return i18nTagIsSet_;
}

void ImageMediaTaggingDetItemBody::unseti18nTag()
{
    i18nTagIsSet_ = false;
}

std::vector<ImageMediaTaggingDetInstance>& ImageMediaTaggingDetItemBody::getInstances()
{
    return instances_;
}

void ImageMediaTaggingDetItemBody::setInstances(const std::vector<ImageMediaTaggingDetInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ImageMediaTaggingDetItemBody::instancesIsSet() const
{
    return instancesIsSet_;
}

void ImageMediaTaggingDetItemBody::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


