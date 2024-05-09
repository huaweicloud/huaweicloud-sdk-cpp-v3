

#include "huaweicloud/gaussdb/v3/model/DbConfigCheckResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DbConfigCheckResult::DbConfigCheckResult()
{
    paramName_ = "";
    paramNameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    checkResult_ = "";
    checkResultIsSet_ = false;
}

DbConfigCheckResult::~DbConfigCheckResult() = default;

void DbConfigCheckResult::validate()
{
}

web::json::value DbConfigCheckResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramNameIsSet_) {
        val[utility::conversions::to_string_t("param_name")] = ModelBase::toJson(paramName_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(checkResultIsSet_) {
        val[utility::conversions::to_string_t("check_result")] = ModelBase::toJson(checkResult_);
    }

    return val;
}
bool DbConfigCheckResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("param_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckResult(refVal);
        }
    }
    return ok;
}


std::string DbConfigCheckResult::getParamName() const
{
    return paramName_;
}

void DbConfigCheckResult::setParamName(const std::string& value)
{
    paramName_ = value;
    paramNameIsSet_ = true;
}

bool DbConfigCheckResult::paramNameIsSet() const
{
    return paramNameIsSet_;
}

void DbConfigCheckResult::unsetparamName()
{
    paramNameIsSet_ = false;
}

std::string DbConfigCheckResult::getValue() const
{
    return value_;
}

void DbConfigCheckResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DbConfigCheckResult::valueIsSet() const
{
    return valueIsSet_;
}

void DbConfigCheckResult::unsetvalue()
{
    valueIsSet_ = false;
}

std::string DbConfigCheckResult::getCheckResult() const
{
    return checkResult_;
}

void DbConfigCheckResult::setCheckResult(const std::string& value)
{
    checkResult_ = value;
    checkResultIsSet_ = true;
}

bool DbConfigCheckResult::checkResultIsSet() const
{
    return checkResultIsSet_;
}

void DbConfigCheckResult::unsetcheckResult()
{
    checkResultIsSet_ = false;
}

}
}
}
}
}


