

#include "huaweicloud/cloudtest/v1/model/ListIteratorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListIteratorsRequest::ListIteratorsRequest()
{
    bodyIsSet_ = false;
}

ListIteratorsRequest::~ListIteratorsRequest() = default;

void ListIteratorsRequest::validate()
{
}

web::json::value ListIteratorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListIteratorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IteratorVersionsQueryInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IteratorVersionsQueryInfo ListIteratorsRequest::getBody() const
{
    return body_;
}

void ListIteratorsRequest::setBody(const IteratorVersionsQueryInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListIteratorsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListIteratorsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


