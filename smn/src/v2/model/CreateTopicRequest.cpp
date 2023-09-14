

#include "huaweicloud/smn/v2/model/CreateTopicRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateTopicRequest::CreateTopicRequest()
{
    bodyIsSet_ = false;
}

CreateTopicRequest::~CreateTopicRequest() = default;

void CreateTopicRequest::validate()
{
}

web::json::value CreateTopicRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateTopicRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTopicRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateTopicRequestBody CreateTopicRequest::getBody() const
{
    return body_;
}

void CreateTopicRequest::setBody(const CreateTopicRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTopicRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTopicRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


