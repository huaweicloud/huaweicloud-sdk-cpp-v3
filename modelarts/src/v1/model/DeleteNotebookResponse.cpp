

#include "huaweicloud/modelarts/v1/model/DeleteNotebookResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteNotebookResponse::DeleteNotebookResponse()
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

DeleteNotebookResponse::~DeleteNotebookResponse() = default;

void DeleteNotebookResponse::validate()
{
}

web::json::value DeleteNotebookResponse::toJson() const
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
bool DeleteNotebookResponse::fromJson(const web::json::value& val)
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


std::vector<JobProgress>& DeleteNotebookResponse::getActionProgress()
{
    return actionProgress_;
}

void DeleteNotebookResponse::setActionProgress(const std::vector<JobProgress>& value)
{
    actionProgress_ = value;
    actionProgressIsSet_ = true;
}

bool DeleteNotebookResponse::actionProgressIsSet() const
{
    return actionProgressIsSet_;
}

void DeleteNotebookResponse::unsetactionProgress()
{
    actionProgressIsSet_ = false;
}

std::string DeleteNotebookResponse::getDescription() const
{
    return description_;
}

void DeleteNotebookResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DeleteNotebookResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DeleteNotebookResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<EndpointsRes>& DeleteNotebookResponse::getEndpoints()
{
    return endpoints_;
}

