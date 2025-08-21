

#include "huaweicloud/live/v1/model/ListCesInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListCesInstanceRequest::ListCesInstanceRequest()
{
    bodyIsSet_ = false;
}

ListCesInstanceRequest::~ListCesInstanceRequest() = default;

void ListCesInstanceRequest::validate()
{
}

web::json::value ListCesInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListCesInstanceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListCesInstanceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ListCesInstanceRequestBody ListCesInstanceRequest::getBody() const
{
    return body_;
}

void ListCesInstanceRequest::setBody(const ListCesInstanceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListCesInstanceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListCesInstanceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


