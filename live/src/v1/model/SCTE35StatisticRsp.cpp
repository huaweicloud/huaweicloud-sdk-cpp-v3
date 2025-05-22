

#include "huaweicloud/live/v1/model/SCTE35StatisticRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




SCTE35StatisticRsp::SCTE35StatisticRsp()
{
    total_ = 0;
    totalIsSet_ = false;
    scte35InfoIsSet_ = false;
}

SCTE35StatisticRsp::~SCTE35StatisticRsp() = default;

void SCTE35StatisticRsp::validate()
{
}

web::json::value SCTE35StatisticRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(scte35InfoIsSet_) {
        val[utility::conversions::to_string_t("scte35_info")] = ModelBase::toJson(scte35Info_);
    }

    return val;
}
bool SCTE35StatisticRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scte35_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scte35_info"));
        if(!fieldValue.is_null())
        {
            std::vector<SCTE35InfoItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScte35Info(refVal);
        }
    }
    return ok;
}


int32_t SCTE35StatisticRsp::getTotal() const
{
    return total_;
}

void SCTE35StatisticRsp::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool SCTE35StatisticRsp::totalIsSet() const
{
    return totalIsSet_;
}

void SCTE35StatisticRsp::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SCTE35InfoItem>& SCTE35StatisticRsp::getScte35Info()
{
    return scte35Info_;
}

void SCTE35StatisticRsp::setScte35Info(const std::vector<SCTE35InfoItem>& value)
{
    scte35Info_ = value;
    scte35InfoIsSet_ = true;
}

bool SCTE35StatisticRsp::scte35InfoIsSet() const
{
    return scte35InfoIsSet_;
}

void SCTE35StatisticRsp::unsetscte35Info()
{
    scte35InfoIsSet_ = false;
}

}
}
}
}
}


