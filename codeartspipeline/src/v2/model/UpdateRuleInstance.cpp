

#include "huaweicloud/codeartspipeline/v2/model/UpdateRuleInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateRuleInstance::UpdateRuleInstance()
{
    id_ = "";
    idIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
}

UpdateRuleInstance::~UpdateRuleInstance() = default;

void UpdateRuleInstance::validate()
{
}

web::json::value UpdateRuleInstance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }

    return val;
}
bool UpdateRuleInstance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
        }
    }
    return ok;
}


std::string UpdateRuleInstance::getId() const
{
    return id_;
}

void UpdateRuleInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateRuleInstance::idIsSet() const
{
    return idIsSet_;
}

void UpdateRuleInstance::unsetid()
{
    idIsSet_ = false;
}

bool UpdateRuleInstance::isIsValid() const
{
    return isValid_;
}

void UpdateRuleInstance::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool UpdateRuleInstance::isValidIsSet() const
{
    return isValidIsSet_;
}

void UpdateRuleInstance::unsetisValid()
{
    isValidIsSet_ = false;
}

}
}
}
}
}


