

#include "huaweicloud/codeartsartifact/v2/model/CreateMavenRepoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateMavenRepoRequest::CreateMavenRepoRequest()
{
    bodyIsSet_ = false;
}

CreateMavenRepoRequest::~CreateMavenRepoRequest() = default;

void CreateMavenRepoRequest::validate()
{
}

web::json::value CreateMavenRepoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateMavenRepoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IDERepositoryDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IDERepositoryDO CreateMavenRepoRequest::getBody() const
{
    return body_;
}

void CreateMavenRepoRequest::setBody(const IDERepositoryDO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMavenRepoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMavenRepoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


