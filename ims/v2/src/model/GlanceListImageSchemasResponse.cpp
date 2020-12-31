

#include "huaweicloud/ims/model/GlanceListImageSchemasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceListImageSchemasResponse::GlanceListImageSchemasResponse()
{
    name_ = "";
    nameIsSet_ = false;
    propertiesIsSet_ = false;
    linksIsSet_ = false;
}

GlanceListImageSchemasResponse::~GlanceListImageSchemasResponse() = default;

void GlanceListImageSchemasResponse::validate()
{
}

web::json::value GlanceListImageSchemasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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

bool GlanceListImageSchemasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string GlanceListImageSchemasResponse::getName() const
{
    return name_;
}

void GlanceListImageSchemasResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GlanceListImageSchemasResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GlanceListImageSchemasResponse::unsetname()
{
    nameIsSet_ = false;
}

Object GlanceListImageSchemasResponse::getProperties() const
{
    return properties_;
}

void GlanceListImageSchemasResponse::setProperties(const Object& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool GlanceListImageSchemasResponse::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void GlanceListImageSchemasResponse::unsetproperties()
{
    propertiesIsSet_ = false;
}

std::vector<Links>& GlanceListImageSchemasResponse::getLinks()
{
    return links_;
}

void GlanceListImageSchemasResponse::setLinks(const std::vector<Links>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool GlanceListImageSchemasResponse::linksIsSet() const
{
    return linksIsSet_;
}

void GlanceListImageSchemasResponse::unsetlinks()
{
    linksIsSet_ = false;
}

}
}
}
}
}


