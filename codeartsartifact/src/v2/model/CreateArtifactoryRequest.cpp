

#include "huaweicloud/codeartsartifact/v2/model/CreateArtifactoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateArtifactoryRequest::CreateArtifactoryRequest()
{
    bodyIsSet_ = false;
}

CreateArtifactoryRequest::~CreateArtifactoryRequest() = default;

void CreateArtifactoryRequest::validate()
{
}

web::json::value CreateArtifactoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateArtifactoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateNotMavenRepoDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateNotMavenRepoDO CreateArtifactoryRequest::getBody() const
{
    return body_;
}

void CreateArtifactoryRequest::setBody(const CreateNotMavenRepoDO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateArtifactoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateArtifactoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


