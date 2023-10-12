

#include "huaweicloud/ims/v2/model/GlanceShowImageSchemasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceShowImageSchemasResponse::GlanceShowImageSchemasResponse()
{
    additionalPropertiesIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    propertiesIsSet_ = false;
    linksIsSet_ = false;
}

GlanceShowImageSchemasResponse::~GlanceShowImageSchemasResponse() = default;

void GlanceShowImageSchemasResponse::validate()
{
}

web::json::value GlanceShowImageSchemasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(additionalPropertiesIsSet_) {
        val[utility::conversions::to_string_t("additionalProperties")] = ModelBase::toJson(additionalProperties_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }
    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }

    return val;
}
bool GlanceShowImageSchemasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("additionalProperties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additionalProperties"));
        if(!fieldValue.is_null())
        {
            AdditionalProperties refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<Links> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
        }
    }
    return ok;
}


AdditionalProperties GlanceShowImageSchemasResponse::getAdditionalProperties() const
{
    return additionalProperties_;
}

void GlanceShowImageSchemasResponse::setAdditionalProperties(const AdditionalProperties& value)
{
    additionalProperties_ = value;
    additionalPropertiesIsSet_ = true;
}

bool GlanceShowImageSchemasResponse::additionalPropertiesIsSet() const
{
    return additionalPropertiesIsSet_;
}

void GlanceShowImageSchemasResponse::unsetadditionalProperties()
{
    additionalPropertiesIsSet_ = false;
}

std::string GlanceShowImageSchemasResponse::getName() const
{
    return name_;
}

void GlanceShowImageSchemasResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GlanceShowImageSchemasResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GlanceShowImageSchemasResponse::unsetname()
{
    nameIsSet_ = false;
}

Object GlanceShowImageSchemasResponse::getProperties() const
{
    return properties_;
}

void GlanceShowImageSchemasResponse::setProperties(const Object& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool GlanceShowImageSchemasResponse::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void GlanceShowImageSchemasResponse::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::vector<Links>& GlanceShowImageSchemasResponse::getLinks()
{
    return links_;
}

void GlanceShowImageSchemasResponse::setLinks(const std::vector<Links>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool GlanceShowImageSchemasResponse::linksIsSet() const
{
    return linksIsSet_;
}

void GlanceShowImageSchemasResponse::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


