

#include "huaweicloud/modelarts/v1/model/CreateDevServerJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateDevServerJobRequest::CreateDevServerJobRequest()
{
    bodyIsSet_ = false;
}

CreateDevServerJobRequest::~CreateDevServerJobRequest() = default;

void CreateDevServerJobRequest::validate()
{
}

web::json::value CreateDevServerJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDevServerJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DevServerJobCreateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DevServerJobCreateRequest CreateDevServerJobRequest::getBody() const
{
    return body_;
}

void CreateDevServerJobRequest::setBody(const DevServerJobCreateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDevServerJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDevServerJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


