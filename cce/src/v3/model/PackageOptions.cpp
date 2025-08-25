

#include "huaweicloud/cce/v3/model/PackageOptions.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PackageOptions::PackageOptions()
{
    name_ = "";
    nameIsSet_ = false;
    defaultIsSet_ = false;
    validAt_ = "";
    validAtIsSet_ = false;
    empty_ = false;
    emptyIsSet_ = false;
    schema_ = "";
    schemaIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

PackageOptions::~PackageOptions() = default;

void PackageOptions::validate()
{
}

web::json::value PackageOptions::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
    }
    if(validAtIsSet_) {
        val[utility::conversions::to_string_t("validAt")] = ModelBase::toJson(validAt_);
    }
    if(emptyIsSet_) {
        val[utility::conversions::to_string_t("empty")] = ModelBase::toJson(empty_);
    }
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool PackageOptions::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validAt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validAt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("empty"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("empty"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmpty(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string PackageOptions::getName() const
{
    return name_;
}

void PackageOptions::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PackageOptions::nameIsSet() const
{
    return nameIsSet_;
}

void PackageOptions::unsetname()
{
    nameIsSet_ = false;
}

Object PackageOptions::getDefault() const
{
    return default_;
}

void PackageOptions::setDefault(const Object& value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool PackageOptions::defaultIsSet() const
{
    return defaultIsSet_;
}

void PackageOptions::unsetdefault()
{
    defaultIsSet_ = false;
}

std::string PackageOptions::getValidAt() const
{
    return validAt_;
}

void PackageOptions::setValidAt(const std::string& value)
{
    validAt_ = value;
    validAtIsSet_ = true;
}

bool PackageOptions::validAtIsSet() const
{
    return validAtIsSet_;
}

void PackageOptions::unsetvalidAt()
{
    validAtIsSet_ = false;
}

bool PackageOptions::isEmpty() const
{
    return empty_;
}

void PackageOptions::setEmpty(bool value)
{
    empty_ = value;
    emptyIsSet_ = true;
}

bool PackageOptions::emptyIsSet() const
{
    return emptyIsSet_;
}

void PackageOptions::unsetempty()
{
    emptyIsSet_ = false;
}

std::string PackageOptions::getSchema() const
{
    return schema_;
}

void PackageOptions::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool PackageOptions::schemaIsSet() const
{
    return schemaIsSet_;
}

void PackageOptions::unsetschema()
{
    schemaIsSet_ = false;
}

std::string PackageOptions::getType() const
{
    return type_;
}

void PackageOptions::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PackageOptions::typeIsSet() const
{
    return typeIsSet_;
}

void PackageOptions::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


