

#include "huaweicloud/cce/v3/model/ScaleGroupStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ScaleGroupStatus::ScaleGroupStatus()
{
    name_ = "";
    nameIsSet_ = false;
    uid_ = "";
    uidIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
    updateTimestamp_ = "";
    updateTimestampIsSet_ = false;
    phase_ = "";
    phaseIsSet_ = false;
    desiredNodeCount_ = 0;
    desiredNodeCountIsSet_ = false;
    unpaidScaleNodeCount_ = 0;
    unpaidScaleNodeCountIsSet_ = false;
    existingNodeCountIsSet_ = false;
    upcomingNodeCountIsSet_ = false;
    scaleDownDisabledNodeCount_ = 0;
    scaleDownDisabledNodeCountIsSet_ = false;
    conditionsIsSet_ = false;
}

ScaleGroupStatus::~ScaleGroupStatus() = default;

void ScaleGroupStatus::validate()
{
}

web::json::value ScaleGroupStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }
    if(updateTimestampIsSet_) {
        val[utility::conversions::to_string_t("updateTimestamp")] = ModelBase::toJson(updateTimestamp_);
    }
    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(desiredNodeCountIsSet_) {
        val[utility::conversions::to_string_t("desiredNodeCount")] = ModelBase::toJson(desiredNodeCount_);
    }
    if(unpaidScaleNodeCountIsSet_) {
        val[utility::conversions::to_string_t("unpaidScaleNodeCount")] = ModelBase::toJson(unpaidScaleNodeCount_);
    }
    if(existingNodeCountIsSet_) {
        val[utility::conversions::to_string_t("existingNodeCount")] = ModelBase::toJson(existingNodeCount_);
    }
    if(upcomingNodeCountIsSet_) {
        val[utility::conversions::to_string_t("upcomingNodeCount")] = ModelBase::toJson(upcomingNodeCount_);
    }
    if(scaleDownDisabledNodeCountIsSet_) {
        val[utility::conversions::to_string_t("scaleDownDisabledNodeCount")] = ModelBase::toJson(scaleDownDisabledNodeCount_);
    }
    if(conditionsIsSet_) {
        val[utility::conversions::to_string_t("conditions")] = ModelBase::toJson(conditions_);
    }

    return val;
}
bool ScaleGroupStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updateTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updateTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("desiredNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desiredNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesiredNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unpaidScaleNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unpaidScaleNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnpaidScaleNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("existingNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("existingNodeCount"));
        if(!fieldValue.is_null())
        {
            ScaleGroupStatus_existingNodeCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExistingNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upcomingNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upcomingNodeCount"));
        if(!fieldValue.is_null())
        {
            ScaleGroupStatus_upcomingNodeCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpcomingNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scaleDownDisabledNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scaleDownDisabledNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScaleDownDisabledNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<NodePoolCondition> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditions(refVal);
        }
    }
    return ok;
}


std::string ScaleGroupStatus::getName() const
{
    return name_;
}

void ScaleGroupStatus::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ScaleGroupStatus::nameIsSet() const
{
    return nameIsSet_;
}

void ScaleGroupStatus::unsetname()
{
    nameIsSet_ = false;
}

std::string ScaleGroupStatus::getUid() const
{
    return uid_;
}

void ScaleGroupStatus::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool ScaleGroupStatus::uidIsSet() const
{
    return uidIsSet_;
}

void ScaleGroupStatus::unsetuid()
{
    uidIsSet_ = false;
}

std::string ScaleGroupStatus::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void ScaleGroupStatus::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool ScaleGroupStatus::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void ScaleGroupStatus::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

std::string ScaleGroupStatus::getUpdateTimestamp() const
{
    return updateTimestamp_;
}

void ScaleGroupStatus::setUpdateTimestamp(const std::string& value)
{
    updateTimestamp_ = value;
    updateTimestampIsSet_ = true;
}

