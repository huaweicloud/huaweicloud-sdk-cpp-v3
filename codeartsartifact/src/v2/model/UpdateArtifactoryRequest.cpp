

#include "huaweicloud/codeartsartifact/v2/model/UpdateArtifactoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




UpdateArtifactoryRequest::UpdateArtifactoryRequest()
{
    bodyIsSet_ = false;
}

UpdateArtifactoryRequest::~UpdateArtifactoryRequest() = default;

void UpdateArtifactoryRequest::validate()
{
}

web::json::value UpdateArtifactoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateArtifactoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateNotMavenRepoDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateNotMavenRepoDO UpdateArtifactoryRequest::getBody() const
{
    return body_;
}

void UpdateArtifactoryRequest::setBody(const UpdateNotMavenRepoDO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateArtifactoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateArtifactoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


