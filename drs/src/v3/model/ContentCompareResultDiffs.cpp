

#include "huaweicloud/drs/v3/model/ContentCompareResultDiffs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ContentCompareResultDiffs::ContentCompareResultDiffs()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    sourceTableName_ = "";
    sourceTableNameIsSet_ = false;
    contentCompareDiffIsSet_ = false;
    contentCompareDiffCount_ = 0;
    contentCompareDiffCountIsSet_ = false;
}

ContentCompareResultDiffs::~ContentCompareResultDiffs() = default;

void ContentCompareResultDiffs::validate()
{
}

web::json::value ContentCompareResultDiffs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(sourceTableNameIsSet_) {
        val[utility::conversions::to_string_t("source_table_name")] = ModelBase::toJson(sourceTableName_);
    }
    if(contentCompareDiffIsSet_) {
        val[utility::conversions::to_string_t("content_compare_diff")] = ModelBase::toJson(contentCompareDiff_);
    }
    if(contentCompareDiffCountIsSet_) {
        val[utility::conversions::to_string_t("content_compare_diff_count")] = ModelBase::toJson(contentCompareDiffCount_);
    }

    return val;
}
bool ContentCompareResultDiffs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_diff"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_diff"));
        if(!fieldValue.is_null())
        {
            std::vector<ContentCompareDiff> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareDiff(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_diff_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_diff_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareDiffCount(refVal);
        }
    }
    return ok;
}


std::string ContentCompareResultDiffs::getSourceDbName() const
{
    return sourceDbName_;
}

void ContentCompareResultDiffs::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool ContentCompareResultDiffs::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void ContentCompareResultDiffs::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string ContentCompareResultDiffs::getSourceTableName() const
{
    return sourceTableName_;
}

void ContentCompareResultDiffs::setSourceTableName(const std::string& value)
{
    sourceTableName_ = value;
    sourceTableNameIsSet_ = true;
}

bool ContentCompareResultDiffs::sourceTableNameIsSet() const
{
    return sourceTableNameIsSet_;
}

void ContentCompareResultDiffs::unsetsourceTableName()
{
    sourceTableNameIsSet_ = false;
}

std::vector<ContentCompareDiff>& ContentCompareResultDiffs::getContentCompareDiff()
{
    return contentCompareDiff_;
}

void ContentCompareResultDiffs::setContentCompareDiff(const std::vector<ContentCompareDiff>& value)
{
    contentCompareDiff_ = value;
    contentCompareDiffIsSet_ = true;
}

bool ContentCompareResultDiffs::contentCompareDiffIsSet() const
{
    return contentCompareDiffIsSet_;
}

void ContentCompareResultDiffs::unsetcontentCompareDiff()
{
    contentCompareDiffIsSet_ = false;
}

int32_t ContentCompareResultDiffs::getContentCompareDiffCount() const
{
    return contentCompareDiffCount_;
}

void ContentCompareResultDiffs::setContentCompareDiffCount(int32_t value)
{
    contentCompareDiffCount_ = value;
    contentCompareDiffCountIsSet_ = true;
}

bool ContentCompareResultDiffs::contentCompareDiffCountIsSet() const
{
    return contentCompareDiffCountIsSet_;
}

void ContentCompareResultDiffs::unsetcontentCompareDiffCount()
{
    contentCompareDiffCountIsSet_ = false;
}

}
}
}
}
}


