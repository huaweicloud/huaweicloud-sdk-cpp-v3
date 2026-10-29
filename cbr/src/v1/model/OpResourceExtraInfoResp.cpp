

#include "huaweicloud/cbr/v1/model/OpResourceExtraInfoResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




OpResourceExtraInfoResp::OpResourceExtraInfoResp()
{
    excludeVolumesIsSet_ = false;
    includeVolumesIsSet_ = false;
}

OpResourceExtraInfoResp::~OpResourceExtraInfoResp() = default;

void OpResourceExtraInfoResp::validate()
{
}

web::json::value OpResourceExtraInfoResp::toJson() const
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
bool OpResourceExtraInfoResp::fromJson(const web::json::value& val)
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
            std::vector<ResourceExtraInfoIncludeVolumesResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeVolumes(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& OpResourceExtraInfoResp::getExcludeVolumes()
{
    return excludeVolumes_;
}

void OpResourceExtraInfoResp::setExcludeVolumes(const std::vector<std::string>& value)
{
    excludeVolumes_ = value;
    excludeVolumesIsSet_ = true;
}

bool OpResourceExtraInfoResp::excludeVolumesIsSet() const
{
    return excludeVolumesIsSet_;
}

void OpResourceExtraInfoResp::unsetexcludeVolumes()
{
    excludeVolumesIsSet_ = false;
}

std::vector<ResourceExtraInfoIncludeVolumesResp>& OpResourceExtraInfoResp::getIncludeVolumes()
{
    return includeVolumes_;
}

void OpResourceExtraInfoResp::setIncludeVolumes(const std::vector<ResourceExtraInfoIncludeVolumesResp>& value)
{
    includeVolumes_ = value;
    includeVolumesIsSet_ = true;
}

bool OpResourceExtraInfoResp::includeVolumesIsSet() const
{
    return includeVolumesIsSet_;
}

void OpResourceExtraInfoResp::unsetincludeVolumes()
{
    includeVolumesIsSet_ = false;
}

}
}
}
}
}


