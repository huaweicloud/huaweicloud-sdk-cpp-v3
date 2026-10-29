

#include "huaweicloud/cbr/v1/model/ResourceExtraInfoIncludeVolumesResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ResourceExtraInfoIncludeVolumesResp::ResourceExtraInfoIncludeVolumesResp()
{
    id_ = "";
    idIsSet_ = false;
    osVersion_ = "";
    osVersionIsSet_ = false;
}

ResourceExtraInfoIncludeVolumesResp::~ResourceExtraInfoIncludeVolumesResp() = default;

void ResourceExtraInfoIncludeVolumesResp::validate()
{
}

web::json::value ResourceExtraInfoIncludeVolumesResp::toJson() const
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
bool ResourceExtraInfoIncludeVolumesResp::fromJson(const web::json::value& val)
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


std::string ResourceExtraInfoIncludeVolumesResp::getId() const
{
    return id_;
}

void ResourceExtraInfoIncludeVolumesResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ResourceExtraInfoIncludeVolumesResp::idIsSet() const
{
    return idIsSet_;
}

void ResourceExtraInfoIncludeVolumesResp::unsetid()
{
    idIsSet_ = false;
}

std::string ResourceExtraInfoIncludeVolumesResp::getOsVersion() const
{
    return osVersion_;
}

void ResourceExtraInfoIncludeVolumesResp::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool ResourceExtraInfoIncludeVolumesResp::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void ResourceExtraInfoIncludeVolumesResp::unsetosVersion()
{
    osVersionIsSet_ = false;
}

}
}
}
}
}


