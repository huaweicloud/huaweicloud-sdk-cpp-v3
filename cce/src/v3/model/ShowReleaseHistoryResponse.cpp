

#include "huaweicloud/cce/v3/model/ShowReleaseHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowReleaseHistoryResponse::ShowReleaseHistoryResponse()
{
    bodyIsSet_ = false;
}

ShowReleaseHistoryResponse::~ShowReleaseHistoryResponse() = default;

void ShowReleaseHistoryResponse::validate()
{
}

web::json::value ShowReleaseHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowReleaseHistoryResponse::fromJson(const web::json::value& val)
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


std::vector<ReleaseResp>& ShowReleaseHistoryResponse::getBody()
{
    return body_;
}

void ShowReleaseHistoryResponse::setBody(const std::vector<ReleaseResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowReleaseHistoryResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowReleaseHistoryResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


