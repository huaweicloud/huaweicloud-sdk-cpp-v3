

#include "huaweicloud/sdrs/v1/model/BatchCreateProtectedInstancesRequestParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




BatchCreateProtectedInstancesRequestParams::BatchCreateProtectedInstancesRequestParams()
{
    namePrefix_ = "";
    namePrefixIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    primarySubnetId_ = "";
    primarySubnetIdIsSet_ = false;
    tenancy_ = "";
    tenancyIsSet_ = false;
    dedicatedHostId_ = "";
    dedicatedHostIdIsSet_ = false;
    serversIsSet_ = false;
    tagsIsSet_ = false;
}

BatchCreateProtectedInstancesRequestParams::~BatchCreateProtectedInstancesRequestParams() = default;

void BatchCreateProtectedInstancesRequestParams::validate()
{
}

web::json::value BatchCreateProtectedInstancesRequestParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namePrefixIsSet_) {
        val[utility::conversions::to_string_t("name_prefix")] = ModelBase::toJson(namePrefix_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(primarySubnetIdIsSet_) {
        val[utility::conversions::to_string_t("primary_subnet_id")] = ModelBase::toJson(primarySubnetId_);
    }
    if(tenancyIsSet_) {
        val[utility::conversions::to_string_t("tenancy")] = ModelBase::toJson(tenancy_);
    }
    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_host_id")] = ModelBase::toJson(dedicatedHostId_);
    }
    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool BatchCreateProtectedInstancesRequestParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamePrefix(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
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
    return ok;
}


std::string BatchCreateProtectedInstancesRequestParams::getNamePrefix() const
{
    return namePrefix_;
}

void BatchCreateProtectedInstancesRequestParams::setNamePrefix(const std::string& value)
{
    namePrefix_ = value;
    namePrefixIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestParams::namePrefixIsSet() const
{
    return namePrefixIsSet_;
}

void BatchCreateProtectedInstancesRequestParams::unsetnamePrefix()
{
    namePrefixIsSet_ = false;
}

std::string BatchCreateProtectedInstancesRequestParams::getDescription() const
{
    return description_;
}

void BatchCreateProtectedInstancesRequestParams::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestParams::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BatchCreateProtectedInstancesRequestParams::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string BatchCreateProtectedInstancesRequestParams::getServerGroupId() const
{
    return serverGroupId_;
}

void BatchCreateProtectedInstancesRequestParams::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestParams::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void BatchCreateProtectedInstancesRequestParams::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string BatchCreateProtectedInstancesRequestParams::getClusterId() const
{
    return clusterId_;
}

void BatchCreateProtectedInstancesRequestParams::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestParams::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void BatchCreateProtectedInstancesRequestParams::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string BatchCreateProtectedInstancesRequestParams::getPrimarySubnetId() const
{
    return primarySubnetId_;
}

void BatchCreateProtectedInstancesRequestParams::setPrimarySubnetId(const std::string& value)
{
    primarySubnetId_ = value;
    primarySubnetIdIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestParams::primarySubnetIdIsSet() const
{
    return primarySubnetIdIsSet_;
}

void BatchCreateProtectedInstancesRequestParams::unsetprimarySubnetId()
{
    primarySubnetIdIsSet_ = false;
}

std::string BatchCreateProtectedInstancesRequestParams::getTenancy() const
{
    return tenancy_;
}

void BatchCreateProtectedInstancesRequestParams::setTenancy(const std::string& value)
{
    tenancy_ = value;
    tenancyIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestParams::tenancyIsSet() const
{
    return tenancyIsSet_;
}

void BatchCreateProtectedInstancesRequestParams::unsettenancy()
{
    tenancyIsSet_ = false;
}

std::string BatchCreateProtectedInstancesRequestParams::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void BatchCreateProtectedInstancesRequestParams::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestParams::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void BatchCreateProtectedInstancesRequestParams::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

std::vector<ServerInfo>& BatchCreateProtectedInstancesRequestParams::getServers()
{
    return servers_;
}

void BatchCreateProtectedInstancesRequestParams::setServers(const std::vector<ServerInfo>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestParams::serversIsSet() const
{
    return serversIsSet_;
}

void BatchCreateProtectedInstancesRequestParams::unsetservers()
{
    serversIsSet_ = false;
}

std::vector<ResourceTag>& BatchCreateProtectedInstancesRequestParams::getTags()
{
    return tags_;
}

void BatchCreateProtectedInstancesRequestParams::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateProtectedInstancesRequestParams::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateProtectedInstancesRequestParams::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


