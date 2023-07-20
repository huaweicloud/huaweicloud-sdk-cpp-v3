

#include "huaweicloud/dds/v3/model/RecycleDatastore.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RecycleDatastore::RecycleDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

RecycleDatastore::~RecycleDatastore() = default;

void RecycleDatastore::validate()
{
}

web::json::value RecycleDatastore::toJson() const
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

bool RecycleDatastore::fromJson(const web::json::value& val)
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

std::string RecycleDatastore::getType() const
{
    return type_;
}

void RecycleDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RecycleDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void RecycleDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string RecycleDatastore::getVersion() const
{
    return version_;
}

void RecycleDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool RecycleDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void RecycleDatastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


