

#include "huaweicloud/cloudtest/v1/model/ShowIssuesByPlanIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowIssuesByPlanIdResponse::ShowIssuesByPlanIdResponse()
{
    bodyIsSet_ = false;
}

ShowIssuesByPlanIdResponse::~ShowIssuesByPlanIdResponse() = default;

void ShowIssuesByPlanIdResponse::validate()
{
}

web::json::value ShowIssuesByPlanIdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowIssuesByPlanIdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TestPlanIssueDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TestPlanIssueDetail>& ShowIssuesByPlanIdResponse::getBody()
{
    return body_;
}

void ShowIssuesByPlanIdResponse::setBody(const std::vector<TestPlanIssueDetail>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowIssuesByPlanIdResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowIssuesByPlanIdResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


