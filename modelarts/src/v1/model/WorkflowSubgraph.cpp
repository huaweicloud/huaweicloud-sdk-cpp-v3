

#include "huaweicloud/modelarts/v1/model/WorkflowSubgraph.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowSubgraph::WorkflowSubgraph()
{
    name_ = "";
    nameIsSet_ = false;
    stepsIsSet_ = false;
}

WorkflowSubgraph::~WorkflowSubgraph() = default;

void WorkflowSubgraph::validate()
{
}

web::json::value WorkflowSubgraph::toJson() const
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
bool WorkflowSubgraph::fromJson(const web::json::value& val)
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


std::string WorkflowSubgraph::getName() const
{
    return name_;
}

void WorkflowSubgraph::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkflowSubgraph::nameIsSet() const
{
    return nameIsSet_;
}

void WorkflowSubgraph::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& WorkflowSubgraph::getSteps()
{
    return steps_;
}

void WorkflowSubgraph::setSteps(const std::vector<std::string>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool WorkflowSubgraph::stepsIsSet() const
{
    return stepsIsSet_;
}

void WorkflowSubgraph::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}


