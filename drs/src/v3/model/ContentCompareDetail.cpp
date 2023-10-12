

#include "huaweicloud/drs/v3/model/ContentCompareDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ContentCompareDetail::ContentCompareDetail()
{
    sourceDbName_ = "";
    sourceDbNameIsSet_ = false;
    targetDbName_ = "";
    targetDbNameIsSet_ = false;
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
    contentCompareResult_ = "";
    contentCompareResultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ContentCompareDetail::~ContentCompareDetail() = default;

void ContentCompareDetail::validate()
{
}

web::json::value ContentCompareDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbNameIsSet_) {
        val[utility::conversions::to_string_t("source_db_name")] = ModelBase::toJson(sourceDbName_);
    }
    if(targetDbNameIsSet_) {
        val[utility::conversions::to_string_t("target_db_name")] = ModelBase::toJson(targetDbName_);
    }
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
    if(contentCompareResultIsSet_) {
        val[utility::conversions::to_string_t("content_compare_result")] = ModelBase::toJson(contentCompareResult_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool ContentCompareDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDbName(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("content_compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentCompareResult(refVal);
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


std::string ContentCompareDetail::getSourceDbName() const
{
    return sourceDbName_;
}

void ContentCompareDetail::setSourceDbName(const std::string& value)
{
    sourceDbName_ = value;
    sourceDbNameIsSet_ = true;
}

bool ContentCompareDetail::sourceDbNameIsSet() const
{
    return sourceDbNameIsSet_;
}

void ContentCompareDetail::unsetsourceDbName()
{
    sourceDbNameIsSet_ = false;
}

std::string ContentCompareDetail::getTargetDbName() const
{
    return targetDbName_;
}

void ContentCompareDetail::setTargetDbName(const std::string& value)
{
    targetDbName_ = value;
    targetDbNameIsSet_ = true;
}

bool ContentCompareDetail::targetDbNameIsSet() const
{
    return targetDbNameIsSet_;
}

void ContentCompareDetail::unsettargetDbName()
{
    targetDbNameIsSet_ = false;
}

std::string ContentCompareDetail::getSourceTableName() const
{
    return sourceTableName_;
}

void ContentCompareDetail::setSourceTableName(const std::string& value)
{
    sourceTableName_ = value;
    sourceTableNameIsSet_ = true;
}

bool ContentCompareDetail::sourceTableNameIsSet() const
{
    return sourceTableNameIsSet_;
}

void ContentCompareDetail::unsetsourceTableName()
{
    sourceTableNameIsSet_ = false;
}

std::string ContentCompareDetail::getTargetTableName() const
{
    return targetTableName_;
}

void ContentCompareDetail::setTargetTableName(const std::string& value)
{
    targetTableName_ = value;
    targetTableNameIsSet_ = true;
}

bool ContentCompareDetail::targetTableNameIsSet() const
{
    return targetTableNameIsSet_;
}

void ContentCompareDetail::unsettargetTableName()
{
    targetTableNameIsSet_ = false;
}

int32_t ContentCompareDetail::getSourceRowNum() const
{
    return sourceRowNum_;
}

void ContentCompareDetail::setSourceRowNum(int32_t value)
{
    sourceRowNum_ = value;
    sourceRowNumIsSet_ = true;
}

bool ContentCompareDetail::sourceRowNumIsSet() const
{
    return sourceRowNumIsSet_;
}

void ContentCompareDetail::unsetsourceRowNum()
{
    sourceRowNumIsSet_ = false;
}

int32_t ContentCompareDetail::getTargetRowNum() const
{
    return targetRowNum_;
}

void ContentCompareDetail::setTargetRowNum(int32_t value)
{
    targetRowNum_ = value;
    targetRowNumIsSet_ = true;
}

bool ContentCompareDetail::targetRowNumIsSet() const
{
    return targetRowNumIsSet_;
}

void ContentCompareDetail::unsettargetRowNum()
{
    targetRowNumIsSet_ = false;
}

int32_t ContentCompareDetail::getDiffRowNum() const
{
    return diffRowNum_;
}

void ContentCompareDetail::setDiffRowNum(int32_t value)
{
    diffRowNum_ = value;
    diffRowNumIsSet_ = true;
}

bool ContentCompareDetail::diffRowNumIsSet() const
{
    return diffRowNumIsSet_;
}

void ContentCompareDetail::unsetdiffRowNum()
{
    diffRowNumIsSet_ = false;
}

std::string ContentCompareDetail::getLineCompareResult() const
{
    return lineCompareResult_;
}

void ContentCompareDetail::setLineCompareResult(const std::string& value)
{
    lineCompareResult_ = value;
    lineCompareResultIsSet_ = true;
}

bool ContentCompareDetail::lineCompareResultIsSet() const
{
    return lineCompareResultIsSet_;
}

void ContentCompareDetail::unsetlineCompareResult()
{
    lineCompareResultIsSet_ = false;
}

std::string ContentCompareDetail::getContentCompareResult() const
{
    return contentCompareResult_;
}

void ContentCompareDetail::setContentCompareResult(const std::string& value)
{
    contentCompareResult_ = value;
    contentCompareResultIsSet_ = true;
}

bool ContentCompareDetail::contentCompareResultIsSet() const
{
    return contentCompareResultIsSet_;
}

void ContentCompareDetail::unsetcontentCompareResult()
{
    contentCompareResultIsSet_ = false;
}

std::string ContentCompareDetail::getMessage() const
{
    return message_;
}

void ContentCompareDetail::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ContentCompareDetail::messageIsSet() const
{
    return messageIsSet_;
}

void ContentCompareDetail::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


