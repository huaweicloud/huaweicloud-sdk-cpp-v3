

#include "huaweicloud/modelarts/v1/model/CreateWorkspaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateWorkspaceRequest::CreateWorkspaceRequest()
{
    bodyIsSet_ = false;
}

CreateWorkspaceRequest::~CreateWorkspaceRequest() = default;

void CreateWorkspaceRequest::validate()
{
}

web::json::value CreateWorkspaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateWorkspaceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateWorkspaceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateWorkspaceReq CreateWorkspaceRequest::getBody() const
{
    return body_;
}

void CreateWorkspaceRequest::setBody(const CreateWorkspaceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateWorkspaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateWorkspaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


