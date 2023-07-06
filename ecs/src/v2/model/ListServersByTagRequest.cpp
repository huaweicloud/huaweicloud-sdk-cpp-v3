

#include "huaweicloud/ecs/v2/model/ListServersByTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServersByTagRequest::ListServersByTagRequest()
{
    bodyIsSet_ = false;
}

ListServersByTagRequest::~ListServersByTagRequest() = default;

void ListServersByTagRequest::validate()
{
}

web::json::value ListServersByTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListServersByTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ListServersByTagRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ListServersByTagRequestBody ListServersByTagRequest::getBody() const
{
    return body_;
}

void ListServersByTagRequest::setBody(const ListServersByTagRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListServersByTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListServersByTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


