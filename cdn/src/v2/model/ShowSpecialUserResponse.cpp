

#include "huaweicloud/cdn/v2/model/ShowSpecialUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowSpecialUserResponse::ShowSpecialUserResponse()
{
    status_ = 0L;
    statusIsSet_ = false;
    metric_ = 0L;
    metricIsSet_ = false;
    fluxMetric_ = 0L;
    fluxMetricIsSet_ = false;
    cy_ = 0L;
    cyIsSet_ = false;
    h6_ = 0L;
    h6IsSet_ = false;
    c_ = 0L;
    cIsSet_ = false;
    sc_ = 0L;
    scIsSet_ = false;
    bhc_ = 0L;
    bhcIsSet_ = false;
    pi_ = 0L;
    piIsSet_ = false;
    exp5_ = 0L;
    exp5IsSet_ = false;
    m1_ = 0L;
    m1IsSet_ = false;
    isMonthM5_ = 0L;
    isMonthM5IsSet_ = false;
    expAgy_ = 0L;
    expAgyIsSet_ = false;
    cesReportSite_ = 0L;
    cesReportSiteIsSet_ = false;
    float_ = 0L;
    floatIsSet_ = false;
    isShowUpBw_ = 0L;
    isShowUpBwIsSet_ = false;
}

ShowSpecialUserResponse::~ShowSpecialUserResponse() = default;

void ShowSpecialUserResponse::validate()
{
}

