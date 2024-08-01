

#include "huaweicloud/lts/v2/model/ListDetailsConsumerGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListDetailsConsumerGroupResponse::ListDetailsConsumerGroupResponse()
{
    bodyIsSet_ = false;
}

ListDetailsConsumerGroupResponse::~ListDetailsConsumerGroupResponse() = default;

void ListDetailsConsumerGroupResponse::validate()
{
}

web::json::value ListDetailsConsumerGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListDetailsConsumerGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ConsumerCheckpointInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ConsumerCheckpointInfo>& ListDetailsConsumerGroupResponse::getBody()
{
    return body_;
}

void ListDetailsConsumerGroupResponse::setBody(const std::vector<ConsumerCheckpointInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListDetailsConsumerGroupResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListDetailsConsumerGroupResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


