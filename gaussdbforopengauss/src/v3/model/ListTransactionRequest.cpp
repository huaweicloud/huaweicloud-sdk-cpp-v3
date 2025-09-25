

#include "huaweicloud/gaussdbforopengauss/v3/model/ListTransactionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListTransactionRequest::ListTransactionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTransactionRequest::~ListTransactionRequest() = default;

void ListTransactionRequest::validate()
{
}

web::json::value ListTransactionRequest::toJson() const
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
bool ListTransactionRequest::fromJson(const web::json::value& val)
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
            ListTransactionRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTransactionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTransactionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTransactionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTransactionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListTransactionRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTransactionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTransactionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTransactionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListTransactionRequestBody ListTransactionRequest::getBody() const
{
    return body_;
}

void ListTransactionRequest::setBody(const ListTransactionRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTransactionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTransactionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


