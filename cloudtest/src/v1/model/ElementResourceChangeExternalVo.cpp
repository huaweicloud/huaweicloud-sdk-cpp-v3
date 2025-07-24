

#include "huaweicloud/cloudtest/v1/model/ElementResourceChangeExternalVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ElementResourceChangeExternalVo::ElementResourceChangeExternalVo()
{
    trackerName_ = "";
    trackerNameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    objectValueIsSet_ = false;
    objectKeyIsSet_ = false;
    trackerNamesIsSet_ = false;
    boardInfoIsSet_ = false;
}

ElementResourceChangeExternalVo::~ElementResourceChangeExternalVo() = default;

void ElementResourceChangeExternalVo::validate()
{
}

web::json::value ElementResourceChangeExternalVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(objectValueIsSet_) {
        val[utility::conversions::to_string_t("object_value")] = ModelBase::toJson(objectValue_);
    }
    if(objectKeyIsSet_) {
        val[utility::conversions::to_string_t("object_key")] = ModelBase::toJson(objectKey_);
    }
    if(trackerNamesIsSet_) {
        val[utility::conversions::to_string_t("tracker_names")] = ModelBase::toJson(trackerNames_);
    }
    if(boardInfoIsSet_) {
        val[utility::conversions::to_string_t("board_info")] = ModelBase::toJson(boardInfo_);
    }

    return val;
}
bool ElementResourceChangeExternalVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tracker_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_value"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_key"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_names"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("board_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("board_info"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoardInfo(refVal);
        }
    }
    return ok;
}


std::string ElementResourceChangeExternalVo::getTrackerName() const
{
    return trackerName_;
}

void ElementResourceChangeExternalVo::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool ElementResourceChangeExternalVo::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void ElementResourceChangeExternalVo::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

std::string ElementResourceChangeExternalVo::getValue() const
{
    return value_;
}

void ElementResourceChangeExternalVo::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ElementResourceChangeExternalVo::valueIsSet() const
{
    return valueIsSet_;
}

void ElementResourceChangeExternalVo::unsetvalue()
{
    valueIsSet_ = false;
}

std::string ElementResourceChangeExternalVo::getKey() const
{
    return key_;
}

void ElementResourceChangeExternalVo::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool ElementResourceChangeExternalVo::keyIsSet() const
{
    return keyIsSet_;
}

void ElementResourceChangeExternalVo::unsetkey()
{
    keyIsSet_ = false;
}

Object ElementResourceChangeExternalVo::getObjectValue() const
{
    return objectValue_;
}

void ElementResourceChangeExternalVo::setObjectValue(const Object& value)
{
    objectValue_ = value;
    objectValueIsSet_ = true;
}

bool ElementResourceChangeExternalVo::objectValueIsSet() const
{
    return objectValueIsSet_;
}

void ElementResourceChangeExternalVo::unsetobjectValue()
{
    objectValueIsSet_ = false;
}

Object ElementResourceChangeExternalVo::getObjectKey() const
{
    return objectKey_;
}

void ElementResourceChangeExternalVo::setObjectKey(const Object& value)
{
    objectKey_ = value;
    objectKeyIsSet_ = true;
}

bool ElementResourceChangeExternalVo::objectKeyIsSet() const
{
    return objectKeyIsSet_;
}

void ElementResourceChangeExternalVo::unsetobjectKey()
{
    objectKeyIsSet_ = false;
}

Object ElementResourceChangeExternalVo::getTrackerNames() const
{
    return trackerNames_;
}

void ElementResourceChangeExternalVo::setTrackerNames(const Object& value)
{
    trackerNames_ = value;
    trackerNamesIsSet_ = true;
}

bool ElementResourceChangeExternalVo::trackerNamesIsSet() const
{
    return trackerNamesIsSet_;
}

void ElementResourceChangeExternalVo::unsettrackerNames()
{
    trackerNamesIsSet_ = false;
}

std::vector<Object>& ElementResourceChangeExternalVo::getBoardInfo()
{
    return boardInfo_;
}

void ElementResourceChangeExternalVo::setBoardInfo(const std::vector<Object>& value)
{
    boardInfo_ = value;
    boardInfoIsSet_ = true;
}

bool ElementResourceChangeExternalVo::boardInfoIsSet() const
{
    return boardInfoIsSet_;
}

void ElementResourceChangeExternalVo::unsetboardInfo()
{
    boardInfoIsSet_ = false;
}

}
}
}
}
}


