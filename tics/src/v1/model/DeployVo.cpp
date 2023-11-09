

#include "huaweicloud/tics/v1/model/DeployVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




DeployVo::DeployVo()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    nodeName_ = "";
    nodeNameIsSet_ = false;
    nodePartnerAlias_ = "";
    nodePartnerAliasIsSet_ = false;
    nodeType_ = "";
    nodeTypeIsSet_ = false;
    stagesIsSet_ = false;
}

DeployVo::~DeployVo() = default;

void DeployVo::validate()
{
}

web::json::value DeployVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(nodePartnerAliasIsSet_) {
        val[utility::conversions::to_string_t("node_partner_alias")] = ModelBase::toJson(nodePartnerAlias_);
    }
    if(nodeTypeIsSet_) {
        val[utility::conversions::to_string_t("node_type")] = ModelBase::toJson(nodeType_);
    }
    if(stagesIsSet_) {
        val[utility::conversions::to_string_t("stages")] = ModelBase::toJson(stages_);
    }

    return val;
}
bool DeployVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("node_partner_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_partner_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodePartnerAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stages"));
        if(!fieldValue.is_null())
        {
            std::vector<StageVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStages(refVal);
        }
    }
    return ok;
}


std::string DeployVo::getNodeId() const
{
    return nodeId_;
}

void DeployVo::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool DeployVo::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void DeployVo::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string DeployVo::getNodeName() const
{
    return nodeName_;
}

void DeployVo::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool DeployVo::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void DeployVo::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string DeployVo::getNodePartnerAlias() const
{
    return nodePartnerAlias_;
}

void DeployVo::setNodePartnerAlias(const std::string& value)
{
    nodePartnerAlias_ = value;
    nodePartnerAliasIsSet_ = true;
}

bool DeployVo::nodePartnerAliasIsSet() const
{
    return nodePartnerAliasIsSet_;
}

void DeployVo::unsetnodePartnerAlias()
{
    nodePartnerAliasIsSet_ = false;
}

std::string DeployVo::getNodeType() const
{
    return nodeType_;
}

void DeployVo::setNodeType(const std::string& value)
{
    nodeType_ = value;
    nodeTypeIsSet_ = true;
}

bool DeployVo::nodeTypeIsSet() const
{
    return nodeTypeIsSet_;
}

void DeployVo::unsetnodeType()
{
    nodeTypeIsSet_ = false;
}

std::vector<StageVo>& DeployVo::getStages()
{
    return stages_;
}

void DeployVo::setStages(const std::vector<StageVo>& value)
{
    stages_ = value;
    stagesIsSet_ = true;
}

bool DeployVo::stagesIsSet() const
{
    return stagesIsSet_;
}

void DeployVo::unsetstages()
{
    stagesIsSet_ = false;
}

}
}
}
}
}