bool ScaleGroupStatus::updateTimestampIsSet() const
{
    return updateTimestampIsSet_;
}

void ScaleGroupStatus::unsetupdateTimestamp()
{
    updateTimestampIsSet_ = false;
}

std::string ScaleGroupStatus::getPhase() const
{
    return phase_;
}

void ScaleGroupStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool ScaleGroupStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void ScaleGroupStatus::unsetphase()
{
    phaseIsSet_ = false;
}

int32_t ScaleGroupStatus::getDesiredNodeCount() const
{
    return desiredNodeCount_;
}

void ScaleGroupStatus::setDesiredNodeCount(int32_t value)
{
    desiredNodeCount_ = value;
    desiredNodeCountIsSet_ = true;
}

bool ScaleGroupStatus::desiredNodeCountIsSet() const
{
    return desiredNodeCountIsSet_;
}

void ScaleGroupStatus::unsetdesiredNodeCount()
{
    desiredNodeCountIsSet_ = false;
}

int32_t ScaleGroupStatus::getUnpaidScaleNodeCount() const
{
    return unpaidScaleNodeCount_;
}

void ScaleGroupStatus::setUnpaidScaleNodeCount(int32_t value)
{
    unpaidScaleNodeCount_ = value;
    unpaidScaleNodeCountIsSet_ = true;
}

bool ScaleGroupStatus::unpaidScaleNodeCountIsSet() const
{
    return unpaidScaleNodeCountIsSet_;
}

void ScaleGroupStatus::unsetunpaidScaleNodeCount()
{
    unpaidScaleNodeCountIsSet_ = false;
}

ScaleGroupStatus_existingNodeCount ScaleGroupStatus::getExistingNodeCount() const
{
    return existingNodeCount_;
}

void ScaleGroupStatus::setExistingNodeCount(const ScaleGroupStatus_existingNodeCount& value)
{
    existingNodeCount_ = value;
    existingNodeCountIsSet_ = true;
}

bool ScaleGroupStatus::existingNodeCountIsSet() const
{
    return existingNodeCountIsSet_;
}

void ScaleGroupStatus::unsetexistingNodeCount()
{
    existingNodeCountIsSet_ = false;
}

ScaleGroupStatus_upcomingNodeCount ScaleGroupStatus::getUpcomingNodeCount() const
{
    return upcomingNodeCount_;
}

void ScaleGroupStatus::setUpcomingNodeCount(const ScaleGroupStatus_upcomingNodeCount& value)
{
    upcomingNodeCount_ = value;
    upcomingNodeCountIsSet_ = true;
}

bool ScaleGroupStatus::upcomingNodeCountIsSet() const
{
    return upcomingNodeCountIsSet_;
}

void ScaleGroupStatus::unsetupcomingNodeCount()
{
    upcomingNodeCountIsSet_ = false;
}

int32_t ScaleGroupStatus::getScaleDownDisabledNodeCount() const
{
    return scaleDownDisabledNodeCount_;
}

void ScaleGroupStatus::setScaleDownDisabledNodeCount(int32_t value)
{
    scaleDownDisabledNodeCount_ = value;
    scaleDownDisabledNodeCountIsSet_ = true;
}

bool ScaleGroupStatus::scaleDownDisabledNodeCountIsSet() const
{
    return scaleDownDisabledNodeCountIsSet_;
}

void ScaleGroupStatus::unsetscaleDownDisabledNodeCount()
{
    scaleDownDisabledNodeCountIsSet_ = false;
}

std::vector<NodePoolCondition>& ScaleGroupStatus::getConditions()
{
    return conditions_;
}

void ScaleGroupStatus::setConditions(const std::vector<NodePoolCondition>& value)
{
    conditions_ = value;
    conditionsIsSet_ = true;
}

bool ScaleGroupStatus::conditionsIsSet() const
{
    return conditionsIsSet_;
}

void ScaleGroupStatus::unsetconditions()
{
    conditionsIsSet_ = false;
}

}
}
}
}
}


