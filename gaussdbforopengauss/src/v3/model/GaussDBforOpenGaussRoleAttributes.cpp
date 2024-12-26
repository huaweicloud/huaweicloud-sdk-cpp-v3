

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussRoleAttributes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussRoleAttributes::GaussDBforOpenGaussRoleAttributes()
{
    name_ = "";
    nameIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
    defaultPrivilegeGrantee_ = "";
    defaultPrivilegeGranteeIsSet_ = false;
}

GaussDBforOpenGaussRoleAttributes::~GaussDBforOpenGaussRoleAttributes() = default;

void GaussDBforOpenGaussRoleAttributes::validate()
{
}

web::json::value GaussDBforOpenGaussRoleAttributes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }
    if(defaultPrivilegeGranteeIsSet_) {
        val[utility::conversions::to_string_t("default_privilege_grantee")] = ModelBase::toJson(defaultPrivilegeGrantee_);
    }

    return val;
}
bool GaussDBforOpenGaussRoleAttributes::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_privilege_grantee"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_privilege_grantee"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultPrivilegeGrantee(refVal);
        }
    }
    return ok;
}


std::string GaussDBforOpenGaussRoleAttributes::getName() const
{
    return name_;
}

void GaussDBforOpenGaussRoleAttributes::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussDBforOpenGaussRoleAttributes::nameIsSet() const
{
    return nameIsSet_;
}

void GaussDBforOpenGaussRoleAttributes::unsetname()
{
    nameIsSet_ = false;
}

std::string GaussDBforOpenGaussRoleAttributes::getSchema() const
{
    return schema_;
}

void GaussDBforOpenGaussRoleAttributes::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool GaussDBforOpenGaussRoleAttributes::schemaIsSet() const
{
    return schemaIsSet_;
}

void GaussDBforOpenGaussRoleAttributes::unsetschema()
{
    schemaIsSet_ = false;
}

bool GaussDBforOpenGaussRoleAttributes::isReadonly() const
{
    return readonly_;
}

void GaussDBforOpenGaussRoleAttributes::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool GaussDBforOpenGaussRoleAttributes::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void GaussDBforOpenGaussRoleAttributes::unsetreadonly()
{
    readonlyIsSet_ = false;
}

std::string GaussDBforOpenGaussRoleAttributes::getDefaultPrivilegeGrantee() const
{
    return defaultPrivilegeGrantee_;
}

void GaussDBforOpenGaussRoleAttributes::setDefaultPrivilegeGrantee(const std::string& value)
{
    defaultPrivilegeGrantee_ = value;
    defaultPrivilegeGranteeIsSet_ = true;
}

bool GaussDBforOpenGaussRoleAttributes::defaultPrivilegeGranteeIsSet() const
{
    return defaultPrivilegeGranteeIsSet_;
}

void GaussDBforOpenGaussRoleAttributes::unsetdefaultPrivilegeGrantee()
{
    defaultPrivilegeGranteeIsSet_ = false;
}

}
}
}
}
}


