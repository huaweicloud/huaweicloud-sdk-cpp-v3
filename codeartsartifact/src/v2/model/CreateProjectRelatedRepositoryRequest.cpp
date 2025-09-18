

#include "huaweicloud/codeartsartifact/v2/model/CreateProjectRelatedRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateProjectRelatedRepositoryRequest::CreateProjectRelatedRepositoryRequest()
{
    bodyIsSet_ = false;
}

CreateProjectRelatedRepositoryRequest::~CreateProjectRelatedRepositoryRequest() = default;

void CreateProjectRelatedRepositoryRequest::validate()
{
}

web::json::value CreateProjectRelatedRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateProjectRelatedRepositoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IDEPrivilageProjectInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IDEPrivilageProjectInfo CreateProjectRelatedRepositoryRequest::getBody() const
{
    return body_;
}

void CreateProjectRelatedRepositoryRequest::setBody(const IDEPrivilageProjectInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectRelatedRepositoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectRelatedRepositoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


