

#include "huaweicloud/ims/v2/model/GlanceShowImageMemberSchemasResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceShowImageMemberSchemasResponse::GlanceShowImageMemberSchemasResponse()
{
    name_ = "";
    nameIsSet_ = false;
    propertiesIsSet_ = false;
}

GlanceShowImageMemberSchemasResponse::~GlanceShowImageMemberSchemasResponse() = default;

void GlanceShowImageMemberSchemasResponse::validate()
{
}

web::json::value GlanceShowImageMemberSchemasResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(propertiesIsSet_) {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(properties_);
    }

    return val;
}
bool GlanceShowImageMemberSchemasResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GlanceShowImageMemberSchemasResponse::getName() const
{
    return name_;
}

void GlanceShowImageMemberSchemasResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GlanceShowImageMemberSchemasResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GlanceShowImageMemberSchemasResponse::unsetname()
{
    nameIsSet_ = false;
}

Object GlanceShowImageMemberSchemasResponse::getProperties() const
{
    return properties_;
}

void GlanceShowImageMemberSchemasResponse::setProperties(const Object& value)
{
    properties_ = value;
    propertiesIsSet_ = true;
}

bool GlanceShowImageMemberSchemasResponse::propertiesIsSet() const
{
    return propertiesIsSet_;
}

void GlanceShowImageMemberSchemasResponse::unsetproperties()
{
    propertiesIsSet_ = false;
}

}
}
}
}
}


