

#include "huaweicloud/cce/v3/model/ListAutopilotReleasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotReleasesResponse::ListAutopilotReleasesResponse()
{
    bodyIsSet_ = false;
}

ListAutopilotReleasesResponse::~ListAutopilotReleasesResponse() = default;

void ListAutopilotReleasesResponse::validate()
{
}

web::json::value ListAutopilotReleasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAutopilotReleasesResponse::fromJson(const web::json::value& val)
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


std::vector<ReleaseResp>& ListAutopilotReleasesResponse::getBody()
{
    return body_;
}

void ListAutopilotReleasesResponse::setBody(const std::vector<ReleaseResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAutopilotReleasesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAutopilotReleasesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


