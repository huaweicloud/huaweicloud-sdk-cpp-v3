

#include "huaweicloud/functiongraph/v2/model/StateDataFilter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




StateDataFilter::StateDataFilter()
{
    input_ = "";
    inputIsSet_ = false;
    output_ = "";
    outputIsSet_ = false;
}

StateDataFilter::~StateDataFilter() = default;

void StateDataFilter::validate()
{
}

web::json::value StateDataFilter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool StateDataFilter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::string StateDataFilter::getInput() const
{
    return input_;
}

void StateDataFilter::setInput(const std::string& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool StateDataFilter::inputIsSet() const
{
    return inputIsSet_;
}

void StateDataFilter::unsetinput()
{
    inputIsSet_ = false;
}

std::string StateDataFilter::getOutput() const
{
    return output_;
}

void StateDataFilter::setOutput(const std::string& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool StateDataFilter::outputIsSet() const
{
    return outputIsSet_;
}

void StateDataFilter::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


