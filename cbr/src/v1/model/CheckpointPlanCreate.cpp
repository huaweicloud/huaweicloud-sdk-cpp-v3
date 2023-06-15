

#include "huaweicloud/cbr/v1/model/CheckpointPlanCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckpointPlanCreate::CheckpointPlanCreate()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    resourcesIsSet_ = false;
    skippedResourcesIsSet_ = false;
}

CheckpointPlanCreate::~CheckpointPlanCreate() = default;

void CheckpointPlanCreate::validate()
{
}

web::json::value CheckpointPlanCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(skippedResourcesIsSet_) {
        val[utility::conversions::to_string_t("skipped_resources")] = ModelBase::toJson(skippedResources_);
    }

    return val;
}

bool CheckpointPlanCreate::fromJson(const web::json::value& val)
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
            std::vector<CheckpointResourceResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skipped_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skipped_resources"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckpointCreateSkippedResource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkippedResources(refVal);
        }
    }
    return ok;
}


std::string CheckpointPlanCreate::getId() const
{
    return id_;
}

void CheckpointPlanCreate::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CheckpointPlanCreate::idIsSet() const
{
    return idIsSet_;
}

void CheckpointPlanCreate::unsetid()
{
    idIsSet_ = false;
}

std::string CheckpointPlanCreate::getName() const
{
    return name_;
}

void CheckpointPlanCreate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CheckpointPlanCreate::nameIsSet() const
{
    return nameIsSet_;
}

void CheckpointPlanCreate::unsetname()
{
    nameIsSet_ = false;
}

std::vector<CheckpointResourceResp>& CheckpointPlanCreate::getResources()
{
    return resources_;
}

void CheckpointPlanCreate::setResources(const std::vector<CheckpointResourceResp>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool CheckpointPlanCreate::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void CheckpointPlanCreate::unsetresources()
{
    resourcesIsSet_ = false;
}

std::vector<CheckpointCreateSkippedResource>& CheckpointPlanCreate::getSkippedResources()
{
    return skippedResources_;
}

void CheckpointPlanCreate::setSkippedResources(const std::vector<CheckpointCreateSkippedResource>& value)
{
    skippedResources_ = value;
    skippedResourcesIsSet_ = true;
}

bool CheckpointPlanCreate::skippedResourcesIsSet() const
{
    return skippedResourcesIsSet_;
}

void CheckpointPlanCreate::unsetskippedResources()
{
    skippedResourcesIsSet_ = false;
}

}
}
}
}
}


