

#include "huaweicloud/mpc/v1/model/CreateAgenciesTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateAgenciesTaskRequest::CreateAgenciesTaskRequest()
{
    bodyIsSet_ = false;
}

CreateAgenciesTaskRequest::~CreateAgenciesTaskRequest() = default;

void CreateAgenciesTaskRequest::validate()
{
}

web::json::value CreateAgenciesTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAgenciesTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AgenciesTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AgenciesTaskReq CreateAgenciesTaskRequest::getBody() const
{
    return body_;
}

void CreateAgenciesTaskRequest::setBody(const AgenciesTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAgenciesTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAgenciesTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


