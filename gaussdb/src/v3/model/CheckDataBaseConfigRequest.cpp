

#include "huaweicloud/gaussdb/v3/model/CheckDataBaseConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CheckDataBaseConfigRequest::CheckDataBaseConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CheckDataBaseConfigRequest::~CheckDataBaseConfigRequest() = default;

void CheckDataBaseConfigRequest::validate()
{
}

web::json::value CheckDataBaseConfigRequest::toJson() const
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
bool CheckDataBaseConfigRequest::fromJson(const web::json::value& val)
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
            DbConfigCheckRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CheckDataBaseConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void CheckDataBaseConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CheckDataBaseConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CheckDataBaseConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CheckDataBaseConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void CheckDataBaseConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CheckDataBaseConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CheckDataBaseConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DbConfigCheckRequestV3 CheckDataBaseConfigRequest::getBody() const
{
    return body_;
}

void CheckDataBaseConfigRequest::setBody(const DbConfigCheckRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckDataBaseConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckDataBaseConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


