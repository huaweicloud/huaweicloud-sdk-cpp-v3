

#include "huaweicloud/sdrs/v1/model/CreateProtectedInstanceRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateProtectedInstanceRequestParams::CreateProtectedInstanceRequestParams()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    primarySubnetId_ = "";
    primarySubnetIdIsSet_ = false;
    primaryIpAddress_ = "";
    primaryIpAddressIsSet_ = false;
    tagsIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    tenancy_ = "";
    tenancyIsSet_ = false;
    dedicatedHostId_ = "";
    dedicatedHostIdIsSet_ = false;
}

CreateProtectedInstanceRequestParams::~CreateProtectedInstanceRequestParams() = default;

void CreateProtectedInstanceRequestParams::validate()
{
}

web::json::value CreateProtectedInstanceRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(primarySubnetIdIsSet_) {
        val[utility::conversions::to_string_t("primary_subnet_id")] = ModelBase::toJson(primarySubnetId_);
    }
    if(primaryIpAddressIsSet_) {
        val[utility::conversions::to_string_t("primary_ip_address")] = ModelBase::toJson(primaryIpAddress_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavorRef")] = ModelBase::toJson(flavorRef_);
    }
    if(tenancyIsSet_) {
        val[utility::conversions::to_string_t("tenancy")] = ModelBase::toJson(tenancy_);
    }
    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_host_id")] = ModelBase::toJson(dedicatedHostId_);
    }

    return val;
}

bool CreateProtectedInstanceRequestParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary_subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimarySubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavorRef"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavorRef"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenancy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenancy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenancy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicated_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedHostId(refVal);
        }
    }
    return ok;
}


std::string CreateProtectedInstanceRequestParams::getServerGroupId() const
{
    return serverGroupId_;
}

void CreateProtectedInstanceRequestParams::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void CreateProtectedInstanceRequestParams::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string CreateProtectedInstanceRequestParams::getServerId() const
{
    return serverId_;
}

void CreateProtectedInstanceRequestParams::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void CreateProtectedInstanceRequestParams::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string CreateProtectedInstanceRequestParams::getName() const
{
    return name_;
}

void CreateProtectedInstanceRequestParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::nameIsSet() const
{
    return nameIsSet_;
}

void CreateProtectedInstanceRequestParams::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateProtectedInstanceRequestParams::getDescription() const
{
    return description_;
}

void CreateProtectedInstanceRequestParams::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateProtectedInstanceRequestParams::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateProtectedInstanceRequestParams::getClusterId() const
{
    return clusterId_;
}

void CreateProtectedInstanceRequestParams::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CreateProtectedInstanceRequestParams::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string CreateProtectedInstanceRequestParams::getPrimarySubnetId() const
{
    return primarySubnetId_;
}

void CreateProtectedInstanceRequestParams::setPrimarySubnetId(const std::string& value)
{
    primarySubnetId_ = value;
    primarySubnetIdIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::primarySubnetIdIsSet() const
{
    return primarySubnetIdIsSet_;
}

void CreateProtectedInstanceRequestParams::unsetprimarySubnetId()
{
    primarySubnetIdIsSet_ = false;
}

std::string CreateProtectedInstanceRequestParams::getPrimaryIpAddress() const
{
    return primaryIpAddress_;
}

void CreateProtectedInstanceRequestParams::setPrimaryIpAddress(const std::string& value)
{
    primaryIpAddress_ = value;
    primaryIpAddressIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::primaryIpAddressIsSet() const
{
    return primaryIpAddressIsSet_;
}

void CreateProtectedInstanceRequestParams::unsetprimaryIpAddress()
{
    primaryIpAddressIsSet_ = false;
}

std::vector<ResourceTag>& CreateProtectedInstanceRequestParams::getTags()
{
    return tags_;
}

void CreateProtectedInstanceRequestParams::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateProtectedInstanceRequestParams::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateProtectedInstanceRequestParams::getFlavorRef() const
{
    return flavorRef_;
}

void CreateProtectedInstanceRequestParams::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void CreateProtectedInstanceRequestParams::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string CreateProtectedInstanceRequestParams::getTenancy() const
{
    return tenancy_;
}

void CreateProtectedInstanceRequestParams::setTenancy(const std::string& value)
{
    tenancy_ = value;
    tenancyIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::tenancyIsSet() const
{
    return tenancyIsSet_;
}

void CreateProtectedInstanceRequestParams::unsettenancy()
{
    tenancyIsSet_ = false;
}

std::string CreateProtectedInstanceRequestParams::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void CreateProtectedInstanceRequestParams::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool CreateProtectedInstanceRequestParams::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void CreateProtectedInstanceRequestParams::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

}
}
}
}
}


