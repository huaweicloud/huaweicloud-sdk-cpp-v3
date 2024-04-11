

#include "huaweicloud/drs/v3/model/TableLineCompareResultInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




TableLineCompareResultInfo::TableLineCompareResultInfo()
{
    sourceTableName_ = "";
    sourceTableNameIsSet_ = false;
    sourceRowNum_ = 0L;
    sourceRowNumIsSet_ = false;
    targetTableName_ = "";
    targetTableNameIsSet_ = false;
    targetRowNum_ = 0L;
    targetRowNumIsSet_ = false;
    differenceRowNum_ = 0L;
    differenceRowNumIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    compareLineConfigFilter_ = "";
    compareLineConfigFilterIsSet_ = false;
}

TableLineCompareResultInfo::~TableLineCompareResultInfo() = default;

void TableLineCompareResultInfo::validate()
{
}

web::json::value TableLineCompareResultInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceTableNameIsSet_) {
        val[utility::conversions::to_string_t("source_table_name")] = ModelBase::toJson(sourceTableName_);
    }
    if(sourceRowNumIsSet_) {
        val[utility::conversions::to_string_t("source_row_num")] = ModelBase::toJson(sourceRowNum_);
    }
    if(targetTableNameIsSet_) {
        val[utility::conversions::to_string_t("target_table_name")] = ModelBase::toJson(targetTableName_);
    }
    if(targetRowNumIsSet_) {
        val[utility::conversions::to_string_t("target_row_num")] = ModelBase::toJson(targetRowNum_);
    }
    if(differenceRowNumIsSet_) {
        val[utility::conversions::to_string_t("difference_row_num")] = ModelBase::toJson(differenceRowNum_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(compareLineConfigFilterIsSet_) {
        val[utility::conversions::to_string_t("compare_line_config_filter")] = ModelBase::toJson(compareLineConfigFilter_);
    }

    return val;
}
bool TableLineCompareResultInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_row_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_row_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRowNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_row_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_row_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRowNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("difference_row_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("difference_row_num"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDifferenceRowNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_line_config_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_line_config_filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareLineConfigFilter(refVal);
        }
    }
    return ok;
}


std::string TableLineCompareResultInfo::getSourceTableName() const
{
    return sourceTableName_;
}

void TableLineCompareResultInfo::setSourceTableName(const std::string& value)
{
    sourceTableName_ = value;
    sourceTableNameIsSet_ = true;
}

bool TableLineCompareResultInfo::sourceTableNameIsSet() const
{
    return sourceTableNameIsSet_;
}

void TableLineCompareResultInfo::unsetsourceTableName()
{
    sourceTableNameIsSet_ = false;
}

int64_t TableLineCompareResultInfo::getSourceRowNum() const
{
    return sourceRowNum_;
}

void TableLineCompareResultInfo::setSourceRowNum(int64_t value)
{
    sourceRowNum_ = value;
    sourceRowNumIsSet_ = true;
}

bool TableLineCompareResultInfo::sourceRowNumIsSet() const
{
    return sourceRowNumIsSet_;
}

void TableLineCompareResultInfo::unsetsourceRowNum()
{
    sourceRowNumIsSet_ = false;
}

std::string TableLineCompareResultInfo::getTargetTableName() const
{
    return targetTableName_;
}

void TableLineCompareResultInfo::setTargetTableName(const std::string& value)
{
    targetTableName_ = value;
    targetTableNameIsSet_ = true;
}

bool TableLineCompareResultInfo::targetTableNameIsSet() const
{
    return targetTableNameIsSet_;
}

void TableLineCompareResultInfo::unsettargetTableName()
{
    targetTableNameIsSet_ = false;
}

int64_t TableLineCompareResultInfo::getTargetRowNum() const
{
    return targetRowNum_;
}

void TableLineCompareResultInfo::setTargetRowNum(int64_t value)
{
    targetRowNum_ = value;
    targetRowNumIsSet_ = true;
}

bool TableLineCompareResultInfo::targetRowNumIsSet() const
{
    return targetRowNumIsSet_;
}

void TableLineCompareResultInfo::unsettargetRowNum()
{
    targetRowNumIsSet_ = false;
}

int64_t TableLineCompareResultInfo::getDifferenceRowNum() const
{
    return differenceRowNum_;
}

void TableLineCompareResultInfo::setDifferenceRowNum(int64_t value)
{
    differenceRowNum_ = value;
    differenceRowNumIsSet_ = true;
}

bool TableLineCompareResultInfo::differenceRowNumIsSet() const
{
    return differenceRowNumIsSet_;
}

void TableLineCompareResultInfo::unsetdifferenceRowNum()
{
    differenceRowNumIsSet_ = false;
}

int32_t TableLineCompareResultInfo::getStatus() const
{
    return status_;
}

void TableLineCompareResultInfo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TableLineCompareResultInfo::statusIsSet() const
{
    return statusIsSet_;
}

void TableLineCompareResultInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TableLineCompareResultInfo::getCompareLineConfigFilter() const
{
    return compareLineConfigFilter_;
}

void TableLineCompareResultInfo::setCompareLineConfigFilter(const std::string& value)
{
    compareLineConfigFilter_ = value;
    compareLineConfigFilterIsSet_ = true;
}

bool TableLineCompareResultInfo::compareLineConfigFilterIsSet() const
{
    return compareLineConfigFilterIsSet_;
}

void TableLineCompareResultInfo::unsetcompareLineConfigFilter()
{
    compareLineConfigFilterIsSet_ = false;
}

}
}
}
}
}


