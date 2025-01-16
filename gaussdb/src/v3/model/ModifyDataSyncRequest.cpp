

#include "huaweicloud/gaussdb/v3/model/ModifyDataSyncRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyDataSyncRequest::ModifyDataSyncRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyDataSyncRequest::~ModifyDataSyncRequest() = default;

void ModifyDataSyncRequest::validate()
{
}

web::json::value ModifyDataSyncRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ModifyDataSyncRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyDataSyncConfigRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyDataSyncRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyDataSyncRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyDataSyncRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyDataSyncRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyDataSyncRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyDataSyncRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyDataSyncRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyDataSyncRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyDataSyncConfigRequestV3 ModifyDataSyncRequest::getBody() const
{
    return body_;
}

void ModifyDataSyncRequest::setBody(const ModifyDataSyncConfigRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyDataSyncRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyDataSyncRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


