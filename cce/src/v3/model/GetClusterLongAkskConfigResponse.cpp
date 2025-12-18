

#include "huaweicloud/cce/v3/model/GetClusterLongAkskConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetClusterLongAkskConfigResponse::GetClusterLongAkskConfigResponse()
{
    hasUploadedLongAKSK_ = false;
    hasUploadedLongAKSKIsSet_ = false;
    enableLongAKSK_ = false;
    enableLongAKSKIsSet_ = false;
}

GetClusterLongAkskConfigResponse::~GetClusterLongAkskConfigResponse() = default;

void GetClusterLongAkskConfigResponse::validate()
{
}

web::json::value GetClusterLongAkskConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hasUploadedLongAKSKIsSet_) {
        val[utility::conversions::to_string_t("hasUploadedLongAKSK")] = ModelBase::toJson(hasUploadedLongAKSK_);
    }
    if(enableLongAKSKIsSet_) {
        val[utility::conversions::to_string_t("enableLongAKSK")] = ModelBase::toJson(enableLongAKSK_);
    }

    return val;
}
bool GetClusterLongAkskConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hasUploadedLongAKSK"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hasUploadedLongAKSK"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasUploadedLongAKSK(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableLongAKSK"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableLongAKSK"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableLongAKSK(refVal);
        }
    }
    return ok;
}


bool GetClusterLongAkskConfigResponse::isHasUploadedLongAKSK() const
{
    return hasUploadedLongAKSK_;
}

void GetClusterLongAkskConfigResponse::setHasUploadedLongAKSK(bool value)
{
    hasUploadedLongAKSK_ = value;
    hasUploadedLongAKSKIsSet_ = true;
}

bool GetClusterLongAkskConfigResponse::hasUploadedLongAKSKIsSet() const
{
    return hasUploadedLongAKSKIsSet_;
}

void GetClusterLongAkskConfigResponse::unsethasUploadedLongAKSK()
{
    hasUploadedLongAKSKIsSet_ = false;
}

bool GetClusterLongAkskConfigResponse::isEnableLongAKSK() const
{
    return enableLongAKSK_;
}

void GetClusterLongAkskConfigResponse::setEnableLongAKSK(bool value)
{
    enableLongAKSK_ = value;
    enableLongAKSKIsSet_ = true;
}

bool GetClusterLongAkskConfigResponse::enableLongAKSKIsSet() const
{
    return enableLongAKSKIsSet_;
}

void GetClusterLongAkskConfigResponse::unsetenableLongAKSK()
{
    enableLongAKSKIsSet_ = false;
}

}
}
}
}
}


