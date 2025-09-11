

#include "huaweicloud/functiongraph/v2/model/FuncDestinationConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




FuncDestinationConfig::FuncDestinationConfig()
{
    destination_ = "";
    destinationIsSet_ = false;
    param_ = "";
    paramIsSet_ = false;
}

FuncDestinationConfig::~FuncDestinationConfig() = default;

void FuncDestinationConfig::validate()
{
}

web::json::value FuncDestinationConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(paramIsSet_) {
        val[utility::conversions::to_string_t("param")] = ModelBase::toJson(param_);
    }

    return val;
}
bool FuncDestinationConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParam(refVal);
        }
    }
    return ok;
}


std::string FuncDestinationConfig::getDestination() const
{
    return destination_;
}

void FuncDestinationConfig::setDestination(const std::string& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool FuncDestinationConfig::destinationIsSet() const
{
    return destinationIsSet_;
}

void FuncDestinationConfig::unsetdestination()
{
    destinationIsSet_ = false;
}

std::string FuncDestinationConfig::getParam() const
{
    return param_;
}

void FuncDestinationConfig::setParam(const std::string& value)
{
    param_ = value;
    paramIsSet_ = true;
}

bool FuncDestinationConfig::paramIsSet() const
{
    return paramIsSet_;
}

void FuncDestinationConfig::unsetparam()
{
    paramIsSet_ = false;
}

}
}
}
}
}


