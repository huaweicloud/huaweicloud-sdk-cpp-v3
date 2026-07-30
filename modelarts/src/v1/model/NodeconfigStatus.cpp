

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

}
}
}
}
}


