

#include "huaweicloud/codeartsrepo/v4/model/BatchUpdateProtectedTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




BatchUpdateProtectedTagsResponse::BatchUpdateProtectedTagsResponse()
{
    bodyIsSet_ = false;
}

BatchUpdateProtectedTagsResponse::~BatchUpdateProtectedTagsResponse() = default;

void BatchUpdateProtectedTagsResponse::validate()
{
}

web::json::value BatchUpdateProtectedTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchUpdateProtectedTagsResponse::fromJson(const web::json::value& val)
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


std::vector<RepositoryProtectedTagDto>& BatchUpdateProtectedTagsResponse::getBody()
{
    return body_;
}

void BatchUpdateProtectedTagsResponse::setBody(const std::vector<RepositoryProtectedTagDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateProtectedTagsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateProtectedTagsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


