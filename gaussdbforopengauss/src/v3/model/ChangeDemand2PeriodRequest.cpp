

#include "huaweicloud/gaussdbforopengauss/v3/model/ChangeDemand2PeriodRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ChangeDemand2PeriodRequest::ChangeDemand2PeriodRequest()
{
    bodyIsSet_ = false;
}

ChangeDemand2PeriodRequest::~ChangeDemand2PeriodRequest() = default;

void ChangeDemand2PeriodRequest::validate()
{
}

web::json::value ChangeDemand2PeriodRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeDemand2PeriodRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyDBPayTypeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyDBPayTypeRequestBody ChangeDemand2PeriodRequest::getBody() const
{
    return body_;
}

void ChangeDemand2PeriodRequest::setBody(const ModifyDBPayTypeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeDemand2PeriodRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeDemand2PeriodRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


