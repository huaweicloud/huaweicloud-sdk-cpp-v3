

#include "huaweicloud/modelarts/v1/model/NodeconfigStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NodeconfigStatus::NodeconfigStatus()
{
    phase_ = "";
    phaseIsSet_ = false;
    configsStatusIsSet_ = false;
}

NodeconfigStatus::~NodeconfigStatus() = default;

void NodeconfigStatus::validate()
{
}

web::json::value NodeconfigStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(phaseIsSet_) {
        val[utility::conversions::to_string_t("phase")] = ModelBase::toJson(phase_);
    }
    if(configsStatusIsSet_) {
        val[utility::conversions::to_string_t("configsStatus")] = ModelBase::toJson(configsStatus_);
    }

    return val;
}
bool NodeconfigStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("phase"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phase"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configsStatus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configsStatus"));
        if(!fieldValue.is_null())
        {
            NodeconfigStatus_configsStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigsStatus(refVal);
        }
    }
    return ok;
}


std::string NodeconfigStatus::getPhase() const
{
    return phase_;
}

void NodeconfigStatus::setPhase(const std::string& value)
{
    phase_ = value;
    phaseIsSet_ = true;
}

bool NodeconfigStatus::phaseIsSet() const
{
    return phaseIsSet_;
}

void NodeconfigStatus::unsetphase()
{
    phaseIsSet_ = false;
}

NodeconfigStatus_configsStatus NodeconfigStatus::getConfigsStatus() const
{
    return configsStatus_;
}

void NodeconfigStatus::setConfigsStatus(const NodeconfigStatus_configsStatus& value)
{
    configsStatus_ = value;
    configsStatusIsSet_ = true;
}

bool NodeconfigStatus::configsStatusIsSet() const
{
    return configsStatusIsSet_;
}

void NodeconfigStatus::unsetconfigsStatus()
{
    configsStatusIsSet_ = false;
}

}
}
}
}
}


