

#include "huaweicloud/tms/v1/model/ListResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListResourceRequest::ListResourceRequest()
{
    bodyIsSet_ = false;
}

ListResourceRequest::~ListResourceRequest() = default;

void ListResourceRequest::validate()
{
}

web::json::value ListResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListResourceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ResqTagResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ResqTagResource ListResourceRequest::getBody() const
{
    return body_;
}

void ListResourceRequest::setBody(const ResqTagResource& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


