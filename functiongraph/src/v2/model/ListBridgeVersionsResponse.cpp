

#include "huaweicloud/functiongraph/v2/model/ListBridgeVersionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListBridgeVersionsResponse::ListBridgeVersionsResponse()
{
    bodyIsSet_ = false;
}

ListBridgeVersionsResponse::~ListBridgeVersionsResponse() = default;

void ListBridgeVersionsResponse::validate()
{
}

web::json::value ListBridgeVersionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListBridgeVersionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceBridgeVersion> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ServiceBridgeVersion>& ListBridgeVersionsResponse::getBody()
{
    return body_;
}

void ListBridgeVersionsResponse::setBody(const std::vector<ServiceBridgeVersion>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListBridgeVersionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListBridgeVersionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


