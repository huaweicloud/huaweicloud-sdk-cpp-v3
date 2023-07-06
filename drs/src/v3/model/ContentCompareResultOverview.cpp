

#include "huaweicloud/drs/v3/model/ContentCompareResultOverview.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ContentCompareResultOverview::ContentCompareResultOverview()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    contentCompareResult_ = "";
    contentCompareResultIsSet_ = false;
}

ContentCompareResultOverview::~ContentCompareResultOverview() = default;

void ContentCompareResultOverview::validate()
{
}

web::json::value ContentCompareResultOverview::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(contentCompareResultIsSet_) {
        val[utility::conversions::to_string_t("content_compare_result")] = ModelBase::toJson(contentCompareResult_);
    }

    return val;
}

bool ContentCompareResultOverview::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareResult(refVal);
        }
    }
    return ok;
}

std::string ContentCompareResultOverview::getSourceDbName() const
{
    return sourceDbName_;
}

void ContentCompareResultOverview::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool ContentCompareResultOverview::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void ContentCompareResultOverview::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string ContentCompareResultOverview::getTargetDbName() const
{
    return targetDbName_;
}

void ContentCompareResultOverview::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool ContentCompareResultOverview::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void ContentCompareResultOverview::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string ContentCompareResultOverview::getContentCompareResult() const
{
    return contentCompareResult_;
}

void ContentCompareResultOverview::setContentCompareResult(const std::string& value)
{
    contentCompareResult_ = value;
    contentCompareResultIsSet_ = true;
}

bool ContentCompareResultOverview::contentCompareResultIsSet() const
{
    return contentCompareResultIsSet_;
}

void ContentCompareResultOverview::unsetcontentCompareResult()
{
    contentCompareResultIsSet_ = false;
}

}
}
}
}
}


