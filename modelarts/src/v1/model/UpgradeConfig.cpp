

#include "huaweicloud/modelarts/v1/model/UpgradeConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpgradeConfig::UpgradeConfig()
{
    type_ = "";
    typeIsSet_ = false;
    rollingUpdateIsSet_ = false;
}

UpgradeConfig::~UpgradeConfig() = default;

void UpgradeConfig::validate()
{
}

web::json::value UpgradeConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(rollingUpdateIsSet_) {
        val[utility::conversions::to_string_t("rolling_update")] = ModelBase::toJson(rollingUpdate_);
    }

    return val;
}
bool UpgradeConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rolling_update"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rolling_update"));
        if(!fieldValue.is_null())
        {
            RollingUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollingUpdate(refVal);
        }
    }
    return ok;
}


std::string UpgradeConfig::getType() const
{
    return type_;
}

void UpgradeConfig::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpgradeConfig::typeIsSet() const
{
    return typeIsSet_;
}

void UpgradeConfig::unsettype()
{
    typeIsSet_ = false;
}

RollingUpdate UpgradeConfig::getRollingUpdate() const
{
    return rollingUpdate_;
}

void UpgradeConfig::setRollingUpdate(const RollingUpdate& value)
{
    rollingUpdate_ = value;
    rollingUpdateIsSet_ = true;
}

bool UpgradeConfig::rollingUpdateIsSet() const
{
    return rollingUpdateIsSet_;
}

void UpgradeConfig::unsetrollingUpdate()
{
    rollingUpdateIsSet_ = false;
}

}
}
}
}
}


