

#include "huaweicloud/eip/v3/model/DetachBatchPublicIpResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DetachBatchPublicIpResponse::DetachBatchPublicIpResponse()
{
    publicipsIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

DetachBatchPublicIpResponse::~DetachBatchPublicIpResponse() = default;

void DetachBatchPublicIpResponse::validate()
{
}

web::json::value DetachBatchPublicIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicipsIsSet_) {
        val[utility::conversions::to_string_t("publicips")] = ModelBase::toJson(publicips_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}

bool DetachBatchPublicIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publicips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicips"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchPublicipResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicips(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}

std::vector<BatchPublicipResp>& DetachBatchPublicIpResponse::getPublicips()
{
    return publicips_;
}

void DetachBatchPublicIpResponse::setPublicips(const std::vector<BatchPublicipResp>& value)
{
    publicips_ = value;
    publicipsIsSet_ = true;
}

bool DetachBatchPublicIpResponse::publicipsIsSet() const
{
    return publicipsIsSet_;
}

void DetachBatchPublicIpResponse::unsetpublicips()
{
    publicipsIsSet_ = false;
}

std::string DetachBatchPublicIpResponse::getRequestId() const
{
    return requestId_;
}

void DetachBatchPublicIpResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool DetachBatchPublicIpResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void DetachBatchPublicIpResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


