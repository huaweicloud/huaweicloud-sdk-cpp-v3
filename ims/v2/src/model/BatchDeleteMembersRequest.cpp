

#include "huaweicloud/ims/model/BatchDeleteMembersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchDeleteMembersRequest::BatchDeleteMembersRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteMembersRequest::~BatchDeleteMembersRequest() = default;

void BatchDeleteMembersRequest::validate()
{
}

web::json::value BatchDeleteMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool BatchDeleteMembersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchAddMembersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchAddMembersRequestBody BatchDeleteMembersRequest::getBody() const
{
    return body_;
}

void BatchDeleteMembersRequest::setBody(const BatchAddMembersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteMembersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteMembersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


