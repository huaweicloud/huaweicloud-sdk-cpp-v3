

#include "huaweicloud/functiongraph/v2/model/ListBridgeFunctionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListBridgeFunctionsResponse::ListBridgeFunctionsResponse()
{
    bodyIsSet_ = false;
}

ListBridgeFunctionsResponse::~ListBridgeFunctionsResponse() = default;

void ListBridgeFunctionsResponse::validate()
{
}

web::json::value ListBridgeFunctionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListBridgeFunctionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ListFunctionResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ListFunctionResult>& ListBridgeFunctionsResponse::getBody()
{
    return body_;
}

void ListBridgeFunctionsResponse::setBody(const std::vector<ListFunctionResult>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListBridgeFunctionsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListBridgeFunctionsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


