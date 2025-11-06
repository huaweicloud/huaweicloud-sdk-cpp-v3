

#include "huaweicloud/codeartsrepo/v3/model/CreateRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateRepositoryRequest::CreateRepositoryRequest()
{
    bodyIsSet_ = false;
}

CreateRepositoryRequest::~CreateRepositoryRequest() = default;

void CreateRepositoryRequest::validate()
{
}

web::json::value CreateRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRepositoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateRepoRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateRepoRequest CreateRepositoryRequest::getBody() const
{
    return body_;
}

void CreateRepositoryRequest::setBody(const CreateRepoRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRepositoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRepositoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


