

#include "huaweicloud/rgc/v1/model/ShowBestPracticeDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowBestPracticeDetailsResponse::ShowBestPracticeDetailsResponse()
{
    bodyIsSet_ = false;
}

ShowBestPracticeDetailsResponse::~ShowBestPracticeDetailsResponse() = default;

void ShowBestPracticeDetailsResponse::validate()
{
}

web::json::value ShowBestPracticeDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowBestPracticeDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<BestPracticeCheckItemDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<BestPracticeCheckItemDetail>& ShowBestPracticeDetailsResponse::getBody()
{
    return body_;
}

void ShowBestPracticeDetailsResponse::setBody(const std::vector<BestPracticeCheckItemDetail>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowBestPracticeDetailsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowBestPracticeDetailsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


