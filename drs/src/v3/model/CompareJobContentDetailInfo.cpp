

#include "huaweicloud/drs/v3/model/CompareJobContentDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CompareJobContentDetailInfo::CompareJobContentDetailInfo()
{
    sourceKeyValueIsSet_ = false;
    targetKeyValueIsSet_ = false;
    selectSql_ = "";
    selectSqlIsSet_ = false;
    targetSelectSql_ = "";
    targetSelectSqlIsSet_ = false;
}

CompareJobContentDetailInfo::~CompareJobContentDetailInfo() = default;

void CompareJobContentDetailInfo::validate()
{
}

web::json::value CompareJobContentDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceKeyValueIsSet_) {
        val[utility::conversions::to_string_t("source_key_value")] = ModelBase::toJson(sourceKeyValue_);
    }
    if(targetKeyValueIsSet_) {
        val[utility::conversions::to_string_t("target_key_value")] = ModelBase::toJson(targetKeyValue_);
    }
    if(selectSqlIsSet_) {
        val[utility::conversions::to_string_t("select_sql")] = ModelBase::toJson(selectSql_);
    }
    if(targetSelectSqlIsSet_) {
        val[utility::conversions::to_string_t("target_select_sql")] = ModelBase::toJson(targetSelectSql_);
    }

    return val;
}
bool CompareJobContentDetailInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("select_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("select_sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelectSql(refVal);
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


std::vector<std::string>& CompareJobContentDetailInfo::getSourceKeyValue()
{
    return sourceKeyValue_;
}

void CompareJobContentDetailInfo::setSourceKeyValue(const std::vector<std::string>& value)
{
    sourceKeyValue_ = value;
    sourceKeyValueIsSet_ = true;
}

bool CompareJobContentDetailInfo::sourceKeyValueIsSet() const
{
    return sourceKeyValueIsSet_;
}

void CompareJobContentDetailInfo::unsetsourceKeyValue()
{
    sourceKeyValueIsSet_ = false;
}

std::vector<std::string>& CompareJobContentDetailInfo::getTargetKeyValue()
{
    return targetKeyValue_;
}

void CompareJobContentDetailInfo::setTargetKeyValue(const std::vector<std::string>& value)
{
    targetKeyValue_ = value;
    targetKeyValueIsSet_ = true;
}

bool CompareJobContentDetailInfo::targetKeyValueIsSet() const
{
    return targetKeyValueIsSet_;
}

void CompareJobContentDetailInfo::unsettargetKeyValue()
{
    targetKeyValueIsSet_ = false;
}

std::string CompareJobContentDetailInfo::getSelectSql() const
{
    return selectSql_;
}

void CompareJobContentDetailInfo::setSelectSql(const std::string& value)
{
    selectSql_ = value;
    selectSqlIsSet_ = true;
}

bool CompareJobContentDetailInfo::selectSqlIsSet() const
{
    return selectSqlIsSet_;
}

void CompareJobContentDetailInfo::unsetselectSql()
{
    selectSqlIsSet_ = false;
}

std::string CompareJobContentDetailInfo::getTargetSelectSql() const
{
    return targetSelectSql_;
}

void CompareJobContentDetailInfo::setTargetSelectSql(const std::string& value)
{
    targetSelectSql_ = value;
    targetSelectSqlIsSet_ = true;
}

bool CompareJobContentDetailInfo::targetSelectSqlIsSet() const
{
    return targetSelectSqlIsSet_;
}

void CompareJobContentDetailInfo::unsettargetSelectSql()
{
    targetSelectSqlIsSet_ = false;
}

}
}
}
}
}


