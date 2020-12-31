

#include "huaweicloud/ecs/model/CreatePostPaidServersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreatePostPaidServersRequest::CreatePostPaidServersRequest()
{
    bodyIsSet_ = false;
}

CreatePostPaidServersRequest::~CreatePostPaidServersRequest() = default;

void CreatePostPaidServersRequest::validate()
{
}

web::json::value CreatePostPaidServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreatePostPaidServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePostPaidServersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreatePostPaidServersRequestBody CreatePostPaidServersRequest::getBody() const
{
    return body_;
}

void CreatePostPaidServersRequest::setBody(const CreatePostPaidServersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePostPaidServersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePostPaidServersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


