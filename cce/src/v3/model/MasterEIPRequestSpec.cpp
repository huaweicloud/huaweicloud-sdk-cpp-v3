

#include "huaweicloud/cce/v3/model/MasterEIPRequestSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MasterEIPRequestSpec::MasterEIPRequestSpec()
{
    action_ = "";
    actionIsSet_ = false;
    specIsSet_ = false;
    bandwidth_ = "";
    bandwidthIsSet_ = false;
    elasticIp_ = "";
    elasticIpIsSet_ = false;
}

MasterEIPRequestSpec::~MasterEIPRequestSpec() = default;

void MasterEIPRequestSpec::validate()
{
}

web::json::value MasterEIPRequestSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(elasticIpIsSet_) {
        val[utility::conversions::to_string_t("elasticIp")] = ModelBase::toJson(elasticIp_);
    }

    return val;
}
bool MasterEIPRequestSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            MasterEIPRequestSpec_spec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elasticIp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elasticIp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElasticIp(refVal);
        }
    }
    return ok;
}


std::string MasterEIPRequestSpec::getAction() const
{
    return action_;
}

void MasterEIPRequestSpec::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool MasterEIPRequestSpec::actionIsSet() const
{
    return actionIsSet_;
}

void MasterEIPRequestSpec::unsetaction()
{
    actionIsSet_ = false;
}

MasterEIPRequestSpec_spec MasterEIPRequestSpec::getSpec() const
{
    return spec_;
}

void MasterEIPRequestSpec::setSpec(const MasterEIPRequestSpec_spec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool MasterEIPRequestSpec::specIsSet() const
{
    return specIsSet_;
}

void MasterEIPRequestSpec::unsetspec()
{
    specIsSet_ = false;
}

std::string MasterEIPRequestSpec::getBandwidth() const
{
    return bandwidth_;
}

void MasterEIPRequestSpec::setBandwidth(const std::string& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool MasterEIPRequestSpec::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void MasterEIPRequestSpec::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

std::string MasterEIPRequestSpec::getElasticIp() const
{
    return elasticIp_;
}

void MasterEIPRequestSpec::setElasticIp(const std::string& value)
{
    elasticIp_ = value;
    elasticIpIsSet_ = true;
}

bool MasterEIPRequestSpec::elasticIpIsSet() const
{
    return elasticIpIsSet_;
}

void MasterEIPRequestSpec::unsetelasticIp()
{
    elasticIpIsSet_ = false;
}

}
}
}
}
}