web::json::value ShowSpecialUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(metricIsSet_) {
        val[utility::conversions::to_string_t("metric")] = ModelBase::toJson(metric_);
    }
    if(fluxMetricIsSet_) {
        val[utility::conversions::to_string_t("flux_metric")] = ModelBase::toJson(fluxMetric_);
    }
    if(cyIsSet_) {
        val[utility::conversions::to_string_t("cy")] = ModelBase::toJson(cy_);
    }
    if(h6IsSet_) {
        val[utility::conversions::to_string_t("h6")] = ModelBase::toJson(h6_);
    }
    if(cIsSet_) {
        val[utility::conversions::to_string_t("c")] = ModelBase::toJson(c_);
    }
    if(scIsSet_) {
        val[utility::conversions::to_string_t("sc")] = ModelBase::toJson(sc_);
    }
    if(bhcIsSet_) {
        val[utility::conversions::to_string_t("bhc")] = ModelBase::toJson(bhc_);
    }
    if(piIsSet_) {
        val[utility::conversions::to_string_t("pi")] = ModelBase::toJson(pi_);
    }
    if(exp5IsSet_) {
        val[utility::conversions::to_string_t("exp5")] = ModelBase::toJson(exp5_);
    }
    if(m1IsSet_) {
        val[utility::conversions::to_string_t("m1")] = ModelBase::toJson(m1_);
    }
    if(isMonthM5IsSet_) {
        val[utility::conversions::to_string_t("is_month_m5")] = ModelBase::toJson(isMonthM5_);
    }
    if(expAgyIsSet_) {
        val[utility::conversions::to_string_t("exp_agy")] = ModelBase::toJson(expAgy_);
    }
    if(cesReportSiteIsSet_) {
        val[utility::conversions::to_string_t("ces_report_site")] = ModelBase::toJson(cesReportSite_);
    }
    if(floatIsSet_) {
        val[utility::conversions::to_string_t("float")] = ModelBase::toJson(float_);
    }
    if(isShowUpBwIsSet_) {
        val[utility::conversions::to_string_t("is_show_up_bw")] = ModelBase::toJson(isShowUpBw_);
    }

    return val;
}
bool ShowSpecialUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetric(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flux_metric"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flux_metric"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFluxMetric(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cy"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("h6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("h6"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setH6(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("c"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("c"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setC(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sc"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bhc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bhc"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBhc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPi(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exp5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exp5"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExp5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("m1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("m1"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setM1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_month_m5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_month_m5"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMonthM5(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exp_agy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exp_agy"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpAgy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ces_report_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ces_report_site"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCesReportSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("float"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("float"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_show_up_bw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_show_up_bw"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsShowUpBw(refVal);
        }
    }
    return ok;
}


int64_t ShowSpecialUserResponse::getStatus() const
{
    return status_;
}

void ShowSpecialUserResponse::setStatus(int64_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowSpecialUserResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowSpecialUserResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getMetric() const
{
    return metric_;
}

void ShowSpecialUserResponse::setMetric(int64_t value)
{
    metric_ = value;
    metricIsSet_ = true;
}

bool ShowSpecialUserResponse::metricIsSet() const
{
    return metricIsSet_;
}

void ShowSpecialUserResponse::unsetmetric()
{
    metricIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getFluxMetric() const
{
    return fluxMetric_;
}

void ShowSpecialUserResponse::setFluxMetric(int64_t value)
{
    fluxMetric_ = value;
    fluxMetricIsSet_ = true;
}

bool ShowSpecialUserResponse::fluxMetricIsSet() const
{
    return fluxMetricIsSet_;
}

void ShowSpecialUserResponse::unsetfluxMetric()
{
    fluxMetricIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getCy() const
{
    return cy_;
}

void ShowSpecialUserResponse::setCy(int64_t value)
{
    cy_ = value;
    cyIsSet_ = true;
}

bool ShowSpecialUserResponse::cyIsSet() const
{
    return cyIsSet_;
}

void ShowSpecialUserResponse::unsetcy()
{
    cyIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getH6() const
{
    return h6_;
}

void ShowSpecialUserResponse::setH6(int64_t value)
{
    h6_ = value;
    h6IsSet_ = true;
}

bool ShowSpecialUserResponse::h6IsSet() const
{
    return h6IsSet_;
}

void ShowSpecialUserResponse::unseth6()
{
    h6IsSet_ = false;
}

int64_t ShowSpecialUserResponse::getC() const
{
    return c_;
}

void ShowSpecialUserResponse::setC(int64_t value)
{
    c_ = value;
    cIsSet_ = true;
}

bool ShowSpecialUserResponse::CIsSet() const
{
    return cIsSet_;
}

void ShowSpecialUserResponse::unsetc()
{
    cIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getSc() const
{
    return sc_;
}

void ShowSpecialUserResponse::setSc(int64_t value)
{
    sc_ = value;
    scIsSet_ = true;
}

bool ShowSpecialUserResponse::scIsSet() const
{
    return scIsSet_;
}

void ShowSpecialUserResponse::unsetsc()
{
    scIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getBhc() const
{
    return bhc_;
}

void ShowSpecialUserResponse::setBhc(int64_t value)
{
    bhc_ = value;
    bhcIsSet_ = true;
}

bool ShowSpecialUserResponse::bhcIsSet() const
{
    return bhcIsSet_;
}

void ShowSpecialUserResponse::unsetbhc()
{
    bhcIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getPi() const
{
    return pi_;
}

void ShowSpecialUserResponse::setPi(int64_t value)
{
    pi_ = value;
    piIsSet_ = true;
}

bool ShowSpecialUserResponse::piIsSet() const
{
    return piIsSet_;
}

void ShowSpecialUserResponse::unsetpi()
{
    piIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getExp5() const
{
    return exp5_;
}

void ShowSpecialUserResponse::setExp5(int64_t value)
{
    exp5_ = value;
    exp5IsSet_ = true;
}

bool ShowSpecialUserResponse::exp5IsSet() const
{
    return exp5IsSet_;
}

void ShowSpecialUserResponse::unsetexp5()
{
    exp5IsSet_ = false;
}

int64_t ShowSpecialUserResponse::getM1() const
{
    return m1_;
}

void ShowSpecialUserResponse::setM1(int64_t value)
{
    m1_ = value;
    m1IsSet_ = true;
}

bool ShowSpecialUserResponse::m1IsSet() const
{
    return m1IsSet_;
}

void ShowSpecialUserResponse::unsetm1()
{
    m1IsSet_ = false;
}

int64_t ShowSpecialUserResponse::getIsMonthM5() const
{
    return isMonthM5_;
}

void ShowSpecialUserResponse::setIsMonthM5(int64_t value)
{
    isMonthM5_ = value;
    isMonthM5IsSet_ = true;
}

bool ShowSpecialUserResponse::isMonthM5IsSet() const
{
    return isMonthM5IsSet_;
}

void ShowSpecialUserResponse::unsetisMonthM5()
{
    isMonthM5IsSet_ = false;
}

int64_t ShowSpecialUserResponse::getExpAgy() const
{
    return expAgy_;
}

void ShowSpecialUserResponse::setExpAgy(int64_t value)
{
    expAgy_ = value;
    expAgyIsSet_ = true;
}

bool ShowSpecialUserResponse::expAgyIsSet() const
{
    return expAgyIsSet_;
}

void ShowSpecialUserResponse::unsetexpAgy()
{
    expAgyIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getCesReportSite() const
{
    return cesReportSite_;
}

void ShowSpecialUserResponse::setCesReportSite(int64_t value)
{
    cesReportSite_ = value;
    cesReportSiteIsSet_ = true;
}

bool ShowSpecialUserResponse::cesReportSiteIsSet() const
{
    return cesReportSiteIsSet_;
}

void ShowSpecialUserResponse::unsetcesReportSite()
{
    cesReportSiteIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getFloat() const
{
    return float_;
}

void ShowSpecialUserResponse::setFloat(int64_t value)
{
    float_ = value;
    floatIsSet_ = true;
}

bool ShowSpecialUserResponse::floatIsSet() const
{
    return floatIsSet_;
}

void ShowSpecialUserResponse::unsetfloat()
{
    floatIsSet_ = false;
}

int64_t ShowSpecialUserResponse::getIsShowUpBw() const
{
    return isShowUpBw_;
}

void ShowSpecialUserResponse::setIsShowUpBw(int64_t value)
{
    isShowUpBw_ = value;
    isShowUpBwIsSet_ = true;
}

bool ShowSpecialUserResponse::isShowUpBwIsSet() const
{
    return isShowUpBwIsSet_;
}

void ShowSpecialUserResponse::unsetisShowUpBw()
{
    isShowUpBwIsSet_ = false;
}

}
}
}
}
}


