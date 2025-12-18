

#include "huaweicloud/cce/v3/model/GetLongAkskConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetLongAkskConfigResponse::GetLongAkskConfigResponse()
{
    hasUploadedLongAKSK_ = false;
    hasUploadedLongAKSKIsSet_ = false;
    enableLongAKSKInNewCluster_ = false;
    enableLongAKSKInNewClusterIsSet_ = false;
}

GetLongAkskConfigResponse::~GetLongAkskConfigResponse() = default;

void GetLongAkskConfigResponse::validate()
{
}

web::json::value GetLongAkskConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hasUploadedLongAKSKIsSet_) {
        val[utility::conversions::to_string_t("hasUploadedLongAKSK")] = ModelBase::toJson(hasUploadedLongAKSK_);
    }
    if(enableLongAKSKInNewClusterIsSet_) {
        val[utility::conversions::to_string_t("enableLongAKSKInNewCluster")] = ModelBase::toJson(enableLongAKSKInNewCluster_);
    }

    return val;
}
bool GetLongAkskConfigResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enableLongAKSKInNewCluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableLongAKSKInNewCluster"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableLongAKSKInNewCluster(refVal);
        }
    }
    return ok;
}


bool GetLongAkskConfigResponse::isHasUploadedLongAKSK() const
{
    return hasUploadedLongAKSK_;
}

void GetLongAkskConfigResponse::setHasUploadedLongAKSK(bool value)
{
    hasUploadedLongAKSK_ = value;
    hasUploadedLongAKSKIsSet_ = true;
}

bool GetLongAkskConfigResponse::hasUploadedLongAKSKIsSet() const
{
    return hasUploadedLongAKSKIsSet_;
}

void GetLongAkskConfigResponse::unsethasUploadedLongAKSK()
{
    hasUploadedLongAKSKIsSet_ = false;
}

bool GetLongAkskConfigResponse::isEnableLongAKSKInNewCluster() const
{
    return enableLongAKSKInNewCluster_;
}

void GetLongAkskConfigResponse::setEnableLongAKSKInNewCluster(bool value)
{
    enableLongAKSKInNewCluster_ = value;
    enableLongAKSKInNewClusterIsSet_ = true;
}

bool GetLongAkskConfigResponse::enableLongAKSKInNewClusterIsSet() const
{
    return enableLongAKSKInNewClusterIsSet_;
}

void GetLongAkskConfigResponse::unsetenableLongAKSKInNewCluster()
{
    enableLongAKSKInNewClusterIsSet_ = false;
}

}
}
}
}
}


