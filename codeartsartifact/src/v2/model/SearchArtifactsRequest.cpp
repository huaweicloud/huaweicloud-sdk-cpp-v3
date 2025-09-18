

#include "huaweicloud/codeartsartifact/v2/model/SearchArtifactsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




SearchArtifactsRequest::SearchArtifactsRequest()
{
    bodyIsSet_ = false;
}

SearchArtifactsRequest::~SearchArtifactsRequest() = default;

void SearchArtifactsRequest::validate()
{
}

web::json::value SearchArtifactsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SearchArtifactsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IDERepoSearchDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IDERepoSearchDO SearchArtifactsRequest::getBody() const
{
    return body_;
}

void SearchArtifactsRequest::setBody(const IDERepoSearchDO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SearchArtifactsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SearchArtifactsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


