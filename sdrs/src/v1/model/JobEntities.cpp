

#include "huaweicloud/sdrs/v1/model/JobEntities.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




JobEntities::JobEntities()
{
    replicationPairId_ = "";
    replicationPairIdIsSet_ = false;
    volumeIds_ = "";
    volumeIdsIsSet_ = false;
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    protectedInstanceId_ = "";
    protectedInstanceIdIsSet_ = false;
    nativeServerId_ = "";
    nativeServerIdIsSet_ = false;
    nicId_ = "";
    nicIdIsSet_ = false;
    subJobsIsSet_ = false;
}

JobEntities::~JobEntities() = default;

void JobEntities::validate()
{
}

web::json::value JobEntities::toJson() const
{
    web::json::value val = web::json::value::object();

    if(replicationPairIdIsSet_) {
        val[utility::conversions::to_string_t("replication_pair_id")] = ModelBase::toJson(replicationPairId_);
    }
    if(volumeIdsIsSet_) {
        val[utility::conversions::to_string_t("volume_ids")] = ModelBase::toJson(volumeIds_);
    }
    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(protectedInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("protected_instance_id")] = ModelBase::toJson(protectedInstanceId_);
    }
    if(nativeServerIdIsSet_) {
        val[utility::conversions::to_string_t("native_server_id")] = ModelBase::toJson(nativeServerId_);
    }
    if(nicIdIsSet_) {
        val[utility::conversions::to_string_t("nic_id")] = ModelBase::toJson(nicId_);
    }
    if(subJobsIsSet_) {
        val[utility::conversions::to_string_t("sub_jobs")] = ModelBase::toJson(subJobs_);
    }

    return val;
}
bool JobEntities::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("replication_pair_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_pair_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationPairId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protected_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("native_server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("native_server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNativeServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nic_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nic_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNicId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<SubJobParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobs(refVal);
        }
    }
    return ok;
}


std::string JobEntities::getReplicationPairId() const
{
    return replicationPairId_;
}

void JobEntities::setReplicationPairId(const std::string& value)
{
    replicationPairId_ = value;
    replicationPairIdIsSet_ = true;
}

bool JobEntities::replicationPairIdIsSet() const
{
    return replicationPairIdIsSet_;
}

void JobEntities::unsetreplicationPairId()
{
    replicationPairIdIsSet_ = false;
}

std::string JobEntities::getVolumeIds() const
{
    return volumeIds_;
}

void JobEntities::setVolumeIds(const std::string& value)
{
    volumeIds_ = value;
    volumeIdsIsSet_ = true;
}

bool JobEntities::volumeIdsIsSet() const
{
    return volumeIdsIsSet_;
}

void JobEntities::unsetvolumeIds()
{
    volumeIdsIsSet_ = false;
}

std::string JobEntities::getServerGroupId() const
{
    return serverGroupId_;
}

void JobEntities::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool JobEntities::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void JobEntities::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string JobEntities::getProtectedInstanceId() const
{
    return protectedInstanceId_;
}

void JobEntities::setProtectedInstanceId(const std::string& value)
{
    protectedInstanceId_ = value;
    protectedInstanceIdIsSet_ = true;
}

bool JobEntities::protectedInstanceIdIsSet() const
{
    return protectedInstanceIdIsSet_;
}

void JobEntities::unsetprotectedInstanceId()
{
    protectedInstanceIdIsSet_ = false;
}

std::string JobEntities::getNativeServerId() const
{
    return nativeServerId_;
}

void JobEntities::setNativeServerId(const std::string& value)
{
    nativeServerId_ = value;
    nativeServerIdIsSet_ = true;
}

bool JobEntities::nativeServerIdIsSet() const
{
    return nativeServerIdIsSet_;
}

void JobEntities::unsetnativeServerId()
{
    nativeServerIdIsSet_ = false;
}

std::string JobEntities::getNicId() const
{
    return nicId_;
}

void JobEntities::setNicId(const std::string& value)
{
    nicId_ = value;
    nicIdIsSet_ = true;
}

bool JobEntities::nicIdIsSet() const
{
    return nicIdIsSet_;
}

void JobEntities::unsetnicId()
{
    nicIdIsSet_ = false;
}

std::vector<SubJobParams>& JobEntities::getSubJobs()
{
    return subJobs_;
}

void JobEntities::setSubJobs(const std::vector<SubJobParams>& value)
{
    subJobs_ = value;
    subJobsIsSet_ = true;
}

bool JobEntities::subJobsIsSet() const
{
    return subJobsIsSet_;
}

void JobEntities::unsetsubJobs()
{
    subJobsIsSet_ = false;
}

}
}
}
}
}


