

#include "huaweicloud/ims/v2/model/BatchAddMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchAddMembersRequest::BatchAddMembersRequest()
{
    bodyIsSet_ = false;
}

BatchAddMembersRequest::~BatchAddMembersRequest() = default;

void BatchAddMembersRequest::validate()
{
}

web::json::value BatchAddMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchAddMembersRequest::fromJson(const web::json::value& val)
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


BatchAddMembersRequestBody BatchAddMembersRequest::getBody() const
{
    return body_;
}

void BatchAddMembersRequest::setBody(const BatchAddMembersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddMembersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddMembersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


