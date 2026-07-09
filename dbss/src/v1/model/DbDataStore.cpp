

#include "huaweicloud/dbss/v1/model/DbDataStore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DbDataStore::DbDataStore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

DbDataStore::~DbDataStore() = default;

void DbDataStore::validate()
{
}

web::json::value DbDataStore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool DbDataStore::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string DbDataStore::getType() const
{
    return type_;
}

void DbDataStore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DbDataStore::typeIsSet() const
{
    return typeIsSet_;
}

void DbDataStore::unsettype()
{
    typeIsSet_ = false;
}

std::string DbDataStore::getVersion() const
{
    return version_;
}

void DbDataStore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DbDataStore::versionIsSet() const
{
    return versionIsSet_;
}

void DbDataStore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


