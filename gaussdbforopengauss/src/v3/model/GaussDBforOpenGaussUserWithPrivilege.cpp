

#include "huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussUserWithPrivilege.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




GaussDBforOpenGaussUserWithPrivilege::GaussDBforOpenGaussUserWithPrivilege()
{
    name_ = "";
    nameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
}

GaussDBforOpenGaussUserWithPrivilege::~GaussDBforOpenGaussUserWithPrivilege() = default;

void GaussDBforOpenGaussUserWithPrivilege::validate()
{
}

web::json::value GaussDBforOpenGaussUserWithPrivilege::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }

    return val;
}

bool GaussDBforOpenGaussUserWithPrivilege::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    return ok;
}

std::string GaussDBforOpenGaussUserWithPrivilege::getName() const
{
    return name_;
}

void GaussDBforOpenGaussUserWithPrivilege::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GaussDBforOpenGaussUserWithPrivilege::nameIsSet() const
{
    return nameIsSet_;
}

void GaussDBforOpenGaussUserWithPrivilege::unsetname()
{
    nameIsSet_ = false;
}

bool GaussDBforOpenGaussUserWithPrivilege::isReadonly() const
{
    return readonly_;
}

void GaussDBforOpenGaussUserWithPrivilege::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool GaussDBforOpenGaussUserWithPrivilege::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void GaussDBforOpenGaussUserWithPrivilege::unsetreadonly()
{
    readonlyIsSet_ = false;
}

std::string GaussDBforOpenGaussUserWithPrivilege::getSchemaName() const
{
    return schemaName_;
}

void GaussDBforOpenGaussUserWithPrivilege::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool GaussDBforOpenGaussUserWithPrivilege::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void GaussDBforOpenGaussUserWithPrivilege::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

}
}
}
}
}


