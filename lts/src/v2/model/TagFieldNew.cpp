

#include "huaweicloud/lts/v2/model/TagFieldNew.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TagFieldNew::TagFieldNew()
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
}

TagFieldNew::~TagFieldNew() = default;

void TagFieldNew::validate()
{
}

web::json::value TagFieldNew::toJson() const
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

    return val;
}

bool TagFieldNew::fromJson(const web::json::value& val)
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
    return ok;
}

std::string TagFieldNew::getFieldName() const
{
    return fieldName_;
}

void TagFieldNew::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool TagFieldNew::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void TagFieldNew::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string TagFieldNew::getContent() const
{
    return content_;
}

void TagFieldNew::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool TagFieldNew::contentIsSet() const
{
    return contentIsSet_;
}

void TagFieldNew::unsetcontent()
{
    contentIsSet_ = false;
}

std::string TagFieldNew::getType() const
{
    return type_;
}

void TagFieldNew::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TagFieldNew::typeIsSet() const
{
    return typeIsSet_;
}

void TagFieldNew::unsettype()
{
    typeIsSet_ = false;
}

bool TagFieldNew::isIsAnalysis() const
{
    return isAnalysis_;
}

void TagFieldNew::setIsAnalysis(bool value)
{
    isAnalysis_ = value;
    isAnalysisIsSet_ = true;
}

bool TagFieldNew::isAnalysisIsSet() const
{
    return isAnalysisIsSet_;
}

void TagFieldNew::unsetisAnalysis()
{
    isAnalysisIsSet_ = false;
}

int32_t TagFieldNew::getIndex() const
{
    return index_;
}

void TagFieldNew::setIndex(int32_t value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool TagFieldNew::indexIsSet() const
{
    return indexIsSet_;
}

void TagFieldNew::unsetindex()
{
    indexIsSet_ = false;
}

}
}
}
}
}


