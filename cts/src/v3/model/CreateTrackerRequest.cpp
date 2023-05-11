

#include "huaweicloud/cts/v3/model/CreateTrackerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CreateTrackerRequest::CreateTrackerRequest()
{
    bodyIsSet_ = false;
}

CreateTrackerRequest::~CreateTrackerRequest() = default;

void CreateTrackerRequest::validate()
{
}

web::json::value CreateTrackerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateTrackerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTrackerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateTrackerRequestBody CreateTrackerRequest::getBody() const
{
    return body_;
}

void CreateTrackerRequest::setBody(const CreateTrackerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTrackerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTrackerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


