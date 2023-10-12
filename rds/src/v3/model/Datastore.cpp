

#include "huaweicloud/rds/v3/model/Datastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Datastore::Datastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    completeVersion_ = "";
    completeVersionIsSet_ = false;
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
    if(completeVersionIsSet_) {
        val[utility::conversions::to_string_t("complete_version")] = ModelBase::toJson(completeVersion_);
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
    if(val.has_field(utility::conversions::to_string_t("complete_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("complete_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompleteVersion(refVal);
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

std::string Datastore::getCompleteVersion() const
{
    return completeVersion_;
}

void Datastore::setCompleteVersion(const std::string& value)
{
    completeVersion_ = value;
    completeVersionIsSet_ = true;
}

bool Datastore::completeVersionIsSet() const
{
    return completeVersionIsSet_;
}

void Datastore::unsetcompleteVersion()
{
    completeVersionIsSet_ = false;
}

}
}
}
}
}


