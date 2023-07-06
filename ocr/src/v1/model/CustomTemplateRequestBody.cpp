

#include "huaweicloud/ocr/v1/model/CustomTemplateRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




CustomTemplateRequestBody::CustomTemplateRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    classifierId_ = "";
    classifierIdIsSet_ = false;
    classifierMode_ = false;
    classifierModeIsSet_ = false;
}

CustomTemplateRequestBody::~CustomTemplateRequestBody() = default;

void CustomTemplateRequestBody::validate()
{
}

web::json::value CustomTemplateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(classifierIdIsSet_) {
        val[utility::conversions::to_string_t("classifier_id")] = ModelBase::toJson(classifierId_);
    }
    if(classifierModeIsSet_) {
        val[utility::conversions::to_string_t("classifier_mode")] = ModelBase::toJson(classifierMode_);
    }

    return val;
}

bool CustomTemplateRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("classifier_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("classifier_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClassifierId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("classifier_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("classifier_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClassifierMode(refVal);
        }
    }
    return ok;
}

std::string CustomTemplateRequestBody::getImage() const
{
    return image_;
}

void CustomTemplateRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool CustomTemplateRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void CustomTemplateRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string CustomTemplateRequestBody::getUrl() const
{
    return url_;
}

void CustomTemplateRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool CustomTemplateRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void CustomTemplateRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::string CustomTemplateRequestBody::getTemplateId() const
{
    return templateId_;
}

void CustomTemplateRequestBody::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool CustomTemplateRequestBody::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void CustomTemplateRequestBody::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string CustomTemplateRequestBody::getClassifierId() const
{
    return classifierId_;
}

void CustomTemplateRequestBody::setClassifierId(const std::string& value)
{
    classifierId_ = value;
    classifierIdIsSet_ = true;
}

bool CustomTemplateRequestBody::classifierIdIsSet() const
{
    return classifierIdIsSet_;
}

void CustomTemplateRequestBody::unsetclassifierId()
{
    classifierIdIsSet_ = false;
}

bool CustomTemplateRequestBody::isClassifierMode() const
{
    return classifierMode_;
}

void CustomTemplateRequestBody::setClassifierMode(bool value)
{
    classifierMode_ = value;
    classifierModeIsSet_ = true;
}

bool CustomTemplateRequestBody::classifierModeIsSet() const
{
    return classifierModeIsSet_;
}

void CustomTemplateRequestBody::unsetclassifierMode()
{
    classifierModeIsSet_ = false;
}

}
}
}
}
}


