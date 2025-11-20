

#include "huaweicloud/cce/v3/model/CheckTaskMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CheckTaskMetadata::CheckTaskMetadata()
{
    type_ = "";
    typeIsSet_ = false;
    taskID_ = "";
    taskIDIsSet_ = false;
    addonTemplateName_ = "";
    addonTemplateNameIsSet_ = false;
    addonInstanceName_ = "";
    addonInstanceNameIsSet_ = false;
    addonInstanceID_ = "";
    addonInstanceIDIsSet_ = false;
    createTimeStamp_ = "";
    createTimeStampIsSet_ = false;
    expireTimeStamp_ = "";
    expireTimeStampIsSet_ = false;
}

CheckTaskMetadata::~CheckTaskMetadata() = default;

void CheckTaskMetadata::validate()
{
}

web::json::value CheckTaskMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(taskIDIsSet_) {
        val[utility::conversions::to_string_t("taskID")] = ModelBase::toJson(taskID_);
    }
    if(addonTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("addonTemplateName")] = ModelBase::toJson(addonTemplateName_);
    }
    if(addonInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("addonInstanceName")] = ModelBase::toJson(addonInstanceName_);
    }
    if(addonInstanceIDIsSet_) {
        val[utility::conversions::to_string_t("addonInstanceID")] = ModelBase::toJson(addonInstanceID_);
    }
    if(createTimeStampIsSet_) {
        val[utility::conversions::to_string_t("createTimeStamp")] = ModelBase::toJson(createTimeStamp_);
    }
    if(expireTimeStampIsSet_) {
        val[utility::conversions::to_string_t("expireTimeStamp")] = ModelBase::toJson(expireTimeStamp_);
    }

    return val;
}
bool CheckTaskMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addonTemplateName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonTemplateName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addonInstanceName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonInstanceName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("addonInstanceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addonInstanceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonInstanceID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTimeStamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTimeStamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expireTimeStamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expireTimeStamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTimeStamp(refVal);
        }
    }
    return ok;
}


std::string CheckTaskMetadata::getType() const
{
    return type_;
}

void CheckTaskMetadata::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CheckTaskMetadata::typeIsSet() const
{
    return typeIsSet_;
}

void CheckTaskMetadata::unsettype()
{
    typeIsSet_ = false;
}

std::string CheckTaskMetadata::getTaskID() const
{
    return taskID_;
}

void CheckTaskMetadata::setTaskID(const std::string& value)
{
    taskID_ = value;
    taskIDIsSet_ = true;
}

bool CheckTaskMetadata::taskIDIsSet() const
{
    return taskIDIsSet_;
}

void CheckTaskMetadata::unsettaskID()
{
    taskIDIsSet_ = false;
}

std::string CheckTaskMetadata::getAddonTemplateName() const
{
    return addonTemplateName_;
}

void CheckTaskMetadata::setAddonTemplateName(const std::string& value)
{
    addonTemplateName_ = value;
    addonTemplateNameIsSet_ = true;
}

bool CheckTaskMetadata::addonTemplateNameIsSet() const
{
    return addonTemplateNameIsSet_;
}

void CheckTaskMetadata::unsetaddonTemplateName()
{
    addonTemplateNameIsSet_ = false;
}

std::string CheckTaskMetadata::getAddonInstanceName() const
{
    return addonInstanceName_;
}

void CheckTaskMetadata::setAddonInstanceName(const std::string& value)
{
    addonInstanceName_ = value;
    addonInstanceNameIsSet_ = true;
}

bool CheckTaskMetadata::addonInstanceNameIsSet() const
{
    return addonInstanceNameIsSet_;
}

void CheckTaskMetadata::unsetaddonInstanceName()
{
    addonInstanceNameIsSet_ = false;
}

std::string CheckTaskMetadata::getAddonInstanceID() const
{
    return addonInstanceID_;
}

void CheckTaskMetadata::setAddonInstanceID(const std::string& value)
{
    addonInstanceID_ = value;
    addonInstanceIDIsSet_ = true;
}

bool CheckTaskMetadata::addonInstanceIDIsSet() const
{
    return addonInstanceIDIsSet_;
}

void CheckTaskMetadata::unsetaddonInstanceID()
{
    addonInstanceIDIsSet_ = false;
}

std::string CheckTaskMetadata::getCreateTimeStamp() const
{
    return createTimeStamp_;
}

void CheckTaskMetadata::setCreateTimeStamp(const std::string& value)
{
    createTimeStamp_ = value;
    createTimeStampIsSet_ = true;
}

bool CheckTaskMetadata::createTimeStampIsSet() const
{
    return createTimeStampIsSet_;
}

void CheckTaskMetadata::unsetcreateTimeStamp()
{
    createTimeStampIsSet_ = false;
}

std::string CheckTaskMetadata::getExpireTimeStamp() const
{
    return expireTimeStamp_;
}

void CheckTaskMetadata::setExpireTimeStamp(const std::string& value)
{
    expireTimeStamp_ = value;
    expireTimeStampIsSet_ = true;
}

bool CheckTaskMetadata::expireTimeStampIsSet() const
{
    return expireTimeStampIsSet_;
}

void CheckTaskMetadata::unsetexpireTimeStamp()
{
    expireTimeStampIsSet_ = false;
}

}
}
}
}
}


