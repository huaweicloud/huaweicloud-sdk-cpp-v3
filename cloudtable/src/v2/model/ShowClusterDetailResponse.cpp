

#include "huaweicloud/cloudtable/v2/model/ShowClusterDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ShowClusterDetailResponse::ShowClusterDetailResponse()
{
    actionsIsSet_ = false;
    datastoreIsSet_ = false;
    enableOpenTSDB_ = false;
    enableOpenTSDBIsSet_ = false;
    enableLemon_ = false;
    enableLemonIsSet_ = false;
    clusterName_ = "";
    clusterNameIsSet_ = false;
    cuNum_ = "";
    cuNumIsSet_ = false;
    tsdNum_ = "";
    tsdNumIsSet_ = false;
    lemonNum_ = "";
    lemonNumIsSet_ = false;
    storageType_ = "";
    storageTypeIsSet_ = false;
    storageQuota_ = "";
    storageQuotaIsSet_ = false;
    usedStorageSize_ = "";
    usedStorageSizeIsSet_ = false;
    authMode_ = false;
    authModeIsSet_ = false;
    enableDfv_ = false;
    enableDfvIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    openTSDBLink_ = "";
    openTSDBLinkIsSet_ = false;
    tsdPublicEndpoint_ = "";
    tsdPublicEndpointIsSet_ = false;
    lemonLink_ = "";
    lemonLinkIsSet_ = false;
    zookeeperLink_ = "";
    zookeeperLinkIsSet_ = false;
    hbasePublicEndpoint_ = "";
    hbasePublicEndpointIsSet_ = false;
    isFrozen_ = "";
    isFrozenIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subNetId_ = "";
    subNetIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

ShowClusterDetailResponse::~ShowClusterDetailResponse() = default;

void ShowClusterDetailResponse::validate()
{
}

web::json::value ShowClusterDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(datastoreIsSet_) {
        val[utility::conversions::to_string_t("datastore")] = ModelBase::toJson(datastore_);
    }
    if(enableOpenTSDBIsSet_) {
        val[utility::conversions::to_string_t("enable_openTSDB")] = ModelBase::toJson(enableOpenTSDB_);
    }
    if(enableLemonIsSet_) {
        val[utility::conversions::to_string_t("enable_lemon")] = ModelBase::toJson(enableLemon_);
    }
    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(cuNumIsSet_) {
        val[utility::conversions::to_string_t("cu_num")] = ModelBase::toJson(cuNum_);
    }
    if(tsdNumIsSet_) {
        val[utility::conversions::to_string_t("tsd_num")] = ModelBase::toJson(tsdNum_);
    }
    if(lemonNumIsSet_) {
        val[utility::conversions::to_string_t("lemon_num")] = ModelBase::toJson(lemonNum_);
    }
    if(storageTypeIsSet_) {
        val[utility::conversions::to_string_t("storage_type")] = ModelBase::toJson(storageType_);
    }
    if(storageQuotaIsSet_) {
        val[utility::conversions::to_string_t("storage_quota")] = ModelBase::toJson(storageQuota_);
    }
    if(usedStorageSizeIsSet_) {
        val[utility::conversions::to_string_t("used_storage_size")] = ModelBase::toJson(usedStorageSize_);
    }
    if(authModeIsSet_) {
        val[utility::conversions::to_string_t("auth_mode")] = ModelBase::toJson(authMode_);
    }
    if(enableDfvIsSet_) {
        val[utility::conversions::to_string_t("enable_dfv")] = ModelBase::toJson(enableDfv_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(openTSDBLinkIsSet_) {
        val[utility::conversions::to_string_t("openTSDB_link")] = ModelBase::toJson(openTSDBLink_);
    }
    if(tsdPublicEndpointIsSet_) {
        val[utility::conversions::to_string_t("tsd_public_endpoint")] = ModelBase::toJson(tsdPublicEndpoint_);
    }
    if(lemonLinkIsSet_) {
        val[utility::conversions::to_string_t("lemon_link")] = ModelBase::toJson(lemonLink_);
    }
    if(zookeeperLinkIsSet_) {
        val[utility::conversions::to_string_t("zookeeper_link")] = ModelBase::toJson(zookeeperLink_);
    }
    if(hbasePublicEndpointIsSet_) {
        val[utility::conversions::to_string_t("hbase_public_endpoint")] = ModelBase::toJson(hbasePublicEndpoint_);
    }
    if(isFrozenIsSet_) {
        val[utility::conversions::to_string_t("is_frozen")] = ModelBase::toJson(isFrozen_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subNetIdIsSet_) {
        val[utility::conversions::to_string_t("sub_net_id")] = ModelBase::toJson(subNetId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}

bool ShowClusterDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore"));
        if(!fieldValue.is_null())
        {
            Datastore refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_openTSDB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_openTSDB"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableOpenTSDB(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_lemon"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_lemon"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableLemon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cu_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cu_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCuNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tsd_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tsd_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTsdNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lemon_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lemon_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLemonNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_quota"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_storage_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_storage_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedStorageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_dfv"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dfv"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDfv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("openTSDB_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("openTSDB_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenTSDBLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tsd_public_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tsd_public_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTsdPublicEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lemon_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lemon_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLemonLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zookeeper_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zookeeper_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZookeeperLink(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hbase_public_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hbase_public_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHbasePublicEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_frozen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_frozen"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFrozen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_net_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_net_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubNetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowClusterDetailResponse::getActions()
{
    return actions_;
}

void ShowClusterDetailResponse::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ShowClusterDetailResponse::actionsIsSet() const
{
    return actionsIsSet_;
}

void ShowClusterDetailResponse::unsetactions()
{
    actionsIsSet_ = false;
}

Datastore ShowClusterDetailResponse::getDatastore() const
{
    return datastore_;
}

void ShowClusterDetailResponse::setDatastore(const Datastore& value)
{
    datastore_ = value;
    datastoreIsSet_ = true;
}

bool ShowClusterDetailResponse::datastoreIsSet() const
{
    return datastoreIsSet_;
}

void ShowClusterDetailResponse::unsetdatastore()
{
    datastoreIsSet_ = false;
}

bool ShowClusterDetailResponse::isEnableOpenTSDB() const
{
    return enableOpenTSDB_;
}

void ShowClusterDetailResponse::setEnableOpenTSDB(bool value)
{
    enableOpenTSDB_ = value;
    enableOpenTSDBIsSet_ = true;
}

bool ShowClusterDetailResponse::enableOpenTSDBIsSet() const
{
    return enableOpenTSDBIsSet_;
}

void ShowClusterDetailResponse::unsetenableOpenTSDB()
{
    enableOpenTSDBIsSet_ = false;
}

bool ShowClusterDetailResponse::isEnableLemon() const
{
    return enableLemon_;
}

void ShowClusterDetailResponse::setEnableLemon(bool value)
{
    enableLemon_ = value;
    enableLemonIsSet_ = true;
}

bool ShowClusterDetailResponse::enableLemonIsSet() const
{
    return enableLemonIsSet_;
}

void ShowClusterDetailResponse::unsetenableLemon()
{
    enableLemonIsSet_ = false;
}

std::string ShowClusterDetailResponse::getClusterName() const
{
    return clusterName_;
}

void ShowClusterDetailResponse::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool ShowClusterDetailResponse::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void ShowClusterDetailResponse::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string ShowClusterDetailResponse::getCuNum() const
{
    return cuNum_;
}

void ShowClusterDetailResponse::setCuNum(const std::string& value)
{
    cuNum_ = value;
    cuNumIsSet_ = true;
}

bool ShowClusterDetailResponse::cuNumIsSet() const
{
    return cuNumIsSet_;
}

void ShowClusterDetailResponse::unsetcuNum()
{
    cuNumIsSet_ = false;
}

std::string ShowClusterDetailResponse::getTsdNum() const
{
    return tsdNum_;
}

void ShowClusterDetailResponse::setTsdNum(const std::string& value)
{
    tsdNum_ = value;
    tsdNumIsSet_ = true;
}

bool ShowClusterDetailResponse::tsdNumIsSet() const
{
    return tsdNumIsSet_;
}

void ShowClusterDetailResponse::unsettsdNum()
{
    tsdNumIsSet_ = false;
}

std::string ShowClusterDetailResponse::getLemonNum() const
{
    return lemonNum_;
}

void ShowClusterDetailResponse::setLemonNum(const std::string& value)
{
    lemonNum_ = value;
    lemonNumIsSet_ = true;
}

bool ShowClusterDetailResponse::lemonNumIsSet() const
{
    return lemonNumIsSet_;
}

void ShowClusterDetailResponse::unsetlemonNum()
{
    lemonNumIsSet_ = false;
}

std::string ShowClusterDetailResponse::getStorageType() const
{
    return storageType_;
}

void ShowClusterDetailResponse::setStorageType(const std::string& value)
{
    storageType_ = value;
    storageTypeIsSet_ = true;
}

bool ShowClusterDetailResponse::storageTypeIsSet() const
{
    return storageTypeIsSet_;
}

void ShowClusterDetailResponse::unsetstorageType()
{
    storageTypeIsSet_ = false;
}

std::string ShowClusterDetailResponse::getStorageQuota() const
{
    return storageQuota_;
}

void ShowClusterDetailResponse::setStorageQuota(const std::string& value)
{
    storageQuota_ = value;
    storageQuotaIsSet_ = true;
}

bool ShowClusterDetailResponse::storageQuotaIsSet() const
{
    return storageQuotaIsSet_;
}

void ShowClusterDetailResponse::unsetstorageQuota()
{
    storageQuotaIsSet_ = false;
}

std::string ShowClusterDetailResponse::getUsedStorageSize() const
{
    return usedStorageSize_;
}

void ShowClusterDetailResponse::setUsedStorageSize(const std::string& value)
{
    usedStorageSize_ = value;
    usedStorageSizeIsSet_ = true;
}

bool ShowClusterDetailResponse::usedStorageSizeIsSet() const
{
    return usedStorageSizeIsSet_;
}

void ShowClusterDetailResponse::unsetusedStorageSize()
{
    usedStorageSizeIsSet_ = false;
}

bool ShowClusterDetailResponse::isAuthMode() const
{
    return authMode_;
}

void ShowClusterDetailResponse::setAuthMode(bool value)
{
    authMode_ = value;
    authModeIsSet_ = true;
}

bool ShowClusterDetailResponse::authModeIsSet() const
{
    return authModeIsSet_;
}

void ShowClusterDetailResponse::unsetauthMode()
{
    authModeIsSet_ = false;
}

bool ShowClusterDetailResponse::isEnableDfv() const
{
    return enableDfv_;
}

void ShowClusterDetailResponse::setEnableDfv(bool value)
{
    enableDfv_ = value;
    enableDfvIsSet_ = true;
}

bool ShowClusterDetailResponse::enableDfvIsSet() const
{
    return enableDfvIsSet_;
}

void ShowClusterDetailResponse::unsetenableDfv()
{
    enableDfvIsSet_ = false;
}

std::string ShowClusterDetailResponse::getUpdated() const
{
    return updated_;
}

void ShowClusterDetailResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ShowClusterDetailResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ShowClusterDetailResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ShowClusterDetailResponse::getCreated() const
{
    return created_;
}

void ShowClusterDetailResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ShowClusterDetailResponse::createdIsSet() const
{
    return createdIsSet_;
}

void ShowClusterDetailResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ShowClusterDetailResponse::getClusterId() const
{
    return clusterId_;
}

void ShowClusterDetailResponse::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ShowClusterDetailResponse::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ShowClusterDetailResponse::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ShowClusterDetailResponse::getStatus() const
{
    return status_;
}

void ShowClusterDetailResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowClusterDetailResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowClusterDetailResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowClusterDetailResponse::getOpenTSDBLink() const
{
    return openTSDBLink_;
}

void ShowClusterDetailResponse::setOpenTSDBLink(const std::string& value)
{
    openTSDBLink_ = value;
    openTSDBLinkIsSet_ = true;
}

bool ShowClusterDetailResponse::openTSDBLinkIsSet() const
{
    return openTSDBLinkIsSet_;
}

void ShowClusterDetailResponse::unsetopenTSDBLink()
{
    openTSDBLinkIsSet_ = false;
}

std::string ShowClusterDetailResponse::getTsdPublicEndpoint() const
{
    return tsdPublicEndpoint_;
}

void ShowClusterDetailResponse::setTsdPublicEndpoint(const std::string& value)
{
    tsdPublicEndpoint_ = value;
    tsdPublicEndpointIsSet_ = true;
}

bool ShowClusterDetailResponse::tsdPublicEndpointIsSet() const
{
    return tsdPublicEndpointIsSet_;
}

void ShowClusterDetailResponse::unsettsdPublicEndpoint()
{
    tsdPublicEndpointIsSet_ = false;
}

std::string ShowClusterDetailResponse::getLemonLink() const
{
    return lemonLink_;
}

void ShowClusterDetailResponse::setLemonLink(const std::string& value)
{
    lemonLink_ = value;
    lemonLinkIsSet_ = true;
}

bool ShowClusterDetailResponse::lemonLinkIsSet() const
{
    return lemonLinkIsSet_;
}

void ShowClusterDetailResponse::unsetlemonLink()
{
    lemonLinkIsSet_ = false;
}

std::string ShowClusterDetailResponse::getZookeeperLink() const
{
    return zookeeperLink_;
}

void ShowClusterDetailResponse::setZookeeperLink(const std::string& value)
{
    zookeeperLink_ = value;
    zookeeperLinkIsSet_ = true;
}

bool ShowClusterDetailResponse::zookeeperLinkIsSet() const
{
    return zookeeperLinkIsSet_;
}

void ShowClusterDetailResponse::unsetzookeeperLink()
{
    zookeeperLinkIsSet_ = false;
}

std::string ShowClusterDetailResponse::getHbasePublicEndpoint() const
{
    return hbasePublicEndpoint_;
}

void ShowClusterDetailResponse::setHbasePublicEndpoint(const std::string& value)
{
    hbasePublicEndpoint_ = value;
    hbasePublicEndpointIsSet_ = true;
}

bool ShowClusterDetailResponse::hbasePublicEndpointIsSet() const
{
    return hbasePublicEndpointIsSet_;
}

void ShowClusterDetailResponse::unsethbasePublicEndpoint()
{
    hbasePublicEndpointIsSet_ = false;
}

std::string ShowClusterDetailResponse::getIsFrozen() const
{
    return isFrozen_;
}

void ShowClusterDetailResponse::setIsFrozen(const std::string& value)
{
    isFrozen_ = value;
    isFrozenIsSet_ = true;
}

bool ShowClusterDetailResponse::isFrozenIsSet() const
{
    return isFrozenIsSet_;
}

void ShowClusterDetailResponse::unsetisFrozen()
{
    isFrozenIsSet_ = false;
}

std::string ShowClusterDetailResponse::getVpcId() const
{
    return vpcId_;
}

void ShowClusterDetailResponse::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool ShowClusterDetailResponse::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void ShowClusterDetailResponse::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string ShowClusterDetailResponse::getSubNetId() const
{
    return subNetId_;
}

void ShowClusterDetailResponse::setSubNetId(const std::string& value)
{
    subNetId_ = value;
    subNetIdIsSet_ = true;
}

bool ShowClusterDetailResponse::subNetIdIsSet() const
{
    return subNetIdIsSet_;
}

void ShowClusterDetailResponse::unsetsubNetId()
{
    subNetIdIsSet_ = false;
}

std::string ShowClusterDetailResponse::getSecurityGroupId() const
{
    return securityGroupId_;
}

void ShowClusterDetailResponse::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool ShowClusterDetailResponse::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void ShowClusterDetailResponse::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string ShowClusterDetailResponse::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ShowClusterDetailResponse::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ShowClusterDetailResponse::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ShowClusterDetailResponse::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


