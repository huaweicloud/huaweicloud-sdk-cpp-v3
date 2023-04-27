

#include "huaweicloud/lts/v2/model/QueryLtsStructLogParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




QueryLtsStructLogParams::QueryLtsStructLogParams()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    sqlExpression_ = "";
    sqlExpressionIsSet_ = false;
    originalContent_ = false;
    originalContentIsSet_ = false;
}

QueryLtsStructLogParams::~QueryLtsStructLogParams() = default;

void QueryLtsStructLogParams::validate()
{
}

web::json::value QueryLtsStructLogParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(sqlExpressionIsSet_) {
        val[utility::conversions::to_string_t("sql_expression")] = ModelBase::toJson(sqlExpression_);
    }
    if(originalContentIsSet_) {
        val[utility::conversions::to_string_t("original_content")] = ModelBase::toJson(originalContent_);
    }

    return val;
}

bool QueryLtsStructLogParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_expression"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_expression"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlExpression(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("original_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("original_content"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalContent(refVal);
        }
    }
    return ok;
}


std::string QueryLtsStructLogParams::getStartTime() const
{
    return startTime_;
}

void QueryLtsStructLogParams::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool QueryLtsStructLogParams::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void QueryLtsStructLogParams::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string QueryLtsStructLogParams::getEndTime() const
{
    return endTime_;
}

void QueryLtsStructLogParams::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QueryLtsStructLogParams::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QueryLtsStructLogParams::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string QueryLtsStructLogParams::getSqlExpression() const
{
    return sqlExpression_;
}

void QueryLtsStructLogParams::setSqlExpression(const std::string& value)
{
    sqlExpression_ = value;
    sqlExpressionIsSet_ = true;
}

bool QueryLtsStructLogParams::sqlExpressionIsSet() const
{
    return sqlExpressionIsSet_;
}

void QueryLtsStructLogParams::unsetsqlExpression()
{
    sqlExpressionIsSet_ = false;
}

bool QueryLtsStructLogParams::isOriginalContent() const
{
    return originalContent_;
}

void QueryLtsStructLogParams::setOriginalContent(bool value)
{
    originalContent_ = value;
    originalContentIsSet_ = true;
}

bool QueryLtsStructLogParams::originalContentIsSet() const
{
    return originalContentIsSet_;
}

void QueryLtsStructLogParams::unsetoriginalContent()
{
    originalContentIsSet_ = false;
}

}
}
}
}
}


