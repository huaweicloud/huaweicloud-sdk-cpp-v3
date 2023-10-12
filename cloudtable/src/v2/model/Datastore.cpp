

#include "huaweicloud/cloudtable/v2/model/Datastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




Datastore::Datastore()
{
    version_ = "";
    versionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

Datastore::~Datastore() = default;

void Datastore::validate()
{
}

web::json::value Datastore::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool Datastore::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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

}
}
}
}
}


