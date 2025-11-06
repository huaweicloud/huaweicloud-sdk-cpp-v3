

#include "huaweicloud/lts/v2/model/LTSSubFieldsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LTSSubFieldsInfo::LTSSubFieldsInfo()
{
    fieldType_ = "";
    fieldTypeIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
    quickAnalysis_ = false;
    quickAnalysisIsSet_ = false;
    fieldAnalysisAlias_ = "";
    fieldAnalysisAliasIsSet_ = false;
}

LTSSubFieldsInfo::~LTSSubFieldsInfo() = default;

void LTSSubFieldsInfo::validate()
{
}

web::json::value LTSSubFieldsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldTypeIsSet_) {
        val[utility::conversions::to_string_t("fieldType")] = ModelBase::toJson(fieldType_);
    }
    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("fieldName")] = ModelBase::toJson(fieldName_);
    }
    if(quickAnalysisIsSet_) {
        val[utility::conversions::to_string_t("quickAnalysis")] = ModelBase::toJson(quickAnalysis_);
    }
    if(fieldAnalysisAliasIsSet_) {
        val[utility::conversions::to_string_t("fieldAnalysisAlias")] = ModelBase::toJson(fieldAnalysisAlias_);
    }

    return val;
}
bool LTSSubFieldsInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quickAnalysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quickAnalysis"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuickAnalysis(refVal);
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


std::string LTSSubFieldsInfo::getFieldType() const
{
    return fieldType_;
}

void LTSSubFieldsInfo::setFieldType(const std::string& value)
{
    fieldType_ = value;
    fieldTypeIsSet_ = true;
}

bool LTSSubFieldsInfo::fieldTypeIsSet() const
{
    return fieldTypeIsSet_;
}

void LTSSubFieldsInfo::unsetfieldType()
{
    fieldTypeIsSet_ = false;
}

std::string LTSSubFieldsInfo::getFieldName() const
{
    return fieldName_;
}

void LTSSubFieldsInfo::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool LTSSubFieldsInfo::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void LTSSubFieldsInfo::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

bool LTSSubFieldsInfo::isQuickAnalysis() const
{
    return quickAnalysis_;
}

void LTSSubFieldsInfo::setQuickAnalysis(bool value)
{
    quickAnalysis_ = value;
    quickAnalysisIsSet_ = true;
}

bool LTSSubFieldsInfo::quickAnalysisIsSet() const
{
    return quickAnalysisIsSet_;
}

void LTSSubFieldsInfo::unsetquickAnalysis()
{
    quickAnalysisIsSet_ = false;
}

std::string LTSSubFieldsInfo::getFieldAnalysisAlias() const
{
    return fieldAnalysisAlias_;
}

void LTSSubFieldsInfo::setFieldAnalysisAlias(const std::string& value)
{
    fieldAnalysisAlias_ = value;
    fieldAnalysisAliasIsSet_ = true;
}

bool LTSSubFieldsInfo::fieldAnalysisAliasIsSet() const
{
    return fieldAnalysisAliasIsSet_;
}

void LTSSubFieldsInfo::unsetfieldAnalysisAlias()
{
    fieldAnalysisAliasIsSet_ = false;
}

}
}
}
}
}


