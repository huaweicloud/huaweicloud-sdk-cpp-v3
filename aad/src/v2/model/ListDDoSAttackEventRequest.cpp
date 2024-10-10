

#include "huaweicloud/aad/v2/model/ListDDoSAttackEventRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListDDoSAttackEventRequest::ListDDoSAttackEventRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListDDoSAttackEventRequest::~ListDDoSAttackEventRequest() = default;

void ListDDoSAttackEventRequest::validate()
{
}

web::json::value ListDDoSAttackEventRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListDDoSAttackEventRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListDDoSAttackEventRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListDDoSAttackEventRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDDoSAttackEventRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDDoSAttackEventRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDDoSAttackEventRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ListDDoSAttackEventRequestBody ListDDoSAttackEventRequest::getBody() const
{
    return body_;
}

void ListDDoSAttackEventRequest::setBody(const ListDDoSAttackEventRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListDDoSAttackEventRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListDDoSAttackEventRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


