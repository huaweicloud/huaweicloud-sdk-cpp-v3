

#include "huaweicloud/drs/v5/model/ReplaySlowSqlTemplateResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplaySlowSqlTemplateResp::ReplaySlowSqlTemplateResp()
{
    sqlTemplate_ = "";
    sqlTemplateIsSet_ = false;
    sqlTemplateMd5_ = "";
    sqlTemplateMd5IsSet_ = false;
    targetName_ = "";
    targetNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
    minLatency_ = 0L;
    minLatencyIsSet_ = false;
    maxLatency_ = 0L;
    maxLatencyIsSet_ = false;
    avgLatency_ = 0L;
    avgLatencyIsSet_ = false;
    totalLatency_ = 0L;
    totalLatencyIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ReplaySlowSqlTemplateResp::~ReplaySlowSqlTemplateResp() = default;

void ReplaySlowSqlTemplateResp::validate()
{
}

web::json::value ReplaySlowSqlTemplateResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlTemplateIsSet_) {
        val[utility::conversions::to_string_t("sql_template")] = ModelBase::toJson(sqlTemplate_);
    }
    if(sqlTemplateMd5IsSet_) {
        val[utility::conversions::to_string_t("sql_template_md5")] = ModelBase::toJson(sqlTemplateMd5_);
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
    if(minLatencyIsSet_) {
        val[utility::conversions::to_string_t("min_latency")] = ModelBase::toJson(minLatency_);
    }
    if(maxLatencyIsSet_) {
        val[utility::conversions::to_string_t("max_latency")] = ModelBase::toJson(maxLatency_);
    }
    if(avgLatencyIsSet_) {
        val[utility::conversions::to_string_t("avg_latency")] = ModelBase::toJson(avgLatency_);
    }
    if(totalLatencyIsSet_) {
        val[utility::conversions::to_string_t("total_latency")] = ModelBase::toJson(totalLatency_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ReplaySlowSqlTemplateResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sql_template_md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_template_md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlTemplateMd5(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("min_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_latency"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_latency"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("avg_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avg_latency"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvgLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_latency"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalLatency(refVal);
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


std::string ReplaySlowSqlTemplateResp::getSqlTemplate() const
{
    return sqlTemplate_;
}

void ReplaySlowSqlTemplateResp::setSqlTemplate(const std::string& value)
{
    sqlTemplate_ = value;
    sqlTemplateIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::sqlTemplateIsSet() const
{
    return sqlTemplateIsSet_;
}

void ReplaySlowSqlTemplateResp::unsetsqlTemplate()
{
    sqlTemplateIsSet_ = false;
}

std::string ReplaySlowSqlTemplateResp::getSqlTemplateMd5() const
{
    return sqlTemplateMd5_;
}

void ReplaySlowSqlTemplateResp::setSqlTemplateMd5(const std::string& value)
{
    sqlTemplateMd5_ = value;
    sqlTemplateMd5IsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::sqlTemplateMd5IsSet() const
{
    return sqlTemplateMd5IsSet_;
}

void ReplaySlowSqlTemplateResp::unsetsqlTemplateMd5()
{
    sqlTemplateMd5IsSet_ = false;
}

std::string ReplaySlowSqlTemplateResp::getTargetName() const
{
    return targetName_;
}

void ReplaySlowSqlTemplateResp::setTargetName(const std::string& value)
{
    targetName_ = value;
    targetNameIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::targetNameIsSet() const
{
    return targetNameIsSet_;
}

void ReplaySlowSqlTemplateResp::unsettargetName()
{
    targetNameIsSet_ = false;
}

std::string ReplaySlowSqlTemplateResp::getSchemaName() const
{
    return schemaName_;
}

void ReplaySlowSqlTemplateResp::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ReplaySlowSqlTemplateResp::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string ReplaySlowSqlTemplateResp::getQueryType() const
{
    return queryType_;
}

void ReplaySlowSqlTemplateResp::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void ReplaySlowSqlTemplateResp::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

int64_t ReplaySlowSqlTemplateResp::getMinLatency() const
{
    return minLatency_;
}

void ReplaySlowSqlTemplateResp::setMinLatency(int64_t value)
{
    minLatency_ = value;
    minLatencyIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::minLatencyIsSet() const
{
    return minLatencyIsSet_;
}

void ReplaySlowSqlTemplateResp::unsetminLatency()
{
    minLatencyIsSet_ = false;
}

int64_t ReplaySlowSqlTemplateResp::getMaxLatency() const
{
    return maxLatency_;
}

void ReplaySlowSqlTemplateResp::setMaxLatency(int64_t value)
{
    maxLatency_ = value;
    maxLatencyIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::maxLatencyIsSet() const
{
    return maxLatencyIsSet_;
}

void ReplaySlowSqlTemplateResp::unsetmaxLatency()
{
    maxLatencyIsSet_ = false;
}

int64_t ReplaySlowSqlTemplateResp::getAvgLatency() const
{
    return avgLatency_;
}

void ReplaySlowSqlTemplateResp::setAvgLatency(int64_t value)
{
    avgLatency_ = value;
    avgLatencyIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::avgLatencyIsSet() const
{
    return avgLatencyIsSet_;
}

void ReplaySlowSqlTemplateResp::unsetavgLatency()
{
    avgLatencyIsSet_ = false;
}

int64_t ReplaySlowSqlTemplateResp::getTotalLatency() const
{
    return totalLatency_;
}

void ReplaySlowSqlTemplateResp::setTotalLatency(int64_t value)
{
    totalLatency_ = value;
    totalLatencyIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::totalLatencyIsSet() const
{
    return totalLatencyIsSet_;
}

void ReplaySlowSqlTemplateResp::unsettotalLatency()
{
    totalLatencyIsSet_ = false;
}

std::string ReplaySlowSqlTemplateResp::getTargetType() const
{
    return targetType_;
}

void ReplaySlowSqlTemplateResp::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void ReplaySlowSqlTemplateResp::unsettargetType()
{
    targetTypeIsSet_ = false;
}

int64_t ReplaySlowSqlTemplateResp::getCount() const
{
    return count_;
}

void ReplaySlowSqlTemplateResp::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ReplaySlowSqlTemplateResp::countIsSet() const
{
    return countIsSet_;
}

void ReplaySlowSqlTemplateResp::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


