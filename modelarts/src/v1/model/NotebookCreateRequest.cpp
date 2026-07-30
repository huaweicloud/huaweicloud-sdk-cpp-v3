

#include "huaweicloud/modelarts/v1/model/NotebookCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NotebookCreateRequest::NotebookCreateRequest()
{
    description_ = "";
    descriptionIsSet_ = false;
    endpointsIsSet_ = false;
    feature_ = "";
    featureIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    customSpecIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    volumeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    hooksIsSet_ = false;
    leaseIsSet_ = false;
    affinityIsSet_ = false;
    runUserIsSet_ = false;
    dataVolumesIsSet_ = false;
    userVpcIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
}

NotebookCreateRequest::~NotebookCreateRequest() = default;

void NotebookCreateRequest::validate()
{
}

web::json::value NotebookCreateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(endpointsIsSet_) {
        val[utility::conversions::to_string_t("endpoints")] = ModelBase::toJson(endpoints_);
    }
    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(customSpecIsSet_) {
        val[utility::conversions::to_string_t("custom_spec")] = ModelBase::toJson(customSpec_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(hooksIsSet_) {
        val[utility::conversions::to_string_t("hooks")] = ModelBase::toJson(hooks_);
    }
    if(leaseIsSet_) {
        val[utility::conversions::to_string_t("lease")] = ModelBase::toJson(lease_);
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
    if(userVpcIsSet_) {
        val[utility::conversions::to_string_t("user_vpc")] = ModelBase::toJson(userVpc_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}
bool NotebookCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<EndpointsReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpoints(refVal);
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
            NotebookCustomSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            VolumeMountRequest refVal;
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
    if(val.has_field(utility::conversions::to_string_t("hooks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hooks"));
        if(!fieldValue.is_null())
        {
            CustomHooks refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHooks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lease"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lease"));
        if(!fieldValue.is_null())
        {
            LeaseReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLease(refVal);
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
            RunUserRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_volumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_volumes"));
        if(!fieldValue.is_null())
        {
            std::vector<VolumeMountRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_vpc"));
        if(!fieldValue.is_null())
        {
            UserVpcRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserVpc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    return ok;
}


std::string NotebookCreateRequest::getDescription() const
{
    return description_;
}

void NotebookCreateRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NotebookCreateRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NotebookCreateRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<EndpointsReq>& NotebookCreateRequest::getEndpoints()
{
    return endpoints_;
}

void NotebookCreateRequest::setEndpoints(const std::vector<EndpointsReq>& value)
{
    endpoints_ = value;
    endpointsIsSet_ = true;
}

bool NotebookCreateRequest::endpointsIsSet() const
{
    return endpointsIsSet_;
}

void NotebookCreateRequest::unsetendpoints()
{
    endpointsIsSet_ = false;
}

std::string NotebookCreateRequest::getFeature() const
{
    return feature_;
}

void NotebookCreateRequest::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool NotebookCreateRequest::featureIsSet() const
{
    return featureIsSet_;
}

void NotebookCreateRequest::unsetfeature()
{
    featureIsSet_ = false;
}

std::string NotebookCreateRequest::getFlavor() const
{
    return flavor_;
}

void NotebookCreateRequest::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NotebookCreateRequest::flavorIsSet() const
{
    return flavorIsSet_;
}

void NotebookCreateRequest::unsetflavor()
{
    flavorIsSet_ = false;
}

NotebookCustomSpec NotebookCreateRequest::getCustomSpec() const
{
    return customSpec_;
}

void NotebookCreateRequest::setCustomSpec(const NotebookCustomSpec& value)
{
    customSpec_ = value;
    customSpecIsSet_ = true;
}

bool NotebookCreateRequest::customSpecIsSet() const
{
    return customSpecIsSet_;
}

void NotebookCreateRequest::unsetcustomSpec()
{
    customSpecIsSet_ = false;
}

std::string NotebookCreateRequest::getImageId() const
{
    return imageId_;
}

void NotebookCreateRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool NotebookCreateRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void NotebookCreateRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string NotebookCreateRequest::getName() const
{
    return name_;
}

void NotebookCreateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NotebookCreateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NotebookCreateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string NotebookCreateRequest::getPoolId() const
{
    return poolId_;
}

void NotebookCreateRequest::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool NotebookCreateRequest::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void NotebookCreateRequest::unsetpoolId()
{
    poolIdIsSet_ = false;
}

VolumeMountRequest NotebookCreateRequest::getVolume() const
{
    return volume_;
}

void NotebookCreateRequest::setVolume(const VolumeMountRequest& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool NotebookCreateRequest::volumeIsSet() const
{
    return volumeIsSet_;
}

void NotebookCreateRequest::unsetvolume()
{
    volumeIsSet_ = false;
}

std::string NotebookCreateRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void NotebookCreateRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool NotebookCreateRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void NotebookCreateRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

CustomHooks NotebookCreateRequest::getHooks() const
{
    return hooks_;
}

void NotebookCreateRequest::setHooks(const CustomHooks& value)
{
    hooks_ = value;
    hooksIsSet_ = true;
}

bool NotebookCreateRequest::hooksIsSet() const
{
    return hooksIsSet_;
}

void NotebookCreateRequest::unsethooks()
{
    hooksIsSet_ = false;
}

LeaseReq NotebookCreateRequest::getLease() const
{
    return lease_;
}

void NotebookCreateRequest::setLease(const LeaseReq& value)
{
    lease_ = value;
    leaseIsSet_ = true;
}

bool NotebookCreateRequest::leaseIsSet() const
{
    return leaseIsSet_;
}

void NotebookCreateRequest::unsetlease()
{
    leaseIsSet_ = false;
}

AffinityType NotebookCreateRequest::getAffinity() const
{
    return affinity_;
}

void NotebookCreateRequest::setAffinity(const AffinityType& value)
{
    affinity_ = value;
    affinityIsSet_ = true;
}

bool NotebookCreateRequest::affinityIsSet() const
{
    return affinityIsSet_;
}

void NotebookCreateRequest::unsetaffinity()
{
    affinityIsSet_ = false;
}

RunUserRequest NotebookCreateRequest::getRunUser() const
{
    return runUser_;
}

void NotebookCreateRequest::setRunUser(const RunUserRequest& value)
{
    runUser_ = value;
    runUserIsSet_ = true;
}

bool NotebookCreateRequest::runUserIsSet() const
{
    return runUserIsSet_;
}

void NotebookCreateRequest::unsetrunUser()
{
    runUserIsSet_ = false;
}

std::vector<VolumeMountRequest>& NotebookCreateRequest::getDataVolumes()
{
    return dataVolumes_;
}

void NotebookCreateRequest::setDataVolumes(const std::vector<VolumeMountRequest>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool NotebookCreateRequest::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void NotebookCreateRequest::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

UserVpcRequest NotebookCreateRequest::getUserVpc() const
{
    return userVpc_;
}

void NotebookCreateRequest::setUserVpc(const UserVpcRequest& value)
{
    userVpc_ = value;
    userVpcIsSet_ = true;
}

bool NotebookCreateRequest::userVpcIsSet() const
{
    return userVpcIsSet_;
}

void NotebookCreateRequest::unsetuserVpc()
{
    userVpcIsSet_ = false;
}

int32_t NotebookCreateRequest::getDuration() const
{
    return duration_;
}

void NotebookCreateRequest::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool NotebookCreateRequest::durationIsSet() const
{
    return durationIsSet_;
}

void NotebookCreateRequest::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}


