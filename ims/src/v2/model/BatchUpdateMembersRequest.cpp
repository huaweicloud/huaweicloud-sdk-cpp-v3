

#include "huaweicloud/ims/v2/model/BatchUpdateMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchUpdateMembersRequest::BatchUpdateMembersRequest()
{
    bodyIsSet_ = false;
}

BatchUpdateMembersRequest::~BatchUpdateMembersRequest() = default;

void BatchUpdateMembersRequest::validate()
{
}

web::json::value BatchUpdateMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateMembersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchUpdateMembersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BatchUpdateMembersRequestBody BatchUpdateMembersRequest::getBody() const
{
    return body_;
}

void BatchUpdateMembersRequest::setBody(const BatchUpdateMembersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateMembersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateMembersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


