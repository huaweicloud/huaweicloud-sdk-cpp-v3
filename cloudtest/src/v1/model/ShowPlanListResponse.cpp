

#include "huaweicloud/cloudtest/v1/model/ShowPlanListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowPlanListResponse::ShowPlanListResponse()
{
    bodyIsSet_ = false;
}

ShowPlanListResponse::~ShowPlanListResponse() = default;

void ShowPlanListResponse::validate()
{
}

web::json::value ShowPlanListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPlanListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TestPlanDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TestPlanDetail>& ShowPlanListResponse::getBody()
{
    return body_;
}

void ShowPlanListResponse::setBody(const std::vector<TestPlanDetail>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPlanListResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPlanListResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


