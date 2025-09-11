

#include "huaweicloud/dbss/v1/model/CountDbClientSessionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




CountDbClientSessionResponse::CountDbClientSessionResponse()
{
    bodyIsSet_ = false;
}

CountDbClientSessionResponse::~CountDbClientSessionResponse() = default;

void CountDbClientSessionResponse::validate()
{
}

web::json::value CountDbClientSessionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CountDbClientSessionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ReportClientSessionNew> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ReportClientSessionNew>& CountDbClientSessionResponse::getBody()
{
    return body_;
}

void CountDbClientSessionResponse::setBody(const std::vector<ReportClientSessionNew>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CountDbClientSessionResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CountDbClientSessionResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


