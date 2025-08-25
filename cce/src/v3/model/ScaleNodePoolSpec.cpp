

#include "huaweicloud/cce/v3/model/ScaleNodePoolSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleNodePoolSpec::ScaleNodePoolSpec()
{
    desiredNodeCount_ = 0;
    desiredNodeCountIsSet_ = false;
    scaleGroupsIsSet_ = false;
    optionsIsSet_ = false;
}

ScaleNodePoolSpec::~ScaleNodePoolSpec() = default;

void ScaleNodePoolSpec::validate()
{
}

web::json::value ScaleNodePoolSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(desiredNodeCountIsSet_) {
        val[utility::conversions::to_string_t("desiredNodeCount")] = ModelBase::toJson(desiredNodeCount_);
    }
    if(scaleGroupsIsSet_) {
        val[utility::conversions::to_string_t("scaleGroups")] = ModelBase::toJson(scaleGroups_);
    }
    if(optionsIsSet_) {
        val[utility::conversions::to_string_t("options")] = ModelBase::toJson(options_);
    }

    return val;
}
bool ScaleNodePoolSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("desiredNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desiredNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesiredNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaleGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaleGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScaleGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("options"));
        if(!fieldValue.is_null())
        {
            ScaleNodePoolOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOptions(refVal);
        }
    }
    return ok;
}


int32_t ScaleNodePoolSpec::getDesiredNodeCount() const
{
    return desiredNodeCount_;
}

void ScaleNodePoolSpec::setDesiredNodeCount(int32_t value)
{
    desiredNodeCount_ = value;
    desiredNodeCountIsSet_ = true;
}

bool ScaleNodePoolSpec::desiredNodeCountIsSet() const
{
    return desiredNodeCountIsSet_;
}

void ScaleNodePoolSpec::unsetdesiredNodeCount()
{
    desiredNodeCountIsSet_ = false;
}

std::vector<std::string>& ScaleNodePoolSpec::getScaleGroups()
{
    return scaleGroups_;
}

void ScaleNodePoolSpec::setScaleGroups(const std::vector<std::string>& value)
{
    scaleGroups_ = value;
    scaleGroupsIsSet_ = true;
}

bool ScaleNodePoolSpec::scaleGroupsIsSet() const
{
    return scaleGroupsIsSet_;
}

void ScaleNodePoolSpec::unsetscaleGroups()
{
    scaleGroupsIsSet_ = false;
}

ScaleNodePoolOptions ScaleNodePoolSpec::getOptions() const
{
    return options_;
}

void ScaleNodePoolSpec::setOptions(const ScaleNodePoolOptions& value)
{
    options_ = value;
    optionsIsSet_ = true;
}

bool ScaleNodePoolSpec::optionsIsSet() const
{
    return optionsIsSet_;
}

void ScaleNodePoolSpec::unsetoptions()
{
    optionsIsSet_ = false;
}

}
}
}
}
}


