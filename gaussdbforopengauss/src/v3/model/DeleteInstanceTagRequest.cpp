

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteInstanceTagRequest::DeleteInstanceTagRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
}

DeleteInstanceTagRequest::~DeleteInstanceTagRequest() = default;

void DeleteInstanceTagRequest::validate()
{
}

web::json::value DeleteInstanceTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}
bool DeleteInstanceTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    return ok;
}


std::string DeleteInstanceTagRequest::getXLanguage() const
{
    return xLanguage_;
}

void DeleteInstanceTagRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool DeleteInstanceTagRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void DeleteInstanceTagRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string DeleteInstanceTagRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteInstanceTagRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteInstanceTagRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteInstanceTagRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteInstanceTagRequest::getKey() const
{
    return key_;
}

void DeleteInstanceTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteInstanceTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteInstanceTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


