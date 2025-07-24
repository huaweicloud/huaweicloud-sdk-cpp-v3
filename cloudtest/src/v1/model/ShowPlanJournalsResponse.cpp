

#include "huaweicloud/cloudtest/v1/model/ShowPlanJournalsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowPlanJournalsResponse::ShowPlanJournalsResponse()
{
    bodyIsSet_ = false;
}

ShowPlanJournalsResponse::~ShowPlanJournalsResponse() = default;

void ShowPlanJournalsResponse::validate()
{
}

web::json::value ShowPlanJournalsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPlanJournalsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<TestPlanJournalList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<TestPlanJournalList>& ShowPlanJournalsResponse::getBody()
{
    return body_;
}

void ShowPlanJournalsResponse::setBody(const std::vector<TestPlanJournalList>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPlanJournalsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPlanJournalsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


