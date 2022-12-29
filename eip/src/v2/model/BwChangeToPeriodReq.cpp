

#include "huaweicloud/eip/v2/model/BwChangeToPeriodReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




BwChangeToPeriodReq::BwChangeToPeriodReq()
{
    bandwidthIdsIsSet_ = false;
    extendParamIsSet_ = false;
}

BwChangeToPeriodReq::~BwChangeToPeriodReq() = default;

void BwChangeToPeriodReq::validate()
{
}

web::json::value BwChangeToPeriodReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIdsIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_ids")] = ModelBase::toJson(bandwidthIds_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }

    return val;
}

bool BwChangeToPeriodReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            CreatePrePaidPublicipExtendParamOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BwChangeToPeriodReq::getBandwidthIds()
{
    return bandwidthIds_;
}

void BwChangeToPeriodReq::setBandwidthIds(const std::vector<std::string>& value)
{
    bandwidthIds_ = value;
    bandwidthIdsIsSet_ = true;
}

bool BwChangeToPeriodReq::bandwidthIdsIsSet() const
{
    return bandwidthIdsIsSet_;
}

void BwChangeToPeriodReq::unsetbandwidthIds()
{
    bandwidthIdsIsSet_ = false;
}

CreatePrePaidPublicipExtendParamOption BwChangeToPeriodReq::getExtendParam() const
{
    return extendParam_;
}

void BwChangeToPeriodReq::setExtendParam(const CreatePrePaidPublicipExtendParamOption& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool BwChangeToPeriodReq::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void BwChangeToPeriodReq::unsetextendParam()
{
    extendParamIsSet_ = false;
}

}
}
}
}
}


