

#include "huaweicloud/modelarts/v1/model/SpecResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SpecResource::SpecResource()
{
    flavorId_ = "";
    flavorIdIsSet_ = false;
    nodeCount_ = 0;
    nodeCountIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    poolGroupId_ = "";
    poolGroupIdIsSet_ = false;
    mainContainerCustomizedFlavorIsSet_ = false;
}

SpecResource::~SpecResource() = default;

void SpecResource::validate()
{
}

web::json::value SpecResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
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
    if(mainContainerCustomizedFlavorIsSet_) {
        val[utility::conversions::to_string_t("main_container_customized_flavor")] = ModelBase::toJson(mainContainerCustomizedFlavor_);
    }

    return val;
}
bool SpecResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
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


std::string SpecResource::getFlavorId() const
{
    return flavorId_;
}

void SpecResource::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool SpecResource::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void SpecResource::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

int32_t SpecResource::getNodeCount() const
{
    return nodeCount_;
}

void SpecResource::setNodeCount(int32_t value)
{
    nodeCount_ = value;
    nodeCountIsSet_ = true;
}

bool SpecResource::nodeCountIsSet() const
{
    return nodeCountIsSet_;
}

void SpecResource::unsetnodeCount()
{
    nodeCountIsSet_ = false;
}

std::string SpecResource::getPoolId() const
{
    return poolId_;
}

void SpecResource::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool SpecResource::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void SpecResource::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string SpecResource::getPoolGroupId() const
{
    return poolGroupId_;
}

void SpecResource::setPoolGroupId(const std::string& value)
{
    poolGroupId_ = value;
    poolGroupIdIsSet_ = true;
}

bool SpecResource::poolGroupIdIsSet() const
{
    return poolGroupIdIsSet_;
}

void SpecResource::unsetpoolGroupId()
{
    poolGroupIdIsSet_ = false;
}

MainContainerCustomizedFlavor SpecResource::getMainContainerCustomizedFlavor() const
{
    return mainContainerCustomizedFlavor_;
}

void SpecResource::setMainContainerCustomizedFlavor(const MainContainerCustomizedFlavor& value)
{
    mainContainerCustomizedFlavor_ = value;
    mainContainerCustomizedFlavorIsSet_ = true;
}

bool SpecResource::mainContainerCustomizedFlavorIsSet() const
{
    return mainContainerCustomizedFlavorIsSet_;
}

void SpecResource::unsetmainContainerCustomizedFlavor()
{
    mainContainerCustomizedFlavorIsSet_ = false;
}

}
}
}
}
}


