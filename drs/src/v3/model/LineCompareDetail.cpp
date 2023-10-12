

#include "huaweicloud/drs/v3/model/LineCompareDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




LineCompareDetail::LineCompareDetail()
{
    sourceTableName_ = "";
    sourceTableNameIsSet_ = false;
    targetTableName_ = "";
    targetTableNameIsSet_ = false;
    sourceRowNum_ = 0;
    sourceRowNumIsSet_ = false;
    targetRowNum_ = 0;
    targetRowNumIsSet_ = false;
    diffRowNum_ = 0;
    diffRowNumIsSet_ = false;
    lineCompareResult_ = "";
    lineCompareResultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

LineCompareDetail::~LineCompareDetail() = default;

void LineCompareDetail::validate()
{
}

web::json::value LineCompareDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceTableNameIsSet_) {
        val[utility::conversions::to_string_t("source_table_name")] = ModelBase::toJson(sourceTableName_);
    }
    if(targetTableNameIsSet_) {
        val[utility::conversions::to_string_t("target_table_name")] = ModelBase::toJson(targetTableName_);
    }
    if(sourceRowNumIsSet_) {
        val[utility::conversions::to_string_t("source_row_num")] = ModelBase::toJson(sourceRowNum_);
    }
    if(targetRowNumIsSet_) {
        val[utility::conversions::to_string_t("target_row_num")] = ModelBase::toJson(targetRowNum_);
    }
    if(diffRowNumIsSet_) {
        val[utility::conversions::to_string_t("diff_row_num")] = ModelBase::toJson(diffRowNum_);
    }
    if(lineCompareResultIsSet_) {
        val[utility::conversions::to_string_t("line_compare_result")] = ModelBase::toJson(lineCompareResult_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool LineCompareDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_row_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_row_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRowNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_row_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_row_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRowNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff_row_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_row_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffRowNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareResult(refVal);
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


std::string LineCompareDetail::getSourceTableName() const
{
    return sourceTableName_;
}

void LineCompareDetail::setSourceTableName(const std::string& value)
{
    sourceTableName_ = value;
    sourceTableNameIsSet_ = true;
}

bool LineCompareDetail::sourceTableNameIsSet() const
{
    return sourceTableNameIsSet_;
}

void LineCompareDetail::unsetsourceTableName()
{
    sourceTableNameIsSet_ = false;
}

std::string LineCompareDetail::getTargetTableName() const
{
    return targetTableName_;
}

void LineCompareDetail::setTargetTableName(const std::string& value)
{
    targetTableName_ = value;
    targetTableNameIsSet_ = true;
}

bool LineCompareDetail::targetTableNameIsSet() const
{
    return targetTableNameIsSet_;
}

void LineCompareDetail::unsettargetTableName()
{
    targetTableNameIsSet_ = false;
}

int32_t LineCompareDetail::getSourceRowNum() const
{
    return sourceRowNum_;
}

void LineCompareDetail::setSourceRowNum(int32_t value)
{
    sourceRowNum_ = value;
    sourceRowNumIsSet_ = true;
}

bool LineCompareDetail::sourceRowNumIsSet() const
{
    return sourceRowNumIsSet_;
}

void LineCompareDetail::unsetsourceRowNum()
{
    sourceRowNumIsSet_ = false;
}

int32_t LineCompareDetail::getTargetRowNum() const
{
    return targetRowNum_;
}

void LineCompareDetail::setTargetRowNum(int32_t value)
{
    targetRowNum_ = value;
    targetRowNumIsSet_ = true;
}

bool LineCompareDetail::targetRowNumIsSet() const
{
    return targetRowNumIsSet_;
}

void LineCompareDetail::unsettargetRowNum()
{
    targetRowNumIsSet_ = false;
}

int32_t LineCompareDetail::getDiffRowNum() const
{
    return diffRowNum_;
}

void LineCompareDetail::setDiffRowNum(int32_t value)
{
    diffRowNum_ = value;
    diffRowNumIsSet_ = true;
}

bool LineCompareDetail::diffRowNumIsSet() const
{
    return diffRowNumIsSet_;
}

void LineCompareDetail::unsetdiffRowNum()
{
    diffRowNumIsSet_ = false;
}

std::string LineCompareDetail::getLineCompareResult() const
{
    return lineCompareResult_;
}

void LineCompareDetail::setLineCompareResult(const std::string& value)
{
    lineCompareResult_ = value;
    lineCompareResultIsSet_ = true;
}

bool LineCompareDetail::lineCompareResultIsSet() const
{
    return lineCompareResultIsSet_;
}

void LineCompareDetail::unsetlineCompareResult()
{
    lineCompareResultIsSet_ = false;
}

std::string LineCompareDetail::getMessage() const
{
    return message_;
}

void LineCompareDetail::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool LineCompareDetail::messageIsSet() const
{
    return messageIsSet_;
}

void LineCompareDetail::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


