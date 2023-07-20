

#include "huaweicloud/gaussdb/v3/model/UpdateTransactionSplitStatusRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateTransactionSplitStatusRequest::UpdateTransactionSplitStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTransactionSplitStatusRequest::~UpdateTransactionSplitStatusRequest() = default;

void UpdateTransactionSplitStatusRequest::validate()
{
}

web::json::value UpdateTransactionSplitStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateTransactionSplitStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ProxyTransactionSplitRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateTransactionSplitStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateTransactionSplitStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateTransactionSplitStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateTransactionSplitStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string UpdateTransactionSplitStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateTransactionSplitStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateTransactionSplitStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateTransactionSplitStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

ProxyTransactionSplitRequest UpdateTransactionSplitStatusRequest::getBody() const
{
    return body_;
}

void UpdateTransactionSplitStatusRequest::setBody(const ProxyTransactionSplitRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTransactionSplitStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTransactionSplitStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


