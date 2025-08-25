

#include "huaweicloud/cce/v3/model/ShowAutopilotReleaseHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowAutopilotReleaseHistoryResponse::ShowAutopilotReleaseHistoryResponse()
{
    bodyIsSet_ = false;
}

ShowAutopilotReleaseHistoryResponse::~ShowAutopilotReleaseHistoryResponse() = default;

void ShowAutopilotReleaseHistoryResponse::validate()
{
}

web::json::value ShowAutopilotReleaseHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowAutopilotReleaseHistoryResponse::fromJson(const web::json::value& val)
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


std::vector<ReleaseResp>& ShowAutopilotReleaseHistoryResponse::getBody()
{
    return body_;
}

void ShowAutopilotReleaseHistoryResponse::setBody(const std::vector<ReleaseResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowAutopilotReleaseHistoryResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowAutopilotReleaseHistoryResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


