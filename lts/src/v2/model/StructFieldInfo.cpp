

#include "huaweicloud/lts/v2/model/StructFieldInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




StructFieldInfo::StructFieldInfo()
{
    isAnalysis_ = false;
    isAnalysisIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    fieldName_ = "";
    fieldNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    userDefinedName_ = "";
    userDefinedNameIsSet_ = false;
    index_ = 0;
    indexIsSet_ = false;
}

StructFieldInfo::~StructFieldInfo() = default;

void StructFieldInfo::validate()
{
}

web::json::value StructFieldInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAnalysisIsSet_) {
        val[utility::conversions::to_string_t("isAnalysis")] = ModelBase::toJson(isAnalysis_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("fieldName")] = ModelBase::toJson(fieldName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(userDefinedNameIsSet_) {
        val[utility::conversions::to_string_t("userDefinedName")] = ModelBase::toJson(userDefinedName_);
    }
    if(indexIsSet_) {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(index_);
    }

    return val;
}
bool StructFieldInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isAnalysis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAnalysis"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAnalysis(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("userDefinedName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userDefinedName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDefinedName(refVal);
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


bool StructFieldInfo::isIsAnalysis() const
{
    return isAnalysis_;
}

void StructFieldInfo::setIsAnalysis(bool value)
{
    isAnalysis_ = value;
    isAnalysisIsSet_ = true;
}

bool StructFieldInfo::isAnalysisIsSet() const
{
    return isAnalysisIsSet_;
}

void StructFieldInfo::unsetisAnalysis()
{
    isAnalysisIsSet_ = false;
}

std::string StructFieldInfo::getContent() const
{
    return content_;
}

void StructFieldInfo::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool StructFieldInfo::contentIsSet() const
{
    return contentIsSet_;
}

void StructFieldInfo::unsetcontent()
{
    contentIsSet_ = false;
}

std::string StructFieldInfo::getFieldName() const
{
    return fieldName_;
}

void StructFieldInfo::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool StructFieldInfo::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void StructFieldInfo::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string StructFieldInfo::getType() const
{
    return type_;
}

void StructFieldInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool StructFieldInfo::typeIsSet() const
{
    return typeIsSet_;
}

void StructFieldInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string StructFieldInfo::getUserDefinedName() const
{
    return userDefinedName_;
}

void StructFieldInfo::setUserDefinedName(const std::string& value)
{
    userDefinedName_ = value;
    userDefinedNameIsSet_ = true;
}

bool StructFieldInfo::userDefinedNameIsSet() const
{
    return userDefinedNameIsSet_;
}

void StructFieldInfo::unsetuserDefinedName()
{
    userDefinedNameIsSet_ = false;
}

int32_t StructFieldInfo::getIndex() const
{
    return index_;
}

void StructFieldInfo::setIndex(int32_t value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool StructFieldInfo::indexIsSet() const
{
    return indexIsSet_;
}

void StructFieldInfo::unsetindex()
{
    indexIsSet_ = false;
}

}
}
}
}
}


