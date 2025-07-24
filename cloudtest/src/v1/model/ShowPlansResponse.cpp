

#include "huaweicloud/cloudtest/v1/model/ShowPlansResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowPlansResponse::ShowPlansResponse()
{
    bodyIsSet_ = false;
}

ShowPlansResponse::~ShowPlansResponse() = default;

void ShowPlansResponse::validate()
{
}

web::json::value ShowPlansResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPlansResponse::fromJson(const web::json::value& val)
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


std::vector<TestPlanDetail>& ShowPlansResponse::getBody()
{
    return body_;
}

void ShowPlansResponse::setBody(const std::vector<TestPlanDetail>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPlansResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPlansResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


