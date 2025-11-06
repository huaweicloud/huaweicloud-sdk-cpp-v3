

#include "huaweicloud/codeartsrepo/v3/model/CreateProjectAndRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateProjectAndRepositoriesRequest::CreateProjectAndRepositoriesRequest()
{
    bodyIsSet_ = false;
}

CreateProjectAndRepositoriesRequest::~CreateProjectAndRepositoriesRequest() = default;

void CreateProjectAndRepositoriesRequest::validate()
{
}

web::json::value CreateProjectAndRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateProjectAndRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateProjectRepoRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateProjectRepoRequest CreateProjectAndRepositoriesRequest::getBody() const
{
    return body_;
}

void CreateProjectAndRepositoriesRequest::setBody(const CreateProjectRepoRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProjectAndRepositoriesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProjectAndRepositoriesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


