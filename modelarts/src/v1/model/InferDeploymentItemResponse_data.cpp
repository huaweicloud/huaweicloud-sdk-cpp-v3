

#include "huaweicloud/modelarts/v1/model/InferDeploymentItemResponse_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InferDeploymentItemResponse_data::InferDeploymentItemResponse_data()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    inferName_ = "";
    inferNameIsSet_ = false;
    serviceGroupName_ = "";
    serviceGroupNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    ltsState_ = "";
    ltsStateIsSet_ = false;
    mirrorTrafficEnable_ = false;
    mirrorTrafficEnableIsSet_ = false;
    mirrorTrafficWeight_ = "";
    mirrorTrafficWeightIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    trafficRatio_ = "";
    trafficRatioIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    frozenInfosIsSet_ = false;
}

InferDeploymentItemResponse_data::~InferDeploymentItemResponse_data() = default;

void InferDeploymentItemResponse_data::validate()
{
}

web::json::value InferDeploymentItemResponse_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(inferNameIsSet_) {
        val[utility::conversions::to_string_t("infer_name")] = ModelBase::toJson(inferName_);
    }
    if(serviceGroupNameIsSet_) {
        val[utility::conversions::to_string_t("service_group_name")] = ModelBase::toJson(serviceGroupName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(ltsStateIsSet_) {
        val[utility::conversions::to_string_t("lts_state")] = ModelBase::toJson(ltsState_);
    }
    if(mirrorTrafficEnableIsSet_) {
        val[utility::conversions::to_string_t("mirror_traffic_enable")] = ModelBase::toJson(mirrorTrafficEnable_);
    }
    if(mirrorTrafficWeightIsSet_) {
        val[utility::conversions::to_string_t("mirror_traffic_weight")] = ModelBase::toJson(mirrorTrafficWeight_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(trafficRatioIsSet_) {
        val[utility::conversions::to_string_t("traffic_ratio")] = ModelBase::toJson(trafficRatio_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(frozenInfosIsSet_) {
        val[utility::conversions::to_string_t("frozen_infos")] = ModelBase::toJson(frozenInfos_);
    }

    return val;
}
bool InferDeploymentItemResponse_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("infer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("infer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceGroupName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lts_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mirror_traffic_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mirror_traffic_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMirrorTrafficEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mirror_traffic_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mirror_traffic_weight"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMirrorTrafficWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficRatio(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frozen_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<FrozenInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenInfos(refVal);
        }
    }
    return ok;
}


std::string InferDeploymentItemResponse_data::getId() const
{
    return id_;
}

void InferDeploymentItemResponse_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InferDeploymentItemResponse_data::idIsSet() const
{
    return idIsSet_;
}

void InferDeploymentItemResponse_data::unsetid()
{
    idIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getName() const
{
    return name_;
}

void InferDeploymentItemResponse_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool InferDeploymentItemResponse_data::nameIsSet() const
{
    return nameIsSet_;
}

void InferDeploymentItemResponse_data::unsetname()
{
    nameIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getInferName() const
{
    return inferName_;
}

void InferDeploymentItemResponse_data::setInferName(const std::string& value)
{
    inferName_ = value;
    inferNameIsSet_ = true;
}

bool InferDeploymentItemResponse_data::inferNameIsSet() const
{
    return inferNameIsSet_;
}

void InferDeploymentItemResponse_data::unsetinferName()
{
    inferNameIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getServiceGroupName() const
{
    return serviceGroupName_;
}

void InferDeploymentItemResponse_data::setServiceGroupName(const std::string& value)
{
    serviceGroupName_ = value;
    serviceGroupNameIsSet_ = true;
}

bool InferDeploymentItemResponse_data::serviceGroupNameIsSet() const
{
    return serviceGroupNameIsSet_;
}

void InferDeploymentItemResponse_data::unsetserviceGroupName()
{
    serviceGroupNameIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getStatus() const
{
    return status_;
}

void InferDeploymentItemResponse_data::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InferDeploymentItemResponse_data::statusIsSet() const
{
    return statusIsSet_;
}

void InferDeploymentItemResponse_data::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getLtsState() const
{
    return ltsState_;
}

void InferDeploymentItemResponse_data::setLtsState(const std::string& value)
{
    ltsState_ = value;
    ltsStateIsSet_ = true;
}

bool InferDeploymentItemResponse_data::ltsStateIsSet() const
{
    return ltsStateIsSet_;
}

void InferDeploymentItemResponse_data::unsetltsState()
{
    ltsStateIsSet_ = false;
}

bool InferDeploymentItemResponse_data::isMirrorTrafficEnable() const
{
    return mirrorTrafficEnable_;
}

void InferDeploymentItemResponse_data::setMirrorTrafficEnable(bool value)
{
    mirrorTrafficEnable_ = value;
    mirrorTrafficEnableIsSet_ = true;
}

bool InferDeploymentItemResponse_data::mirrorTrafficEnableIsSet() const
{
    return mirrorTrafficEnableIsSet_;
}

void InferDeploymentItemResponse_data::unsetmirrorTrafficEnable()
{
    mirrorTrafficEnableIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getMirrorTrafficWeight() const
{
    return mirrorTrafficWeight_;
}

void InferDeploymentItemResponse_data::setMirrorTrafficWeight(const std::string& value)
{
    mirrorTrafficWeight_ = value;
    mirrorTrafficWeightIsSet_ = true;
}

bool InferDeploymentItemResponse_data::mirrorTrafficWeightIsSet() const
{
    return mirrorTrafficWeightIsSet_;
}

void InferDeploymentItemResponse_data::unsetmirrorTrafficWeight()
{
    mirrorTrafficWeightIsSet_ = false;
}

int32_t InferDeploymentItemResponse_data::getWeight() const
{
    return weight_;
}

void InferDeploymentItemResponse_data::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool InferDeploymentItemResponse_data::weightIsSet() const
{
    return weightIsSet_;
}

void InferDeploymentItemResponse_data::unsetweight()
{
    weightIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getTrafficRatio() const
{
    return trafficRatio_;
}

void InferDeploymentItemResponse_data::setTrafficRatio(const std::string& value)
{
    trafficRatio_ = value;
    trafficRatioIsSet_ = true;
}

bool InferDeploymentItemResponse_data::trafficRatioIsSet() const
{
    return trafficRatioIsSet_;
}

void InferDeploymentItemResponse_data::unsettrafficRatio()
{
    trafficRatioIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getPoolId() const
{
    return poolId_;
}

void InferDeploymentItemResponse_data::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool InferDeploymentItemResponse_data::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void InferDeploymentItemResponse_data::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getVersion() const
{
    return version_;
}

void InferDeploymentItemResponse_data::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool InferDeploymentItemResponse_data::versionIsSet() const
{
    return versionIsSet_;
}

void InferDeploymentItemResponse_data::unsetversion()
{
    versionIsSet_ = false;
}

std::string InferDeploymentItemResponse_data::getDeployType() const
{
    return deployType_;
}

void InferDeploymentItemResponse_data::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool InferDeploymentItemResponse_data::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void InferDeploymentItemResponse_data::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

int64_t InferDeploymentItemResponse_data::getCreateAt() const
{
    return createAt_;
}

void InferDeploymentItemResponse_data::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool InferDeploymentItemResponse_data::createAtIsSet() const
{
    return createAtIsSet_;
}

void InferDeploymentItemResponse_data::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t InferDeploymentItemResponse_data::getUpdateAt() const
{
    return updateAt_;
}

void InferDeploymentItemResponse_data::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool InferDeploymentItemResponse_data::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void InferDeploymentItemResponse_data::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::vector<FrozenInfo>& InferDeploymentItemResponse_data::getFrozenInfos()
{
    return frozenInfos_;
}

void InferDeploymentItemResponse_data::setFrozenInfos(const std::vector<FrozenInfo>& value)
{
    frozenInfos_ = value;
    frozenInfosIsSet_ = true;
}

bool InferDeploymentItemResponse_data::frozenInfosIsSet() const
{
    return frozenInfosIsSet_;
}

void InferDeploymentItemResponse_data::unsetfrozenInfos()
{
    frozenInfosIsSet_ = false;
}

}
}
}
}
}


