

#include "huaweicloud/modelarts/v1/model/ValidateAuthorizationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ValidateAuthorizationRequestBody::ValidateAuthorizationRequestBody()
{
    requestsIsSet_ = false;
}

ValidateAuthorizationRequestBody::~ValidateAuthorizationRequestBody() = default;

void ValidateAuthorizationRequestBody::validate()
{
}

web::json::value ValidateAuthorizationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestsIsSet_) {
        val[utility::conversions::to_string_t("requests")] = ModelBase::toJson(requests_);
    }

    return val;
}
bool ValidateAuthorizationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requests"));
        if(!fieldValue.is_null())
        {
            std::vector<AuthRequests> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequests(refVal);
        }
    }
    return ok;
}


std::vector<AuthRequests>& ValidateAuthorizationRequestBody::getRequests()
{
    return requests_;
}

void ValidateAuthorizationRequestBody::setRequests(const std::vector<AuthRequests>& value)
{
    requests_ = value;
    requestsIsSet_ = true;
}

bool ValidateAuthorizationRequestBody::requestsIsSet() const
{
    return requestsIsSet_;
}

void ValidateAuthorizationRequestBody::unsetrequests()
{
    requestsIsSet_ = false;
}

}
}
}
}
}


