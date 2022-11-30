

#include "huaweicloud/ecs/v2/model/DeleteServersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteServersRequest::DeleteServersRequest()
{
    bodyIsSet_ = false;
}

DeleteServersRequest::~DeleteServersRequest() = default;

void DeleteServersRequest::validate()
{
}

web::json::value DeleteServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DeleteServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteServersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteServersRequestBody DeleteServersRequest::getBody() const
{
    return body_;
}

void DeleteServersRequest::setBody(const DeleteServersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteServersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteServersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


