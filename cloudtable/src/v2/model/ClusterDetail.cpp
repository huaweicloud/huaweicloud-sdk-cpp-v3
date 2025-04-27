

#include "huaweicloud/cloudtable/v2/model/ClusterDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




ClusterDetail::ClusterDetail()
{
    actionProgressIsSet_ = false;
    actionsIsSet_ = false;
    localHdfs_ = false;
    localHdfsIsSet_ = false;
    isShow222VersionFeature_ = "";
    isShow222VersionFeatureIsSet_ = false;
    actionsCountIsSet_ = false;
    supportAuth_ = false;
    supportAuthIsSet_ = false;
    epsId_ = "";
    epsIdIsSet_ = false;
    clusterType_ = "";
    clusterTypeIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    orderStatus_ = "";
    orderStatusIsSet_ = false;
    isLocalHdfs_ = false;
    isLocalHdfsIsSet_ = false;
    ckDeployMode_ = "";
    ckDeployModeIsSet_ = false;
    flavorTypeEn_ = "";
    flavorTypeEnIsSet_ = false;
    enableHotColdFeatureCluster_ = "";
    enableHotColdFeatureClusterIsSet_ = false;
    enableHotColdFeature_ = "";
    enableHotColdFeatureIsSet_ = false;
    dataFlavor_ = "";
    dataFlavorIsSet_ = false;
    controlFlavor_ = "";
    controlFlavorIsSet_ = false;
    dataNodeNum_ = "";
    dataNodeNumIsSet_ = false;
    controlNodeNum_ = "";
    controlNodeNumIsSet_ = false;
    dataNodeTotalStorageSize_ = "";
    dataNodeTotalStorageSizeIsSet_ = false;
    controlNodeTotalStorageSize_ = "";
    controlNodeTotalStorageSizeIsSet_ = false;
    coldStorageUsedSize_ = "";
    coldStorageUsedSizeIsSet_ = false;
    dataNodeVolumeType_ = "";
    dataNodeVolumeTypeIsSet_ = false;
    controlNodeVolumeType_ = "";
    controlNodeVolumeTypeIsSet_ = false;
    authMode_ = "";
    authModeIsSet_ = false;
    azCode_ = "";
    azCodeIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterName_ = "";
    clusterNameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    enableDfv_ = "";
    enableDfvIsSet_ = false;
    enableFree_ = "";
    enableFreeIsSet_ = false;
    enableLemon_ = "";
    enableLemonIsSet_ = false;
    enableOpenTSDB_ = "";
    enableOpenTSDBIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    zookeeperLink_ = "";
    zookeeperLinkIsSet_ = false;
}

ClusterDetail::~ClusterDetail() = default;

void ClusterDetail::validate()
{
}

