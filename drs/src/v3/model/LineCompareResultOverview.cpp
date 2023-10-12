

#include "huaweicloud/drs/v3/model/LineCompareResultOverview.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




LineCompareResultOverview::LineCompareResultOverview()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
    lineCompareResult_ = "";
    lineCompareResultIsSet_ = false;
}

LineCompareResultOverview::~LineCompareResultOverview() = default;

void LineCompareResultOverview::validate()
{
}

web::json::value LineCompareResultOverview::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
    if(lineCompareResultIsSet_) {
        val[utility::conversions::to_string_t("line_compare_result")] = ModelBase::toJson(lineCompareResult_);
    }

    return val;
}
bool LineCompareResultOverview::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("line_compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareResult(refVal);
        }
    }
    return ok;
}


std::string LineCompareResultOverview::getSourceDbName() const
{
    return sourceDbName_;
}

void LineCompareResultOverview::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool LineCompareResultOverview::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void LineCompareResultOverview::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string LineCompareResultOverview::getTargetDbName() const
{
    return targetDbName_;
}

void LineCompareResultOverview::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool LineCompareResultOverview::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void LineCompareResultOverview::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string LineCompareResultOverview::getLineCompareResult() const
{
    return lineCompareResult_;
}

void LineCompareResultOverview::setLineCompareResult(const std::string& value)
{
    lineCompareResult_ = value;
    lineCompareResultIsSet_ = true;
}

bool LineCompareResultOverview::lineCompareResultIsSet() const
{
    return lineCompareResultIsSet_;
}

void LineCompareResultOverview::unsetlineCompareResult()
{
    lineCompareResultIsSet_ = false;
}

}
}
}
}
}


