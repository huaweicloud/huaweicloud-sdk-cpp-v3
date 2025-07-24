

#include "huaweicloud/cloudtest/v1/model/GenerateReportInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




GenerateReportInfo::GenerateReportInfo()
{
    name_ = "";
    nameIsSet_ = false;
    workpieceType_ = "";
    workpieceTypeIsSet_ = false;
    analysisDimRow_ = "";
    analysisDimRowIsSet_ = false;
    compareDimColumn_ = "";
    compareDimColumnIsSet_ = false;
    filterIsSet_ = false;
}

GenerateReportInfo::~GenerateReportInfo() = default;

void GenerateReportInfo::validate()
{
}

web::json::value GenerateReportInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(workpieceTypeIsSet_) {
        val[utility::conversions::to_string_t("workpiece_type")] = ModelBase::toJson(workpieceType_);
    }
    if(analysisDimRowIsSet_) {
        val[utility::conversions::to_string_t("analysis_dim_row")] = ModelBase::toJson(analysisDimRow_);
    }
    if(compareDimColumnIsSet_) {
        val[utility::conversions::to_string_t("compare_dim_column")] = ModelBase::toJson(compareDimColumn_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }

    return val;
}
bool GenerateReportInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("analysis_dim_row"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("analysis_dim_row"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnalysisDimRow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_dim_column"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_dim_column"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareDimColumn(refVal);
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
    return ok;
}


std::string GenerateReportInfo::getName() const
{
    return name_;
}

void GenerateReportInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GenerateReportInfo::nameIsSet() const
{
    return nameIsSet_;
}

void GenerateReportInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string GenerateReportInfo::getWorkpieceType() const
{
    return workpieceType_;
}

void GenerateReportInfo::setWorkpieceType(const std::string& value)
{
    workpieceType_ = value;
    workpieceTypeIsSet_ = true;
}

bool GenerateReportInfo::workpieceTypeIsSet() const
{
    return workpieceTypeIsSet_;
}

void GenerateReportInfo::unsetworkpieceType()
{
    workpieceTypeIsSet_ = false;
}

std::string GenerateReportInfo::getAnalysisDimRow() const
{
    return analysisDimRow_;
}

void GenerateReportInfo::setAnalysisDimRow(const std::string& value)
{
    analysisDimRow_ = value;
    analysisDimRowIsSet_ = true;
}

bool GenerateReportInfo::analysisDimRowIsSet() const
{
    return analysisDimRowIsSet_;
}

void GenerateReportInfo::unsetanalysisDimRow()
{
    analysisDimRowIsSet_ = false;
}

std::string GenerateReportInfo::getCompareDimColumn() const
{
    return compareDimColumn_;
}

void GenerateReportInfo::setCompareDimColumn(const std::string& value)
{
    compareDimColumn_ = value;
    compareDimColumnIsSet_ = true;
}

bool GenerateReportInfo::compareDimColumnIsSet() const
{
    return compareDimColumnIsSet_;
}

void GenerateReportInfo::unsetcompareDimColumn()
{
    compareDimColumnIsSet_ = false;
}

ReportFilter GenerateReportInfo::getFilter() const
{
    return filter_;
}

void GenerateReportInfo::setFilter(const ReportFilter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool GenerateReportInfo::filterIsSet() const
{
    return filterIsSet_;
}

void GenerateReportInfo::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


