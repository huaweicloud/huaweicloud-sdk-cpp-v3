

#include "huaweicloud/gaussdbforopengauss/v3/model/ListRealTimeSessionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListRealTimeSessionsRequest::ListRealTimeSessionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListRealTimeSessionsRequest::~ListRealTimeSessionsRequest() = default;

void ListRealTimeSessionsRequest::validate()
{
}

web::json::value ListRealTimeSessionsRequest::toJson() const
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
bool ListRealTimeSessionsRequest::fromJson(const web::json::value& val)
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
            ListRealTimeSessionsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListRealTimeSessionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListRealTimeSessionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListRealTimeSessionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListRealTimeSessionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListRealTimeSessionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListRealTimeSessionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListRealTimeSessionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListRealTimeSessionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListRealTimeSessionsRequestBody ListRealTimeSessionsRequest::getBody() const
{
    return body_;
}

void ListRealTimeSessionsRequest::setBody(const ListRealTimeSessionsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListRealTimeSessionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListRealTimeSessionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


