

#include "huaweicloud/modelarts/v1/model/StartNotebookResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StartNotebookResponse::StartNotebookResponse()
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

StartNotebookResponse::~StartNotebookResponse() = default;

void StartNotebookResponse::validate()
{
}

web::json::value StartNotebookResponse::toJson() const
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
bool StartNotebookResponse::fromJson(const web::json::value& val)
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


std::vector<JobProgress>& StartNotebookResponse::getActionProgress()
{
    return actionProgress_;
}

void StartNotebookResponse::setActionProgress(const std::vector<JobProgress>& value)
{
    actionProgress_ = value;
    actionProgressIsSet_ = true;
}

bool StartNotebookResponse::actionProgressIsSet() const
{
    return actionProgressIsSet_;
}

void StartNotebookResponse::unsetactionProgress()
{
    actionProgressIsSet_ = false;
}

std::string StartNotebookResponse::getDescription() const
{
    return description_;
}

void StartNotebookResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool StartNotebookResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void StartNotebookResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<EndpointsRes>& StartNotebookResponse::getEndpoints()
{
    return endpoints_;
}

void StartNotebookResponse::setEndpoints(const std::vector<EndpointsRes>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool StartNotebookResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void StartNotebookResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string StartNotebookResponse::getFailReason() const
{
    return failReason_;
}

void StartNotebookResponse::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool StartNotebookResponse::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void StartNotebookResponse::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string StartNotebookResponse::getFlavor() const
{
    return flavor_;
}

void StartNotebookResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool StartNotebookResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void StartNotebookResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

NotebookCustomSpecRep StartNotebookResponse::getCustomSpec() const
{
    return customSpec_;
}

void StartNotebookResponse::setCustomSpec(const NotebookCustomSpecRep& value)
{
    customSpec_ = value;
    customSpecIsSet_ = true;
}

bool StartNotebookResponse::customSpecIsSet() const
{
    return customSpecIsSet_;
}

void StartNotebookResponse::unsetcustomSpec()
{
    customSpecIsSet_ = false;
}

std::string StartNotebookResponse::getId() const
{
    return id_;
}

void StartNotebookResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StartNotebookResponse::idIsSet() const
{
    return idIsSet_;
}

void StartNotebookResponse::unsetid()
{
    idIsSet_ = false;
}

Image StartNotebookResponse::getImage() const
{
    return image_;
}

void StartNotebookResponse::setImage(const Image& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool StartNotebookResponse::imageIsSet() const
{
    return imageIsSet_;
}

void StartNotebookResponse::unsetimage()
{
    imageIsSet_ = false;
}

Lease StartNotebookResponse::getLease() const
{
    return lease_;
}

void StartNotebookResponse::setLease(const Lease& value)
{
    lease_ = value;
    leaseIsSet_ = true;
}

bool StartNotebookResponse::leaseIsSet() const
{
    return leaseIsSet_;
}

void StartNotebookResponse::unsetlease()
{
    leaseIsSet_ = false;
}

std::string StartNotebookResponse::getName() const
{
    return name_;
}

void StartNotebookResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StartNotebookResponse::nameIsSet() const
{
    return nameIsSet_;
}

void StartNotebookResponse::unsetname()
{
    nameIsSet_ = false;
}

Pool StartNotebookResponse::getPool() const
{
    return pool_;
}

void StartNotebookResponse::setPool(const Pool& value)
{
    pool_ = value;
    poolIsSet_ = true;
}

bool StartNotebookResponse::poolIsSet() const
{
    return poolIsSet_;
}

void StartNotebookResponse::unsetpool()
{
    poolIsSet_ = false;
}

std::string StartNotebookResponse::getStatus() const
{
    return status_;
}

void StartNotebookResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StartNotebookResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StartNotebookResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string StartNotebookResponse::getToken() const
{
    return token_;
}

void StartNotebookResponse::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool StartNotebookResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void StartNotebookResponse::unsettoken()
{
    tokenIsSet_ = false;
}

std::string StartNotebookResponse::getUrl() const
{
    return url_;
}

void StartNotebookResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool StartNotebookResponse::urlIsSet() const
{
    return urlIsSet_;
}

void StartNotebookResponse::unseturl()
{
    urlIsSet_ = false;
}

VolumeRes StartNotebookResponse::getVolume() const
{
    return volume_;
}

void StartNotebookResponse::setVolume(const VolumeRes& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool StartNotebookResponse::volumeIsSet() const
{
    return volumeIsSet_;
}

void StartNotebookResponse::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string StartNotebookResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void StartNotebookResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool StartNotebookResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void StartNotebookResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string StartNotebookResponse::getFeature() const
{
    return feature_;
}

void StartNotebookResponse::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool StartNotebookResponse::featureIsSet() const
{
    return featureIsSet_;
}

void StartNotebookResponse::unsetfeature()
{
    featureIsSet_ = false;
}

std::vector<std::string>& StartNotebookResponse::getBillingItems()
{
    return billingItems_;
}

void StartNotebookResponse::setBillingItems(const std::vector<std::string>& value)
{
    billingItems_ = value;
    billingItemsIsSet_ = true;
}

bool StartNotebookResponse::billingItemsIsSet() const
{
    return billingItemsIsSet_;
}

void StartNotebookResponse::unsetbillingItems()
{
    billingItemsIsSet_ = false;
}

UserResponse StartNotebookResponse::getUser() const
{
    return user_;
}

void StartNotebookResponse::setUser(const UserResponse& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool StartNotebookResponse::userIsSet() const
{
    return userIsSet_;
}

void StartNotebookResponse::unsetuser()
{
    userIsSet_ = false;
}

AffinityType StartNotebookResponse::getAffinity() const
{
    return affinity_;
}

void StartNotebookResponse::setAffinity(const AffinityType& value)
{
    affinity_ = value;
    affinityIsSet_ = true;
}

bool StartNotebookResponse::affinityIsSet() const
{
    return affinityIsSet_;
}

void StartNotebookResponse::unsetaffinity()
{
    affinityIsSet_ = false;
}

RunUserInfo StartNotebookResponse::getRunUser() const
{
    return runUser_;
}

void StartNotebookResponse::setRunUser(const RunUserInfo& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool StartNotebookResponse::runUserIsSet() const
{
    return runUserIsSet_;
}

void StartNotebookResponse::unsetrunUser()
{
    runUserIsSet_ = false;
}

std::vector<VolumeResponse>& StartNotebookResponse::getDataVolumes()
{
    return dataVolumes_;
}

void StartNotebookResponse::setDataVolumes(const std::vector<VolumeResponse>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool StartNotebookResponse::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void StartNotebookResponse::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

std::string StartNotebookResponse::getIp() const
{
    return ip_;
}

void StartNotebookResponse::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool StartNotebookResponse::ipIsSet() const
{
    return ipIsSet_;
}

void StartNotebookResponse::unsetip()
{
    ipIsSet_ = false;
}

UserVpcResponse StartNotebookResponse::getUserVpc() const
{
    return userVpc_;
}

void StartNotebookResponse::setUserVpc(const UserVpcResponse& value)
{
    userVpc_ = value;
    userVpcIsSet_ = true;
}

bool StartNotebookResponse::userVpcIsSet() const
{
    return userVpcIsSet_;
}

void StartNotebookResponse::unsetuserVpc()
{
    userVpcIsSet_ = false;
}

std::string StartNotebookResponse::getUserId() const
{
    return userId_;
}

void StartNotebookResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool StartNotebookResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void StartNotebookResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

bool StartNotebookResponse::isIsNeedCredentials() const
{
    return isNeedCredentials_;
}

void StartNotebookResponse::setIsNeedCredentials(bool value)
{
    isNeedCredentials_ = value;
    isNeedCredentialsIsSet_ = true;
}

bool StartNotebookResponse::isNeedCredentialsIsSet() const
{
    return isNeedCredentialsIsSet_;
}

void StartNotebookResponse::unsetisNeedCredentials()
{
    isNeedCredentialsIsSet_ = false;
}

std::string StartNotebookResponse::getJupyterVersion() const
{
    return jupyterVersion_;
}

void StartNotebookResponse::setJupyterVersion(const std::string& value)
{
    jupyterVersion_ = value;
    jupyterVersionIsSet_ = true;
}

bool StartNotebookResponse::jupyterVersionIsSet() const
{
    return jupyterVersionIsSet_;
}

void StartNotebookResponse::unsetjupyterVersion()
{
    jupyterVersionIsSet_ = false;
}

std::vector<TmsTagResponse>& StartNotebookResponse::getTags()
{
    return tags_;
}

void StartNotebookResponse::setTags(const std::vector<TmsTagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool StartNotebookResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void StartNotebookResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


