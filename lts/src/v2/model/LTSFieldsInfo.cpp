

#include "huaweicloud/lts/v2/model/LTSFieldsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LTSFieldsInfo::LTSFieldsInfo()
{
    fieldType_ = "";
    fieldTypeIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
    caseSensitive_ = false;
    caseSensitiveIsSet_ = false;
    includeChinese_ = false;
    includeChineseIsSet_ = false;
    tokenizer_ = "";
    tokenizerIsSet_ = false;
    quickAnalysis_ = false;
    quickAnalysisIsSet_ = false;
    asciiIsSet_ = false;
    ltsSubFieldsInfoListIsSet_ = false;
    fieldAnalysisAlias_ = "";
    fieldAnalysisAliasIsSet_ = false;
}

LTSFieldsInfo::~LTSFieldsInfo() = default;

void LTSFieldsInfo::validate()
{
}

web::json::value LTSFieldsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldTypeIsSet_) {
        val[utility::conversions::to_string_t("fieldType")] = ModelBase::toJson(fieldType_);
    }
    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("fieldName")] = ModelBase::toJson(fieldName_);
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
    if(quickAnalysisIsSet_) {
        val[utility::conversions::to_string_t("quickAnalysis")] = ModelBase::toJson(quickAnalysis_);
    }
    if(asciiIsSet_) {
        val[utility::conversions::to_string_t("ascii")] = ModelBase::toJson(ascii_);
    }
    if(ltsSubFieldsInfoListIsSet_) {
        val[utility::conversions::to_string_t("ltsSubFieldsInfoList")] = ModelBase::toJson(ltsSubFieldsInfoList_);
    }
    if(fieldAnalysisAliasIsSet_) {
        val[utility::conversions::to_string_t("fieldAnalysisAlias")] = ModelBase::toJson(fieldAnalysisAlias_);
    }

    return val;
}
bool LTSFieldsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fieldType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fieldType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fieldName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fieldName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("quickAnalysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quickAnalysis"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuickAnalysis(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ltsSubFieldsInfoList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ltsSubFieldsInfoList"));
        if(!fieldValue.is_null())
        {
            std::vector<LTSSubFieldsInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsSubFieldsInfoList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fieldAnalysisAlias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fieldAnalysisAlias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldAnalysisAlias(refVal);
        }
    }
    return ok;
}


std::string LTSFieldsInfo::getFieldType() const
{
    return fieldType_;
}

void LTSFieldsInfo::setFieldType(const std::string& value)
{
    fieldType_ = value;
    fieldTypeIsSet_ = true;
}

bool LTSFieldsInfo::fieldTypeIsSet() const
{
    return fieldTypeIsSet_;
}

void LTSFieldsInfo::unsetfieldType()
{
    fieldTypeIsSet_ = false;
}

std::string LTSFieldsInfo::getFieldName() const
{
    return fieldName_;
}

void LTSFieldsInfo::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool LTSFieldsInfo::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void LTSFieldsInfo::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

bool LTSFieldsInfo::isCaseSensitive() const
{
    return caseSensitive_;
}

void LTSFieldsInfo::setCaseSensitive(bool value)
{
    caseSensitive_ = value;
    caseSensitiveIsSet_ = true;
}

bool LTSFieldsInfo::caseSensitiveIsSet() const
{
    return caseSensitiveIsSet_;
}

void LTSFieldsInfo::unsetcaseSensitive()
{
    caseSensitiveIsSet_ = false;
}

bool LTSFieldsInfo::isIncludeChinese() const
{
    return includeChinese_;
}

void LTSFieldsInfo::setIncludeChinese(bool value)
{
    includeChinese_ = value;
    includeChineseIsSet_ = true;
}

bool LTSFieldsInfo::includeChineseIsSet() const
{
    return includeChineseIsSet_;
}

void LTSFieldsInfo::unsetincludeChinese()
{
    includeChineseIsSet_ = false;
}

std::string LTSFieldsInfo::getTokenizer() const
{
    return tokenizer_;
}

void LTSFieldsInfo::setTokenizer(const std::string& value)
{
    tokenizer_ = value;
    tokenizerIsSet_ = true;
}

bool LTSFieldsInfo::tokenizerIsSet() const
{
    return tokenizerIsSet_;
}

void LTSFieldsInfo::unsettokenizer()
{
    tokenizerIsSet_ = false;
}

bool LTSFieldsInfo::isQuickAnalysis() const
{
    return quickAnalysis_;
}

void LTSFieldsInfo::setQuickAnalysis(bool value)
{
    quickAnalysis_ = value;
    quickAnalysisIsSet_ = true;
}

bool LTSFieldsInfo::quickAnalysisIsSet() const
{
    return quickAnalysisIsSet_;
}

void LTSFieldsInfo::unsetquickAnalysis()
{
    quickAnalysisIsSet_ = false;
}

std::vector<std::string>& LTSFieldsInfo::getAscii()
{
    return ascii_;
}

void LTSFieldsInfo::setAscii(const std::vector<std::string>& value)
{
    ascii_ = value;
    asciiIsSet_ = true;
}

bool LTSFieldsInfo::asciiIsSet() const
{
    return asciiIsSet_;
}

void LTSFieldsInfo::unsetascii()
{
    asciiIsSet_ = false;
}

std::vector<LTSSubFieldsInfo>& LTSFieldsInfo::getLtsSubFieldsInfoList()
{
    return ltsSubFieldsInfoList_;
}

void LTSFieldsInfo::setLtsSubFieldsInfoList(const std::vector<LTSSubFieldsInfo>& value)
{
    ltsSubFieldsInfoList_ = value;
    ltsSubFieldsInfoListIsSet_ = true;
}

bool LTSFieldsInfo::ltsSubFieldsInfoListIsSet() const
{
    return ltsSubFieldsInfoListIsSet_;
}

void LTSFieldsInfo::unsetltsSubFieldsInfoList()
{
    ltsSubFieldsInfoListIsSet_ = false;
}

std::string LTSFieldsInfo::getFieldAnalysisAlias() const
{
    return fieldAnalysisAlias_;
}

void LTSFieldsInfo::setFieldAnalysisAlias(const std::string& value)
{
    fieldAnalysisAlias_ = value;
    fieldAnalysisAliasIsSet_ = true;
}

bool LTSFieldsInfo::fieldAnalysisAliasIsSet() const
{
    return fieldAnalysisAliasIsSet_;
}

void LTSFieldsInfo::unsetfieldAnalysisAlias()
{
    fieldAnalysisAliasIsSet_ = false;
}

}
}
}
}
}


