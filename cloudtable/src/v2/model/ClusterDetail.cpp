

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


