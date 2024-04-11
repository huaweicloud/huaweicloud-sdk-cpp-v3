

#include "huaweicloud/drs/v5/model/ReplayErrorSqlTemplateResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplayErrorSqlTemplateResp::ReplayErrorSqlTemplateResp()
{
    sqlTemplate_ = "";
    sqlTemplateIsSet_ = false;
    targetName_ = "";
    targetNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ReplayErrorSqlTemplateResp::~ReplayErrorSqlTemplateResp() = default;

void ReplayErrorSqlTemplateResp::validate()
{
}

web::json::value ReplayErrorSqlTemplateResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlTemplateIsSet_) {
        val[utility::conversions::to_string_t("sql_template")] = ModelBase::toJson(sqlTemplate_);
    }
    if(targetNameIsSet_) {
        val[utility::conversions::to_string_t("target_name")] = ModelBase::toJson(targetName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(queryTypeIsSet_) {
        val[utility::conversions::to_string_t("query_type")] = ModelBase::toJson(queryType_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ReplayErrorSqlTemplateResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string ReplayErrorSqlTemplateResp::getSqlTemplate() const
{
    return sqlTemplate_;
}

void ReplayErrorSqlTemplateResp::setSqlTemplate(const std::string& value)
{
    sqlTemplate_ = value;
    sqlTemplateIsSet_ = true;
}

bool ReplayErrorSqlTemplateResp::sqlTemplateIsSet() const
{
    return sqlTemplateIsSet_;
}

void ReplayErrorSqlTemplateResp::unsetsqlTemplate()
{
    sqlTemplateIsSet_ = false;
}

std::string ReplayErrorSqlTemplateResp::getTargetName() const
{
    return targetName_;
}

void ReplayErrorSqlTemplateResp::setTargetName(const std::string& value)
{
    targetName_ = value;
    targetNameIsSet_ = true;
}

bool ReplayErrorSqlTemplateResp::targetNameIsSet() const
{
    return targetNameIsSet_;
}

void ReplayErrorSqlTemplateResp::unsettargetName()
{
    targetNameIsSet_ = false;
}

std::string ReplayErrorSqlTemplateResp::getSchemaName() const
{
    return schemaName_;
}

void ReplayErrorSqlTemplateResp::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ReplayErrorSqlTemplateResp::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ReplayErrorSqlTemplateResp::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string ReplayErrorSqlTemplateResp::getQueryType() const
{
    return queryType_;
}

void ReplayErrorSqlTemplateResp::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool ReplayErrorSqlTemplateResp::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void ReplayErrorSqlTemplateResp::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

std::string ReplayErrorSqlTemplateResp::getTargetType() const
{
    return targetType_;
}

void ReplayErrorSqlTemplateResp::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool ReplayErrorSqlTemplateResp::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void ReplayErrorSqlTemplateResp::unsettargetType()
{
    targetTypeIsSet_ = false;
}

int64_t ReplayErrorSqlTemplateResp::getCount() const
{
    return count_;
}

void ReplayErrorSqlTemplateResp::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ReplayErrorSqlTemplateResp::countIsSet() const
{
    return countIsSet_;
}

void ReplayErrorSqlTemplateResp::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


