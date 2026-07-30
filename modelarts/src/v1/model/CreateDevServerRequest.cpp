

#include "huaweicloud/modelarts/v1/model/CreateDevServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateDevServerRequest::CreateDevServerRequest()
{
    bodyIsSet_ = false;
}

CreateDevServerRequest::~CreateDevServerRequest() = default;

void CreateDevServerRequest::validate()
{
}

web::json::value CreateDevServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDevServerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ServerCreateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ServerCreateRequest CreateDevServerRequest::getBody() const
{
    return body_;
}

void CreateDevServerRequest::setBody(const ServerCreateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDevServerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDevServerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


