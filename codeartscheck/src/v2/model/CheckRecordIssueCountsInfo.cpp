

#include "huaweicloud/codeartscheck/v2/model/CheckRecordIssueCountsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CheckRecordIssueCountsInfo::CheckRecordIssueCountsInfo()
{
    critical_ = 0;
    criticalIsSet_ = false;
    serious_ = 0;
    seriousIsSet_ = false;
    normal_ = 0;
    normalIsSet_ = false;
    prompt_ = 0;
    promptIsSet_ = false;
}

CheckRecordIssueCountsInfo::~CheckRecordIssueCountsInfo() = default;

void CheckRecordIssueCountsInfo::validate()
{
}

web::json::value CheckRecordIssueCountsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(criticalIsSet_) {
        val[utility::conversions::to_string_t("critical")] = ModelBase::toJson(critical_);
    }
    if(seriousIsSet_) {
        val[utility::conversions::to_string_t("serious")] = ModelBase::toJson(serious_);
    }
    if(normalIsSet_) {
        val[utility::conversions::to_string_t("normal")] = ModelBase::toJson(normal_);
    }
    if(promptIsSet_) {
        val[utility::conversions::to_string_t("prompt")] = ModelBase::toJson(prompt_);
    }

    return val;
}
bool CheckRecordIssueCountsInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("serious"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serious"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerious(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("normal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("normal"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNormal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prompt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prompt"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrompt(refVal);
        }
    }
    return ok;
}


int32_t CheckRecordIssueCountsInfo::getCritical() const
{
    return critical_;
}

void CheckRecordIssueCountsInfo::setCritical(int32_t value)
{
    critical_ = value;
    criticalIsSet_ = true;
}

bool CheckRecordIssueCountsInfo::criticalIsSet() const
{
    return criticalIsSet_;
}

void CheckRecordIssueCountsInfo::unsetcritical()
{
    criticalIsSet_ = false;
}

int32_t CheckRecordIssueCountsInfo::getSerious() const
{
    return serious_;
}

void CheckRecordIssueCountsInfo::setSerious(int32_t value)
{
    serious_ = value;
    seriousIsSet_ = true;
}

bool CheckRecordIssueCountsInfo::seriousIsSet() const
{
    return seriousIsSet_;
}

void CheckRecordIssueCountsInfo::unsetserious()
{
    seriousIsSet_ = false;
}

int32_t CheckRecordIssueCountsInfo::getNormal() const
{
    return normal_;
}

void CheckRecordIssueCountsInfo::setNormal(int32_t value)
{
    normal_ = value;
    normalIsSet_ = true;
}

bool CheckRecordIssueCountsInfo::normalIsSet() const
{
    return normalIsSet_;
}

void CheckRecordIssueCountsInfo::unsetnormal()
{
    normalIsSet_ = false;
}

int32_t CheckRecordIssueCountsInfo::getPrompt() const
{
    return prompt_;
}

void CheckRecordIssueCountsInfo::setPrompt(int32_t value)
{
    prompt_ = value;
    promptIsSet_ = true;
}

bool CheckRecordIssueCountsInfo::promptIsSet() const
{
    return promptIsSet_;
}

void CheckRecordIssueCountsInfo::unsetprompt()
{
    promptIsSet_ = false;
}

}
}
}
}
}


