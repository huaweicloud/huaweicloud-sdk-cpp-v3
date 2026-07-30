

#include "huaweicloud/modelarts/v1/model/RequiredAffinityResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RequiredAffinityResp::RequiredAffinityResp()
{
    affinityType_ = "";
    affinityTypeIsSet_ = false;
    jobLevel_ = "";
    jobLevelIsSet_ = false;
    affinityGroupSize_ = 0;
    affinityGroupSizeIsSet_ = false;
    affinityGroupLevel_ = "";
    affinityGroupLevelIsSet_ = false;
}

RequiredAffinityResp::~RequiredAffinityResp() = default;

void RequiredAffinityResp::validate()
{
}

web::json::value RequiredAffinityResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(affinityTypeIsSet_) {
        val[utility::conversions::to_string_t("affinity_type")] = ModelBase::toJson(affinityType_);
    }
    if(jobLevelIsSet_) {
        val[utility::conversions::to_string_t("job_level")] = ModelBase::toJson(jobLevel_);
    }
    if(affinityGroupSizeIsSet_) {
        val[utility::conversions::to_string_t("affinity_group_size")] = ModelBase::toJson(affinityGroupSize_);
    }
    if(affinityGroupLevelIsSet_) {
        val[utility::conversions::to_string_t("affinity_group_level")] = ModelBase::toJson(affinityGroupLevel_);
    }

    return val;
}
bool RequiredAffinityResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("affinity_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affinity_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffinityType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affinity_group_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affinity_group_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffinityGroupSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affinity_group_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affinity_group_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffinityGroupLevel(refVal);
        }
    }
    return ok;
}


std::string RequiredAffinityResp::getAffinityType() const
{
    return affinityType_;
}

void RequiredAffinityResp::setAffinityType(const std::string& value)
{
    affinityType_ = value;
    affinityTypeIsSet_ = true;
}

bool RequiredAffinityResp::affinityTypeIsSet() const
{
    return affinityTypeIsSet_;
}

void RequiredAffinityResp::unsetaffinityType()
{
    affinityTypeIsSet_ = false;
}

std::string RequiredAffinityResp::getJobLevel() const
{
    return jobLevel_;
}

void RequiredAffinityResp::setJobLevel(const std::string& value)
{
    jobLevel_ = value;
    jobLevelIsSet_ = true;
}

bool RequiredAffinityResp::jobLevelIsSet() const
{
    return jobLevelIsSet_;
}

void RequiredAffinityResp::unsetjobLevel()
{
    jobLevelIsSet_ = false;
}

int32_t RequiredAffinityResp::getAffinityGroupSize() const
{
    return affinityGroupSize_;
}

void RequiredAffinityResp::setAffinityGroupSize(int32_t value)
{
    affinityGroupSize_ = value;
    affinityGroupSizeIsSet_ = true;
}

bool RequiredAffinityResp::affinityGroupSizeIsSet() const
{
    return affinityGroupSizeIsSet_;
}

void RequiredAffinityResp::unsetaffinityGroupSize()
{
    affinityGroupSizeIsSet_ = false;
}

std::string RequiredAffinityResp::getAffinityGroupLevel() const
{
    return affinityGroupLevel_;
}

void RequiredAffinityResp::setAffinityGroupLevel(const std::string& value)
{
    affinityGroupLevel_ = value;
    affinityGroupLevelIsSet_ = true;
}

bool RequiredAffinityResp::affinityGroupLevelIsSet() const
{
    return affinityGroupLevelIsSet_;
}

void RequiredAffinityResp::unsetaffinityGroupLevel()
{
    affinityGroupLevelIsSet_ = false;
}

}
}
}
}
}


