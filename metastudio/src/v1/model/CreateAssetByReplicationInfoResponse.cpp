

#include "huaweicloud/metastudio/v1/model/CreateAssetByReplicationInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAssetByReplicationInfoResponse::CreateAssetByReplicationInfoResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateAssetByReplicationInfoResponse::~CreateAssetByReplicationInfoResponse() = default;

void CreateAssetByReplicationInfoResponse::validate()
{
}

web::json::value CreateAssetByReplicationInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateAssetByReplicationInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CreateAssetByReplicationInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateAssetByReplicationInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateAssetByReplicationInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateAssetByReplicationInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


