

#include "huaweicloud/modelarts/v1/model/UpdateNotebookResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpdateNotebookResponse::UpdateNotebookResponse()
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

UpdateNotebookResponse::~UpdateNotebookResponse() = default;

void UpdateNotebookResponse::validate()
{
}

web::json::value UpdateNotebookResponse::toJson() const
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
bool UpdateNotebookResponse::fromJson(const web::json::value& val)
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


std::vector<JobProgress>& UpdateNotebookResponse::getActionProgress()
{
    return actionProgress_;
}

void UpdateNotebookResponse::setActionProgress(const std::vector<JobProgress>& value)
{
    actionProgress_ = value;
    actionProgressIsSet_ = true;
}

bool UpdateNotebookResponse::actionProgressIsSet() const
{
    return actionProgressIsSet_;
}

void UpdateNotebookResponse::unsetactionProgress()
{
    actionProgressIsSet_ = false;
}

std::string UpdateNotebookResponse::getDescription() const
{
    return description_;
}

void UpdateNotebookResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateNotebookResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateNotebookResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<EndpointsRes>& UpdateNotebookResponse::getEndpoints()
{
    return endpoints_;
}

void UpdateNotebookResponse::setEndpoints(const std::vector<EndpointsRes>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool UpdateNotebookResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void UpdateNotebookResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string UpdateNotebookResponse::getFailReason() const
{
    return failReason_;
}

void UpdateNotebookResponse::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool UpdateNotebookResponse::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void UpdateNotebookResponse::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string UpdateNotebookResponse::getFlavor() const
{
    return flavor_;
}

void UpdateNotebookResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool UpdateNotebookResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void UpdateNotebookResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

NotebookCustomSpecRep UpdateNotebookResponse::getCustomSpec() const
{
    return customSpec_;
}

void UpdateNotebookResponse::setCustomSpec(const NotebookCustomSpecRep& value)
{
    customSpec_ = value;
    customSpecIsSet_ = true;
}

bool UpdateNotebookResponse::customSpecIsSet() const
{
    return customSpecIsSet_;
}

void UpdateNotebookResponse::unsetcustomSpec()
{
    customSpecIsSet_ = false;
}

std::string UpdateNotebookResponse::getId() const
{
    return id_;
}

void UpdateNotebookResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateNotebookResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateNotebookResponse::unsetid()
{
    idIsSet_ = false;
}

Image UpdateNotebookResponse::getImage() const
{
    return image_;
}

void UpdateNotebookResponse::setImage(const Image& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool UpdateNotebookResponse::imageIsSet() const
{
    return imageIsSet_;
}

void UpdateNotebookResponse::unsetimage()
{
    imageIsSet_ = false;
}

Lease UpdateNotebookResponse::getLease() const
{
    return lease_;
}

void UpdateNotebookResponse::setLease(const Lease& value)
{
    lease_ = value;
    leaseIsSet_ = true;
}

bool UpdateNotebookResponse::leaseIsSet() const
{
    return leaseIsSet_;
}

void UpdateNotebookResponse::unsetlease()
{
    leaseIsSet_ = false;
}

std::string UpdateNotebookResponse::getName() const
{
    return name_;
}

void UpdateNotebookResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateNotebookResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateNotebookResponse::unsetname()
{
    nameIsSet_ = false;
}

Pool UpdateNotebookResponse::getPool() const
{
    return pool_;
}

void UpdateNotebookResponse::setPool(const Pool& value)
{
    pool_ = value;
    poolIsSet_ = true;
}

bool UpdateNotebookResponse::poolIsSet() const
{
    return poolIsSet_;
}

void UpdateNotebookResponse::unsetpool()
{
    poolIsSet_ = false;
}

std::string UpdateNotebookResponse::getStatus() const
{
    return status_;
}

void UpdateNotebookResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateNotebookResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateNotebookResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateNotebookResponse::getToken() const
{
    return token_;
}

void UpdateNotebookResponse::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool UpdateNotebookResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void UpdateNotebookResponse::unsettoken()
{
    tokenIsSet_ = false;
}

std::string UpdateNotebookResponse::getUrl() const
{
    return url_;
}

void UpdateNotebookResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UpdateNotebookResponse::urlIsSet() const
{
    return urlIsSet_;
}

void UpdateNotebookResponse::unseturl()
{
    urlIsSet_ = false;
}

VolumeRes UpdateNotebookResponse::getVolume() const
{
    return volume_;
}

void UpdateNotebookResponse::setVolume(const VolumeRes& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool UpdateNotebookResponse::volumeIsSet() const
{
    return volumeIsSet_;
}

void UpdateNotebookResponse::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string UpdateNotebookResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void UpdateNotebookResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UpdateNotebookResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UpdateNotebookResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string UpdateNotebookResponse::getFeature() const
{
    return feature_;
}

void UpdateNotebookResponse::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool UpdateNotebookResponse::featureIsSet() const
{
    return featureIsSet_;
}

void UpdateNotebookResponse::unsetfeature()
{
    featureIsSet_ = false;
}

std::vector<std::string>& UpdateNotebookResponse::getBillingItems()
{
    return billingItems_;
}

void UpdateNotebookResponse::setBillingItems(const std::vector<std::string>& value)
{
    billingItems_ = value;
    billingItemsIsSet_ = true;
}

bool UpdateNotebookResponse::billingItemsIsSet() const
{
    return billingItemsIsSet_;
}

void UpdateNotebookResponse::unsetbillingItems()
{
    billingItemsIsSet_ = false;
}

UserResponse UpdateNotebookResponse::getUser() const
{
    return user_;
}

void UpdateNotebookResponse::setUser(const UserResponse& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool UpdateNotebookResponse::userIsSet() const
{
    return userIsSet_;
}

void UpdateNotebookResponse::unsetuser()
{
    userIsSet_ = false;
}

AffinityType UpdateNotebookResponse::getAffinity() const
{
    return affinity_;
}

void UpdateNotebookResponse::setAffinity(const AffinityType& value)
{
    affinity_ = value;
    affinityIsSet_ = true;
}

bool UpdateNotebookResponse::affinityIsSet() const
{
    return affinityIsSet_;
}

void UpdateNotebookResponse::unsetaffinity()
{
    affinityIsSet_ = false;
}

RunUserInfo UpdateNotebookResponse::getRunUser() const
{
    return runUser_;
}

void UpdateNotebookResponse::setRunUser(const RunUserInfo& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool UpdateNotebookResponse::runUserIsSet() const
{
    return runUserIsSet_;
}

void UpdateNotebookResponse::unsetrunUser()
{
    runUserIsSet_ = false;
}

std::vector<VolumeResponse>& UpdateNotebookResponse::getDataVolumes()
{
    return dataVolumes_;
}

void UpdateNotebookResponse::setDataVolumes(const std::vector<VolumeResponse>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool UpdateNotebookResponse::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void UpdateNotebookResponse::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

std::string UpdateNotebookResponse::getIp() const
{
    return ip_;
}

void UpdateNotebookResponse::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool UpdateNotebookResponse::ipIsSet() const
{
    return ipIsSet_;
}

void UpdateNotebookResponse::unsetip()
{
    ipIsSet_ = false;
}

UserVpcResponse UpdateNotebookResponse::getUserVpc() const
{
    return userVpc_;
}

void UpdateNotebookResponse::setUserVpc(const UserVpcResponse& value)
{
    userVpc_ = value;
    userVpcIsSet_ = true;
}

bool UpdateNotebookResponse::userVpcIsSet() const
{
    return userVpcIsSet_;
}

void UpdateNotebookResponse::unsetuserVpc()
{
    userVpcIsSet_ = false;
}

std::string UpdateNotebookResponse::getUserId() const
{
    return userId_;
}

void UpdateNotebookResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UpdateNotebookResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void UpdateNotebookResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

bool UpdateNotebookResponse::isIsNeedCredentials() const
{
    return isNeedCredentials_;
}

void UpdateNotebookResponse::setIsNeedCredentials(bool value)
{
    isNeedCredentials_ = value;
    isNeedCredentialsIsSet_ = true;
}

bool UpdateNotebookResponse::isNeedCredentialsIsSet() const
{
    return isNeedCredentialsIsSet_;
}

void UpdateNotebookResponse::unsetisNeedCredentials()
{
    isNeedCredentialsIsSet_ = false;
}

std::string UpdateNotebookResponse::getJupyterVersion() const
{
    return jupyterVersion_;
}

void UpdateNotebookResponse::setJupyterVersion(const std::string& value)
{
    jupyterVersion_ = value;
    jupyterVersionIsSet_ = true;
}

bool UpdateNotebookResponse::jupyterVersionIsSet() const
{
    return jupyterVersionIsSet_;
}

void UpdateNotebookResponse::unsetjupyterVersion()
{
    jupyterVersionIsSet_ = false;
}

std::vector<TmsTagResponse>& UpdateNotebookResponse::getTags()
{
    return tags_;
}

void UpdateNotebookResponse::setTags(const std::vector<TmsTagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateNotebookResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateNotebookResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


