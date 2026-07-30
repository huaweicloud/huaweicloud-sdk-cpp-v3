

#include "huaweicloud/modelarts/v1/model/PluginTemplateVersionV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PluginTemplateVersionV2::PluginTemplateVersionV2()
{
    version_ = "";
    versionIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    inputsIsSet_ = false;
    translateIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
}

PluginTemplateVersionV2::~PluginTemplateVersionV2() = default;

void PluginTemplateVersionV2::validate()
{
}

web::json::value PluginTemplateVersionV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(translateIsSet_) {
        val[utility::conversions::to_string_t("translate")] = ModelBase::toJson(translate_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool PluginTemplateVersionV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("translate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("translate"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranslate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string PluginTemplateVersionV2::getVersion() const
{
    return version_;
}

void PluginTemplateVersionV2::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PluginTemplateVersionV2::versionIsSet() const
{
    return versionIsSet_;
}

void PluginTemplateVersionV2::unsetversion()
{
    versionIsSet_ = false;
}

std::string PluginTemplateVersionV2::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void PluginTemplateVersionV2::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool PluginTemplateVersionV2::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void PluginTemplateVersionV2::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

Object PluginTemplateVersionV2::getInputs() const
{
    return inputs_;
}

void PluginTemplateVersionV2::setInputs(const Object& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool PluginTemplateVersionV2::inputsIsSet() const
{
    return inputsIsSet_;
}

void PluginTemplateVersionV2::unsetinputs()
{
    inputsIsSet_ = false;
}

Object PluginTemplateVersionV2::getTranslate() const
{
    return translate_;
}

void PluginTemplateVersionV2::setTranslate(const Object& value)
{
    translate_ = value;
    translateIsSet_ = true;
}

bool PluginTemplateVersionV2::translateIsSet() const
{
    return translateIsSet_;
}

void PluginTemplateVersionV2::unsettranslate()
{
    translateIsSet_ = false;
}

std::string PluginTemplateVersionV2::getDescription() const
{
    return description_;
}

void PluginTemplateVersionV2::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PluginTemplateVersionV2::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PluginTemplateVersionV2::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PluginTemplateVersionV2::getDetail() const
{
    return detail_;
}

void PluginTemplateVersionV2::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool PluginTemplateVersionV2::detailIsSet() const
{
    return detailIsSet_;
}

void PluginTemplateVersionV2::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


