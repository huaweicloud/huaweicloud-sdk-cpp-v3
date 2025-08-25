

#include "huaweicloud/cce/v3/model/ListReleasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListReleasesResponse::ListReleasesResponse()
{
    bodyIsSet_ = false;
}

ListReleasesResponse::~ListReleasesResponse() = default;

void ListReleasesResponse::validate()
{
}

web::json::value ListReleasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListReleasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ReleaseResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ReleaseResp>& ListReleasesResponse::getBody()
{
    return body_;
}

void ListReleasesResponse::setBody(const std::vector<ReleaseResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListReleasesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListReleasesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


