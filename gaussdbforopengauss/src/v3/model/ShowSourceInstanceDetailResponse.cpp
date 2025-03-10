

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSourceInstanceDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSourceInstanceDetailResponse::ShowSourceInstanceDetailResponse()
{
    clusterMode_ = "";
    clusterModeIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    dataVolumeSize_ = "";
    dataVolumeSizeIsSet_ = false;
    solution_ = "";
    solutionIsSet_ = false;
    nodeNum_ = 0;
    nodeNumIsSet_ = false;
    coordinatorNum_ = 0;
    coordinatorNumIsSet_ = false;
    shardingNum_ = 0;
    shardingNumIsSet_ = false;
    replicaNum_ = 0;
    replicaNumIsSet_ = false;
    engineVersion_ = "";
    engineVersionIsSet_ = false;
}

ShowSourceInstanceDetailResponse::~ShowSourceInstanceDetailResponse() = default;

void ShowSourceInstanceDetailResponse::validate()
{
}

web::json::value ShowSourceInstanceDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterModeIsSet_) {
        val[utility::conversions::to_string_t("cluster_mode")] = ModelBase::toJson(clusterMode_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(dataVolumeSizeIsSet_) {
        val[utility::conversions::to_string_t("data_volume_size")] = ModelBase::toJson(dataVolumeSize_);
    }
    if(solutionIsSet_) {
        val[utility::conversions::to_string_t("solution")] = ModelBase::toJson(solution_);
    }
    if(nodeNumIsSet_) {
        val[utility::conversions::to_string_t("node_num")] = ModelBase::toJson(nodeNum_);
    }
    if(coordinatorNumIsSet_) {
        val[utility::conversions::to_string_t("coordinator_num")] = ModelBase::toJson(coordinatorNum_);
    }
    if(shardingNumIsSet_) {
        val[utility::conversions::to_string_t("sharding_num")] = ModelBase::toJson(shardingNum_);
    }
    if(replicaNumIsSet_) {
        val[utility::conversions::to_string_t("replica_num")] = ModelBase::toJson(replicaNum_);
    }
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }

    return val;
}
bool ShowSourceInstanceDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_volume_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_volume_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("solution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("solution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("coordinator_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("coordinator_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoordinatorNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sharding_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sharding_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShardingNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replica_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replica_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicaNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    return ok;
}


std::string ShowSourceInstanceDetailResponse::getClusterMode() const
{
    return clusterMode_;
}

void ShowSourceInstanceDetailResponse::setClusterMode(const std::string& value)
{
    clusterMode_ = value;
    clusterModeIsSet_ = true;
}

bool ShowSourceInstanceDetailResponse::clusterModeIsSet() const
{
    return clusterModeIsSet_;
}

void ShowSourceInstanceDetailResponse::unsetclusterMode()
{
    clusterModeIsSet_ = false;
}

std::string ShowSourceInstanceDetailResponse::getInstanceMode() const
{
    return instanceMode_;
}

void ShowSourceInstanceDetailResponse::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool ShowSourceInstanceDetailResponse::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void ShowSourceInstanceDetailResponse::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::string ShowSourceInstanceDetailResponse::getDataVolumeSize() const
{
    return dataVolumeSize_;
}

void ShowSourceInstanceDetailResponse::setDataVolumeSize(const std::string& value)
{
    dataVolumeSize_ = value;
    dataVolumeSizeIsSet_ = true;
}

bool ShowSourceInstanceDetailResponse::dataVolumeSizeIsSet() const
{
    return dataVolumeSizeIsSet_;
}

void ShowSourceInstanceDetailResponse::unsetdataVolumeSize()
{
    dataVolumeSizeIsSet_ = false;
}

std::string ShowSourceInstanceDetailResponse::getSolution() const
{
    return solution_;
}

void ShowSourceInstanceDetailResponse::setSolution(const std::string& value)
{
    solution_ = value;
    solutionIsSet_ = true;
}

bool ShowSourceInstanceDetailResponse::solutionIsSet() const
{
    return solutionIsSet_;
}

void ShowSourceInstanceDetailResponse::unsetsolution()
{
    solutionIsSet_ = false;
}

int32_t ShowSourceInstanceDetailResponse::getNodeNum() const
{
    return nodeNum_;
}

void ShowSourceInstanceDetailResponse::setNodeNum(int32_t value)
{
    nodeNum_ = value;
    nodeNumIsSet_ = true;
}

bool ShowSourceInstanceDetailResponse::nodeNumIsSet() const
{
    return nodeNumIsSet_;
}

void ShowSourceInstanceDetailResponse::unsetnodeNum()
{
    nodeNumIsSet_ = false;
}

int32_t ShowSourceInstanceDetailResponse::getCoordinatorNum() const
{
    return coordinatorNum_;
}

void ShowSourceInstanceDetailResponse::setCoordinatorNum(int32_t value)
{
    coordinatorNum_ = value;
    coordinatorNumIsSet_ = true;
}

bool ShowSourceInstanceDetailResponse::coordinatorNumIsSet() const
{
    return coordinatorNumIsSet_;
}

void ShowSourceInstanceDetailResponse::unsetcoordinatorNum()
{
    coordinatorNumIsSet_ = false;
}

int32_t ShowSourceInstanceDetailResponse::getShardingNum() const
{
    return shardingNum_;
}

void ShowSourceInstanceDetailResponse::setShardingNum(int32_t value)
{
    shardingNum_ = value;
    shardingNumIsSet_ = true;
}

bool ShowSourceInstanceDetailResponse::shardingNumIsSet() const
{
    return shardingNumIsSet_;
}

void ShowSourceInstanceDetailResponse::unsetshardingNum()
{
    shardingNumIsSet_ = false;
}

int32_t ShowSourceInstanceDetailResponse::getReplicaNum() const
{
    return replicaNum_;
}

void ShowSourceInstanceDetailResponse::setReplicaNum(int32_t value)
{
    replicaNum_ = value;
    replicaNumIsSet_ = true;
}

bool ShowSourceInstanceDetailResponse::replicaNumIsSet() const
{
    return replicaNumIsSet_;
}

void ShowSourceInstanceDetailResponse::unsetreplicaNum()
{
    replicaNumIsSet_ = false;
}

std::string ShowSourceInstanceDetailResponse::getEngineVersion() const
{
    return engineVersion_;
}

void ShowSourceInstanceDetailResponse::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool ShowSourceInstanceDetailResponse::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void ShowSourceInstanceDetailResponse::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

}
}
}
}
}


