

#include "huaweicloud/cbr/v1/model/ResourceExtraInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ResourceExtraInfo::ResourceExtraInfo()
{
    excludeVolumesIsSet_ = false;
    includeVolumesIsSet_ = false;
}

ResourceExtraInfo::~ResourceExtraInfo() = default;

void ResourceExtraInfo::validate()
{
}

web::json::value ResourceExtraInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(excludeVolumesIsSet_) {
        val[utility::conversions::to_string_t("exclude_volumes")] = ModelBase::toJson(excludeVolumes_);
    }
    if(includeVolumesIsSet_) {
        val[utility::conversions::to_string_t("include_volumes")] = ModelBase::toJson(includeVolumes_);
    }

    return val;
}

bool ResourceExtraInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exclude_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exclude_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcludeVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceExtraInfoIncludeVolumes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeVolumes(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ResourceExtraInfo::getExcludeVolumes()
{
    return excludeVolumes_;
}

void ResourceExtraInfo::setExcludeVolumes(const std::vector<std::string>& value)
{
    excludeVolumes_ = value;
    excludeVolumesIsSet_ = true;
}

bool ResourceExtraInfo::excludeVolumesIsSet() const
{
    return excludeVolumesIsSet_;
}

void ResourceExtraInfo::unsetexcludeVolumes()
{
    excludeVolumesIsSet_ = false;
}

std::vector<ResourceExtraInfoIncludeVolumes>& ResourceExtraInfo::getIncludeVolumes()
{
    return includeVolumes_;
}

void ResourceExtraInfo::setIncludeVolumes(const std::vector<ResourceExtraInfoIncludeVolumes>& value)
{
    includeVolumes_ = value;
    includeVolumesIsSet_ = true;
}

bool ResourceExtraInfo::includeVolumesIsSet() const
{
    return includeVolumesIsSet_;
}

void ResourceExtraInfo::unsetincludeVolumes()
{
    includeVolumesIsSet_ = false;
}

}
}
}
}
}


