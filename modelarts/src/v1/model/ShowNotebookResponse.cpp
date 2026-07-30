

#include "huaweicloud/modelarts/v1/model/ShowNotebookResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowNotebookResponse::ShowNotebookResponse()
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

ShowNotebookResponse::~ShowNotebookResponse() = default;

void ShowNotebookResponse::validate()
{
}

web::json::value ShowNotebookResponse::toJson() const
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
bool ShowNotebookResponse::fromJson(const web::json::value& val)
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


std::vector<JobProgress>& ShowNotebookResponse::getActionProgress()
{
    return actionProgress_;
}

void ShowNotebookResponse::setActionProgress(const std::vector<JobProgress>& value)
{
    actionProgress_ = value;
    actionProgressIsSet_ = true;
}

bool ShowNotebookResponse::actionProgressIsSet() const
{
    return actionProgressIsSet_;
}

void ShowNotebookResponse::unsetactionProgress()
{
    actionProgressIsSet_ = false;
}

std::string ShowNotebookResponse::getDescription() const
{
    return description_;
}

void ShowNotebookResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowNotebookResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowNotebookResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<EndpointsRes>& ShowNotebookResponse::getEndpoints()
{
    return endpoints_;
}

void ShowNotebookResponse::setEndpoints(const std::vector<EndpointsRes>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool ShowNotebookResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void ShowNotebookResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string ShowNotebookResponse::getFailReason() const
{
    return failReason_;
}

void ShowNotebookResponse::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool ShowNotebookResponse::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void ShowNotebookResponse::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string ShowNotebookResponse::getFlavor() const
{
    return flavor_;
}

void ShowNotebookResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ShowNotebookResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void ShowNotebookResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

NotebookCustomSpecRep ShowNotebookResponse::getCustomSpec() const
{
    return customSpec_;
}

void ShowNotebookResponse::setCustomSpec(const NotebookCustomSpecRep& value)
{
    customSpec_ = value;
    customSpecIsSet_ = true;
}

bool ShowNotebookResponse::customSpecIsSet() const
{
    return customSpecIsSet_;
}

void ShowNotebookResponse::unsetcustomSpec()
{
    customSpecIsSet_ = false;
}

std::string ShowNotebookResponse::getId() const
{
    return id_;
}

void ShowNotebookResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowNotebookResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowNotebookResponse::unsetid()
{
    idIsSet_ = false;
}

Image ShowNotebookResponse::getImage() const
{
    return image_;
}

void ShowNotebookResponse::setImage(const Image& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ShowNotebookResponse::imageIsSet() const
{
    return imageIsSet_;
}

void ShowNotebookResponse::unsetimage()
{
    imageIsSet_ = false;
}

Lease ShowNotebookResponse::getLease() const
{
    return lease_;
}

void ShowNotebookResponse::setLease(const Lease& value)
{
    lease_ = value;
    leaseIsSet_ = true;
}

bool ShowNotebookResponse::leaseIsSet() const
{
    return leaseIsSet_;
}

void ShowNotebookResponse::unsetlease()
{
    leaseIsSet_ = false;
}

std::string ShowNotebookResponse::getName() const
{
    return name_;
}

void ShowNotebookResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowNotebookResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowNotebookResponse::unsetname()
{
    nameIsSet_ = false;
}

Pool ShowNotebookResponse::getPool() const
{
    return pool_;
}

void ShowNotebookResponse::setPool(const Pool& value)
{
    pool_ = value;
    poolIsSet_ = true;
}

bool ShowNotebookResponse::poolIsSet() const
{
    return poolIsSet_;
}

void ShowNotebookResponse::unsetpool()
{
    poolIsSet_ = false;
}

std::string ShowNotebookResponse::getStatus() const
{
    return status_;
}

void ShowNotebookResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowNotebookResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowNotebookResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowNotebookResponse::getToken() const
{
    return token_;
}

void ShowNotebookResponse::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool ShowNotebookResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void ShowNotebookResponse::unsettoken()
{
    tokenIsSet_ = false;
}

std::string ShowNotebookResponse::getUrl() const
{
    return url_;
}

void ShowNotebookResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowNotebookResponse::urlIsSet() const
{
    return urlIsSet_;
}

void ShowNotebookResponse::unseturl()
{
    urlIsSet_ = false;
}

VolumeRes ShowNotebookResponse::getVolume() const
{
    return volume_;
}

void ShowNotebookResponse::setVolume(const VolumeRes& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool ShowNotebookResponse::volumeIsSet() const
{
    return volumeIsSet_;
}

void ShowNotebookResponse::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string ShowNotebookResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowNotebookResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowNotebookResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowNotebookResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ShowNotebookResponse::getFeature() const
{
    return feature_;
}

void ShowNotebookResponse::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool ShowNotebookResponse::featureIsSet() const
{
    return featureIsSet_;
}

void ShowNotebookResponse::unsetfeature()
{
    featureIsSet_ = false;
}

std::vector<std::string>& ShowNotebookResponse::getBillingItems()
{
    return billingItems_;
}

void ShowNotebookResponse::setBillingItems(const std::vector<std::string>& value)
{
    billingItems_ = value;
    billingItemsIsSet_ = true;
}

bool ShowNotebookResponse::billingItemsIsSet() const
{
    return billingItemsIsSet_;
}

void ShowNotebookResponse::unsetbillingItems()
{
    billingItemsIsSet_ = false;
}

UserResponse ShowNotebookResponse::getUser() const
{
    return user_;
}

void ShowNotebookResponse::setUser(const UserResponse& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool ShowNotebookResponse::userIsSet() const
{
    return userIsSet_;
}

void ShowNotebookResponse::unsetuser()
{
    userIsSet_ = false;
}

AffinityType ShowNotebookResponse::getAffinity() const
{
    return affinity_;
}

void ShowNotebookResponse::setAffinity(const AffinityType& value)
{
    affinity_ = value;
    affinityIsSet_ = true;
}

bool ShowNotebookResponse::affinityIsSet() const
{
    return affinityIsSet_;
}

void ShowNotebookResponse::unsetaffinity()
{
    affinityIsSet_ = false;
}

RunUserInfo ShowNotebookResponse::getRunUser() const
{
    return runUser_;
}

void ShowNotebookResponse::setRunUser(const RunUserInfo& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool ShowNotebookResponse::runUserIsSet() const
{
    return runUserIsSet_;
}

void ShowNotebookResponse::unsetrunUser()
{
    runUserIsSet_ = false;
}

std::vector<VolumeResponse>& ShowNotebookResponse::getDataVolumes()
{
    return dataVolumes_;
}

void ShowNotebookResponse::setDataVolumes(const std::vector<VolumeResponse>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool ShowNotebookResponse::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void ShowNotebookResponse::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

std::string ShowNotebookResponse::getIp() const
{
    return ip_;
}

void ShowNotebookResponse::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ShowNotebookResponse::ipIsSet() const
{
    return ipIsSet_;
}

void ShowNotebookResponse::unsetip()
{
    ipIsSet_ = false;
}

UserVpcResponse ShowNotebookResponse::getUserVpc() const
{
    return userVpc_;
}

void ShowNotebookResponse::setUserVpc(const UserVpcResponse& value)
{
    userVpc_ = value;
    userVpcIsSet_ = true;
}

bool ShowNotebookResponse::userVpcIsSet() const
{
    return userVpcIsSet_;
}

void ShowNotebookResponse::unsetuserVpc()
{
    userVpcIsSet_ = false;
}

std::string ShowNotebookResponse::getUserId() const
{
    return userId_;
}

void ShowNotebookResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowNotebookResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowNotebookResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

bool ShowNotebookResponse::isIsNeedCredentials() const
{
    return isNeedCredentials_;
}

void ShowNotebookResponse::setIsNeedCredentials(bool value)
{
    isNeedCredentials_ = value;
    isNeedCredentialsIsSet_ = true;
}

bool ShowNotebookResponse::isNeedCredentialsIsSet() const
{
    return isNeedCredentialsIsSet_;
}

void ShowNotebookResponse::unsetisNeedCredentials()
{
    isNeedCredentialsIsSet_ = false;
}

std::string ShowNotebookResponse::getJupyterVersion() const
{
    return jupyterVersion_;
}

void ShowNotebookResponse::setJupyterVersion(const std::string& value)
{
    jupyterVersion_ = value;
    jupyterVersionIsSet_ = true;
}

bool ShowNotebookResponse::jupyterVersionIsSet() const
{
    return jupyterVersionIsSet_;
}

void ShowNotebookResponse::unsetjupyterVersion()
{
    jupyterVersionIsSet_ = false;
}

std::vector<TmsTagResponse>& ShowNotebookResponse::getTags()
{
    return tags_;
}

void ShowNotebookResponse::setTags(const std::vector<TmsTagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowNotebookResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowNotebookResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


