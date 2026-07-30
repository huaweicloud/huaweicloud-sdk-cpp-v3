

#include "huaweicloud/modelarts/v1/model/RedeployConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RedeployConfig::RedeployConfig()
{
    type_ = "";
    typeIsSet_ = false;
    autoFlow_ = "";
    autoFlowIsSet_ = false;
}

RedeployConfig::~RedeployConfig() = default;

void RedeployConfig::validate()
{
}

web::json::value RedeployConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(autoFlowIsSet_) {
        val[utility::conversions::to_string_t("autoFlow")] = ModelBase::toJson(autoFlow_);
    }

    return val;
}
bool RedeployConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autoFlow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autoFlow"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoFlow(refVal);
        }
    }
    return ok;
}


std::string RedeployConfig::getType() const
{
    return type_;
}

void RedeployConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RedeployConfig::typeIsSet() const
{
    return typeIsSet_;
}

void RedeployConfig::unsettype()
{
    typeIsSet_ = false;
}

std::string RedeployConfig::getAutoFlow() const
{
    return autoFlow_;
}

void RedeployConfig::setAutoFlow(const std::string& value)
{
    autoFlow_ = value;
    autoFlowIsSet_ = true;
}

bool RedeployConfig::autoFlowIsSet() const
{
    return autoFlowIsSet_;
}

void RedeployConfig::unsetautoFlow()
{
    autoFlowIsSet_ = false;
}

}
}
}
}
}


