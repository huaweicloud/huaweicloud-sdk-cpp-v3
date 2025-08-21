

#include "huaweicloud/cfw/v1/model/InternetReport.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




InternetReport::InternetReport()
{
    eipIsSet_ = false;
    in2outIsSet_ = false;
    out2inIsSet_ = false;
    overviewIsSet_ = false;
    trafficTrendIsSet_ = false;
}

InternetReport::~InternetReport() = default;

void InternetReport::validate()
{
}

web::json::value InternetReport::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(in2outIsSet_) {
        val[utility::conversions::to_string_t("in2out")] = ModelBase::toJson(in2out_);
    }
    if(out2inIsSet_) {
        val[utility::conversions::to_string_t("out2in")] = ModelBase::toJson(out2in_);
    }
    if(overviewIsSet_) {
        val[utility::conversions::to_string_t("overview")] = ModelBase::toJson(overview_);
    }
    if(trafficTrendIsSet_) {
        val[utility::conversions::to_string_t("traffic_trend")] = ModelBase::toJson(trafficTrend_);
    }

    return val;
}
bool InternetReport::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            Eip refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("in2out"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("in2out"));
        if(!fieldValue.is_null())
        {
            In2Out refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIn2out(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("out2in"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("out2in"));
        if(!fieldValue.is_null())
        {
            Out2in refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOut2in(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overview"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overview"));
        if(!fieldValue.is_null())
        {
            Overview refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverview(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_trend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_trend"));
        if(!fieldValue.is_null())
        {
            std::vector<TrendVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficTrend(refVal);
        }
    }
    return ok;
}


Eip InternetReport::getEip() const
{
    return eip_;
}

void InternetReport::setEip(const Eip& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool InternetReport::eipIsSet() const
{
    return eipIsSet_;
}

void InternetReport::unseteip()
{
    eipIsSet_ = false;
}

In2Out InternetReport::getIn2out() const
{
    return in2out_;
}

void InternetReport::setIn2out(const In2Out& value)
{
    in2out_ = value;
    in2outIsSet_ = true;
}

bool InternetReport::in2outIsSet() const
{
    return in2outIsSet_;
}

void InternetReport::unsetin2out()
{
    in2outIsSet_ = false;
}

Out2in InternetReport::getOut2in() const
{
    return out2in_;
}

void InternetReport::setOut2in(const Out2in& value)
{
    out2in_ = value;
    out2inIsSet_ = true;
}

bool InternetReport::out2inIsSet() const
{
    return out2inIsSet_;
}

void InternetReport::unsetout2in()
{
    out2inIsSet_ = false;
}

Overview InternetReport::getOverview() const
{
    return overview_;
}

void InternetReport::setOverview(const Overview& value)
{
    overview_ = value;
    overviewIsSet_ = true;
}

bool InternetReport::overviewIsSet() const
{
    return overviewIsSet_;
}

void InternetReport::unsetoverview()
{
    overviewIsSet_ = false;
}

std::vector<TrendVO>& InternetReport::getTrafficTrend()
{
    return trafficTrend_;
}

void InternetReport::setTrafficTrend(const std::vector<TrendVO>& value)
{
    trafficTrend_ = value;
    trafficTrendIsSet_ = true;
}

bool InternetReport::trafficTrendIsSet() const
{
    return trafficTrendIsSet_;
}

void InternetReport::unsettrafficTrend()
{
    trafficTrendIsSet_ = false;
}

}
}
}
}
}


