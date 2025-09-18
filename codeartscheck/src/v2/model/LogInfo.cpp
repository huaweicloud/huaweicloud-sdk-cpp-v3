

#include "huaweicloud/codeartscheck/v2/model/LogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




LogInfo::LogInfo()
{
    displayName_ = "";
    displayNameIsSet_ = false;
    log_ = "";
    logIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    analysis_ = "";
    analysisIsSet_ = false;
    faq_ = "";
    faqIsSet_ = false;
}

LogInfo::~LogInfo() = default;

void LogInfo::validate()
{
}

web::json::value LogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(logIsSet_) {
        val[utility::conversions::to_string_t("log")] = ModelBase::toJson(log_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(analysisIsSet_) {
        val[utility::conversions::to_string_t("analysis")] = ModelBase::toJson(analysis_);
    }
    if(faqIsSet_) {
        val[utility::conversions::to_string_t("faq")] = ModelBase::toJson(faq_);
    }

    return val;
}
bool LogInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("analysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("analysis"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnalysis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("faq"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faq"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaq(refVal);
        }
    }
    return ok;
}


std::string LogInfo::getDisplayName() const
{
    return displayName_;
}

void LogInfo::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool LogInfo::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void LogInfo::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string LogInfo::getLog() const
{
    return log_;
}

void LogInfo::setLog(const std::string& value)
{
    log_ = value;
    logIsSet_ = true;
}

bool LogInfo::logIsSet() const
{
    return logIsSet_;
}

void LogInfo::unsetlog()
{
    logIsSet_ = false;
}

std::string LogInfo::getLevel() const
{
    return level_;
}

void LogInfo::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool LogInfo::levelIsSet() const
{
    return levelIsSet_;
}

void LogInfo::unsetlevel()
{
    levelIsSet_ = false;
}

std::string LogInfo::getAnalysis() const
{
    return analysis_;
}

void LogInfo::setAnalysis(const std::string& value)
{
    analysis_ = value;
    analysisIsSet_ = true;
}

bool LogInfo::analysisIsSet() const
{
    return analysisIsSet_;
}

void LogInfo::unsetanalysis()
{
    analysisIsSet_ = false;
}

std::string LogInfo::getFaq() const
{
    return faq_;
}

void LogInfo::setFaq(const std::string& value)
{
    faq_ = value;
    faqIsSet_ = true;
}

bool LogInfo::faqIsSet() const
{
    return faqIsSet_;
}

void LogInfo::unsetfaq()
{
    faqIsSet_ = false;
}

}
}
}
}
}


