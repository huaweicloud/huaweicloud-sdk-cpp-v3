

#include "huaweicloud/codeartsartifact/v2/model/CreateDockerRepositoriesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateDockerRepositoriesRequest::CreateDockerRepositoriesRequest()
{
    bodyIsSet_ = false;
}

CreateDockerRepositoriesRequest::~CreateDockerRepositoriesRequest() = default;

void CreateDockerRepositoriesRequest::validate()
{
}

web::json::value CreateDockerRepositoriesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDockerRepositoriesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDockerRepositoryDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateDockerRepositoryDO CreateDockerRepositoriesRequest::getBody() const
{
    return body_;
}

void CreateDockerRepositoriesRequest::setBody(const CreateDockerRepositoryDO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDockerRepositoriesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDockerRepositoriesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


