

#include "huaweicloud/rds/v3/model/SupabaseDatastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseDatastore::SupabaseDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

SupabaseDatastore::~SupabaseDatastore() = default;

void SupabaseDatastore::validate()
{
}

web::json::value SupabaseDatastore::toJson() const
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
bool SupabaseDatastore::fromJson(const web::json::value& val)
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


std::string SupabaseDatastore::getType() const
{
    return type_;
}

void SupabaseDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SupabaseDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void SupabaseDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string SupabaseDatastore::getVersion() const
{
    return version_;
}

void SupabaseDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool SupabaseDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void SupabaseDatastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


