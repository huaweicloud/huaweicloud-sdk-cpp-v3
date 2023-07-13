

#include "huaweicloud/cbr/v1/model/CheckpointParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointParam::CheckpointParam()
{
    autoTrigger_ = false;
    autoTriggerIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    incremental_ = false;
    incrementalIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    resourcesIsSet_ = false;
    resourceDetailsIsSet_ = false;
    policyId_ = "";
    policyIdIsSet_ = false;
}

CheckpointParam::~CheckpointParam() = default;

void CheckpointParam::validate()
{
}

web::json::value CheckpointParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(autoTriggerIsSet_) {
        val[utility::conversions::to_string_t("auto_trigger")] = ModelBase::toJson(autoTrigger_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(incrementalIsSet_) {
        val[utility::conversions::to_string_t("incremental")] = ModelBase::toJson(incremental_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(resourceDetailsIsSet_) {
        val[utility::conversions::to_string_t("resource_details")] = ModelBase::toJson(resourceDetails_);
    }
    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policy_id")] = ModelBase::toJson(policyId_);
    }

    return val;
}

bool CheckpointParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auto_trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_trigger"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoTrigger(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incremental"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incremental"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncremental(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_details"));
        if(!fieldValue.is_null())
        {
            std::vector<Resource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
        }
    }
    return ok;
}

bool CheckpointParam::isAutoTrigger() const
{
    return autoTrigger_;
}

void CheckpointParam::setAutoTrigger(bool value)
{
    autoTrigger_ = value;
    autoTriggerIsSet_ = true;
}

bool CheckpointParam::autoTriggerIsSet() const
{
    return autoTriggerIsSet_;
}

void CheckpointParam::unsetautoTrigger()
{
    autoTriggerIsSet_ = false;
}

std::string CheckpointParam::getDescription() const
{
    return description_;
}

void CheckpointParam::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CheckpointParam::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CheckpointParam::unsetdescription()
{
    descriptionIsSet_ = false;
}

bool CheckpointParam::isIncremental() const
{
    return incremental_;
}

void CheckpointParam::setIncremental(bool value)
{
    incremental_ = value;
    incrementalIsSet_ = true;
}

bool CheckpointParam::incrementalIsSet() const
{
    return incrementalIsSet_;
}

void CheckpointParam::unsetincremental()
{
    incrementalIsSet_ = false;
}

std::string CheckpointParam::getName() const
{
    return name_;
}

void CheckpointParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CheckpointParam::nameIsSet() const
{
    return nameIsSet_;
}

void CheckpointParam::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CheckpointParam::getResources()
{
    return resources_;
}

void CheckpointParam::setResources(const std::vector<std::string>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool CheckpointParam::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void CheckpointParam::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<Resource>& CheckpointParam::getResourceDetails()
{
    return resourceDetails_;
}

void CheckpointParam::setResourceDetails(const std::vector<Resource>& value)
{
    resourceDetails_ = value;
    resourceDetailsIsSet_ = true;
}

bool CheckpointParam::resourceDetailsIsSet() const
{
    return resourceDetailsIsSet_;
}

void CheckpointParam::unsetresourceDetails()
{
    resourceDetailsIsSet_ = false;
}

std::string CheckpointParam::getPolicyId() const
{
    return policyId_;
}

void CheckpointParam::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool CheckpointParam::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void CheckpointParam::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

}
}
}
}
}


