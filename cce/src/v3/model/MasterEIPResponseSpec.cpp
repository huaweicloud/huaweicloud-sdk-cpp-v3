

#include "huaweicloud/cce/v3/model/MasterEIPResponseSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




MasterEIPResponseSpec::MasterEIPResponseSpec()
{
    action_ = "";
    actionIsSet_ = false;
    specIsSet_ = false;
    elasticIp_ = "";
    elasticIpIsSet_ = false;
}

MasterEIPResponseSpec::~MasterEIPResponseSpec() = default;

void MasterEIPResponseSpec::validate()
{
}

web::json::value MasterEIPResponseSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }
    if(elasticIpIsSet_) {
        val[utility::conversions::to_string_t("elasticIp")] = ModelBase::toJson(elasticIp_);
    }

    return val;
}
bool MasterEIPResponseSpec::fromJson(const web::json::value& val)
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
            MasterEIPResponseSpec_spec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
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


std::string MasterEIPResponseSpec::getAction() const
{
    return action_;
}

void MasterEIPResponseSpec::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool MasterEIPResponseSpec::actionIsSet() const
{
    return actionIsSet_;
}

void MasterEIPResponseSpec::unsetaction()
{
    actionIsSet_ = false;
}

MasterEIPResponseSpec_spec MasterEIPResponseSpec::getSpec() const
{
    return spec_;
}

void MasterEIPResponseSpec::setSpec(const MasterEIPResponseSpec_spec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool MasterEIPResponseSpec::specIsSet() const
{
    return specIsSet_;
}

void MasterEIPResponseSpec::unsetspec()
{
    specIsSet_ = false;
}

std::string MasterEIPResponseSpec::getElasticIp() const
{
    return elasticIp_;
}

void MasterEIPResponseSpec::setElasticIp(const std::string& value)
{
    elasticIp_ = value;
    elasticIpIsSet_ = true;
}

bool MasterEIPResponseSpec::elasticIpIsSet() const
{
    return elasticIpIsSet_;
}

void MasterEIPResponseSpec::unsetelasticIp()
{
    elasticIpIsSet_ = false;
}

}
}
}
}
}


