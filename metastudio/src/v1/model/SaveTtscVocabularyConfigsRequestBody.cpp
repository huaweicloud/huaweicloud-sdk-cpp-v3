

#include "huaweicloud/metastudio/v1/model/SaveTtscVocabularyConfigsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SaveTtscVocabularyConfigsRequestBody::SaveTtscVocabularyConfigsRequestBody()
{
    type_ = "";
    typeIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
}

SaveTtscVocabularyConfigsRequestBody::~SaveTtscVocabularyConfigsRequestBody() = default;

void SaveTtscVocabularyConfigsRequestBody::validate()
{
}

web::json::value SaveTtscVocabularyConfigsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool SaveTtscVocabularyConfigsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


std::string SaveTtscVocabularyConfigsRequestBody::getType() const
{
    return type_;
}

void SaveTtscVocabularyConfigsRequestBody::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequestBody::typeIsSet() const
{
    return typeIsSet_;
}

void SaveTtscVocabularyConfigsRequestBody::unsettype()
{
    typeIsSet_ = false;
}

std::string SaveTtscVocabularyConfigsRequestBody::getKey() const
{
    return key_;
}

void SaveTtscVocabularyConfigsRequestBody::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequestBody::keyIsSet() const
{
    return keyIsSet_;
}

void SaveTtscVocabularyConfigsRequestBody::unsetkey()
{
    keyIsSet_ = false;
}

std::string SaveTtscVocabularyConfigsRequestBody::getValue() const
{
    return value_;
}

void SaveTtscVocabularyConfigsRequestBody::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequestBody::valueIsSet() const
{
    return valueIsSet_;
}

void SaveTtscVocabularyConfigsRequestBody::unsetvalue()
{
    valueIsSet_ = false;
}

std::string SaveTtscVocabularyConfigsRequestBody::getGroupId() const
{
    return groupId_;
}

void SaveTtscVocabularyConfigsRequestBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool SaveTtscVocabularyConfigsRequestBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void SaveTtscVocabularyConfigsRequestBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


