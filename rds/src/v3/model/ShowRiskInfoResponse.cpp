

#include "huaweicloud/rds/v3/model/ShowRiskInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowRiskInfoResponse::ShowRiskInfoResponse()
{
    risksIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowRiskInfoResponse::~ShowRiskInfoResponse() = default;

void ShowRiskInfoResponse::validate()
{
}

web::json::value ShowRiskInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(risksIsSet_) {
        val[utility::conversions::to_string_t("risks")] = ModelBase::toJson(risks_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowRiskInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("risks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risks"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowRiskInfoEngineRiskDesc> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRisks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<ShowRiskInfoEngineRiskDesc>& ShowRiskInfoResponse::getRisks()
{
    return risks_;
}

void ShowRiskInfoResponse::setRisks(const std::vector<ShowRiskInfoEngineRiskDesc>& value)
{
    risks_ = value;
    risksIsSet_ = true;
}

bool ShowRiskInfoResponse::risksIsSet() const
{
    return risksIsSet_;
}

void ShowRiskInfoResponse::unsetrisks()
{
    risksIsSet_ = false;
}

std::string ShowRiskInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowRiskInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowRiskInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowRiskInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


