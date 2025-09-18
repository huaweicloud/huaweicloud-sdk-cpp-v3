

#include "huaweicloud/codeartsartifact/v2/model/DeleteArtifactFileRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




DeleteArtifactFileRequest::DeleteArtifactFileRequest()
{
    bodyIsSet_ = false;
}

DeleteArtifactFileRequest::~DeleteArtifactFileRequest() = default;

void DeleteArtifactFileRequest::validate()
{
}

web::json::value DeleteArtifactFileRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteArtifactFileRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PathMap refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


PathMap DeleteArtifactFileRequest::getBody() const
{
    return body_;
}

void DeleteArtifactFileRequest::setBody(const PathMap& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteArtifactFileRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteArtifactFileRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


