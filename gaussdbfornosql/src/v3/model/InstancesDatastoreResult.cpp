

#include "huaweicloud/gaussdbfornosql/v3/model/InstancesDatastoreResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




InstancesDatastoreResult::InstancesDatastoreResult()
{
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

InstancesDatastoreResult::~InstancesDatastoreResult() = default;

void InstancesDatastoreResult::validate()
{
}

web::json::value InstancesDatastoreResult::toJson() const
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
bool InstancesDatastoreResult::fromJson(const web::json::value& val)
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


std::string InstancesDatastoreResult::getType() const
{
    return type_;
}

void InstancesDatastoreResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool InstancesDatastoreResult::typeIsSet() const
{
    return typeIsSet_;
}

void InstancesDatastoreResult::unsettype()
{
    typeIsSet_ = false;
}

std::string InstancesDatastoreResult::getVersion() const
{
    return version_;
}

void InstancesDatastoreResult::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool InstancesDatastoreResult::versionIsSet() const
{
    return versionIsSet_;
}

void InstancesDatastoreResult::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


