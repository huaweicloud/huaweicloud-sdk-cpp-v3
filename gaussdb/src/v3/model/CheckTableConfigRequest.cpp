

#include "huaweicloud/gaussdb/v3/model/CheckTableConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckTableConfigRequest::CheckTableConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CheckTableConfigRequest::~CheckTableConfigRequest() = default;

void CheckTableConfigRequest::validate()
{
}

web::json::value CheckTableConfigRequest::toJson() const
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
bool CheckTableConfigRequest::fromJson(const web::json::value& val)
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
            TableConfigCheckRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckTableConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckTableConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckTableConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckTableConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CheckTableConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void CheckTableConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CheckTableConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CheckTableConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

TableConfigCheckRequestV3 CheckTableConfigRequest::getBody() const
{
    return body_;
}

void CheckTableConfigRequest::setBody(const TableConfigCheckRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckTableConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckTableConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


