

#include "huaweicloud/lts/v2/model/StructFieldInfoReturn.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




StructFieldInfoReturn::StructFieldInfoReturn()
{
    fieldName_ = "";
    fieldNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    isAnalysis_ = false;
    isAnalysisIsSet_ = false;
    index_ = 0;
    indexIsSet_ = false;
}

StructFieldInfoReturn::~StructFieldInfoReturn() = default;

void StructFieldInfoReturn::validate()
{
}

web::json::value StructFieldInfoReturn::toJson() const
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
    if(indexIsSet_) {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(index_);
    }

    return val;
}

bool StructFieldInfoReturn::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndex(refVal);
        }
    }
    return ok;
}


std::string StructFieldInfoReturn::getFieldName() const
{
    return fieldName_;
}

void StructFieldInfoReturn::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool StructFieldInfoReturn::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void StructFieldInfoReturn::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string StructFieldInfoReturn::getType() const
{
    return type_;
}

void StructFieldInfoReturn::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StructFieldInfoReturn::typeIsSet() const
{
    return typeIsSet_;
}

void StructFieldInfoReturn::unsettype()
{
    typeIsSet_ = false;
}

std::string StructFieldInfoReturn::getContent() const
{
    return content_;
}

void StructFieldInfoReturn::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool StructFieldInfoReturn::contentIsSet() const
{
    return contentIsSet_;
}

void StructFieldInfoReturn::unsetcontent()
{
    contentIsSet_ = false;
}

bool StructFieldInfoReturn::isIsAnalysis() const
{
    return isAnalysis_;
}

void StructFieldInfoReturn::setIsAnalysis(bool value)
{
    isAnalysis_ = value;
    isAnalysisIsSet_ = true;
}

bool StructFieldInfoReturn::isAnalysisIsSet() const
{
    return isAnalysisIsSet_;
}

void StructFieldInfoReturn::unsetisAnalysis()
{
    isAnalysisIsSet_ = false;
}

int32_t StructFieldInfoReturn::getIndex() const
{
    return index_;
}

void StructFieldInfoReturn::setIndex(int32_t value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool StructFieldInfoReturn::indexIsSet() const
{
    return indexIsSet_;
}

void StructFieldInfoReturn::unsetindex()
{
    indexIsSet_ = false;
}

}
}
}
}
}


