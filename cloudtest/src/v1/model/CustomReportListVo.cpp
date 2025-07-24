

#include "huaweicloud/cloudtest/v1/model/CustomReportListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CustomReportListVo::CustomReportListVo()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    filterIsSet_ = false;
    workpieceType_ = "";
    workpieceTypeIsSet_ = false;
    analysisDimension_ = "";
    analysisDimensionIsSet_ = false;
    compareDimension_ = "";
    compareDimensionIsSet_ = false;
    chartDataIsSet_ = false;
}

CustomReportListVo::~CustomReportListVo() = default;

void CustomReportListVo::validate()
{
}

web::json::value CustomReportListVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(workpieceTypeIsSet_) {
        val[utility::conversions::to_string_t("workpiece_type")] = ModelBase::toJson(workpieceType_);
    }
    if(analysisDimensionIsSet_) {
        val[utility::conversions::to_string_t("analysis_dimension")] = ModelBase::toJson(analysisDimension_);
    }
    if(compareDimensionIsSet_) {
        val[utility::conversions::to_string_t("compare_dimension")] = ModelBase::toJson(compareDimension_);
    }
    if(chartDataIsSet_) {
        val[utility::conversions::to_string_t("chart_data")] = ModelBase::toJson(chartData_);
    }

    return val;
}
bool CustomReportListVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            ReportFilter refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workpiece_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workpiece_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkpieceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("analysis_dimension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("analysis_dimension"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnalysisDimension(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_dimension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_dimension"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareDimension(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chart_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chart_data"));
        if(!fieldValue.is_null())
        {
            std::vector<ReportChartDataVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChartData(refVal);
        }
    }
    return ok;
}


std::string CustomReportListVo::getId() const
{
    return id_;
}

void CustomReportListVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CustomReportListVo::idIsSet() const
{
    return idIsSet_;
}

void CustomReportListVo::unsetid()
{
    idIsSet_ = false;
}

std::string CustomReportListVo::getName() const
{
    return name_;
}

void CustomReportListVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CustomReportListVo::nameIsSet() const
{
    return nameIsSet_;
}

void CustomReportListVo::unsetname()
{
    nameIsSet_ = false;
}

ReportFilter CustomReportListVo::getFilter() const
{
    return filter_;
}

void CustomReportListVo::setFilter(const ReportFilter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool CustomReportListVo::filterIsSet() const
{
    return filterIsSet_;
}

void CustomReportListVo::unsetfilter()
{
    filterIsSet_ = false;
}

std::string CustomReportListVo::getWorkpieceType() const
{
    return workpieceType_;
}

void CustomReportListVo::setWorkpieceType(const std::string& value)
{
    workpieceType_ = value;
    workpieceTypeIsSet_ = true;
}

bool CustomReportListVo::workpieceTypeIsSet() const
{
    return workpieceTypeIsSet_;
}

void CustomReportListVo::unsetworkpieceType()
{
    workpieceTypeIsSet_ = false;
}

std::string CustomReportListVo::getAnalysisDimension() const
{
    return analysisDimension_;
}

void CustomReportListVo::setAnalysisDimension(const std::string& value)
{
    analysisDimension_ = value;
    analysisDimensionIsSet_ = true;
}

bool CustomReportListVo::analysisDimensionIsSet() const
{
    return analysisDimensionIsSet_;
}

void CustomReportListVo::unsetanalysisDimension()
{
    analysisDimensionIsSet_ = false;
}

std::string CustomReportListVo::getCompareDimension() const
{
    return compareDimension_;
}

void CustomReportListVo::setCompareDimension(const std::string& value)
{
    compareDimension_ = value;
    compareDimensionIsSet_ = true;
}

bool CustomReportListVo::compareDimensionIsSet() const
{
    return compareDimensionIsSet_;
}

void CustomReportListVo::unsetcompareDimension()
{
    compareDimensionIsSet_ = false;
}

std::vector<ReportChartDataVo>& CustomReportListVo::getChartData()
{
    return chartData_;
}

void CustomReportListVo::setChartData(const std::vector<ReportChartDataVo>& value)
{
    chartData_ = value;
    chartDataIsSet_ = true;
}

bool CustomReportListVo::chartDataIsSet() const
{
    return chartDataIsSet_;
}

void CustomReportListVo::unsetchartData()
{
    chartDataIsSet_ = false;
}

}
}
}
}
}


