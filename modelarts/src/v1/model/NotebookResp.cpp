

#include "huaweicloud/modelarts/v1/model/NotebookResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NotebookResp::NotebookResp()
{
    actionProgressIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    endpointsIsSet_ = false;
    failReason_ = "";
    failReasonIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    customSpecIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    imageIsSet_ = false;
    leaseIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    poolIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    volumeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    feature_ = "";
    featureIsSet_ = false;
    billingItemsIsSet_ = false;
    userIsSet_ = false;
    affinityIsSet_ = false;
    runUserIsSet_ = false;
    dataVolumesIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    userVpcIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    isNeedCredentials_ = false;
    isNeedCredentialsIsSet_ = false;
    jupyterVersion_ = "";
    jupyterVersionIsSet_ = false;
    tagsIsSet_ = false;
}

NotebookResp::~NotebookResp() = default;

void NotebookResp::validate()
{
}

web::json::value NotebookResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionProgressIsSet_) {
        val[utility::conversions::to_string_t("action_progress")] = ModelBase::toJson(actionProgress_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(failReasonIsSet_) {
        val[utility::conversions::to_string_t("fail_reason")] = ModelBase::toJson(failReason_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(customSpecIsSet_) {
        val[utility::conversions::to_string_t("custom_spec")] = ModelBase::toJson(customSpec_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(leaseIsSet_) {
        val[utility::conversions::to_string_t("lease")] = ModelBase::toJson(lease_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(poolIsSet_) {
        val[utility::conversions::to_string_t("pool")] = ModelBase::toJson(pool_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }
    if(billingItemsIsSet_) {
        val[utility::conversions::to_string_t("billing_items")] = ModelBase::toJson(billingItems_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(affinityIsSet_) {
        val[utility::conversions::to_string_t("affinity")] = ModelBase::toJson(affinity_);
    }
    if(runUserIsSet_) {
        val[utility::conversions::to_string_t("run_user")] = ModelBase::toJson(runUser_);
    }
    if(dataVolumesIsSet_) {
        val[utility::conversions::to_string_t("data_volumes")] = ModelBase::toJson(dataVolumes_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(userVpcIsSet_) {
        val[utility::conversions::to_string_t("user_vpc")] = ModelBase::toJson(userVpc_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(isNeedCredentialsIsSet_) {
        val[utility::conversions::to_string_t("is_need_credentials")] = ModelBase::toJson(isNeedCredentials_);
    }
    if(jupyterVersionIsSet_) {
        val[utility::conversions::to_string_t("jupyter_version")] = ModelBase::toJson(jupyterVersion_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool NotebookResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action_progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_progress"));
        if(!fieldValue.is_null())
        {
            std::vector<JobProgress> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionProgress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("endpoints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoints"));
        if(!fieldValue.is_null())
        {
            std::vector<EndpointsRes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_spec"));
        if(!fieldValue.is_null())
        {
            NotebookCustomSpecRep refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            Image refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lease"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lease"));
        if(!fieldValue.is_null())
        {
            Lease refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLease(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pool"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool"));
        if(!fieldValue.is_null())
        {
            Pool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPool(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            VolumeRes refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_items"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            UserResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("affinity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affinity"));
        if(!fieldValue.is_null())
        {
            AffinityType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffinity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("run_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("run_user"));
        if(!fieldValue.is_null())
        {
            RunUserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_vpc"));
        if(!fieldValue.is_null())
        {
            UserVpcResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_need_credentials"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_need_credentials"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNeedCredentials(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jupyter_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jupyter_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJupyterVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TmsTagResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<JobProgress>& NotebookResp::getActionProgress()
{
    return actionProgress_;
}

void NotebookResp::setActionProgress(const std::vector<JobProgress>& value)
{
    actionProgress_ = value;
    actionProgressIsSet_ = true;
}

bool NotebookResp::actionProgressIsSet() const
{
    return actionProgressIsSet_;
}

void NotebookResp::unsetactionProgress()
{
    actionProgressIsSet_ = false;
}

std::string NotebookResp::getDescription() const
{
    return description_;
}

void NotebookResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NotebookResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NotebookResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<EndpointsRes>& NotebookResp::getEndpoints()
{
    return endpoints_;
}

void NotebookResp::setEndpoints(const std::vector<EndpointsRes>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool NotebookResp::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void NotebookResp::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string NotebookResp::getFailReason() const
{
    return failReason_;
}

void NotebookResp::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool NotebookResp::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void NotebookResp::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string NotebookResp::getFlavor() const
{
    return flavor_;
}

void NotebookResp::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NotebookResp::flavorIsSet() const
{
    return flavorIsSet_;
}

void NotebookResp::unsetflavor()
{
    flavorIsSet_ = false;
}

NotebookCustomSpecRep NotebookResp::getCustomSpec() const
{
    return customSpec_;
}

void NotebookResp::setCustomSpec(const NotebookCustomSpecRep& value)
{
    customSpec_ = value;
    customSpecIsSet_ = true;
}

bool NotebookResp::customSpecIsSet() const
{
    return customSpecIsSet_;
}

void NotebookResp::unsetcustomSpec()
{
    customSpecIsSet_ = false;
}

std::string NotebookResp::getId() const
{
    return id_;
}

void NotebookResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NotebookResp::idIsSet() const
{
    return idIsSet_;
}

void NotebookResp::unsetid()
{
    idIsSet_ = false;
}

Image NotebookResp::getImage() const
{
    return image_;
}

void NotebookResp::setImage(const Image& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool NotebookResp::imageIsSet() const
{
    return imageIsSet_;
}

void NotebookResp::unsetimage()
{
    imageIsSet_ = false;
}

Lease NotebookResp::getLease() const
{
    return lease_;
}

void NotebookResp::setLease(const Lease& value)
{
    lease_ = value;
    leaseIsSet_ = true;
}

bool NotebookResp::leaseIsSet() const
{
    return leaseIsSet_;
}

void NotebookResp::unsetlease()
{
    leaseIsSet_ = false;
}

std::string NotebookResp::getName() const
{
    return name_;
}

void NotebookResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NotebookResp::nameIsSet() const
{
    return nameIsSet_;
}

void NotebookResp::unsetname()
{
    nameIsSet_ = false;
}

Pool NotebookResp::getPool() const
{
    return pool_;
}

void NotebookResp::setPool(const Pool& value)
{
    pool_ = value;
    poolIsSet_ = true;
}

bool NotebookResp::poolIsSet() const
{
    return poolIsSet_;
}

void NotebookResp::unsetpool()
{
    poolIsSet_ = false;
}

std::string NotebookResp::getStatus() const
{
    return status_;
}

void NotebookResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NotebookResp::statusIsSet() const
{
    return statusIsSet_;
}

void NotebookResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string NotebookResp::getToken() const
{
    return token_;
}

void NotebookResp::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool NotebookResp::tokenIsSet() const
{
    return tokenIsSet_;
}

void NotebookResp::unsettoken()
{
    tokenIsSet_ = false;
}

std::string NotebookResp::getUrl() const
{
    return url_;
}

void NotebookResp::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool NotebookResp::urlIsSet() const
{
    return urlIsSet_;
}

void NotebookResp::unseturl()
{
    urlIsSet_ = false;
}

VolumeRes NotebookResp::getVolume() const
{
    return volume_;
}

void NotebookResp::setVolume(const VolumeRes& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool NotebookResp::volumeIsSet() const
{
    return volumeIsSet_;
}

void NotebookResp::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string NotebookResp::getWorkspaceId() const
{
    return workspaceId_;
}

void NotebookResp::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool NotebookResp::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void NotebookResp::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string NotebookResp::getFeature() const
{
    return feature_;
}

void NotebookResp::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool NotebookResp::featureIsSet() const
{
    return featureIsSet_;
}

void NotebookResp::unsetfeature()
{
    featureIsSet_ = false;
}

std::vector<std::string>& NotebookResp::getBillingItems()
{
    return billingItems_;
}

void NotebookResp::setBillingItems(const std::vector<std::string>& value)
{
    billingItems_ = value;
    billingItemsIsSet_ = true;
}

bool NotebookResp::billingItemsIsSet() const
{
    return billingItemsIsSet_;
}

void NotebookResp::unsetbillingItems()
{
    billingItemsIsSet_ = false;
}

UserResponse NotebookResp::getUser() const
{
    return user_;
}

void NotebookResp::setUser(const UserResponse& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool NotebookResp::userIsSet() const
{
    return userIsSet_;
}

void NotebookResp::unsetuser()
{
    userIsSet_ = false;
}

AffinityType NotebookResp::getAffinity() const
{
    return affinity_;
}

void NotebookResp::setAffinity(const AffinityType& value)
{
    affinity_ = value;
    affinityIsSet_ = true;
}

bool NotebookResp::affinityIsSet() const
{
    return affinityIsSet_;
}

void NotebookResp::unsetaffinity()
{
    affinityIsSet_ = false;
}

RunUserInfo NotebookResp::getRunUser() const
{
    return runUser_;
}

void NotebookResp::setRunUser(const RunUserInfo& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool NotebookResp::runUserIsSet() const
{
    return runUserIsSet_;
}

void NotebookResp::unsetrunUser()
{
    runUserIsSet_ = false;
}

std::vector<VolumeResponse>& NotebookResp::getDataVolumes()
{
    return dataVolumes_;
}

void NotebookResp::setDataVolumes(const std::vector<VolumeResponse>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool NotebookResp::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void NotebookResp::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

std::string NotebookResp::getIp() const
{
    return ip_;
}

void NotebookResp::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool NotebookResp::ipIsSet() const
{
    return ipIsSet_;
}

void NotebookResp::unsetip()
{
    ipIsSet_ = false;
}

UserVpcResponse NotebookResp::getUserVpc() const
{
    return userVpc_;
}

void NotebookResp::setUserVpc(const UserVpcResponse& value)
{
    userVpc_ = value;
    userVpcIsSet_ = true;
}

bool NotebookResp::userVpcIsSet() const
{
    return userVpcIsSet_;
}

void NotebookResp::unsetuserVpc()
{
    userVpcIsSet_ = false;
}

std::string NotebookResp::getUserId() const
{
    return userId_;
}

void NotebookResp::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool NotebookResp::userIdIsSet() const
{
    return userIdIsSet_;
}

void NotebookResp::unsetuserId()
{
    userIdIsSet_ = false;
}

bool NotebookResp::isIsNeedCredentials() const
{
    return isNeedCredentials_;
}

void NotebookResp::setIsNeedCredentials(bool value)
{
    isNeedCredentials_ = value;
    isNeedCredentialsIsSet_ = true;
}

bool NotebookResp::isNeedCredentialsIsSet() const
{
    return isNeedCredentialsIsSet_;
}

void NotebookResp::unsetisNeedCredentials()
{
    isNeedCredentialsIsSet_ = false;
}

std::string NotebookResp::getJupyterVersion() const
{
    return jupyterVersion_;
}

void NotebookResp::setJupyterVersion(const std::string& value)
{
    jupyterVersion_ = value;
    jupyterVersionIsSet_ = true;
}

bool NotebookResp::jupyterVersionIsSet() const
{
    return jupyterVersionIsSet_;
}

void NotebookResp::unsetjupyterVersion()
{
    jupyterVersionIsSet_ = false;
}

std::vector<TmsTagResponse>& NotebookResp::getTags()
{
    return tags_;
}

void NotebookResp::setTags(const std::vector<TmsTagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool NotebookResp::tagsIsSet() const
{
    return tagsIsSet_;
}

void NotebookResp::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