web::json::value ClusterDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionProgressIsSet_) {
        val[utility::conversions::to_string_t("action_progress")] = ModelBase::toJson(actionProgress_);
    }
    if(actionsIsSet_) {
        val[utility::conversions::to_string_t("actions")] = ModelBase::toJson(actions_);
    }
    if(localHdfsIsSet_) {
        val[utility::conversions::to_string_t("localHdfs")] = ModelBase::toJson(localHdfs_);
    }
    if(isShow222VersionFeatureIsSet_) {
        val[utility::conversions::to_string_t("is_show_222_version_feature")] = ModelBase::toJson(isShow222VersionFeature_);
    }
    if(actionsCountIsSet_) {
        val[utility::conversions::to_string_t("actionsCount")] = ModelBase::toJson(actionsCount_);
    }
    if(supportAuthIsSet_) {
        val[utility::conversions::to_string_t("support_auth")] = ModelBase::toJson(supportAuth_);
    }
    if(epsIdIsSet_) {
        val[utility::conversions::to_string_t("eps_id")] = ModelBase::toJson(epsId_);
    }
    if(clusterTypeIsSet_) {
        val[utility::conversions::to_string_t("cluster_type")] = ModelBase::toJson(clusterType_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(orderStatusIsSet_) {
        val[utility::conversions::to_string_t("order_status")] = ModelBase::toJson(orderStatus_);
    }
    if(isLocalHdfsIsSet_) {
        val[utility::conversions::to_string_t("is_local_hdfs")] = ModelBase::toJson(isLocalHdfs_);
    }
    if(ckDeployModeIsSet_) {
        val[utility::conversions::to_string_t("ck_deploy_mode")] = ModelBase::toJson(ckDeployMode_);
    }
    if(flavorTypeEnIsSet_) {
        val[utility::conversions::to_string_t("flavor_type_en")] = ModelBase::toJson(flavorTypeEn_);
    }
    if(enableHotColdFeatureClusterIsSet_) {
        val[utility::conversions::to_string_t("enable_hot_cold_feature_cluster")] = ModelBase::toJson(enableHotColdFeatureCluster_);
    }
    if(enableHotColdFeatureIsSet_) {
        val[utility::conversions::to_string_t("enable_hot_cold_feature")] = ModelBase::toJson(enableHotColdFeature_);
    }
    if(dataFlavorIsSet_) {
        val[utility::conversions::to_string_t("data_flavor")] = ModelBase::toJson(dataFlavor_);
    }
    if(controlFlavorIsSet_) {
        val[utility::conversions::to_string_t("control_flavor")] = ModelBase::toJson(controlFlavor_);
    }
    if(dataNodeNumIsSet_) {
        val[utility::conversions::to_string_t("data_node_num")] = ModelBase::toJson(dataNodeNum_);
    }
    if(controlNodeNumIsSet_) {
        val[utility::conversions::to_string_t("control_node_num")] = ModelBase::toJson(controlNodeNum_);
    }
    if(dataNodeTotalStorageSizeIsSet_) {
        val[utility::conversions::to_string_t("data_node_total_storage_size")] = ModelBase::toJson(dataNodeTotalStorageSize_);
    }
    if(controlNodeTotalStorageSizeIsSet_) {
        val[utility::conversions::to_string_t("control_node_total_storage_size")] = ModelBase::toJson(controlNodeTotalStorageSize_);
    }
    if(coldStorageUsedSizeIsSet_) {
        val[utility::conversions::to_string_t("cold_storage_used_size")] = ModelBase::toJson(coldStorageUsedSize_);
    }
    if(dataNodeVolumeTypeIsSet_) {
        val[utility::conversions::to_string_t("data_node_volume_type")] = ModelBase::toJson(dataNodeVolumeType_);
    }
    if(controlNodeVolumeTypeIsSet_) {
        val[utility::conversions::to_string_t("control_node_volume_type")] = ModelBase::toJson(controlNodeVolumeType_);
    }
    if(authModeIsSet_) {
        val[utility::conversions::to_string_t("auth_mode")] = ModelBase::toJson(authMode_);
    }
    if(azCodeIsSet_) {
        val[utility::conversions::to_string_t("az_code")] = ModelBase::toJson(azCode_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(enableDfvIsSet_) {
        val[utility::conversions::to_string_t("enable_dfv")] = ModelBase::toJson(enableDfv_);
    }
    if(enableFreeIsSet_) {
        val[utility::conversions::to_string_t("enable_free")] = ModelBase::toJson(enableFree_);
    }
    if(enableLemonIsSet_) {
        val[utility::conversions::to_string_t("enable_lemon")] = ModelBase::toJson(enableLemon_);
    }
    if(enableOpenTSDBIsSet_) {
        val[utility::conversions::to_string_t("enable_openTSDB")] = ModelBase::toJson(enableOpenTSDB_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(zookeeperLinkIsSet_) {
        val[utility::conversions::to_string_t("zookeeper_link")] = ModelBase::toJson(zookeeperLink_);
    }

    return val;
}
bool ClusterDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_progress"));
        if(!fieldValue.is_null())
        {
            ActionProgress refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localHdfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localHdfs"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalHdfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_show_222_version_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_show_222_version_feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsShow222VersionFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actionsCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actionsCount"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_auth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_auth"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAuth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eps_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_local_hdfs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_local_hdfs"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLocalHdfs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ck_deploy_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ck_deploy_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCkDeployMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_type_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_type_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorTypeEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_hot_cold_feature_cluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_hot_cold_feature_cluster"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableHotColdFeatureCluster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_hot_cold_feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_hot_cold_feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableHotColdFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("control_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_node_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("control_node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_node_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_node_total_storage_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_node_total_storage_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataNodeTotalStorageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("control_node_total_storage_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_node_total_storage_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlNodeTotalStorageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cold_storage_used_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cold_storage_used_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColdStorageUsedSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_node_volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_node_volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataNodeVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("control_node_volume_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_node_volume_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlNodeVolumeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAzCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_dfv"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dfv"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDfv(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_free"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_free"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableFree(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_lemon"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_lemon"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableLemon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_openTSDB"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_openTSDB"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableOpenTSDB(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    return ok;
}


ActionProgress ClusterDetail::getActionProgress() const
{
    return actionProgress_;
}

void ClusterDetail::setActionProgress(const ActionProgress& value)
{
    actionProgress_ = value;
    actionProgressIsSet_ = true;
}

bool ClusterDetail::actionProgressIsSet() const
{
    return actionProgressIsSet_;
}

void ClusterDetail::unsetactionProgress()
{
    actionProgressIsSet_ = false;
}

std::vector<std::string>& ClusterDetail::getActions()
{
    return actions_;
}

void ClusterDetail::setActions(const std::vector<std::string>& value)
{
    actions_ = value;
    actionsIsSet_ = true;
}

bool ClusterDetail::actionsIsSet() const
{
    return actionsIsSet_;
}

void ClusterDetail::unsetactions()
{
    actionsIsSet_ = false;
}

bool ClusterDetail::isLocalHdfs() const
{
    return localHdfs_;
}

void ClusterDetail::setLocalHdfs(bool value)
{
    localHdfs_ = value;
    localHdfsIsSet_ = true;
}

bool ClusterDetail::localHdfsIsSet() const
{
    return localHdfsIsSet_;
}

void ClusterDetail::unsetlocalHdfs()
{
    localHdfsIsSet_ = false;
}

std::string ClusterDetail::getIsShow222VersionFeature() const
{
    return isShow222VersionFeature_;
}

void ClusterDetail::setIsShow222VersionFeature(const std::string& value)
{
    isShow222VersionFeature_ = value;
    isShow222VersionFeatureIsSet_ = true;
}

bool ClusterDetail::isShow222VersionFeatureIsSet() const
{
    return isShow222VersionFeatureIsSet_;
}

void ClusterDetail::unsetisShow222VersionFeature()
{
    isShow222VersionFeatureIsSet_ = false;
}

std::vector<std::string>& ClusterDetail::getActionsCount()
{
    return actionsCount_;
}

void ClusterDetail::setActionsCount(const std::vector<std::string>& value)
{
    actionsCount_ = value;
    actionsCountIsSet_ = true;
}

bool ClusterDetail::actionsCountIsSet() const
{
    return actionsCountIsSet_;
}

void ClusterDetail::unsetactionsCount()
{
    actionsCountIsSet_ = false;
}

bool ClusterDetail::isSupportAuth() const
{
    return supportAuth_;
}

void ClusterDetail::setSupportAuth(bool value)
{
    supportAuth_ = value;
    supportAuthIsSet_ = true;
}

bool ClusterDetail::supportAuthIsSet() const
{
    return supportAuthIsSet_;
}

void ClusterDetail::unsetsupportAuth()
{
    supportAuthIsSet_ = false;
}

std::string ClusterDetail::getEpsId() const
{
    return epsId_;
}

void ClusterDetail::setEpsId(const std::string& value)
{
    epsId_ = value;
    epsIdIsSet_ = true;
}

bool ClusterDetail::epsIdIsSet() const
{
    return epsIdIsSet_;
}

void ClusterDetail::unsetepsId()
{
    epsIdIsSet_ = false;
}

std::string ClusterDetail::getClusterType() const
{
    return clusterType_;
}

void ClusterDetail::setClusterType(const std::string& value)
{
    clusterType_ = value;
    clusterTypeIsSet_ = true;
}

bool ClusterDetail::clusterTypeIsSet() const
{
    return clusterTypeIsSet_;
}

void ClusterDetail::unsetclusterType()
{
    clusterTypeIsSet_ = false;
}

std::string ClusterDetail::getOrderId() const
{
    return orderId_;
}

void ClusterDetail::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ClusterDetail::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ClusterDetail::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ClusterDetail::getOrderStatus() const
{
    return orderStatus_;
}

void ClusterDetail::setOrderStatus(const std::string& value)
{
    orderStatus_ = value;
    orderStatusIsSet_ = true;
}

bool ClusterDetail::orderStatusIsSet() const
{
    return orderStatusIsSet_;
}

void ClusterDetail::unsetorderStatus()
{
    orderStatusIsSet_ = false;
}

bool ClusterDetail::isIsLocalHdfs() const
{
    return isLocalHdfs_;
}

void ClusterDetail::setIsLocalHdfs(bool value)
{
    isLocalHdfs_ = value;
    isLocalHdfsIsSet_ = true;
}

bool ClusterDetail::isLocalHdfsIsSet() const
{
    return isLocalHdfsIsSet_;
}

void ClusterDetail::unsetisLocalHdfs()
{
    isLocalHdfsIsSet_ = false;
}

std::string ClusterDetail::getCkDeployMode() const
{
    return ckDeployMode_;
}

void ClusterDetail::setCkDeployMode(const std::string& value)
{
    ckDeployMode_ = value;
    ckDeployModeIsSet_ = true;
}

bool ClusterDetail::ckDeployModeIsSet() const
{
    return ckDeployModeIsSet_;
}

void ClusterDetail::unsetckDeployMode()
{
    ckDeployModeIsSet_ = false;
}

std::string ClusterDetail::getFlavorTypeEn() const
{
    return flavorTypeEn_;
}

void ClusterDetail::setFlavorTypeEn(const std::string& value)
{
    flavorTypeEn_ = value;
    flavorTypeEnIsSet_ = true;
}

bool ClusterDetail::flavorTypeEnIsSet() const
{
    return flavorTypeEnIsSet_;
}

void ClusterDetail::unsetflavorTypeEn()
{
    flavorTypeEnIsSet_ = false;
}

std::string ClusterDetail::getEnableHotColdFeatureCluster() const
{
    return enableHotColdFeatureCluster_;
}

void ClusterDetail::setEnableHotColdFeatureCluster(const std::string& value)
{
    enableHotColdFeatureCluster_ = value;
    enableHotColdFeatureClusterIsSet_ = true;
}

bool ClusterDetail::enableHotColdFeatureClusterIsSet() const
{
    return enableHotColdFeatureClusterIsSet_;
}

void ClusterDetail::unsetenableHotColdFeatureCluster()
{
    enableHotColdFeatureClusterIsSet_ = false;
}

std::string ClusterDetail::getEnableHotColdFeature() const
{
    return enableHotColdFeature_;
}

void ClusterDetail::setEnableHotColdFeature(const std::string& value)
{
    enableHotColdFeature_ = value;
    enableHotColdFeatureIsSet_ = true;
}

bool ClusterDetail::enableHotColdFeatureIsSet() const
{
    return enableHotColdFeatureIsSet_;
}

void ClusterDetail::unsetenableHotColdFeature()
{
    enableHotColdFeatureIsSet_ = false;
}

std::string ClusterDetail::getDataFlavor() const
{
    return dataFlavor_;
}

void ClusterDetail::setDataFlavor(const std::string& value)
{
    dataFlavor_ = value;
    dataFlavorIsSet_ = true;
}

bool ClusterDetail::dataFlavorIsSet() const
{
    return dataFlavorIsSet_;
}

void ClusterDetail::unsetdataFlavor()
{
    dataFlavorIsSet_ = false;
}

std::string ClusterDetail::getControlFlavor() const
{
    return controlFlavor_;
}

void ClusterDetail::setControlFlavor(const std::string& value)
{
    controlFlavor_ = value;
    controlFlavorIsSet_ = true;
}

bool ClusterDetail::controlFlavorIsSet() const
{
    return controlFlavorIsSet_;
}

void ClusterDetail::unsetcontrolFlavor()
{
    controlFlavorIsSet_ = false;
}

std::string ClusterDetail::getDataNodeNum() const
{
    return dataNodeNum_;
}

void ClusterDetail::setDataNodeNum(const std::string& value)
{
    dataNodeNum_ = value;
    dataNodeNumIsSet_ = true;
}

bool ClusterDetail::dataNodeNumIsSet() const
{
    return dataNodeNumIsSet_;
}

void ClusterDetail::unsetdataNodeNum()
{
    dataNodeNumIsSet_ = false;
}

std::string ClusterDetail::getControlNodeNum() const
{
    return controlNodeNum_;
}

void ClusterDetail::setControlNodeNum(const std::string& value)
{
    controlNodeNum_ = value;
    controlNodeNumIsSet_ = true;
}

bool ClusterDetail::controlNodeNumIsSet() const
{
    return controlNodeNumIsSet_;
}

void ClusterDetail::unsetcontrolNodeNum()
{
    controlNodeNumIsSet_ = false;
}

std::string ClusterDetail::getDataNodeTotalStorageSize() const
{
    return dataNodeTotalStorageSize_;
}

void ClusterDetail::setDataNodeTotalStorageSize(const std::string& value)
{
    dataNodeTotalStorageSize_ = value;
    dataNodeTotalStorageSizeIsSet_ = true;
}

bool ClusterDetail::dataNodeTotalStorageSizeIsSet() const
{
    return dataNodeTotalStorageSizeIsSet_;
}

void ClusterDetail::unsetdataNodeTotalStorageSize()
{
    dataNodeTotalStorageSizeIsSet_ = false;
}

std::string ClusterDetail::getControlNodeTotalStorageSize() const
{
    return controlNodeTotalStorageSize_;
}

void ClusterDetail::setControlNodeTotalStorageSize(const std::string& value)
{
    controlNodeTotalStorageSize_ = value;
    controlNodeTotalStorageSizeIsSet_ = true;
}

bool ClusterDetail::controlNodeTotalStorageSizeIsSet() const
{
    return controlNodeTotalStorageSizeIsSet_;
}

void ClusterDetail::unsetcontrolNodeTotalStorageSize()
{
    controlNodeTotalStorageSizeIsSet_ = false;
}

std::string ClusterDetail::getColdStorageUsedSize() const
{
    return coldStorageUsedSize_;
}

void ClusterDetail::setColdStorageUsedSize(const std::string& value)
{
    coldStorageUsedSize_ = value;
    coldStorageUsedSizeIsSet_ = true;
}

bool ClusterDetail::coldStorageUsedSizeIsSet() const
{
    return coldStorageUsedSizeIsSet_;
}

void ClusterDetail::unsetcoldStorageUsedSize()
{
    coldStorageUsedSizeIsSet_ = false;
}

std::string ClusterDetail::getDataNodeVolumeType() const
{
    return dataNodeVolumeType_;
}

void ClusterDetail::setDataNodeVolumeType(const std::string& value)
{
    dataNodeVolumeType_ = value;
    dataNodeVolumeTypeIsSet_ = true;
}

bool ClusterDetail::dataNodeVolumeTypeIsSet() const
{
    return dataNodeVolumeTypeIsSet_;
}

void ClusterDetail::unsetdataNodeVolumeType()
{
    dataNodeVolumeTypeIsSet_ = false;
}

std::string ClusterDetail::getControlNodeVolumeType() const
{
    return controlNodeVolumeType_;
}

void ClusterDetail::setControlNodeVolumeType(const std::string& value)
{
    controlNodeVolumeType_ = value;
    controlNodeVolumeTypeIsSet_ = true;
}

bool ClusterDetail::controlNodeVolumeTypeIsSet() const
{
    return controlNodeVolumeTypeIsSet_;
}

void ClusterDetail::unsetcontrolNodeVolumeType()
{
    controlNodeVolumeTypeIsSet_ = false;
}

std::string ClusterDetail::getAuthMode() const
{
    return authMode_;
}

void ClusterDetail::setAuthMode(const std::string& value)
{
    authMode_ = value;
    authModeIsSet_ = true;
}

bool ClusterDetail::authModeIsSet() const
{
    return authModeIsSet_;
}

void ClusterDetail::unsetauthMode()
{
    authModeIsSet_ = false;
}

std::string ClusterDetail::getAzCode() const
{
    return azCode_;
}

void ClusterDetail::setAzCode(const std::string& value)
{
    azCode_ = value;
    azCodeIsSet_ = true;
}

bool ClusterDetail::azCodeIsSet() const
{
    return azCodeIsSet_;
}

void ClusterDetail::unsetazCode()
{
    azCodeIsSet_ = false;
}

std::string ClusterDetail::getClusterId() const
{
    return clusterId_;
}

void ClusterDetail::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ClusterDetail::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ClusterDetail::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ClusterDetail::getClusterName() const
{
    return clusterName_;
}

void ClusterDetail::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool ClusterDetail::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void ClusterDetail::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string ClusterDetail::getCreated() const
{
    return created_;
}

void ClusterDetail::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ClusterDetail::createdIsSet() const
{
    return createdIsSet_;
}

void ClusterDetail::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ClusterDetail::getEnableDfv() const
{
    return enableDfv_;
}

void ClusterDetail::setEnableDfv(const std::string& value)
{
    enableDfv_ = value;
    enableDfvIsSet_ = true;
}

bool ClusterDetail::enableDfvIsSet() const
{
    return enableDfvIsSet_;
}

void ClusterDetail::unsetenableDfv()
{
    enableDfvIsSet_ = false;
}

std::string ClusterDetail::getEnableFree() const
{
    return enableFree_;
}

void ClusterDetail::setEnableFree(const std::string& value)
{
    enableFree_ = value;
    enableFreeIsSet_ = true;
}

bool ClusterDetail::enableFreeIsSet() const
{
    return enableFreeIsSet_;
}

void ClusterDetail::unsetenableFree()
{
    enableFreeIsSet_ = false;
}

std::string ClusterDetail::getEnableLemon() const
{
    return enableLemon_;
}

void ClusterDetail::setEnableLemon(const std::string& value)
{
    enableLemon_ = value;
    enableLemonIsSet_ = true;
}

bool ClusterDetail::enableLemonIsSet() const
{
    return enableLemonIsSet_;
}

void ClusterDetail::unsetenableLemon()
{
    enableLemonIsSet_ = false;
}

std::string ClusterDetail::getEnableOpenTSDB() const
{
    return enableOpenTSDB_;
}

void ClusterDetail::setEnableOpenTSDB(const std::string& value)
{
    enableOpenTSDB_ = value;
    enableOpenTSDBIsSet_ = true;
}

bool ClusterDetail::enableOpenTSDBIsSet() const
{
    return enableOpenTSDBIsSet_;
}

void ClusterDetail::unsetenableOpenTSDB()
{
    enableOpenTSDBIsSet_ = false;
}

std::string ClusterDetail::getStatus() const
{
    return status_;
}

void ClusterDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ClusterDetail::statusIsSet() const
{
    return statusIsSet_;
}

void ClusterDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ClusterDetail::getTags() const
{
    return tags_;
}

void ClusterDetail::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ClusterDetail::tagsIsSet() const
{
    return tagsIsSet_;
}

void ClusterDetail::unsettags()
{
    tagsIsSet_ = false;
}

std::string ClusterDetail::getVersion() const
{
    return version_;
}

void ClusterDetail::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ClusterDetail::versionIsSet() const
{
    return versionIsSet_;
}

void ClusterDetail::unsetversion()
{
    versionIsSet_ = false;
}

std::string ClusterDetail::getZookeeperLink() const
{
    return zookeeperLink_;
}

void ClusterDetail::setZookeeperLink(const std::string& value)
{
    zookeeperLink_ = value;
    zookeeperLinkIsSet_ = true;
}

bool ClusterDetail::zookeeperLinkIsSet() const
{
    return zookeeperLinkIsSet_;
}

void ClusterDetail::unsetzookeeperLink()
{
    zookeeperLinkIsSet_ = false;
}

}
}
}
}
}


