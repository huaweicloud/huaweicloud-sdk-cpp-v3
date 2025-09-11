

#include "huaweicloud/dbss/v1/model/SqlRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SqlRuleRequest::SqlRuleRequest()
{
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    riskLevels_ = "";
    riskLevelsIsSet_ = false;
}

SqlRuleRequest::~SqlRuleRequest() = default;

void SqlRuleRequest::validate()
{
}

web::json::value SqlRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(riskLevelsIsSet_) {
        val[utility::conversions::to_string_t("risk_levels")] = ModelBase::toJson(riskLevels_);
    }

    return val;
}
bool SqlRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_levels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_levels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskLevels(refVal);
        }
    }
    return ok;
}


int32_t SqlRuleRequest::getPage() const
{
    return page_;
}

void SqlRuleRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool SqlRuleRequest::pageIsSet() const
{
    return pageIsSet_;
}

void SqlRuleRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t SqlRuleRequest::getSize() const
{
    return size_;
}

void SqlRuleRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool SqlRuleRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void SqlRuleRequest::unsetsize()
{
    sizeIsSet_ = false;
}

std::string SqlRuleRequest::getRiskLevels() const
{
    return riskLevels_;
}

void SqlRuleRequest::setRiskLevels(const std::string& value)
{
    riskLevels_ = value;
    riskLevelsIsSet_ = true;
}

bool SqlRuleRequest::riskLevelsIsSet() const
{
    return riskLevelsIsSet_;
}

void SqlRuleRequest::unsetriskLevels()
{
    riskLevelsIsSet_ = false;
}

}
}
}
}
}


