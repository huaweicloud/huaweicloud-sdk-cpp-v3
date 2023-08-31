

#include "huaweicloud/codeartsdeploy/v2/model/ListAllAppRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListAllAppRequest::ListAllAppRequest()
{
    bodyIsSet_ = false;
}

ListAllAppRequest::~ListAllAppRequest() = default;

void ListAllAppRequest::validate()
{
}

web::json::value ListAllAppRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListAllAppRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListAllAppRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ListAllAppRequestBody ListAllAppRequest::getBody() const
{
    return body_;
}

void ListAllAppRequest::setBody(const ListAllAppRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAllAppRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAllAppRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


