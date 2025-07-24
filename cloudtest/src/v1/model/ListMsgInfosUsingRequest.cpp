

#include "huaweicloud/cloudtest/v1/model/ListMsgInfosUsingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListMsgInfosUsingRequest::ListMsgInfosUsingRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListMsgInfosUsingRequest::~ListMsgInfosUsingRequest() = default;

void ListMsgInfosUsingRequest::validate()
{
}

web::json::value ListMsgInfosUsingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListMsgInfosUsingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            MsgInfoQuery refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListMsgInfosUsingRequest::getServiceId() const
{
    return serviceId_;
}

void ListMsgInfosUsingRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListMsgInfosUsingRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListMsgInfosUsingRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

MsgInfoQuery ListMsgInfosUsingRequest::getBody() const
{
    return body_;
}

void ListMsgInfosUsingRequest::setBody(const MsgInfoQuery& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMsgInfosUsingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMsgInfosUsingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


