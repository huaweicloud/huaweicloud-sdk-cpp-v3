

#include "huaweicloud/mpc/v1/model/OutputPolicy.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




OutputPolicy::OutputPolicy()
{
    outputPolicy_ = "";
    outputPolicyIsSet_ = false;
}

OutputPolicy::~OutputPolicy() = default;

void OutputPolicy::validate()
{
}

web::json::value OutputPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(outputPolicyIsSet_) {
        val[utility::conversions::to_string_t("output_policy")] = ModelBase::toJson(outputPolicy_);
    }

    return val;
}

bool OutputPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("output_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputPolicy(refVal);
        }
    }
    return ok;
}


std::string OutputPolicy::getOutputPolicy() const
{
    return outputPolicy_;
}

void OutputPolicy::setOutputPolicy(const std::string& value)
{
    outputPolicy_ = value;
    outputPolicyIsSet_ = true;
}

bool OutputPolicy::outputPolicyIsSet() const
{
    return outputPolicyIsSet_;
}

void OutputPolicy::unsetoutputPolicy()
{
    outputPolicyIsSet_ = false;
}

}
}
}
}
}


