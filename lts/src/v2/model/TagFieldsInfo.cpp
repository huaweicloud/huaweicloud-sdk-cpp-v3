

#include "huaweicloud/lts/v2/model/TagFieldsInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TagFieldsInfo::TagFieldsInfo()
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

TagFieldsInfo::~TagFieldsInfo() = default;

void TagFieldsInfo::validate()
{
}

web::json::value TagFieldsInfo::toJson() const
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

bool TagFieldsInfo::fromJson(const web::json::value& val)
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

std::string TagFieldsInfo::getFieldName() const
{
    return fieldName_;
}

void TagFieldsInfo::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool TagFieldsInfo::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void TagFieldsInfo::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string TagFieldsInfo::getType() const
{
    return type_;
}

void TagFieldsInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TagFieldsInfo::typeIsSet() const
{
    return typeIsSet_;
}

void TagFieldsInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string TagFieldsInfo::getContent() const
{
    return content_;
}

void TagFieldsInfo::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool TagFieldsInfo::contentIsSet() const
{
    return contentIsSet_;
}

void TagFieldsInfo::unsetcontent()
{
    contentIsSet_ = false;
}

bool TagFieldsInfo::isIsAnalysis() const
{
    return isAnalysis_;
}

void TagFieldsInfo::setIsAnalysis(bool value)
{
    isAnalysis_ = value;
    isAnalysisIsSet_ = true;
}

bool TagFieldsInfo::isAnalysisIsSet() const
{
    return isAnalysisIsSet_;
}

void TagFieldsInfo::unsetisAnalysis()
{
    isAnalysisIsSet_ = false;
}

int32_t TagFieldsInfo::getIndex() const
{
    return index_;
}

void TagFieldsInfo::setIndex(int32_t value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool TagFieldsInfo::indexIsSet() const
{
    return indexIsSet_;
}

void TagFieldsInfo::unsetindex()
{
    indexIsSet_ = false;
}

}
}
}
}
}


