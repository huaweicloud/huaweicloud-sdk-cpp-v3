

#include "huaweicloud/ims/model/GlanceListImageMemberSchemasResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceListImageMemberSchemasResponse::GlanceListImageMemberSchemasResponse()
{
    linksIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    propertiesIsSet_ = false;
}

GlanceListImageMemberSchemasResponse::~GlanceListImageMemberSchemasResponse() = default;

void GlanceListImageMemberSchemasResponse::validate()
{
}

web::json::value GlanceListImageMemberSchemasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(linksIsSet_) {
        val[utility::conversions::to_string_t("links")] = ModelBase::toJson(links_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }

    return val;
}

bool GlanceListImageMemberSchemasResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("links"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("links"));
        if(!fieldValue.is_null())
        {
            std::vector<Links> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLinks(refVal);
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
    return ok;
}


std::vector<Links>& GlanceListImageMemberSchemasResponse::getLinks()
{
    return links_;
}

void GlanceListImageMemberSchemasResponse::setLinks(const std::vector<Links>& value)
{
    links_ = value;
    linksIsSet_ = true;
}

bool GlanceListImageMemberSchemasResponse::linksIsSet() const
{
    return linksIsSet_;
}

void GlanceListImageMemberSchemasResponse::unsetlinks()
{
    linksIsSet_ = false;
}

std::string GlanceListImageMemberSchemasResponse::getName() const
{
    return name_;
}

void GlanceListImageMemberSchemasResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GlanceListImageMemberSchemasResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GlanceListImageMemberSchemasResponse::unsetname()
{
    nameIsSet_ = false;
}

Object GlanceListImageMemberSchemasResponse::getProperties() const
{
    return properties_;
}

void GlanceListImageMemberSchemasResponse::setProperties(const Object& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool GlanceListImageMemberSchemasResponse::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void GlanceListImageMemberSchemasResponse::unsetproperties()
{
    propertiesIsSet_ = false;
}

}
}
}
}
}


