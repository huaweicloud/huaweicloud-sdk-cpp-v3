

#include "huaweicloud/modelarts/v1/model/CreateHyperinstanceGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateHyperinstanceGroupRequest::CreateHyperinstanceGroupRequest()
{
    bodyIsSet_ = false;
}

CreateHyperinstanceGroupRequest::~CreateHyperinstanceGroupRequest() = default;

void CreateHyperinstanceGroupRequest::validate()
{
}

web::json::value CreateHyperinstanceGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateHyperinstanceGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            HyperinstanceGroupCreateRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


HyperinstanceGroupCreateRequest CreateHyperinstanceGroupRequest::getBody() const
{
    return body_;
}

void CreateHyperinstanceGroupRequest::setBody(const HyperinstanceGroupCreateRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHyperinstanceGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHyperinstanceGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


