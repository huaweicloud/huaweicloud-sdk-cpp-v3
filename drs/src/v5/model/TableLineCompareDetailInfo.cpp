

#include "huaweicloud/drs/v5/model/TableLineCompareDetailInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




TableLineCompareDetailInfo::TableLineCompareDetailInfo()
{
    sourceTableName_ = "";
    sourceTableNameIsSet_ = false;
    sourceRowNum_ = "";
    sourceRowNumIsSet_ = false;
    targetTableName_ = "";
    targetTableNameIsSet_ = false;
    targetRowNum_ = "";
    targetRowNumIsSet_ = false;
    differenceRowNum_ = "";
    differenceRowNumIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

TableLineCompareDetailInfo::~TableLineCompareDetailInfo() = default;

void TableLineCompareDetailInfo::validate()
{
}

web::json::value TableLineCompareDetailInfo::toJson() const
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
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}

bool TableLineCompareDetailInfo::fromJson(const web::json::value& val)
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
            std::string refVal;
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRowNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("difference_row_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("difference_row_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDifferenceRowNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}

std::string TableLineCompareDetailInfo::getSourceTableName() const
{
    return sourceTableName_;
}

void TableLineCompareDetailInfo::setSourceTableName(const std::string& value)
{
    sourceTableName_ = value;
    sourceTableNameIsSet_ = true;
}

bool TableLineCompareDetailInfo::sourceTableNameIsSet() const
{
    return sourceTableNameIsSet_;
}

void TableLineCompareDetailInfo::unsetsourceTableName()
{
    sourceTableNameIsSet_ = false;
}

std::string TableLineCompareDetailInfo::getSourceRowNum() const
{
    return sourceRowNum_;
}

void TableLineCompareDetailInfo::setSourceRowNum(const std::string& value)
{
    sourceRowNum_ = value;
    sourceRowNumIsSet_ = true;
}

bool TableLineCompareDetailInfo::sourceRowNumIsSet() const
{
    return sourceRowNumIsSet_;
}

void TableLineCompareDetailInfo::unsetsourceRowNum()
{
    sourceRowNumIsSet_ = false;
}

std::string TableLineCompareDetailInfo::getTargetTableName() const
{
    return targetTableName_;
}

void TableLineCompareDetailInfo::setTargetTableName(const std::string& value)
{
    targetTableName_ = value;
    targetTableNameIsSet_ = true;
}

bool TableLineCompareDetailInfo::targetTableNameIsSet() const
{
    return targetTableNameIsSet_;
}

void TableLineCompareDetailInfo::unsettargetTableName()
{
    targetTableNameIsSet_ = false;
}

std::string TableLineCompareDetailInfo::getTargetRowNum() const
{
    return targetRowNum_;
}

void TableLineCompareDetailInfo::setTargetRowNum(const std::string& value)
{
    targetRowNum_ = value;
    targetRowNumIsSet_ = true;
}

bool TableLineCompareDetailInfo::targetRowNumIsSet() const
{
    return targetRowNumIsSet_;
}

void TableLineCompareDetailInfo::unsettargetRowNum()
{
    targetRowNumIsSet_ = false;
}

std::string TableLineCompareDetailInfo::getDifferenceRowNum() const
{
    return differenceRowNum_;
}

void TableLineCompareDetailInfo::setDifferenceRowNum(const std::string& value)
{
    differenceRowNum_ = value;
    differenceRowNumIsSet_ = true;
}

bool TableLineCompareDetailInfo::differenceRowNumIsSet() const
{
    return differenceRowNumIsSet_;
}

void TableLineCompareDetailInfo::unsetdifferenceRowNum()
{
    differenceRowNumIsSet_ = false;
}

std::string TableLineCompareDetailInfo::getStatus() const
{
    return status_;
}

void TableLineCompareDetailInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TableLineCompareDetailInfo::statusIsSet() const
{
    return statusIsSet_;
}

void TableLineCompareDetailInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TableLineCompareDetailInfo::getMessage() const
{
    return message_;
}

void TableLineCompareDetailInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool TableLineCompareDetailInfo::messageIsSet() const
{
    return messageIsSet_;
}

void TableLineCompareDetailInfo::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


