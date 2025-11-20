

#include "huaweicloud/metastudio/v1/model/ExecuteTransferAssetActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExecuteTransferAssetActionResponse::ExecuteTransferAssetActionResponse()
{
    acceptResponeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ExecuteTransferAssetActionResponse::~ExecuteTransferAssetActionResponse() = default;

void ExecuteTransferAssetActionResponse::validate()
{
}

web::json::value ExecuteTransferAssetActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(acceptResponeIsSet_) {
        val[utility::conversions::to_string_t("accept_respone")] = ModelBase::toJson(acceptRespone_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ExecuteTransferAssetActionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("accept_respone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accept_respone"));
        if(!fieldValue.is_null())
        {
            TransAcceptResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptRespone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


TransAcceptResponse ExecuteTransferAssetActionResponse::getAcceptRespone() const
{
    return acceptRespone_;
}

void ExecuteTransferAssetActionResponse::setAcceptRespone(const TransAcceptResponse& value)
{
    acceptRespone_ = value;
    acceptResponeIsSet_ = true;
}

bool ExecuteTransferAssetActionResponse::acceptResponeIsSet() const
{
    return acceptResponeIsSet_;
}

void ExecuteTransferAssetActionResponse::unsetacceptRespone()
{
    acceptResponeIsSet_ = false;
}

std::string ExecuteTransferAssetActionResponse::getXRequestId() const
{
    return xRequestId_;
}

void ExecuteTransferAssetActionResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ExecuteTransferAssetActionResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ExecuteTransferAssetActionResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


