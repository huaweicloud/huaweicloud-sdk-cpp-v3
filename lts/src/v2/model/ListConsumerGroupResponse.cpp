

#include "huaweicloud/lts/v2/model/ListConsumerGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListConsumerGroupResponse::ListConsumerGroupResponse()
{
    bodyIsSet_ = false;
}

ListConsumerGroupResponse::~ListConsumerGroupResponse() = default;

void ListConsumerGroupResponse::validate()
{
}

web::json::value ListConsumerGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListConsumerGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ConsumerGroupInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ConsumerGroupInfo>& ListConsumerGroupResponse::getBody()
{
    return body_;
}

void ListConsumerGroupResponse::setBody(const std::vector<ConsumerGroupInfo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListConsumerGroupResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListConsumerGroupResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


