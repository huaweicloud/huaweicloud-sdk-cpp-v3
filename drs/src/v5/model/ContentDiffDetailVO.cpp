

#include "huaweicloud/drs/v5/model/ContentDiffDetailVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ContentDiffDetailVO::ContentDiffDetailVO()
{
    sourceKeyValueIsSet_ = false;
    targetKeyValueIsSet_ = false;
    sourceSelectSql_ = "";
    sourceSelectSqlIsSet_ = false;
    targetSelectSql_ = "";
    targetSelectSqlIsSet_ = false;
}

ContentDiffDetailVO::~ContentDiffDetailVO() = default;

void ContentDiffDetailVO::validate()
{
}

web::json::value ContentDiffDetailVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceKeyValueIsSet_) {
        val[utility::conversions::to_string_t("source_key_value")] = ModelBase::toJson(sourceKeyValue_);
    }
    if(targetKeyValueIsSet_) {
        val[utility::conversions::to_string_t("target_key_value")] = ModelBase::toJson(targetKeyValue_);
    }
    if(sourceSelectSqlIsSet_) {
        val[utility::conversions::to_string_t("source_select_sql")] = ModelBase::toJson(sourceSelectSql_);
    }
    if(targetSelectSqlIsSet_) {
        val[utility::conversions::to_string_t("target_select_sql")] = ModelBase::toJson(targetSelectSql_);
    }

    return val;
}
bool ContentDiffDetailVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_key_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_key_value"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceKeyValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_key_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_key_value"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetKeyValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_select_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_select_sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceSelectSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_select_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_select_sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetSelectSql(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ContentDiffDetailVO::getSourceKeyValue()
{
    return sourceKeyValue_;
}

void ContentDiffDetailVO::setSourceKeyValue(const std::vector<std::string>& value)
{
    sourceKeyValue_ = value;
    sourceKeyValueIsSet_ = true;
}

bool ContentDiffDetailVO::sourceKeyValueIsSet() const
{
    return sourceKeyValueIsSet_;
}

void ContentDiffDetailVO::unsetsourceKeyValue()
{
    sourceKeyValueIsSet_ = false;
}

std::vector<std::string>& ContentDiffDetailVO::getTargetKeyValue()
{
    return targetKeyValue_;
}

void ContentDiffDetailVO::setTargetKeyValue(const std::vector<std::string>& value)
{
    targetKeyValue_ = value;
    targetKeyValueIsSet_ = true;
}

bool ContentDiffDetailVO::targetKeyValueIsSet() const
{
    return targetKeyValueIsSet_;
}

void ContentDiffDetailVO::unsettargetKeyValue()
{
    targetKeyValueIsSet_ = false;
}

std::string ContentDiffDetailVO::getSourceSelectSql() const
{
    return sourceSelectSql_;
}

void ContentDiffDetailVO::setSourceSelectSql(const std::string& value)
{
    sourceSelectSql_ = value;
    sourceSelectSqlIsSet_ = true;
}

bool ContentDiffDetailVO::sourceSelectSqlIsSet() const
{
    return sourceSelectSqlIsSet_;
}

void ContentDiffDetailVO::unsetsourceSelectSql()
{
    sourceSelectSqlIsSet_ = false;
}

std::string ContentDiffDetailVO::getTargetSelectSql() const
{
    return targetSelectSql_;
}

void ContentDiffDetailVO::setTargetSelectSql(const std::string& value)
{
    targetSelectSql_ = value;
    targetSelectSqlIsSet_ = true;
}

bool ContentDiffDetailVO::targetSelectSqlIsSet() const
{
    return targetSelectSqlIsSet_;
}

void ContentDiffDetailVO::unsettargetSelectSql()
{
    targetSelectSqlIsSet_ = false;
}

}
}
}
}
}


