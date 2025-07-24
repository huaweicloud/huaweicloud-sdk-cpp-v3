

#include "huaweicloud/cloudtest/v1/model/ReportChartDataVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ReportChartDataVo::ReportChartDataVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    analyzeDimIsSet_ = false;
    compareDimIsSet_ = false;
}

ReportChartDataVo::~ReportChartDataVo() = default;

void ReportChartDataVo::validate()
{
}

web::json::value ReportChartDataVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(analyzeDimIsSet_) {
        val[utility::conversions::to_string_t("analyze_dim")] = ModelBase::toJson(analyzeDim_);
    }
    if(compareDimIsSet_) {
        val[utility::conversions::to_string_t("compare_dim")] = ModelBase::toJson(compareDim_);
    }

    return val;
}
bool ReportChartDataVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("analyze_dim"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("analyze_dim"));
        if(!fieldValue.is_null())
        {
            ReportDimVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnalyzeDim(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_dim"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_dim"));
        if(!fieldValue.is_null())
        {
            std::vector<ReportDimVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareDim(refVal);
        }
    }
    return ok;
}


std::string ReportChartDataVo::getId() const
{
    return id_;
}

void ReportChartDataVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ReportChartDataVo::idIsSet() const
{
    return idIsSet_;
}

void ReportChartDataVo::unsetid()
{
    idIsSet_ = false;
}

std::string ReportChartDataVo::getName() const
{
    return name_;
}

void ReportChartDataVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReportChartDataVo::nameIsSet() const
{
    return nameIsSet_;
}

void ReportChartDataVo::unsetname()
{
    nameIsSet_ = false;
}

ReportDimVo ReportChartDataVo::getAnalyzeDim() const
{
    return analyzeDim_;
}

void ReportChartDataVo::setAnalyzeDim(const ReportDimVo& value)
{
    analyzeDim_ = value;
    analyzeDimIsSet_ = true;
}

bool ReportChartDataVo::analyzeDimIsSet() const
{
    return analyzeDimIsSet_;
}

void ReportChartDataVo::unsetanalyzeDim()
{
    analyzeDimIsSet_ = false;
}

std::vector<ReportDimVo>& ReportChartDataVo::getCompareDim()
{
    return compareDim_;
}

void ReportChartDataVo::setCompareDim(const std::vector<ReportDimVo>& value)
{
    compareDim_ = value;
    compareDimIsSet_ = true;
}

bool ReportChartDataVo::compareDimIsSet() const
{
    return compareDimIsSet_;
}

void ReportChartDataVo::unsetcompareDim()
{
    compareDimIsSet_ = false;
}

}
}
}
}
}


