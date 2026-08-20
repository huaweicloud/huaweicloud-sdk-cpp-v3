

#include "huaweicloud/modelarts/v1/model/ResidualResources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResidualResources::ResidualResources()
{
    elbListenerId_ = "";
    elbListenerIdIsSet_ = false;
    elbPoolId_ = "";
    elbPoolIdIsSet_ = false;
    vpcepId_ = "";
    vpcepIdIsSet_ = false;
}

ResidualResources::~ResidualResources() = default;

void ResidualResources::validate()
{
}

web::json::value ResidualResources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(elbListenerIdIsSet_) {
        val[utility::conversions::to_string_t("elb_listener_id")] = ModelBase::toJson(elbListenerId_);
    }
    if(elbPoolIdIsSet_) {
        val[utility::conversions::to_string_t("elb_pool_id")] = ModelBase::toJson(elbPoolId_);
    }
    if(vpcepIdIsSet_) {
        val[utility::conversions::to_string_t("vpcep_id")] = ModelBase::toJson(vpcepId_);
    }

    return val;
}
bool ResidualResources::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("elb_listener_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elb_listener_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElbListenerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("elb_pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("elb_pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setElbPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpcep_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpcep_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcepId(refVal);
        }
    }
    return ok;
}


std::string ResidualResources::getElbListenerId() const
{
    return elbListenerId_;
}

void ResidualResources::setElbListenerId(const std::string& value)
{
    elbListenerId_ = value;
    elbListenerIdIsSet_ = true;
}

bool ResidualResources::elbListenerIdIsSet() const
{
    return elbListenerIdIsSet_;
}

void ResidualResources::unsetelbListenerId()
{
    elbListenerIdIsSet_ = false;
}

std::string ResidualResources::getElbPoolId() const
{
    return elbPoolId_;
}

void ResidualResources::setElbPoolId(const std::string& value)
{
    elbPoolId_ = value;
    elbPoolIdIsSet_ = true;
}

bool ResidualResources::elbPoolIdIsSet() const
{
    return elbPoolIdIsSet_;
}

void ResidualResources::unsetelbPoolId()
{
    elbPoolIdIsSet_ = false;
}

std::string ResidualResources::getVpcepId() const
{
    return vpcepId_;
}

void ResidualResources::setVpcepId(const std::string& value)
{
    vpcepId_ = value;
    vpcepIdIsSet_ = true;
}

bool ResidualResources::vpcepIdIsSet() const
{
    return vpcepIdIsSet_;
}

void ResidualResources::unsetvpcepId()
{
    vpcepIdIsSet_ = false;
}

}
}
}
}
}


