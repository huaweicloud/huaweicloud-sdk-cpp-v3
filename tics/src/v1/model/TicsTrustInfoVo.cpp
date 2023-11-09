

#include "huaweicloud/tics/v1/model/TicsTrustInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsTrustInfoVo::TicsTrustInfoVo()
{
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
    neDeployType_ = "";
    neDeployTypeIsSet_ = false;
    neNodeType_ = "";
    neNodeTypeIsSet_ = false;
    neStatus_ = "";
    neStatusIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    partnerAlias_ = "";
    partnerAliasIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
}

TicsTrustInfoVo::~TicsTrustInfoVo() = default;

void TicsTrustInfoVo::validate()
{
}

web::json::value TicsTrustInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(haModeIsSet_) {
        val[utility::conversions::to_string_t("ha_mode")] = ModelBase::toJson(haMode_);
    }
    if(neDeployTypeIsSet_) {
        val[utility::conversions::to_string_t("ne_deploy_type")] = ModelBase::toJson(neDeployType_);
    }
    if(neNodeTypeIsSet_) {
        val[utility::conversions::to_string_t("ne_node_type")] = ModelBase::toJson(neNodeType_);
    }
    if(neStatusIsSet_) {
        val[utility::conversions::to_string_t("ne_status")] = ModelBase::toJson(neStatus_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(partnerAliasIsSet_) {
        val[utility::conversions::to_string_t("partner_alias")] = ModelBase::toJson(partnerAlias_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool TicsTrustInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ne_deploy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ne_deploy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeDeployType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ne_node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ne_node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ne_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ne_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partner_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partner_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartnerAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


utility::datetime TicsTrustInfoVo::getCreateTime() const
{
    return createTime_;
}

void TicsTrustInfoVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TicsTrustInfoVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TicsTrustInfoVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TicsTrustInfoVo::getHaMode() const
{
    return haMode_;
}

void TicsTrustInfoVo::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool TicsTrustInfoVo::haModeIsSet() const
{
    return haModeIsSet_;
}

void TicsTrustInfoVo::unsethaMode()
{
    haModeIsSet_ = false;
}

std::string TicsTrustInfoVo::getNeDeployType() const
{
    return neDeployType_;
}

void TicsTrustInfoVo::setNeDeployType(const std::string& value)
{
    neDeployType_ = value;
    neDeployTypeIsSet_ = true;
}

bool TicsTrustInfoVo::neDeployTypeIsSet() const
{
    return neDeployTypeIsSet_;
}

void TicsTrustInfoVo::unsetneDeployType()
{
    neDeployTypeIsSet_ = false;
}

std::string TicsTrustInfoVo::getNeNodeType() const
{
    return neNodeType_;
}

void TicsTrustInfoVo::setNeNodeType(const std::string& value)
{
    neNodeType_ = value;
    neNodeTypeIsSet_ = true;
}

bool TicsTrustInfoVo::neNodeTypeIsSet() const
{
    return neNodeTypeIsSet_;
}

void TicsTrustInfoVo::unsetneNodeType()
{
    neNodeTypeIsSet_ = false;
}

std::string TicsTrustInfoVo::getNeStatus() const
{
    return neStatus_;
}

void TicsTrustInfoVo::setNeStatus(const std::string& value)
{
    neStatus_ = value;
    neStatusIsSet_ = true;
}

bool TicsTrustInfoVo::neStatusIsSet() const
{
    return neStatusIsSet_;
}

void TicsTrustInfoVo::unsetneStatus()
{
    neStatusIsSet_ = false;
}

std::string TicsTrustInfoVo::getNodeId() const
{
    return nodeId_;
}

void TicsTrustInfoVo::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool TicsTrustInfoVo::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void TicsTrustInfoVo::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string TicsTrustInfoVo::getNodeName() const
{
    return nodeName_;
}

void TicsTrustInfoVo::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool TicsTrustInfoVo::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void TicsTrustInfoVo::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string TicsTrustInfoVo::getPartnerAlias() const
{
    return partnerAlias_;
}

void TicsTrustInfoVo::setPartnerAlias(const std::string& value)
{
    partnerAlias_ = value;
    partnerAliasIsSet_ = true;
}

bool TicsTrustInfoVo::partnerAliasIsSet() const
{
    return partnerAliasIsSet_;
}

void TicsTrustInfoVo::unsetpartnerAlias()
{
    partnerAliasIsSet_ = false;
}

utility::datetime TicsTrustInfoVo::getUpdateTime() const
{
    return updateTime_;
}

void TicsTrustInfoVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool TicsTrustInfoVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void TicsTrustInfoVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


