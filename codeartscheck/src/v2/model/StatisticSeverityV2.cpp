

#include "huaweicloud/codeartscheck/v2/model/StatisticSeverityV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




StatisticSeverityV2::StatisticSeverityV2()
{
    critical_ = 0;
    criticalIsSet_ = false;
    major_ = 0;
    majorIsSet_ = false;
    minor_ = 0;
    minorIsSet_ = false;
    suggestion_ = 0;
    suggestionIsSet_ = false;
}

StatisticSeverityV2::~StatisticSeverityV2() = default;

void StatisticSeverityV2::validate()
{
}

web::json::value StatisticSeverityV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(criticalIsSet_) {
        val[utility::conversions::to_string_t("critical")] = ModelBase::toJson(critical_);
    }
    if(majorIsSet_) {
        val[utility::conversions::to_string_t("major")] = ModelBase::toJson(major_);
    }
    if(minorIsSet_) {
        val[utility::conversions::to_string_t("minor")] = ModelBase::toJson(minor_);
    }
    if(suggestionIsSet_) {
        val[utility::conversions::to_string_t("suggestion")] = ModelBase::toJson(suggestion_);
    }

    return val;
}
bool StatisticSeverityV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("critical"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("critical"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCritical(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("major"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("major"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMajor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("minor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("minor"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggestion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggestion"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggestion(refVal);
        }
    }
    return ok;
}


int32_t StatisticSeverityV2::getCritical() const
{
    return critical_;
}

void StatisticSeverityV2::setCritical(int32_t value)
{
    critical_ = value;
    criticalIsSet_ = true;
}

bool StatisticSeverityV2::criticalIsSet() const
{
    return criticalIsSet_;
}

void StatisticSeverityV2::unsetcritical()
{
    criticalIsSet_ = false;
}

int32_t StatisticSeverityV2::getMajor() const
{
    return major_;
}

void StatisticSeverityV2::setMajor(int32_t value)
{
    major_ = value;
    majorIsSet_ = true;
}

bool StatisticSeverityV2::majorIsSet() const
{
    return majorIsSet_;
}

void StatisticSeverityV2::unsetmajor()
{
    majorIsSet_ = false;
}

int32_t StatisticSeverityV2::getMinor() const
{
    return minor_;
}

void StatisticSeverityV2::setMinor(int32_t value)
{
    minor_ = value;
    minorIsSet_ = true;
}

bool StatisticSeverityV2::minorIsSet() const
{
    return minorIsSet_;
}

void StatisticSeverityV2::unsetminor()
{
    minorIsSet_ = false;
}

int32_t StatisticSeverityV2::getSuggestion() const
{
    return suggestion_;
}

void StatisticSeverityV2::setSuggestion(int32_t value)
{
    suggestion_ = value;
    suggestionIsSet_ = true;
}

bool StatisticSeverityV2::suggestionIsSet() const
{
    return suggestionIsSet_;
}

void StatisticSeverityV2::unsetsuggestion()
{
    suggestionIsSet_ = false;
}

}
}
}
}
}


