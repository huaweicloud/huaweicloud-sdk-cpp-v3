

#include "huaweicloud/cloudtest/v1/model/QueryCustomFieldsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryCustomFieldsInfo::QueryCustomFieldsInfo()
{
    id_ = 0;
    idIsSet_ = false;
    valuesIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
}

QueryCustomFieldsInfo::~QueryCustomFieldsInfo() = default;

void QueryCustomFieldsInfo::validate()
{
}

web::json::value QueryCustomFieldsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }
    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("field_name")] = ModelBase::toJson(fieldName_);
    }

    return val;
}
bool QueryCustomFieldsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("field_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldName(refVal);
        }
    }
    return ok;
}


int32_t QueryCustomFieldsInfo::getId() const
{
    return id_;
}

void QueryCustomFieldsInfo::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool QueryCustomFieldsInfo::idIsSet() const
{
    return idIsSet_;
}

void QueryCustomFieldsInfo::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& QueryCustomFieldsInfo::getValues()
{
    return values_;
}

void QueryCustomFieldsInfo::setValues(const std::vector<std::string>& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool QueryCustomFieldsInfo::valuesIsSet() const
{
    return valuesIsSet_;
}

void QueryCustomFieldsInfo::unsetvalues()
{
    valuesIsSet_ = false;
}

std::string QueryCustomFieldsInfo::getFieldName() const
{
    return fieldName_;
}

void QueryCustomFieldsInfo::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool QueryCustomFieldsInfo::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void QueryCustomFieldsInfo::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

}
}
}
}
}


