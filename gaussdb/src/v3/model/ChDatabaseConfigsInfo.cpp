

#include "huaweicloud/gaussdb/v3/model/ChDatabaseConfigsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChDatabaseConfigsInfo::ChDatabaseConfigsInfo()
{
    paramName_ = "";
    paramNameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ChDatabaseConfigsInfo::~ChDatabaseConfigsInfo() = default;

void ChDatabaseConfigsInfo::validate()
{
}

web::json::value ChDatabaseConfigsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramNameIsSet_) {
        val[utility::conversions::to_string_t("param_name")] = ModelBase::toJson(paramName_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ChDatabaseConfigsInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ChDatabaseConfigsInfo::getParamName() const
{
    return paramName_;
}

void ChDatabaseConfigsInfo::setParamName(const std::string& value)
{
    paramName_ = value;
    paramNameIsSet_ = true;
}

bool ChDatabaseConfigsInfo::paramNameIsSet() const
{
    return paramNameIsSet_;
}

void ChDatabaseConfigsInfo::unsetparamName()
{
    paramNameIsSet_ = false;
}

std::string ChDatabaseConfigsInfo::getValue() const
{
    return value_;
}

void ChDatabaseConfigsInfo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ChDatabaseConfigsInfo::valueIsSet() const
{
    return valueIsSet_;
}

void ChDatabaseConfigsInfo::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


