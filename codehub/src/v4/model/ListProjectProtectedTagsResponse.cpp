

#include "huaweicloud/codehub/v4/model/ListProjectProtectedTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectProtectedTagsResponse::ListProjectProtectedTagsResponse()
{
    bodyIsSet_ = false;
}

ListProjectProtectedTagsResponse::~ListProjectProtectedTagsResponse() = default;

void ListProjectProtectedTagsResponse::validate()
{
}

web::json::value ListProjectProtectedTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProjectProtectedTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ProjectProtectedTagPo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ProjectProtectedTagPo>& ListProjectProtectedTagsResponse::getBody()
{
    return body_;
}

void ListProjectProtectedTagsResponse::setBody(const std::vector<ProjectProtectedTagPo>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectProtectedTagsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectProtectedTagsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


