

#include "huaweicloud/functiongraph/v2/model/ListFunctionTriggersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionTriggersResponse::ListFunctionTriggersResponse()
{
    bodyIsSet_ = false;
}

ListFunctionTriggersResponse::~ListFunctionTriggersResponse() = default;

void ListFunctionTriggersResponse::validate()
{
}

web::json::value ListFunctionTriggersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListFunctionTriggersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ListFunctionTriggerResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ListFunctionTriggerResult>& ListFunctionTriggersResponse::getBody()
{
    return body_;
}

void ListFunctionTriggersResponse::setBody(const std::vector<ListFunctionTriggerResult>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListFunctionTriggersResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListFunctionTriggersResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


