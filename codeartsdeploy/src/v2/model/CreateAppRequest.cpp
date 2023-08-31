

#include "huaweicloud/codeartsdeploy/v2/model/CreateAppRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateAppRequest::CreateAppRequest()
{
    bodyIsSet_ = false;
}

CreateAppRequest::~CreateAppRequest() = default;

void CreateAppRequest::validate()
{
}

web::json::value CreateAppRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateAppRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateAppRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateAppRequestBody CreateAppRequest::getBody() const
{
    return body_;
}

void CreateAppRequest::setBody(const CreateAppRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAppRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAppRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


