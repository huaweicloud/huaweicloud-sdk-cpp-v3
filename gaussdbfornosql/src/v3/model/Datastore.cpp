

#include "huaweicloud/gaussdbfornosql/v3/model/Datastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




Datastore::Datastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

Datastore::~Datastore() = default;

void Datastore::validate()
{
}

web::json::value Datastore::toJson() const
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
bool Datastore::fromJson(const web::json::value& val)
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


std::string Datastore::getType() const
{
    return type_;
}

void Datastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Datastore::typeIsSet() const
{
    return typeIsSet_;
}

void Datastore::unsettype()
{
    typeIsSet_ = false;
}

std::string Datastore::getVersion() const
{
    return version_;
}

void Datastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Datastore::versionIsSet() const
{
    return versionIsSet_;
}

void Datastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


