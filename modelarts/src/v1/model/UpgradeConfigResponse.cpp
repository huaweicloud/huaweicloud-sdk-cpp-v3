

#include "huaweicloud/modelarts/v1/model/UpgradeConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UpgradeConfigResponse::UpgradeConfigResponse()
{
    type_ = "";
    typeIsSet_ = false;
    rollingUpdateIsSet_ = false;
}

UpgradeConfigResponse::~UpgradeConfigResponse() = default;

void UpgradeConfigResponse::validate()
{
}

web::json::value UpgradeConfigResponse::toJson() const
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
bool UpgradeConfigResponse::fromJson(const web::json::value& val)
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
            RollingUpdateResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollingUpdate(refVal);
        }
    }
    return ok;
}


std::string UpgradeConfigResponse::getType() const
{
    return type_;
}

void UpgradeConfigResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpgradeConfigResponse::typeIsSet() const
{
    return typeIsSet_;
}

void UpgradeConfigResponse::unsettype()
{
    typeIsSet_ = false;
}

RollingUpdateResponse UpgradeConfigResponse::getRollingUpdate() const
{
    return rollingUpdate_;
}

void UpgradeConfigResponse::setRollingUpdate(const RollingUpdateResponse& value)
{
    rollingUpdate_ = value;
    rollingUpdateIsSet_ = true;
}

bool UpgradeConfigResponse::rollingUpdateIsSet() const
{
    return rollingUpdateIsSet_;
}

void UpgradeConfigResponse::unsetrollingUpdate()
{
    rollingUpdateIsSet_ = false;
}

}
}
}
}
}


