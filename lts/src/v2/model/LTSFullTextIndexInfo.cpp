

#include "huaweicloud/lts/v2/model/LTSFullTextIndexInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LTSFullTextIndexInfo::LTSFullTextIndexInfo()
{
    enable_ = false;
    enableIsSet_ = false;
    caseSensitive_ = false;
    caseSensitiveIsSet_ = false;
    includeChinese_ = false;
    includeChineseIsSet_ = false;
    tokenizer_ = "";
    tokenizerIsSet_ = false;
    asciiIsSet_ = false;
}

LTSFullTextIndexInfo::~LTSFullTextIndexInfo() = default;

void LTSFullTextIndexInfo::validate()
{
}

web::json::value LTSFullTextIndexInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableIsSet_) {
        val[utility::conversions::to_string_t("enable")] = ModelBase::toJson(enable_);
    }
    if(caseSensitiveIsSet_) {
        val[utility::conversions::to_string_t("caseSensitive")] = ModelBase::toJson(caseSensitive_);
    }
    if(includeChineseIsSet_) {
        val[utility::conversions::to_string_t("includeChinese")] = ModelBase::toJson(includeChinese_);
    }
    if(tokenizerIsSet_) {
        val[utility::conversions::to_string_t("tokenizer")] = ModelBase::toJson(tokenizer_);
    }
    if(asciiIsSet_) {
        val[utility::conversions::to_string_t("ascii")] = ModelBase::toJson(ascii_);
    }

    return val;
}
bool LTSFullTextIndexInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("caseSensitive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("caseSensitive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseSensitive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includeChinese"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includeChinese"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeChinese(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tokenizer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tokenizer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTokenizer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ascii"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ascii"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAscii(refVal);
        }
    }
    return ok;
}


bool LTSFullTextIndexInfo::isEnable() const
{
    return enable_;
}

void LTSFullTextIndexInfo::setEnable(bool value)
{
    enable_ = value;
    enableIsSet_ = true;
}

bool LTSFullTextIndexInfo::enableIsSet() const
{
    return enableIsSet_;
}

void LTSFullTextIndexInfo::unsetenable()
{
    enableIsSet_ = false;
}

bool LTSFullTextIndexInfo::isCaseSensitive() const
{
    return caseSensitive_;
}

void LTSFullTextIndexInfo::setCaseSensitive(bool value)
{
    caseSensitive_ = value;
    caseSensitiveIsSet_ = true;
}

bool LTSFullTextIndexInfo::caseSensitiveIsSet() const
{
    return caseSensitiveIsSet_;
}

void LTSFullTextIndexInfo::unsetcaseSensitive()
{
    caseSensitiveIsSet_ = false;
}

bool LTSFullTextIndexInfo::isIncludeChinese() const
{
    return includeChinese_;
}

void LTSFullTextIndexInfo::setIncludeChinese(bool value)
{
    includeChinese_ = value;
    includeChineseIsSet_ = true;
}

bool LTSFullTextIndexInfo::includeChineseIsSet() const
{
    return includeChineseIsSet_;
}

void LTSFullTextIndexInfo::unsetincludeChinese()
{
    includeChineseIsSet_ = false;
}

std::string LTSFullTextIndexInfo::getTokenizer() const
{
    return tokenizer_;
}

void LTSFullTextIndexInfo::setTokenizer(const std::string& value)
{
    tokenizer_ = value;
    tokenizerIsSet_ = true;
}

bool LTSFullTextIndexInfo::tokenizerIsSet() const
{
    return tokenizerIsSet_;
}

void LTSFullTextIndexInfo::unsettokenizer()
{
    tokenizerIsSet_ = false;
}

std::vector<std::string>& LTSFullTextIndexInfo::getAscii()
{
    return ascii_;
}

void LTSFullTextIndexInfo::setAscii(const std::vector<std::string>& value)
{
    ascii_ = value;
    asciiIsSet_ = true;
}

bool LTSFullTextIndexInfo::asciiIsSet() const
{
    return asciiIsSet_;
}

void LTSFullTextIndexInfo::unsetascii()
{
    asciiIsSet_ = false;
}

}
}
}
}
}


