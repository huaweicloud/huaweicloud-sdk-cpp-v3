

#include "huaweicloud/lts/v2/model/ConsumerGroupHeartBeatResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ConsumerGroupHeartBeatResponse::ConsumerGroupHeartBeatResponse()
{
    bodyIsSet_ = false;
}

ConsumerGroupHeartBeatResponse::~ConsumerGroupHeartBeatResponse() = default;

void ConsumerGroupHeartBeatResponse::validate()
{
}

web::json::value ConsumerGroupHeartBeatResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ConsumerGroupHeartBeatResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ConsumerGroupHeartBeatResponse::getBody()
{
    return body_;
}

void ConsumerGroupHeartBeatResponse::setBody(const std::vector<std::string>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ConsumerGroupHeartBeatResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ConsumerGroupHeartBeatResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


