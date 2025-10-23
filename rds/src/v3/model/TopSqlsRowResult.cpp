

#include "huaweicloud/rds/v3/model/TopSqlsRowResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TopSqlsRowResult::TopSqlsRowResult()
{
    id_ = "";
    idIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

TopSqlsRowResult::~TopSqlsRowResult() = default;

void TopSqlsRowResult::validate()
{
}

web::json::value TopSqlsRowResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool TopSqlsRowResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
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


std::string TopSqlsRowResult::getId() const
{
    return id_;
}

void TopSqlsRowResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TopSqlsRowResult::idIsSet() const
{
    return idIsSet_;
}

void TopSqlsRowResult::unsetid()
{
    idIsSet_ = false;
}

std::string TopSqlsRowResult::getDataType() const
{
    return dataType_;
}

void TopSqlsRowResult::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool TopSqlsRowResult::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void TopSqlsRowResult::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string TopSqlsRowResult::getValue() const
{
    return value_;
}

void TopSqlsRowResult::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TopSqlsRowResult::valueIsSet() const
{
    return valueIsSet_;
}

void TopSqlsRowResult::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


