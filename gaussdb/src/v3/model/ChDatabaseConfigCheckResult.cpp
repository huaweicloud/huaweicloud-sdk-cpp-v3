

#include "huaweicloud/gaussdb/v3/model/ChDatabaseConfigCheckResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChDatabaseConfigCheckResult::ChDatabaseConfigCheckResult()
{
    paramName_ = "";
    paramNameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    checkResult_ = "";
    checkResultIsSet_ = false;
}

ChDatabaseConfigCheckResult::~ChDatabaseConfigCheckResult() = default;

void ChDatabaseConfigCheckResult::validate()
{
}

web::json::value ChDatabaseConfigCheckResult::toJson() const
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
bool ChDatabaseConfigCheckResult::fromJson(const web::json::value& val)
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


std::string ChDatabaseConfigCheckResult::getParamName() const
{
    return paramName_;
}

void ChDatabaseConfigCheckResult::setParamName(const std::string& value)
{
    paramName_ = value;
    paramNameIsSet_ = true;
}

bool ChDatabaseConfigCheckResult::paramNameIsSet() const
{
    return paramNameIsSet_;
}

void ChDatabaseConfigCheckResult::unsetparamName()
{
    paramNameIsSet_ = false;
}

std::string ChDatabaseConfigCheckResult::getValue() const
{
    return value_;
}

void ChDatabaseConfigCheckResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ChDatabaseConfigCheckResult::valueIsSet() const
{
    return valueIsSet_;
}

void ChDatabaseConfigCheckResult::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ChDatabaseConfigCheckResult::getCheckResult() const
{
    return checkResult_;
}

void ChDatabaseConfigCheckResult::setCheckResult(const std::string& value)
{
    checkResult_ = value;
    checkResultIsSet_ = true;
}

bool ChDatabaseConfigCheckResult::checkResultIsSet() const
{
    return checkResultIsSet_;
}

void ChDatabaseConfigCheckResult::unsetcheckResult()
{
    checkResultIsSet_ = false;
}

}
}
}
}
}


