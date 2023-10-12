

#include "huaweicloud/eip/v3/model/BatchPublicipResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




BatchPublicipResp::BatchPublicipResp()
{
    statusCode_ = 0;
    statusCodeIsSet_ = false;
    publicipIsSet_ = false;
}

BatchPublicipResp::~BatchPublicipResp() = default;

void BatchPublicipResp::validate()
{
}

web::json::value BatchPublicipResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusCodeIsSet_) {
        val[utility::conversions::to_string_t("statusCode")] = ModelBase::toJson(statusCode_);
    }
    if(publicipIsSet_) {
        val[utility::conversions::to_string_t("publicip")] = ModelBase::toJson(publicip_);
    }

    return val;
}
bool BatchPublicipResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("statusCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("statusCode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip"));
        if(!fieldValue.is_null())
        {
            PublicipResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicip(refVal);
        }
    }
    return ok;
}


int32_t BatchPublicipResp::getStatusCode() const
{
    return statusCode_;
}

void BatchPublicipResp::setStatusCode(int32_t value)
{
    statusCode_ = value;
    statusCodeIsSet_ = true;
}

bool BatchPublicipResp::statusCodeIsSet() const
{
    return statusCodeIsSet_;
}

void BatchPublicipResp::unsetstatusCode()
{
    statusCodeIsSet_ = false;
}

PublicipResp BatchPublicipResp::getPublicip() const
{
    return publicip_;
}

void BatchPublicipResp::setPublicip(const PublicipResp& value)
{
    publicip_ = value;
    publicipIsSet_ = true;
}

bool BatchPublicipResp::publicipIsSet() const
{
    return publicipIsSet_;
}

void BatchPublicipResp::unsetpublicip()
{
    publicipIsSet_ = false;
}

}
}
}
}
}


