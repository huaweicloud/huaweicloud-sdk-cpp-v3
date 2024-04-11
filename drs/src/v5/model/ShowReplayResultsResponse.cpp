

#include "huaweicloud/drs/v5/model/ShowReplayResultsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplayResultsResponse::ShowReplayResultsResponse()
{
    totalCount_ = 0L;
    totalCountIsSet_ = false;
    shardStaticsIsSet_ = false;
    slowSqlsIsSet_ = false;
    slowSqlTemplatesIsSet_ = false;
    errorSqlsIsSet_ = false;
    errorSqlTemplatesIsSet_ = false;
    replayingSqlsIsSet_ = false;
}

ShowReplayResultsResponse::~ShowReplayResultsResponse() = default;

void ShowReplayResultsResponse::validate()
{
}

web::json::value ShowReplayResultsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(shardStaticsIsSet_) {
        val[utility::conversions::to_string_t("shard_statics")] = ModelBase::toJson(shardStatics_);
    }
    if(slowSqlsIsSet_) {
        val[utility::conversions::to_string_t("slow_sqls")] = ModelBase::toJson(slowSqls_);
    }
    if(slowSqlTemplatesIsSet_) {
        val[utility::conversions::to_string_t("slow_sql_templates")] = ModelBase::toJson(slowSqlTemplates_);
    }
    if(errorSqlsIsSet_) {
        val[utility::conversions::to_string_t("error_sqls")] = ModelBase::toJson(errorSqls_);
    }
    if(errorSqlTemplatesIsSet_) {
        val[utility::conversions::to_string_t("error_sql_templates")] = ModelBase::toJson(errorSqlTemplates_);
    }
    if(replayingSqlsIsSet_) {
        val[utility::conversions::to_string_t("replaying_sqls")] = ModelBase::toJson(replayingSqls_);
    }

    return val;
}
bool ShowReplayResultsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shard_statics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shard_statics"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplayShardStaticsResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShardStatics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow_sqls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_sqls"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplaySlowSqlResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowSqls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slow_sql_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_sql_templates"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplaySlowSqlTemplateResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowSqlTemplates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_sqls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_sqls"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplayErrorSqlResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorSqls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_sql_templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_sql_templates"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplayErrorSqlTemplateResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorSqlTemplates(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replaying_sqls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replaying_sqls"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplayingSqlResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplayingSqls(refVal);
        }
    }
    return ok;
}


int64_t ShowReplayResultsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowReplayResultsResponse::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowReplayResultsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowReplayResultsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ReplayShardStaticsResp>& ShowReplayResultsResponse::getShardStatics()
{
    return shardStatics_;
}

void ShowReplayResultsResponse::setShardStatics(const std::vector<ReplayShardStaticsResp>& value)
{
    shardStatics_ = value;
    shardStaticsIsSet_ = true;
}

bool ShowReplayResultsResponse::shardStaticsIsSet() const
{
    return shardStaticsIsSet_;
}

void ShowReplayResultsResponse::unsetshardStatics()
{
    shardStaticsIsSet_ = false;
}

std::vector<ReplaySlowSqlResp>& ShowReplayResultsResponse::getSlowSqls()
{
    return slowSqls_;
}

void ShowReplayResultsResponse::setSlowSqls(const std::vector<ReplaySlowSqlResp>& value)
{
    slowSqls_ = value;
    slowSqlsIsSet_ = true;
}

bool ShowReplayResultsResponse::slowSqlsIsSet() const
{
    return slowSqlsIsSet_;
}

void ShowReplayResultsResponse::unsetslowSqls()
{
    slowSqlsIsSet_ = false;
}

std::vector<ReplaySlowSqlTemplateResp>& ShowReplayResultsResponse::getSlowSqlTemplates()
{
    return slowSqlTemplates_;
}

void ShowReplayResultsResponse::setSlowSqlTemplates(const std::vector<ReplaySlowSqlTemplateResp>& value)
{
    slowSqlTemplates_ = value;
    slowSqlTemplatesIsSet_ = true;
}

bool ShowReplayResultsResponse::slowSqlTemplatesIsSet() const
{
    return slowSqlTemplatesIsSet_;
}

void ShowReplayResultsResponse::unsetslowSqlTemplates()
{
    slowSqlTemplatesIsSet_ = false;
}

std::vector<ReplayErrorSqlResp>& ShowReplayResultsResponse::getErrorSqls()
{
    return errorSqls_;
}

void ShowReplayResultsResponse::setErrorSqls(const std::vector<ReplayErrorSqlResp>& value)
{
    errorSqls_ = value;
    errorSqlsIsSet_ = true;
}

bool ShowReplayResultsResponse::errorSqlsIsSet() const
{
    return errorSqlsIsSet_;
}

void ShowReplayResultsResponse::unseterrorSqls()
{
    errorSqlsIsSet_ = false;
}

std::vector<ReplayErrorSqlTemplateResp>& ShowReplayResultsResponse::getErrorSqlTemplates()
{
    return errorSqlTemplates_;
}

void ShowReplayResultsResponse::setErrorSqlTemplates(const std::vector<ReplayErrorSqlTemplateResp>& value)
{
    errorSqlTemplates_ = value;
    errorSqlTemplatesIsSet_ = true;
}

bool ShowReplayResultsResponse::errorSqlTemplatesIsSet() const
{
    return errorSqlTemplatesIsSet_;
}

void ShowReplayResultsResponse::unseterrorSqlTemplates()
{
    errorSqlTemplatesIsSet_ = false;
}

std::vector<ReplayingSqlResp>& ShowReplayResultsResponse::getReplayingSqls()
{
    return replayingSqls_;
}

void ShowReplayResultsResponse::setReplayingSqls(const std::vector<ReplayingSqlResp>& value)
{
    replayingSqls_ = value;
    replayingSqlsIsSet_ = true;
}

bool ShowReplayResultsResponse::replayingSqlsIsSet() const
{
    return replayingSqlsIsSet_;
}

void ShowReplayResultsResponse::unsetreplayingSqls()
{
    replayingSqlsIsSet_ = false;
}

}
}
}
}
}


