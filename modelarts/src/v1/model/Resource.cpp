

#include "huaweicloud/modelarts/v1/model/Resource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Resource::Resource()
{
    policy_ = "";
    policyIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    flavorName_ = "";
    flavorNameIsSet_ = false;
    nodeCount_ = 0;
    nodeCountIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    poolGroupId_ = "";
    poolGroupIdIsSet_ = false;
    flavorDetailIsSet_ = false;
    mainContainerAllocatedResourcesIsSet_ = false;
    mainContainerCustomizedFlavorIsSet_ = false;
}

Resource::~Resource() = default;

void Resource::validate()
{
}

web::json::value Resource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(flavorNameIsSet_) {
        val[utility::conversions::to_string_t("flavor_name")] = ModelBase::toJson(flavorName_);
    }
    if(nodeCountIsSet_) {
        val[utility::conversions::to_string_t("node_count")] = ModelBase::toJson(nodeCount_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(poolGroupIdIsSet_) {
        val[utility::conversions::to_string_t("pool_group_id")] = ModelBase::toJson(poolGroupId_);
    }
    if(flavorDetailIsSet_) {
        val[utility::conversions::to_string_t("flavor_detail")] = ModelBase::toJson(flavorDetail_);
    }
    if(mainContainerAllocatedResourcesIsSet_) {
        val[utility::conversions::to_string_t("main_container_allocated_resources")] = ModelBase::toJson(mainContainerAllocatedResources_);
    }
    if(mainContainerCustomizedFlavorIsSet_) {
        val[utility::conversions::to_string_t("main_container_customized_flavor")] = ModelBase::toJson(mainContainerCustomizedFlavor_);
    }

    return val;
}
bool Resource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_detail"));
        if(!fieldValue.is_null())
        {
            FlavorDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("main_container_allocated_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main_container_allocated_resources"));
        if(!fieldValue.is_null())
        {
            MainContainerAllocatedResources refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMainContainerAllocatedResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("main_container_customized_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("main_container_customized_flavor"));
        if(!fieldValue.is_null())
        {
            MainContainerCustomizedFlavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMainContainerCustomizedFlavor(refVal);
        }
    }
    return ok;
}


std::string Resource::getPolicy() const
{
    return policy_;
}

void Resource::setPolicy(const std::string& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool Resource::policyIsSet() const
{
    return policyIsSet_;
}

void Resource::unsetpolicy()
{
    policyIsSet_ = false;
}

std::string Resource::getFlavorId() const
{
    return flavorId_;
}

void Resource::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool Resource::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void Resource::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string Resource::getFlavorName() const
{
    return flavorName_;
}

void Resource::setFlavorName(const std::string& value)
{
    flavorName_ = value;
    flavorNameIsSet_ = true;
}

bool Resource::flavorNameIsSet() const
{
    return flavorNameIsSet_;
}

void Resource::unsetflavorName()
{
    flavorNameIsSet_ = false;
}

int32_t Resource::getNodeCount() const
{
    return nodeCount_;
}

void Resource::setNodeCount(int32_t value)
{
    nodeCount_ = value;
    nodeCountIsSet_ = true;
}

bool Resource::nodeCountIsSet() const
{
    return nodeCountIsSet_;
}

void Resource::unsetnodeCount()
{
    nodeCountIsSet_ = false;
}

std::string Resource::getPoolId() const
{
    return poolId_;
}

void Resource::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool Resource::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void Resource::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string Resource::getPoolGroupId() const
{
    return poolGroupId_;
}

void Resource::setPoolGroupId(const std::string& value)
{
    poolGroupId_ = value;
    poolGroupIdIsSet_ = true;
}

bool Resource::poolGroupIdIsSet() const
{
    return poolGroupIdIsSet_;
}

void Resource::unsetpoolGroupId()
{
    poolGroupIdIsSet_ = false;
}

FlavorDetail Resource::getFlavorDetail() const
{
    return flavorDetail_;
}

void Resource::setFlavorDetail(const FlavorDetail& value)
{
    flavorDetail_ = value;
    flavorDetailIsSet_ = true;
}

bool Resource::flavorDetailIsSet() const
{
    return flavorDetailIsSet_;
}

void Resource::unsetflavorDetail()
{
    flavorDetailIsSet_ = false;
}

MainContainerAllocatedResources Resource::getMainContainerAllocatedResources() const
{
    return mainContainerAllocatedResources_;
}

void Resource::setMainContainerAllocatedResources(const MainContainerAllocatedResources& value)
{
    mainContainerAllocatedResources_ = value;
    mainContainerAllocatedResourcesIsSet_ = true;
}

bool Resource::mainContainerAllocatedResourcesIsSet() const
{
    return mainContainerAllocatedResourcesIsSet_;
}

void Resource::unsetmainContainerAllocatedResources()
{
    mainContainerAllocatedResourcesIsSet_ = false;
}

MainContainerCustomizedFlavor Resource::getMainContainerCustomizedFlavor() const
{
    return mainContainerCustomizedFlavor_;
}

void Resource::setMainContainerCustomizedFlavor(const MainContainerCustomizedFlavor& value)
{
    mainContainerCustomizedFlavor_ = value;
    mainContainerCustomizedFlavorIsSet_ = true;
}

bool Resource::mainContainerCustomizedFlavorIsSet() const
{
    return mainContainerCustomizedFlavorIsSet_;
}

void Resource::unsetmainContainerCustomizedFlavor()
{
    mainContainerCustomizedFlavorIsSet_ = false;
}

}
}
}
}
}


