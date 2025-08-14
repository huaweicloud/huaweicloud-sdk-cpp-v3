

#include "huaweicloud/iotda/v5/model/ColumnMapping.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ColumnMapping::ColumnMapping()
{
    columnName_ = "";
    columnNameIsSet_ = false;
    jsonKey_ = "";
    jsonKeyIsSet_ = false;
}

ColumnMapping::~ColumnMapping() = default;

void ColumnMapping::validate()
{
}

web::json::value ColumnMapping::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnNameIsSet_) {
        val[utility::conversions::to_string_t("column_name")] = ModelBase::toJson(columnName_);
    }
    if(jsonKeyIsSet_) {
        val[utility::conversions::to_string_t("json_key")] = ModelBase::toJson(jsonKey_);
    }

    return val;
}
bool ColumnMapping::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("column_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("json_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("json_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJsonKey(refVal);
        }
    }
    return ok;
}


std::string ColumnMapping::getColumnName() const
{
    return columnName_;
}

void ColumnMapping::setColumnName(const std::string& value)
{
    columnName_ = value;
    columnNameIsSet_ = true;
}

bool ColumnMapping::columnNameIsSet() const
{
    return columnNameIsSet_;
}

void ColumnMapping::unsetcolumnName()
{
    columnNameIsSet_ = false;
}

std::string ColumnMapping::getJsonKey() const
{
    return jsonKey_;
}

void ColumnMapping::setJsonKey(const std::string& value)
{
    jsonKey_ = value;
    jsonKeyIsSet_ = true;
}

bool ColumnMapping::jsonKeyIsSet() const
{
    return jsonKeyIsSet_;
}

void ColumnMapping::unsetjsonKey()
{
    jsonKeyIsSet_ = false;
}

}
}
}
}
}


