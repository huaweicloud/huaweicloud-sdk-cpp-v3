

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowDeploymentFormResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowDeploymentFormResponse::ShowDeploymentFormResponse()
{
    initialNodeNum_ = 0;
    initialNodeNumIsSet_ = false;
    solution_ = "";
    solutionIsSet_ = false;
    shardNum_ = 0;
    shardNumIsSet_ = false;
    replicaNum_ = 0;
    replicaNumIsSet_ = false;
    eachExpandNodes_ = 0;
    eachExpandNodesIsSet_ = false;
    maxShardCount_ = 0;
    maxShardCountIsSet_ = false;
    eachShardNum_ = 0;
    eachShardNumIsSet_ = false;
}

ShowDeploymentFormResponse::~ShowDeploymentFormResponse() = default;

void ShowDeploymentFormResponse::validate()
{
}

web::json::value ShowDeploymentFormResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(initialNodeNumIsSet_) {
        val[utility::conversions::to_string_t("initial_node_num")] = ModelBase::toJson(initialNodeNum_);
    }
    if(solutionIsSet_) {
        val[utility::conversions::to_string_t("solution")] = ModelBase::toJson(solution_);
    }
    if(shardNumIsSet_) {
        val[utility::conversions::to_string_t("shard_num")] = ModelBase::toJson(shardNum_);
    }
    if(replicaNumIsSet_) {
        val[utility::conversions::to_string_t("replica_num")] = ModelBase::toJson(replicaNum_);
    }
    if(eachExpandNodesIsSet_) {
        val[utility::conversions::to_string_t("each_expand_nodes")] = ModelBase::toJson(eachExpandNodes_);
    }
    if(maxShardCountIsSet_) {
        val[utility::conversions::to_string_t("max_shard_count")] = ModelBase::toJson(maxShardCount_);
    }
    if(eachShardNumIsSet_) {
        val[utility::conversions::to_string_t("each_shard_num")] = ModelBase::toJson(eachShardNum_);
    }

    return val;
}
bool ShowDeploymentFormResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("initial_node_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initial_node_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitialNodeNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("shard_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shard_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShardNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("each_expand_nodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("each_expand_nodes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEachExpandNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_shard_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_shard_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxShardCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("each_shard_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("each_shard_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEachShardNum(refVal);
        }
    }
    return ok;
}


int32_t ShowDeploymentFormResponse::getInitialNodeNum() const
{
    return initialNodeNum_;
}

void ShowDeploymentFormResponse::setInitialNodeNum(int32_t value)
{
    initialNodeNum_ = value;
    initialNodeNumIsSet_ = true;
}

bool ShowDeploymentFormResponse::initialNodeNumIsSet() const
{
    return initialNodeNumIsSet_;
}

void ShowDeploymentFormResponse::unsetinitialNodeNum()
{
    initialNodeNumIsSet_ = false;
}

std::string ShowDeploymentFormResponse::getSolution() const
{
    return solution_;
}

void ShowDeploymentFormResponse::setSolution(const std::string& value)
{
    solution_ = value;
    solutionIsSet_ = true;
}

bool ShowDeploymentFormResponse::solutionIsSet() const
{
    return solutionIsSet_;
}

void ShowDeploymentFormResponse::unsetsolution()
{
    solutionIsSet_ = false;
}

int32_t ShowDeploymentFormResponse::getShardNum() const
{
    return shardNum_;
}

void ShowDeploymentFormResponse::setShardNum(int32_t value)
{
    shardNum_ = value;
    shardNumIsSet_ = true;
}

bool ShowDeploymentFormResponse::shardNumIsSet() const
{
    return shardNumIsSet_;
}

void ShowDeploymentFormResponse::unsetshardNum()
{
    shardNumIsSet_ = false;
}

int32_t ShowDeploymentFormResponse::getReplicaNum() const
{
    return replicaNum_;
}

void ShowDeploymentFormResponse::setReplicaNum(int32_t value)
{
    replicaNum_ = value;
    replicaNumIsSet_ = true;
}

bool ShowDeploymentFormResponse::replicaNumIsSet() const
{
    return replicaNumIsSet_;
}

void ShowDeploymentFormResponse::unsetreplicaNum()
{
    replicaNumIsSet_ = false;
}

int32_t ShowDeploymentFormResponse::getEachExpandNodes() const
{
    return eachExpandNodes_;
}

void ShowDeploymentFormResponse::setEachExpandNodes(int32_t value)
{
    eachExpandNodes_ = value;
    eachExpandNodesIsSet_ = true;
}

bool ShowDeploymentFormResponse::eachExpandNodesIsSet() const
{
    return eachExpandNodesIsSet_;
}

void ShowDeploymentFormResponse::unseteachExpandNodes()
{
    eachExpandNodesIsSet_ = false;
}

int32_t ShowDeploymentFormResponse::getMaxShardCount() const
{
    return maxShardCount_;
}

void ShowDeploymentFormResponse::setMaxShardCount(int32_t value)
{
    maxShardCount_ = value;
    maxShardCountIsSet_ = true;
}

bool ShowDeploymentFormResponse::maxShardCountIsSet() const
{
    return maxShardCountIsSet_;
}

void ShowDeploymentFormResponse::unsetmaxShardCount()
{
    maxShardCountIsSet_ = false;
}

int32_t ShowDeploymentFormResponse::getEachShardNum() const
{
    return eachShardNum_;
}

void ShowDeploymentFormResponse::setEachShardNum(int32_t value)
{
    eachShardNum_ = value;
    eachShardNumIsSet_ = true;
}

bool ShowDeploymentFormResponse::eachShardNumIsSet() const
{
    return eachShardNumIsSet_;
}

void ShowDeploymentFormResponse::unseteachShardNum()
{
    eachShardNumIsSet_ = false;
}

}
}
}
}
}


