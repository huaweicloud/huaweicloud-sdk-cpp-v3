

#include "huaweicloud/rds/v3/model/ParaGroupDatastore.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ParaGroupDatastore::ParaGroupDatastore()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ParaGroupDatastore::~ParaGroupDatastore() = default;

void ParaGroupDatastore::validate()
{
}

web::json::value ParaGroupDatastore::toJson() const
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
bool ParaGroupDatastore::fromJson(const web::json::value& val)
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


std::string ParaGroupDatastore::getType() const
{
    return type_;
}

void ParaGroupDatastore::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ParaGroupDatastore::typeIsSet() const
{
    return typeIsSet_;
}

void ParaGroupDatastore::unsettype()
{
    typeIsSet_ = false;
}

std::string ParaGroupDatastore::getVersion() const
{
    return version_;
}

void ParaGroupDatastore::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ParaGroupDatastore::versionIsSet() const
{
    return versionIsSet_;
}

void ParaGroupDatastore::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


