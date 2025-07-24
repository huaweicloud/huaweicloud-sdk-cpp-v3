

#include "huaweicloud/cloudtest/v1/model/OprReportInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




OprReportInfo::OprReportInfo()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    workpieceType_ = "";
    workpieceTypeIsSet_ = false;
    analysisDimRow_ = "";
    analysisDimRowIsSet_ = false;
    compareDimColumn_ = "";
    compareDimColumnIsSet_ = false;
    filterIsSet_ = false;
}

OprReportInfo::~OprReportInfo() = default;

void OprReportInfo::validate()
{
}

web::json::value OprReportInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
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
bool OprReportInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string OprReportInfo::getName() const
{
    return name_;
}

void OprReportInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OprReportInfo::nameIsSet() const
{
    return nameIsSet_;
}

void OprReportInfo::unsetname()
{
    nameIsSet_ = false;
}

int32_t OprReportInfo::getType() const
{
    return type_;
}

void OprReportInfo::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool OprReportInfo::typeIsSet() const
{
    return typeIsSet_;
}

void OprReportInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string OprReportInfo::getWorkpieceType() const
{
    return workpieceType_;
}

void OprReportInfo::setWorkpieceType(const std::string& value)
{
    workpieceType_ = value;
    workpieceTypeIsSet_ = true;
}

bool OprReportInfo::workpieceTypeIsSet() const
{
    return workpieceTypeIsSet_;
}

void OprReportInfo::unsetworkpieceType()
{
    workpieceTypeIsSet_ = false;
}

std::string OprReportInfo::getAnalysisDimRow() const
{
    return analysisDimRow_;
}

void OprReportInfo::setAnalysisDimRow(const std::string& value)
{
    analysisDimRow_ = value;
    analysisDimRowIsSet_ = true;
}

bool OprReportInfo::analysisDimRowIsSet() const
{
    return analysisDimRowIsSet_;
}

void OprReportInfo::unsetanalysisDimRow()
{
    analysisDimRowIsSet_ = false;
}

std::string OprReportInfo::getCompareDimColumn() const
{
    return compareDimColumn_;
}

void OprReportInfo::setCompareDimColumn(const std::string& value)
{
    compareDimColumn_ = value;
    compareDimColumnIsSet_ = true;
}

bool OprReportInfo::compareDimColumnIsSet() const
{
    return compareDimColumnIsSet_;
}

void OprReportInfo::unsetcompareDimColumn()
{
    compareDimColumnIsSet_ = false;
}

ReportFilter OprReportInfo::getFilter() const
{
    return filter_;
}

void OprReportInfo::setFilter(const ReportFilter& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool OprReportInfo::filterIsSet() const
{
    return filterIsSet_;
}

void OprReportInfo::unsetfilter()
{
    filterIsSet_ = false;
}

}
}
}
}
}


