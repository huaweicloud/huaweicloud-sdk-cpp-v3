

#include "huaweicloud/lts/v2/model/TagField.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TagField::TagField()
{
    fieldName_ = "";
    fieldNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    isAnalysis_ = false;
    isAnalysisIsSet_ = false;
}

TagField::~TagField() = default;

void TagField::validate()
{
}

web::json::value TagField::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("fieldName")] = ModelBase::toJson(fieldName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(isAnalysisIsSet_) {
        val[utility::conversions::to_string_t("isAnalysis")] = ModelBase::toJson(isAnalysis_);
    }

    return val;
}

bool TagField::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fieldName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fieldName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isAnalysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAnalysis"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAnalysis(refVal);
        }
    }
    return ok;
}

std::string TagField::getFieldName() const
{
    return fieldName_;
}

void TagField::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool TagField::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void TagField::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string TagField::getType() const
{
    return type_;
}

void TagField::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TagField::typeIsSet() const
{
    return typeIsSet_;
}

void TagField::unsettype()
{
    typeIsSet_ = false;
}

std::string TagField::getContent() const
{
    return content_;
}

void TagField::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool TagField::contentIsSet() const
{
    return contentIsSet_;
}

void TagField::unsetcontent()
{
    contentIsSet_ = false;
}

bool TagField::isIsAnalysis() const
{
    return isAnalysis_;
}

void TagField::setIsAnalysis(bool value)
{
    isAnalysis_ = value;
    isAnalysisIsSet_ = true;
}

bool TagField::isAnalysisIsSet() const
{
    return isAnalysisIsSet_;
}

void TagField::unsetisAnalysis()
{
    isAnalysisIsSet_ = false;
}

}
}
}
}
}


