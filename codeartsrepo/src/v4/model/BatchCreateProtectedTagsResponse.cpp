

#include "huaweicloud/codeartsrepo/v4/model/BatchCreateProtectedTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchCreateProtectedTagsResponse::BatchCreateProtectedTagsResponse()
{
    bodyIsSet_ = false;
}

BatchCreateProtectedTagsResponse::~BatchCreateProtectedTagsResponse() = default;

void BatchCreateProtectedTagsResponse::validate()
{
}

web::json::value BatchCreateProtectedTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateProtectedTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<RepositoryProtectedTagDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<RepositoryProtectedTagDto>& BatchCreateProtectedTagsResponse::getBody()
{
    return body_;
}

void BatchCreateProtectedTagsResponse::setBody(const std::vector<RepositoryProtectedTagDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateProtectedTagsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateProtectedTagsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


