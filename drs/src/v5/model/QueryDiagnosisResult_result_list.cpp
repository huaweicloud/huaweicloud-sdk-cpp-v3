

#include "huaweicloud/drs/v5/model/QueryDiagnosisResult_result_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryDiagnosisResult_result_list::QueryDiagnosisResult_result_list()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    isMultiLanguage_ = false;
    isMultiLanguageIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
}

QueryDiagnosisResult_result_list::~QueryDiagnosisResult_result_list() = default;

void QueryDiagnosisResult_result_list::validate()
{
}

web::json::value QueryDiagnosisResult_result_list::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(isMultiLanguageIsSet_) {
        val[utility::conversions::to_string_t("is_multi_language")] = ModelBase::toJson(isMultiLanguage_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }

    return val;
}
bool QueryDiagnosisResult_result_list::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_multi_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_language"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleName(refVal);
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
    return ok;
}


std::string QueryDiagnosisResult_result_list::getKey() const
{
    return key_;
}

void QueryDiagnosisResult_result_list::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool QueryDiagnosisResult_result_list::keyIsSet() const
{
    return keyIsSet_;
}

void QueryDiagnosisResult_result_list::unsetkey()
{
    keyIsSet_ = false;
}

std::string QueryDiagnosisResult_result_list::getValue() const
{
    return value_;
}

void QueryDiagnosisResult_result_list::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool QueryDiagnosisResult_result_list::valueIsSet() const
{
    return valueIsSet_;
}

void QueryDiagnosisResult_result_list::unsetvalue()
{
    valueIsSet_ = false;
}

bool QueryDiagnosisResult_result_list::isIsMultiLanguage() const
{
    return isMultiLanguage_;
}

void QueryDiagnosisResult_result_list::setIsMultiLanguage(bool value)
{
    isMultiLanguage_ = value;
    isMultiLanguageIsSet_ = true;
}

bool QueryDiagnosisResult_result_list::isMultiLanguageIsSet() const
{
    return isMultiLanguageIsSet_;
}

void QueryDiagnosisResult_result_list::unsetisMultiLanguage()
{
    isMultiLanguageIsSet_ = false;
}

std::string QueryDiagnosisResult_result_list::getModuleName() const
{
    return moduleName_;
}

void QueryDiagnosisResult_result_list::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool QueryDiagnosisResult_result_list::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void QueryDiagnosisResult_result_list::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string QueryDiagnosisResult_result_list::getLevel() const
{
    return level_;
}

void QueryDiagnosisResult_result_list::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool QueryDiagnosisResult_result_list::levelIsSet() const
{
    return levelIsSet_;
}

void QueryDiagnosisResult_result_list::unsetlevel()
{
    levelIsSet_ = false;
}

}
}
}
}
}


