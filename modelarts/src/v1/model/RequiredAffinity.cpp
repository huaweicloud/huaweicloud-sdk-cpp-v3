

#include "huaweicloud/modelarts/v1/model/RequiredAffinity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RequiredAffinity::RequiredAffinity()
{
    affinityType_ = "";
    affinityTypeIsSet_ = false;
    jobLevel_ = "";
    jobLevelIsSet_ = false;
    affinityGroupSize_ = 0;
    affinityGroupSizeIsSet_ = false;
    affinityGroupLevel_ = "";
    affinityGroupLevelIsSet_ = false;
    nodeAffinityIsSet_ = false;
}

RequiredAffinity::~RequiredAffinity() = default;

void RequiredAffinity::validate()
{
}

web::json::value RequiredAffinity::toJson() const
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
    if(nodeAffinityIsSet_) {
        val[utility::conversions::to_string_t("node_affinity")] = ModelBase::toJson(nodeAffinity_);
    }

    return val;
}
bool RequiredAffinity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("node_affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_affinity"));
        if(!fieldValue.is_null())
        {
            NodeSelector refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeAffinity(refVal);
        }
    }
    return ok;
}


std::string RequiredAffinity::getAffinityType() const
{
    return affinityType_;
}

void RequiredAffinity::setAffinityType(const std::string& value)
{
    affinityType_ = value;
    affinityTypeIsSet_ = true;
}

bool RequiredAffinity::affinityTypeIsSet() const
{
    return affinityTypeIsSet_;
}

void RequiredAffinity::unsetaffinityType()
{
    affinityTypeIsSet_ = false;
}

std::string RequiredAffinity::getJobLevel() const
{
    return jobLevel_;
}

void RequiredAffinity::setJobLevel(const std::string& value)
{
    jobLevel_ = value;
    jobLevelIsSet_ = true;
}

bool RequiredAffinity::jobLevelIsSet() const
{
    return jobLevelIsSet_;
}

void RequiredAffinity::unsetjobLevel()
{
    jobLevelIsSet_ = false;
}

int32_t RequiredAffinity::getAffinityGroupSize() const
{
    return affinityGroupSize_;
}

void RequiredAffinity::setAffinityGroupSize(int32_t value)
{
    affinityGroupSize_ = value;
    affinityGroupSizeIsSet_ = true;
}

bool RequiredAffinity::affinityGroupSizeIsSet() const
{
    return affinityGroupSizeIsSet_;
}

void RequiredAffinity::unsetaffinityGroupSize()
{
    affinityGroupSizeIsSet_ = false;
}

std::string RequiredAffinity::getAffinityGroupLevel() const
{
    return affinityGroupLevel_;
}

void RequiredAffinity::setAffinityGroupLevel(const std::string& value)
{
    affinityGroupLevel_ = value;
    affinityGroupLevelIsSet_ = true;
}

bool RequiredAffinity::affinityGroupLevelIsSet() const
{
    return affinityGroupLevelIsSet_;
}

void RequiredAffinity::unsetaffinityGroupLevel()
{
    affinityGroupLevelIsSet_ = false;
}

NodeSelector RequiredAffinity::getNodeAffinity() const
{
    return nodeAffinity_;
}

void RequiredAffinity::setNodeAffinity(const NodeSelector& value)
{
    nodeAffinity_ = value;
    nodeAffinityIsSet_ = true;
}

bool RequiredAffinity::nodeAffinityIsSet() const
{
    return nodeAffinityIsSet_;
}

void RequiredAffinity::unsetnodeAffinity()
{
    nodeAffinityIsSet_ = false;
}

}
}
}
}
}


