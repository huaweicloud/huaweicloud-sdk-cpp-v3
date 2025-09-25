

#include "huaweicloud/codeartspipeline/v2/model/RequestRuleInstance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RequestRuleInstance::RequestRuleInstance()
{
    id_ = "";
    idIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
}

RequestRuleInstance::~RequestRuleInstance() = default;

void RequestRuleInstance::validate()
{
}

web::json::value RequestRuleInstance::toJson() const
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
bool RequestRuleInstance::fromJson(const web::json::value& val)
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


std::string RequestRuleInstance::getId() const
{
    return id_;
}

void RequestRuleInstance::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RequestRuleInstance::idIsSet() const
{
    return idIsSet_;
}

void RequestRuleInstance::unsetid()
{
    idIsSet_ = false;
}

bool RequestRuleInstance::isIsValid() const
{
    return isValid_;
}

void RequestRuleInstance::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool RequestRuleInstance::isValidIsSet() const
{
    return isValidIsSet_;
}

void RequestRuleInstance::unsetisValid()
{
    isValidIsSet_ = false;
}

}
}
}
}
}


