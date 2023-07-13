

#include "huaweicloud/drs/v3/model/ContentCompareDiff.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ContentCompareDiff::ContentCompareDiff()
{
    targetSelectSql_ = "";
    targetSelectSqlIsSet_ = false;
    sourceSelectSql_ = "";
    sourceSelectSqlIsSet_ = false;
    sourceKeyValueIsSet_ = false;
    targetKeyValueIsSet_ = false;
}

ContentCompareDiff::~ContentCompareDiff() = default;

void ContentCompareDiff::validate()
{
}

web::json::value ContentCompareDiff::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetSelectSqlIsSet_) {
        val[utility::conversions::to_string_t("target_select_sql")] = ModelBase::toJson(targetSelectSql_);
    }
    if(sourceSelectSqlIsSet_) {
        val[utility::conversions::to_string_t("source_select_sql")] = ModelBase::toJson(sourceSelectSql_);
    }
    if(sourceKeyValueIsSet_) {
        val[utility::conversions::to_string_t("source_key_value")] = ModelBase::toJson(sourceKeyValue_);
    }
    if(targetKeyValueIsSet_) {
        val[utility::conversions::to_string_t("target_key_value")] = ModelBase::toJson(targetKeyValue_);
    }

    return val;
}

bool ContentCompareDiff::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_select_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_select_sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetSelectSql(refVal);
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
    return ok;
}

std::string ContentCompareDiff::getTargetSelectSql() const
{
    return targetSelectSql_;
}

void ContentCompareDiff::setTargetSelectSql(const std::string& value)
{
    targetSelectSql_ = value;
    targetSelectSqlIsSet_ = true;
}

bool ContentCompareDiff::targetSelectSqlIsSet() const
{
    return targetSelectSqlIsSet_;
}

void ContentCompareDiff::unsettargetSelectSql()
{
    targetSelectSqlIsSet_ = false;
}

std::string ContentCompareDiff::getSourceSelectSql() const
{
    return sourceSelectSql_;
}

void ContentCompareDiff::setSourceSelectSql(const std::string& value)
{
    sourceSelectSql_ = value;
    sourceSelectSqlIsSet_ = true;
}

bool ContentCompareDiff::sourceSelectSqlIsSet() const
{
    return sourceSelectSqlIsSet_;
}

void ContentCompareDiff::unsetsourceSelectSql()
{
    sourceSelectSqlIsSet_ = false;
}

std::vector<std::string>& ContentCompareDiff::getSourceKeyValue()
{
    return sourceKeyValue_;
}

void ContentCompareDiff::setSourceKeyValue(const std::vector<std::string>& value)
{
    sourceKeyValue_ = value;
    sourceKeyValueIsSet_ = true;
}

bool ContentCompareDiff::sourceKeyValueIsSet() const
{
    return sourceKeyValueIsSet_;
}

void ContentCompareDiff::unsetsourceKeyValue()
{
    sourceKeyValueIsSet_ = false;
}

std::vector<std::string>& ContentCompareDiff::getTargetKeyValue()
{
    return targetKeyValue_;
}

void ContentCompareDiff::setTargetKeyValue(const std::vector<std::string>& value)
{
    targetKeyValue_ = value;
    targetKeyValueIsSet_ = true;
}

bool ContentCompareDiff::targetKeyValueIsSet() const
{
    return targetKeyValueIsSet_;
}

void ContentCompareDiff::unsettargetKeyValue()
{
    targetKeyValueIsSet_ = false;
}

}
}
}
}
}


