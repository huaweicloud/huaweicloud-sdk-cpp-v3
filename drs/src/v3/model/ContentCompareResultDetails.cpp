

#include "huaweicloud/drs/v3/model/ContentCompareResultDetails.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ContentCompareResultDetails::ContentCompareResultDetails()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    contentCompareDetailIsSet_ = false;
    contentCompareDetailCount_ = 0;
    contentCompareDetailCountIsSet_ = false;
    contentUncompareDetailIsSet_ = false;
    contentUncompareDetailCount_ = 0;
    contentUncompareDetailCountIsSet_ = false;
}

ContentCompareResultDetails::~ContentCompareResultDetails() = default;

void ContentCompareResultDetails::validate()
{
}

web::json::value ContentCompareResultDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(contentCompareDetailIsSet_) {
        val[utility::conversions::to_string_t("content_compare_detail")] = ModelBase::toJson(contentCompareDetail_);
    }
    if(contentCompareDetailCountIsSet_) {
        val[utility::conversions::to_string_t("content_compare_detail_count")] = ModelBase::toJson(contentCompareDetailCount_);
    }
    if(contentUncompareDetailIsSet_) {
        val[utility::conversions::to_string_t("content_uncompare_detail")] = ModelBase::toJson(contentUncompareDetail_);
    }
    if(contentUncompareDetailCountIsSet_) {
        val[utility::conversions::to_string_t("content_uncompare_detail_count")] = ModelBase::toJson(contentUncompareDetailCount_);
    }

    return val;
}

bool ContentCompareResultDetails::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("content_compare_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_detail"));
        if(!fieldValue.is_null())
        {
            std::vector<ContentCompareDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_detail_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_detail_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareDetailCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_uncompare_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_uncompare_detail"));
        if(!fieldValue.is_null())
        {
            std::vector<ContentCompareDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentUncompareDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_uncompare_detail_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_uncompare_detail_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentUncompareDetailCount(refVal);
        }
    }
    return ok;
}

std::string ContentCompareResultDetails::getSourceDbName() const
{
    return sourceDbName_;
}

void ContentCompareResultDetails::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool ContentCompareResultDetails::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void ContentCompareResultDetails::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::vector<ContentCompareDetail>& ContentCompareResultDetails::getContentCompareDetail()
{
    return contentCompareDetail_;
}

void ContentCompareResultDetails::setContentCompareDetail(const std::vector<ContentCompareDetail>& value)
{
    contentCompareDetail_ = value;
    contentCompareDetailIsSet_ = true;
}

bool ContentCompareResultDetails::contentCompareDetailIsSet() const
{
    return contentCompareDetailIsSet_;
}

void ContentCompareResultDetails::unsetcontentCompareDetail()
{
    contentCompareDetailIsSet_ = false;
}

int32_t ContentCompareResultDetails::getContentCompareDetailCount() const
{
    return contentCompareDetailCount_;
}

void ContentCompareResultDetails::setContentCompareDetailCount(int32_t value)
{
    contentCompareDetailCount_ = value;
    contentCompareDetailCountIsSet_ = true;
}

bool ContentCompareResultDetails::contentCompareDetailCountIsSet() const
{
    return contentCompareDetailCountIsSet_;
}

void ContentCompareResultDetails::unsetcontentCompareDetailCount()
{
    contentCompareDetailCountIsSet_ = false;
}

std::vector<ContentCompareDetail>& ContentCompareResultDetails::getContentUncompareDetail()
{
    return contentUncompareDetail_;
}

void ContentCompareResultDetails::setContentUncompareDetail(const std::vector<ContentCompareDetail>& value)
{
    contentUncompareDetail_ = value;
    contentUncompareDetailIsSet_ = true;
}

bool ContentCompareResultDetails::contentUncompareDetailIsSet() const
{
    return contentUncompareDetailIsSet_;
}

void ContentCompareResultDetails::unsetcontentUncompareDetail()
{
    contentUncompareDetailIsSet_ = false;
}

int32_t ContentCompareResultDetails::getContentUncompareDetailCount() const
{
    return contentUncompareDetailCount_;
}

void ContentCompareResultDetails::setContentUncompareDetailCount(int32_t value)
{
    contentUncompareDetailCount_ = value;
    contentUncompareDetailCountIsSet_ = true;
}

bool ContentCompareResultDetails::contentUncompareDetailCountIsSet() const
{
    return contentUncompareDetailCountIsSet_;
}

void ContentCompareResultDetails::unsetcontentUncompareDetailCount()
{
    contentUncompareDetailCountIsSet_ = false;
}

}
}
}
}
}


