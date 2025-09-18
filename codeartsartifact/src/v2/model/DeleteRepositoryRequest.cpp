

#include "huaweicloud/codeartsartifact/v2/model/DeleteRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




DeleteRepositoryRequest::DeleteRepositoryRequest()
{
    bodyIsSet_ = false;
}

DeleteRepositoryRequest::~DeleteRepositoryRequest() = default;

void DeleteRepositoryRequest::validate()
{
}

web::json::value DeleteRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteRepositoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            IDERepoRevisionModel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


IDERepoRevisionModel DeleteRepositoryRequest::getBody() const
{
    return body_;
}

void DeleteRepositoryRequest::setBody(const IDERepoRevisionModel& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRepositoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRepositoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


