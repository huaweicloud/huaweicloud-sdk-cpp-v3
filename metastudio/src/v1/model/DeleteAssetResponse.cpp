

#include "huaweicloud/metastudio/v1/model/DeleteAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteAssetResponse::DeleteAssetResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

DeleteAssetResponse::~DeleteAssetResponse() = default;

void DeleteAssetResponse::validate()
{
}

web::json::value DeleteAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool DeleteAssetResponse::fromJson(const web::json::value& val)
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


std::string DeleteAssetResponse::getXRequestId() const
{
    return xRequestId_;
}

void DeleteAssetResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteAssetResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteAssetResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


