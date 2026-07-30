

#include "huaweicloud/modelarts/v1/model/WorkflowSubgraphResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowSubgraphResp::WorkflowSubgraphResp()
{
    name_ = "";
    nameIsSet_ = false;
    stepsIsSet_ = false;
}

WorkflowSubgraphResp::~WorkflowSubgraphResp() = default;

void WorkflowSubgraphResp::validate()
{
}

web::json::value WorkflowSubgraphResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }

    return val;
}
bool WorkflowSubgraphResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    return ok;
}


std::string WorkflowSubgraphResp::getName() const
{
    return name_;
}

void WorkflowSubgraphResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowSubgraphResp::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowSubgraphResp::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& WorkflowSubgraphResp::getSteps()
{
    return steps_;
}

void WorkflowSubgraphResp::setSteps(const std::vector<std::string>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool WorkflowSubgraphResp::stepsIsSet() const
{
    return stepsIsSet_;
}

void WorkflowSubgraphResp::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}


