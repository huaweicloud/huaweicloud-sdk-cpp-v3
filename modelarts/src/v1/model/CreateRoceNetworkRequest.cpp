

#include "huaweicloud/modelarts/v1/model/CreateRoceNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateRoceNetworkRequest::CreateRoceNetworkRequest()
{
    bodyIsSet_ = false;
}

CreateRoceNetworkRequest::~CreateRoceNetworkRequest() = default;

void CreateRoceNetworkRequest::validate()
{
}

web::json::value CreateRoceNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRoceNetworkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ServerRoceNetworkRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ServerRoceNetworkRequest CreateRoceNetworkRequest::getBody() const
{
    return body_;
}

void CreateRoceNetworkRequest::setBody(const ServerRoceNetworkRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRoceNetworkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRoceNetworkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


