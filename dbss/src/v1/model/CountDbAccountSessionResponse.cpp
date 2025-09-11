

#include "huaweicloud/dbss/v1/model/CountDbAccountSessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountDbAccountSessionResponse::CountDbAccountSessionResponse()
{
    bodyIsSet_ = false;
}

CountDbAccountSessionResponse::~CountDbAccountSessionResponse() = default;

void CountDbAccountSessionResponse::validate()
{
}

web::json::value CountDbAccountSessionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CountDbAccountSessionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ReportAccountSessionNew> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ReportAccountSessionNew>& CountDbAccountSessionResponse::getBody()
{
    return body_;
}

void CountDbAccountSessionResponse::setBody(const std::vector<ReportAccountSessionNew>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountDbAccountSessionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountDbAccountSessionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


