

#include "huaweicloud/cbr/v1/model/ResourceExtraInfoIncludeVolumes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ResourceExtraInfoIncludeVolumes::ResourceExtraInfoIncludeVolumes()
{
    id_ = "";
    idIsSet_ = false;
    osVersion_ = "";
    osVersionIsSet_ = false;
}

ResourceExtraInfoIncludeVolumes::~ResourceExtraInfoIncludeVolumes() = default;

void ResourceExtraInfoIncludeVolumes::validate()
{
}

web::json::value ResourceExtraInfoIncludeVolumes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(osVersionIsSet_) {
        val[utility::conversions::to_string_t("os_version")] = ModelBase::toJson(osVersion_);
    }

    return val;
}
bool ResourceExtraInfoIncludeVolumes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVersion(refVal);
        }
    }
    return ok;
}


std::string ResourceExtraInfoIncludeVolumes::getId() const
{
    return id_;
}

void ResourceExtraInfoIncludeVolumes::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourceExtraInfoIncludeVolumes::idIsSet() const
{
    return idIsSet_;
}

void ResourceExtraInfoIncludeVolumes::unsetid()
{
    idIsSet_ = false;
}

std::string ResourceExtraInfoIncludeVolumes::getOsVersion() const
{
    return osVersion_;
}

void ResourceExtraInfoIncludeVolumes::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool ResourceExtraInfoIncludeVolumes::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void ResourceExtraInfoIncludeVolumes::unsetosVersion()
{
    osVersionIsSet_ = false;
}

}
}
}
}
}


