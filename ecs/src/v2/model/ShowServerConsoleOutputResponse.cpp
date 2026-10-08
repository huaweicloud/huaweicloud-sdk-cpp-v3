

#include "huaweicloud/ecs/v2/model/ShowServerConsoleOutputResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerConsoleOutputResponse::ShowServerConsoleOutputResponse()
{
    output_ = "";
    outputIsSet_ = false;
}

ShowServerConsoleOutputResponse::~ShowServerConsoleOutputResponse() = default;

void ShowServerConsoleOutputResponse::validate()
{
}

web::json::value ShowServerConsoleOutputResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool ShowServerConsoleOutputResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ShowServerConsoleOutputResponse::getOutput() const
{
    return output_;
}

void ShowServerConsoleOutputResponse::setOutput(const std::string& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ShowServerConsoleOutputResponse::outputIsSet() const
{
    return outputIsSet_;
}

void ShowServerConsoleOutputResponse::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


