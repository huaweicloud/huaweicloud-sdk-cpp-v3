

#include "huaweicloud/cloudtest/v1/model/ListIteratorsInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListIteratorsInfoRequest::ListIteratorsInfoRequest()
{
    bodyIsSet_ = false;
}

ListIteratorsInfoRequest::~ListIteratorsInfoRequest() = default;

void ListIteratorsInfoRequest::validate()
{
}

web::json::value ListIteratorsInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListIteratorsInfoRequest::fromJson(const web::json::value& val)
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


IteratorVersionsQueryInfo ListIteratorsInfoRequest::getBody() const
{
    return body_;
}

void ListIteratorsInfoRequest::setBody(const IteratorVersionsQueryInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListIteratorsInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListIteratorsInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