void DeleteNotebookResponse::setEndpoints(const std::vector<EndpointsRes>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool DeleteNotebookResponse::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void DeleteNotebookResponse::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string DeleteNotebookResponse::getFailReason() const
{
    return failReason_;
}

void DeleteNotebookResponse::setFailReason(const std::string& value)
{
    failReason_ = value;
    failReasonIsSet_ = true;
}

bool DeleteNotebookResponse::failReasonIsSet() const
{
    return failReasonIsSet_;
}

void DeleteNotebookResponse::unsetfailReason()
{
    failReasonIsSet_ = false;
}

std::string DeleteNotebookResponse::getFlavor() const
{
    return flavor_;
}

void DeleteNotebookResponse::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool DeleteNotebookResponse::flavorIsSet() const
{
    return flavorIsSet_;
}

void DeleteNotebookResponse::unsetflavor()
{
    flavorIsSet_ = false;
}

NotebookCustomSpecRep DeleteNotebookResponse::getCustomSpec() const
{
    return customSpec_;
}

void DeleteNotebookResponse::setCustomSpec(const NotebookCustomSpecRep& value)
{
    customSpec_ = value;
    customSpecIsSet_ = true;
}

bool DeleteNotebookResponse::customSpecIsSet() const
{
    return customSpecIsSet_;
}

void DeleteNotebookResponse::unsetcustomSpec()
{
    customSpecIsSet_ = false;
}

std::string DeleteNotebookResponse::getId() const
{
    return id_;
}

void DeleteNotebookResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteNotebookResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteNotebookResponse::unsetid()
{
    idIsSet_ = false;
}

Image DeleteNotebookResponse::getImage() const
{
    return image_;
}

void DeleteNotebookResponse::setImage(const Image& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool DeleteNotebookResponse::imageIsSet() const
{
    return imageIsSet_;
}

void DeleteNotebookResponse::unsetimage()
{
    imageIsSet_ = false;
}

Lease DeleteNotebookResponse::getLease() const
{
    return lease_;
}

void DeleteNotebookResponse::setLease(const Lease& value)
{
    lease_ = value;
    leaseIsSet_ = true;
}

bool DeleteNotebookResponse::leaseIsSet() const
{
    return leaseIsSet_;
}

void DeleteNotebookResponse::unsetlease()
{
    leaseIsSet_ = false;
}

std::string DeleteNotebookResponse::getName() const
{
    return name_;
}

void DeleteNotebookResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteNotebookResponse::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteNotebookResponse::unsetname()
{
    nameIsSet_ = false;
}

Pool DeleteNotebookResponse::getPool() const
{
    return pool_;
}

void DeleteNotebookResponse::setPool(const Pool& value)
{
    pool_ = value;
    poolIsSet_ = true;
}

bool DeleteNotebookResponse::poolIsSet() const
{
    return poolIsSet_;
}

void DeleteNotebookResponse::unsetpool()
{
    poolIsSet_ = false;
}

std::string DeleteNotebookResponse::getStatus() const
{
    return status_;
}

void DeleteNotebookResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteNotebookResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteNotebookResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteNotebookResponse::getToken() const
{
    return token_;
}

void DeleteNotebookResponse::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool DeleteNotebookResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void DeleteNotebookResponse::unsettoken()
{
    tokenIsSet_ = false;
}

std::string DeleteNotebookResponse::getUrl() const
{
    return url_;
}

void DeleteNotebookResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool DeleteNotebookResponse::urlIsSet() const
{
    return urlIsSet_;
}

void DeleteNotebookResponse::unseturl()
{
    urlIsSet_ = false;
}

VolumeRes DeleteNotebookResponse::getVolume() const
{
    return volume_;
}

void DeleteNotebookResponse::setVolume(const VolumeRes& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool DeleteNotebookResponse::volumeIsSet() const
{
    return volumeIsSet_;
}

void DeleteNotebookResponse::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string DeleteNotebookResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void DeleteNotebookResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool DeleteNotebookResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void DeleteNotebookResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string DeleteNotebookResponse::getFeature() const
{
    return feature_;
}

void DeleteNotebookResponse::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool DeleteNotebookResponse::featureIsSet() const
{
    return featureIsSet_;
}

void DeleteNotebookResponse::unsetfeature()
{
    featureIsSet_ = false;
}

std::vector<std::string>& DeleteNotebookResponse::getBillingItems()
{
    return billingItems_;
}

void DeleteNotebookResponse::setBillingItems(const std::vector<std::string>& value)
{
    billingItems_ = value;
    billingItemsIsSet_ = true;
}

bool DeleteNotebookResponse::billingItemsIsSet() const
{
    return billingItemsIsSet_;
}

void DeleteNotebookResponse::unsetbillingItems()
{
    billingItemsIsSet_ = false;
}

UserResponse DeleteNotebookResponse::getUser() const
{
    return user_;
}

void DeleteNotebookResponse::setUser(const UserResponse& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool DeleteNotebookResponse::userIsSet() const
{
    return userIsSet_;
}

void DeleteNotebookResponse::unsetuser()
{
    userIsSet_ = false;
}

AffinityType DeleteNotebookResponse::getAffinity() const
{
    return affinity_;
}

void DeleteNotebookResponse::setAffinity(const AffinityType& value)
{
    affinity_ = value;
    affinityIsSet_ = true;
}

bool DeleteNotebookResponse::affinityIsSet() const
{
    return affinityIsSet_;
}

void DeleteNotebookResponse::unsetaffinity()
{
    affinityIsSet_ = false;
}

RunUserInfo DeleteNotebookResponse::getRunUser() const
{
    return runUser_;
}

void DeleteNotebookResponse::setRunUser(const RunUserInfo& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool DeleteNotebookResponse::runUserIsSet() const
{
    return runUserIsSet_;
}

void DeleteNotebookResponse::unsetrunUser()
{
    runUserIsSet_ = false;
}

std::vector<VolumeResponse>& DeleteNotebookResponse::getDataVolumes()
{
    return dataVolumes_;
}

void DeleteNotebookResponse::setDataVolumes(const std::vector<VolumeResponse>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool DeleteNotebookResponse::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void DeleteNotebookResponse::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

std::string DeleteNotebookResponse::getIp() const
{
    return ip_;
}

void DeleteNotebookResponse::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool DeleteNotebookResponse::ipIsSet() const
{
    return ipIsSet_;
}

void DeleteNotebookResponse::unsetip()
{
    ipIsSet_ = false;
}

UserVpcResponse DeleteNotebookResponse::getUserVpc() const
{
    return userVpc_;
}

void DeleteNotebookResponse::setUserVpc(const UserVpcResponse& value)
{
    userVpc_ = value;
    userVpcIsSet_ = true;
}

bool DeleteNotebookResponse::userVpcIsSet() const
{
    return userVpcIsSet_;
}

void DeleteNotebookResponse::unsetuserVpc()
{
    userVpcIsSet_ = false;
}

std::string DeleteNotebookResponse::getUserId() const
{
    return userId_;
}

void DeleteNotebookResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool DeleteNotebookResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void DeleteNotebookResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

bool DeleteNotebookResponse::isIsNeedCredentials() const
{
    return isNeedCredentials_;
}

void DeleteNotebookResponse::setIsNeedCredentials(bool value)
{
    isNeedCredentials_ = value;
    isNeedCredentialsIsSet_ = true;
}

bool DeleteNotebookResponse::isNeedCredentialsIsSet() const
{
    return isNeedCredentialsIsSet_;
}

void DeleteNotebookResponse::unsetisNeedCredentials()
{
    isNeedCredentialsIsSet_ = false;
}

std::string DeleteNotebookResponse::getJupyterVersion() const
{
    return jupyterVersion_;
}

void DeleteNotebookResponse::setJupyterVersion(const std::string& value)
{
    jupyterVersion_ = value;
    jupyterVersionIsSet_ = true;
}

bool DeleteNotebookResponse::jupyterVersionIsSet() const
{
    return jupyterVersionIsSet_;
}

void DeleteNotebookResponse::unsetjupyterVersion()
{
    jupyterVersionIsSet_ = false;
}

std::vector<TmsTagResponse>& DeleteNotebookResponse::getTags()
{
    return tags_;
}

void DeleteNotebookResponse::setTags(const std::vector<TmsTagResponse>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool DeleteNotebookResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void DeleteNotebookResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


