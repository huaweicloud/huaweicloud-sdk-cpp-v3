

#include "huaweicloud/modelarts/v1/model/ResetNodesRequest_rollingConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResetNodesRequest_rollingConfig::ResetNodesRequest_rollingConfig()
{
    strategy_ = "";
    strategyIsSet_ = false;
    maxUnavailable_ = 0;
    maxUnavailableIsSet_ = false;
}

ResetNodesRequest_rollingConfig::~ResetNodesRequest_rollingConfig() = default;

void ResetNodesRequest_rollingConfig::validate()
{
}

web::json::value ResetNodesRequest_rollingConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(strategyIsSet_) {
        val[utility::conversions::to_string_t("strategy")] = ModelBase::toJson(strategy_);
    }
    if(maxUnavailableIsSet_) {
        val[utility::conversions::to_string_t("maxUnavailable")] = ModelBase::toJson(maxUnavailable_);
    }

    return val;
}
bool ResetNodesRequest_rollingConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxUnavailable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxUnavailable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxUnavailable(refVal);
        }
    }
    return ok;
}


std::string ResetNodesRequest_rollingConfig::getStrategy() const
{
    return strategy_;
}

void ResetNodesRequest_rollingConfig::setStrategy(const std::string& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool ResetNodesRequest_rollingConfig::strategyIsSet() const
{
    return strategyIsSet_;
}

void ResetNodesRequest_rollingConfig::unsetstrategy()
{
    strategyIsSet_ = false;
}

int32_t ResetNodesRequest_rollingConfig::getMaxUnavailable() const
{
    return maxUnavailable_;
}

void ResetNodesRequest_rollingConfig::setMaxUnavailable(int32_t value)
{
    maxUnavailable_ = value;
    maxUnavailableIsSet_ = true;
}

bool ResetNodesRequest_rollingConfig::maxUnavailableIsSet() const
{
    return maxUnavailableIsSet_;
}

void ResetNodesRequest_rollingConfig::unsetmaxUnavailable()
{
    maxUnavailableIsSet_ = false;
}

}
}
}
}
}


