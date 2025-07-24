

#include "huaweicloud/cloudtest/v1/model/ResourceChangeExternalVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResourceChangeExternalVo::ResourceChangeExternalVo()
{
    fieldName_ = "";
    fieldNameIsSet_ = false;
    customFieldType_ = "";
    customFieldTypeIsSet_ = false;
    oldChangeInfoIsSet_ = false;
    newChangeInfoIsSet_ = false;
}

ResourceChangeExternalVo::~ResourceChangeExternalVo() = default;

void ResourceChangeExternalVo::validate()
{
}

web::json::value ResourceChangeExternalVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldNameIsSet_) {
        val[utility::conversions::to_string_t("field_name")] = ModelBase::toJson(fieldName_);
    }
    if(customFieldTypeIsSet_) {
        val[utility::conversions::to_string_t("custom_field_type")] = ModelBase::toJson(customFieldType_);
    }
    if(oldChangeInfoIsSet_) {
        val[utility::conversions::to_string_t("old_change_info")] = ModelBase::toJson(oldChangeInfo_);
    }
    if(newChangeInfoIsSet_) {
        val[utility::conversions::to_string_t("new_change_info")] = ModelBase::toJson(newChangeInfo_);
    }

    return val;
}
bool ResourceChangeExternalVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("custom_field_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_field_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFieldType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_change_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_change_info"));
        if(!fieldValue.is_null())
        {
            ElementResourceChangeExternalVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldChangeInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_change_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_change_info"));
        if(!fieldValue.is_null())
        {
            ElementResourceChangeExternalVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewChangeInfo(refVal);
        }
    }
    return ok;
}


std::string ResourceChangeExternalVo::getFieldName() const
{
    return fieldName_;
}

void ResourceChangeExternalVo::setFieldName(const std::string& value)
{
    fieldName_ = value;
    fieldNameIsSet_ = true;
}

bool ResourceChangeExternalVo::fieldNameIsSet() const
{
    return fieldNameIsSet_;
}

void ResourceChangeExternalVo::unsetfieldName()
{
    fieldNameIsSet_ = false;
}

std::string ResourceChangeExternalVo::getCustomFieldType() const
{
    return customFieldType_;
}

void ResourceChangeExternalVo::setCustomFieldType(const std::string& value)
{
    customFieldType_ = value;
    customFieldTypeIsSet_ = true;
}

bool ResourceChangeExternalVo::customFieldTypeIsSet() const
{
    return customFieldTypeIsSet_;
}

void ResourceChangeExternalVo::unsetcustomFieldType()
{
    customFieldTypeIsSet_ = false;
}

ElementResourceChangeExternalVo ResourceChangeExternalVo::getOldChangeInfo() const
{
    return oldChangeInfo_;
}

void ResourceChangeExternalVo::setOldChangeInfo(const ElementResourceChangeExternalVo& value)
{
    oldChangeInfo_ = value;
    oldChangeInfoIsSet_ = true;
}

bool ResourceChangeExternalVo::oldChangeInfoIsSet() const
{
    return oldChangeInfoIsSet_;
}

void ResourceChangeExternalVo::unsetoldChangeInfo()
{
    oldChangeInfoIsSet_ = false;
}

ElementResourceChangeExternalVo ResourceChangeExternalVo::getNewChangeInfo() const
{
    return newChangeInfo_;
}

void ResourceChangeExternalVo::setNewChangeInfo(const ElementResourceChangeExternalVo& value)
{
    newChangeInfo_ = value;
    newChangeInfoIsSet_ = true;
}

bool ResourceChangeExternalVo::newChangeInfoIsSet() const
{
    return newChangeInfoIsSet_;
}

void ResourceChangeExternalVo::unsetnewChangeInfo()
{
    newChangeInfoIsSet_ = false;
}

}
}
}
}
}


