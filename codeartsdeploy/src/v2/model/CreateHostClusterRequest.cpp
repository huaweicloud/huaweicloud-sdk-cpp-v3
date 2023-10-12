

#include "huaweicloud/codeartsdeploy/v2/model/CreateHostClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




CreateHostClusterRequest::CreateHostClusterRequest()
{
    bodyIsSet_ = false;
}

CreateHostClusterRequest::~CreateHostClusterRequest() = default;

void CreateHostClusterRequest::validate()
{
}

web::json::value CreateHostClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateHostClusterRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateHostClusterRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateHostClusterRequestBody CreateHostClusterRequest::getBody() const
{
    return body_;
}

void CreateHostClusterRequest::setBody(const CreateHostClusterRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateHostClusterRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateHostClusterRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


