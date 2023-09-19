

#include "huaweicloud/lts/v2/model/DemoField.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




DemoField::DemoField()
{
    fieldName_ = "";
    fieldNameIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    isAnalysis_ = false;
    isAnalysisIsSet_ = false;
    index_ = 0;
    indexIsSet_ = false;
    relation_ = "";
    relationIsSet_ = false;
    userDefinedName_ = "";
    userDefinedNameIsSet_ = false;
}

DemoField::~DemoField() = default;

void DemoField::validate()
{
}

web::json::value DemoField::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("field_name")] = ModelBase::toJson(fieldName_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(isAnalysisIsSet_) {
        val[utility::conversions::to_string_t("is_analysis")] = ModelBase::toJson(isAnalysis_);
    }
    if(indexIsSet_) {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(index_);
    }
    if(relationIsSet_) {
        val[utility::conversions::to_string_t("relation")] = ModelBase::toJson(relation_);
    }
    if(userDefinedNameIsSet_) {
        val[utility::conversions::to_string_t("user_defined_name")] = ModelBase::toJson(userDefinedName_);
    }

    return val;
}

bool DemoField::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("field_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("field_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFieldName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_analysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_analysis"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAnalysis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_defined_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_defined_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDefinedName(refVal);
        }
    }
    return ok;
}

std::string DemoField::getFieldName() const
{
    return fieldName_;
}

void DemoField::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool DemoField::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void DemoField::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string DemoField::getContent() const
{
    return content_;
}

void DemoField::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool DemoField::contentIsSet() const
{
    return contentIsSet_;
}

void DemoField::unsetcontent()
{
    contentIsSet_ = false;
}

std::string DemoField::getType() const
{
    return type_;
}

void DemoField::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DemoField::typeIsSet() const
{
    return typeIsSet_;
}

void DemoField::unsettype()
{
    typeIsSet_ = false;
}

bool DemoField::isIsAnalysis() const
{
    return isAnalysis_;
}

void DemoField::setIsAnalysis(bool value)
{
    isAnalysis_ = value;
    isAnalysisIsSet_ = true;
}

bool DemoField::isAnalysisIsSet() const
{
    return isAnalysisIsSet_;
}

void DemoField::unsetisAnalysis()
{
    isAnalysisIsSet_ = false;
}

int32_t DemoField::getIndex() const
{
    return index_;
}

void DemoField::setIndex(int32_t value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool DemoField::indexIsSet() const
{
    return indexIsSet_;
}

void DemoField::unsetindex()
{
    indexIsSet_ = false;
}

std::string DemoField::getRelation() const
{
    return relation_;
}

void DemoField::setRelation(const std::string& value)
{
    relation_ = value;
    relationIsSet_ = true;
}

bool DemoField::relationIsSet() const
{
    return relationIsSet_;
}

void DemoField::unsetrelation()
{
    relationIsSet_ = false;
}

std::string DemoField::getUserDefinedName() const
{
    return userDefinedName_;
}

void DemoField::setUserDefinedName(const std::string& value)
{
    userDefinedName_ = value;
    userDefinedNameIsSet_ = true;
}

bool DemoField::userDefinedNameIsSet() const
{
    return userDefinedNameIsSet_;
}

void DemoField::unsetuserDefinedName()
{
    userDefinedNameIsSet_ = false;
}

}
}
}
}
}


