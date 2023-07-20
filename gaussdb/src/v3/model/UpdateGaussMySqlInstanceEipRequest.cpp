

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceEipRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlInstanceEipRequest::UpdateGaussMySqlInstanceEipRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGaussMySqlInstanceEipRequest::~UpdateGaussMySqlInstanceEipRequest() = default;

void UpdateGaussMySqlInstanceEipRequest::validate()
{
}

web::json::value UpdateGaussMySqlInstanceEipRequest::toJson() const
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

bool UpdateGaussMySqlInstanceEipRequest::fromJson(const web::json::value& val)
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
            ModifyBindEipRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateGaussMySqlInstanceEipRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateGaussMySqlInstanceEipRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateGaussMySqlInstanceEipRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateGaussMySqlInstanceEipRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateGaussMySqlInstanceEipRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateGaussMySqlInstanceEipRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateGaussMySqlInstanceEipRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateGaussMySqlInstanceEipRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyBindEipRequest UpdateGaussMySqlInstanceEipRequest::getBody() const
{
    return body_;
}

void UpdateGaussMySqlInstanceEipRequest::setBody(const ModifyBindEipRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGaussMySqlInstanceEipRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGaussMySqlInstanceEipRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


