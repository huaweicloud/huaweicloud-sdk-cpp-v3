

#include "huaweicloud/modelarts/v1/model/CreateNetworkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateNetworkRequest::CreateNetworkRequest()
{
    bodyIsSet_ = false;
}

CreateNetworkRequest::~CreateNetworkRequest() = default;

void CreateNetworkRequest::validate()
{
}

web::json::value CreateNetworkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateNetworkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            NetworkCreationRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


NetworkCreationRequest CreateNetworkRequest::getBody() const
{
    return body_;
}

void CreateNetworkRequest::setBody(const NetworkCreationRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNetworkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNetworkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


