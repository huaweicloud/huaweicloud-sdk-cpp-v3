

#include "huaweicloud/vpc/v2/model/CreatePortRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreatePortRequest::CreatePortRequest()
{
    bodyIsSet_ = false;
}

CreatePortRequest::~CreatePortRequest() = default;

void CreatePortRequest::validate()
{
}

web::json::value CreatePortRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreatePortRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatePortRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreatePortRequestBody CreatePortRequest::getBody() const
{
    return body_;
}

void CreatePortRequest::setBody(const CreatePortRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePortRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePortRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


