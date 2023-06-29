

#include "huaweicloud/mpc/v1/model/Common.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




Common::Common()
{
    pvc_ = false;
    pvcIsSet_ = false;
    hlsInterval_ = 0;
    hlsIntervalIsSet_ = false;
    dashInterval_ = 0;
    dashIntervalIsSet_ = false;
    packType_ = 0;
    packTypeIsSet_ = false;
}

Common::~Common() = default;

void Common::validate()
{
}

web::json::value Common::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pvcIsSet_) {
        val[utility::conversions::to_string_t("PVC")] = ModelBase::toJson(pvc_);
    }
    if(hlsIntervalIsSet_) {
        val[utility::conversions::to_string_t("hls_interval")] = ModelBase::toJson(hlsInterval_);
    }
    if(dashIntervalIsSet_) {
        val[utility::conversions::to_string_t("dash_interval")] = ModelBase::toJson(dashInterval_);
    }
    if(packTypeIsSet_) {
        val[utility::conversions::to_string_t("pack_type")] = ModelBase::toJson(packType_);
    }

    return val;
}

bool Common::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("PVC"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("PVC"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPvc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hls_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hls_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHlsInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dash_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dash_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDashInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pack_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pack_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackType(refVal);
        }
    }
    return ok;
}


bool Common::isPvc() const
{
    return pvc_;
}

void Common::setPvc(bool value)
{
    pvc_ = value;
    pvcIsSet_ = true;
}

bool Common::pvcIsSet() const
{
    return pvcIsSet_;
}

void Common::unsetpvc()
{
    pvcIsSet_ = false;
}

int32_t Common::getHlsInterval() const
{
    return hlsInterval_;
}

void Common::setHlsInterval(int32_t value)
{
    hlsInterval_ = value;
    hlsIntervalIsSet_ = true;
}

bool Common::hlsIntervalIsSet() const
{
    return hlsIntervalIsSet_;
}

void Common::unsethlsInterval()
{
    hlsIntervalIsSet_ = false;
}

int32_t Common::getDashInterval() const
{
    return dashInterval_;
}

void Common::setDashInterval(int32_t value)
{
    dashInterval_ = value;
    dashIntervalIsSet_ = true;
}

bool Common::dashIntervalIsSet() const
{
    return dashIntervalIsSet_;
}

void Common::unsetdashInterval()
{
    dashIntervalIsSet_ = false;
}

int32_t Common::getPackType() const
{
    return packType_;
}

void Common::setPackType(int32_t value)
{
    packType_ = value;
    packTypeIsSet_ = true;
}

bool Common::packTypeIsSet() const
{
    return packTypeIsSet_;
}

void Common::unsetpackType()
{
    packTypeIsSet_ = false;
}

}
}
}
}
}


