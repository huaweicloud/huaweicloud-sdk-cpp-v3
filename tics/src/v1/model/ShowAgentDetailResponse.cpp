

#include "huaweicloud/tics/v1/model/ShowAgentDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowAgentDetailResponse::ShowAgentDetailResponse()
{
    agentDeployIsSet_ = false;
    agentDeployBcsIsSet_ = false;
    agentDeployDetailIsSet_ = false;
    agentDeployNatIsSet_ = false;
    agentDeployNodeIsSet_ = false;
}

ShowAgentDetailResponse::~ShowAgentDetailResponse() = default;

void ShowAgentDetailResponse::validate()
{
}

web::json::value ShowAgentDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentDeployIsSet_) {
        val[utility::conversions::to_string_t("agent_deploy")] = ModelBase::toJson(agentDeploy_);
    }
    if(agentDeployBcsIsSet_) {
        val[utility::conversions::to_string_t("agent_deploy_bcs")] = ModelBase::toJson(agentDeployBcs_);
    }
    if(agentDeployDetailIsSet_) {
        val[utility::conversions::to_string_t("agent_deploy_detail")] = ModelBase::toJson(agentDeployDetail_);
    }
    if(agentDeployNatIsSet_) {
        val[utility::conversions::to_string_t("agent_deploy_nat")] = ModelBase::toJson(agentDeployNat_);
    }
    if(agentDeployNodeIsSet_) {
        val[utility::conversions::to_string_t("agent_deploy_node")] = ModelBase::toJson(agentDeployNode_);
    }

    return val;
}
bool ShowAgentDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent_deploy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_deploy"));
        if(!fieldValue.is_null())
        {
            TicsAgentDeploy refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentDeploy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_deploy_bcs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_deploy_bcs"));
        if(!fieldValue.is_null())
        {
            TicsAgentDeployBcs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentDeployBcs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_deploy_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_deploy_detail"));
        if(!fieldValue.is_null())
        {
            TicsAgentDeployDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentDeployDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_deploy_nat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_deploy_nat"));
        if(!fieldValue.is_null())
        {
            TicsAgentNatCommonInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentDeployNat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_deploy_node"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_deploy_node"));
        if(!fieldValue.is_null())
        {
            TicsAgentNodeInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentDeployNode(refVal);
        }
    }
    return ok;
}


TicsAgentDeploy ShowAgentDetailResponse::getAgentDeploy() const
{
    return agentDeploy_;
}

void ShowAgentDetailResponse::setAgentDeploy(const TicsAgentDeploy& value)
{
    agentDeploy_ = value;
    agentDeployIsSet_ = true;
}

bool ShowAgentDetailResponse::agentDeployIsSet() const
{
    return agentDeployIsSet_;
}

void ShowAgentDetailResponse::unsetagentDeploy()
{
    agentDeployIsSet_ = false;
}

TicsAgentDeployBcs ShowAgentDetailResponse::getAgentDeployBcs() const
{
    return agentDeployBcs_;
}

void ShowAgentDetailResponse::setAgentDeployBcs(const TicsAgentDeployBcs& value)
{
    agentDeployBcs_ = value;
    agentDeployBcsIsSet_ = true;
}

bool ShowAgentDetailResponse::agentDeployBcsIsSet() const
{
    return agentDeployBcsIsSet_;
}

void ShowAgentDetailResponse::unsetagentDeployBcs()
{
    agentDeployBcsIsSet_ = false;
}

TicsAgentDeployDetail ShowAgentDetailResponse::getAgentDeployDetail() const
{
    return agentDeployDetail_;
}

void ShowAgentDetailResponse::setAgentDeployDetail(const TicsAgentDeployDetail& value)
{
    agentDeployDetail_ = value;
    agentDeployDetailIsSet_ = true;
}

bool ShowAgentDetailResponse::agentDeployDetailIsSet() const
{
    return agentDeployDetailIsSet_;
}

void ShowAgentDetailResponse::unsetagentDeployDetail()
{
    agentDeployDetailIsSet_ = false;
}

TicsAgentNatCommonInfo ShowAgentDetailResponse::getAgentDeployNat() const
{
    return agentDeployNat_;
}

void ShowAgentDetailResponse::setAgentDeployNat(const TicsAgentNatCommonInfo& value)
{
    agentDeployNat_ = value;
    agentDeployNatIsSet_ = true;
}

bool ShowAgentDetailResponse::agentDeployNatIsSet() const
{
    return agentDeployNatIsSet_;
}

void ShowAgentDetailResponse::unsetagentDeployNat()
{
    agentDeployNatIsSet_ = false;
}

TicsAgentNodeInfo ShowAgentDetailResponse::getAgentDeployNode() const
{
    return agentDeployNode_;
}

void ShowAgentDetailResponse::setAgentDeployNode(const TicsAgentNodeInfo& value)
{
    agentDeployNode_ = value;
    agentDeployNodeIsSet_ = true;
}

bool ShowAgentDetailResponse::agentDeployNodeIsSet() const
{
    return agentDeployNodeIsSet_;
}

void ShowAgentDetailResponse::unsetagentDeployNode()
{
    agentDeployNodeIsSet_ = false;
}

}
}
}
}
}


