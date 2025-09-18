

#include "huaweicloud/codeartsartifact/v2/model/BatchRestoreRepoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




BatchRestoreRepoRequest::BatchRestoreRepoRequest()
{
    bodyIsSet_ = false;
}

BatchRestoreRepoRequest::~BatchRestoreRepoRequest() = default;

void BatchRestoreRepoRequest::validate()
{
}

web::json::value BatchRestoreRepoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchRestoreRepoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<IDETrashArtifactModel> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<IDETrashArtifactModel>& BatchRestoreRepoRequest::getBody()
{
    return body_;
}

void BatchRestoreRepoRequest::setBody(const std::vector<IDETrashArtifactModel>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchRestoreRepoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchRestoreRepoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


