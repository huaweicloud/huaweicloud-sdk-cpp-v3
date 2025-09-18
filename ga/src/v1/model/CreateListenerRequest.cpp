

#include "huaweicloud/ga/v1/model/CreateListenerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateListenerRequest::CreateListenerRequest()
{
    bodyIsSet_ = false;
}

CreateListenerRequest::~CreateListenerRequest() = default;

void CreateListenerRequest::validate()
{
}

web::json::value CreateListenerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateListenerRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateListenerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateListenerRequestBody CreateListenerRequest::getBody() const
{
    return body_;
}

void CreateListenerRequest::setBody(const CreateListenerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateListenerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateListenerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


