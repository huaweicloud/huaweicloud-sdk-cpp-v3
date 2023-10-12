

#include "huaweicloud/drs/v5/model/ContentCompareDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ContentCompareDetailInfo::ContentCompareDetailInfo()
{
    sourceDb_ = "";
    sourceDbIsSet_ = false;
    targetDb_ = "";
    targetDbIsSet_ = false;
    sourceTableName_ = "";
    sourceTableNameIsSet_ = false;
    targetTableName_ = "";
    targetTableNameIsSet_ = false;
    sourceRowNum_ = 0L;
    sourceRowNumIsSet_ = false;
    targetRowNum_ = 0L;
    targetRowNumIsSet_ = false;
    differenceRowNum_ = 0L;
    differenceRowNumIsSet_ = false;
    lineCompareResult_ = false;
    lineCompareResultIsSet_ = false;
    contentCompareResult_ = false;
    contentCompareResultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ContentCompareDetailInfo::~ContentCompareDetailInfo() = default;

void ContentCompareDetailInfo::validate()
{
}

web::json::value ContentCompareDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceDbIsSet_) {
        val[utility::conversions::to_string_t("source_db")] = ModelBase::toJson(sourceDb_);
    }
    if(targetDbIsSet_) {
        val[utility::conversions::to_string_t("target_db")] = ModelBase::toJson(targetDb_);
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
    if(differenceRowNumIsSet_) {
        val[utility::conversions::to_string_t("difference_row_num")] = ModelBase::toJson(differenceRowNum_);
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
bool ContentCompareDetailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceDb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_db"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_db"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetDb(refVal);
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRowNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("line_compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_compare_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineCompareResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content_compare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_compare_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
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


std::string ContentCompareDetailInfo::getSourceDb() const
{
    return sourceDb_;
}

void ContentCompareDetailInfo::setSourceDb(const std::string& value)
{
    sourceDb_ = value;
    sourceDbIsSet_ = true;
}

bool ContentCompareDetailInfo::sourceDbIsSet() const
{
    return sourceDbIsSet_;
}

void ContentCompareDetailInfo::unsetsourceDb()
{
    sourceDbIsSet_ = false;
}

std::string ContentCompareDetailInfo::getTargetDb() const
{
    return targetDb_;
}

void ContentCompareDetailInfo::setTargetDb(const std::string& value)
{
    targetDb_ = value;
    targetDbIsSet_ = true;
}

bool ContentCompareDetailInfo::targetDbIsSet() const
{
    return targetDbIsSet_;
}

void ContentCompareDetailInfo::unsettargetDb()
{
    targetDbIsSet_ = false;
}

std::string ContentCompareDetailInfo::getSourceTableName() const
{
    return sourceTableName_;
}

void ContentCompareDetailInfo::setSourceTableName(const std::string& value)
{
    sourceTableName_ = value;
    sourceTableNameIsSet_ = true;
}

bool ContentCompareDetailInfo::sourceTableNameIsSet() const
{
    return sourceTableNameIsSet_;
}

void ContentCompareDetailInfo::unsetsourceTableName()
{
    sourceTableNameIsSet_ = false;
}

std::string ContentCompareDetailInfo::getTargetTableName() const
{
    return targetTableName_;
}

void ContentCompareDetailInfo::setTargetTableName(const std::string& value)
{
    targetTableName_ = value;
    targetTableNameIsSet_ = true;
}

bool ContentCompareDetailInfo::targetTableNameIsSet() const
{
    return targetTableNameIsSet_;
}

void ContentCompareDetailInfo::unsettargetTableName()
{
    targetTableNameIsSet_ = false;
}

int64_t ContentCompareDetailInfo::getSourceRowNum() const
{
    return sourceRowNum_;
}

void ContentCompareDetailInfo::setSourceRowNum(int64_t value)
{
    sourceRowNum_ = value;
    sourceRowNumIsSet_ = true;
}

bool ContentCompareDetailInfo::sourceRowNumIsSet() const
{
    return sourceRowNumIsSet_;
}

void ContentCompareDetailInfo::unsetsourceRowNum()
{
    sourceRowNumIsSet_ = false;
}

int64_t ContentCompareDetailInfo::getTargetRowNum() const
{
    return targetRowNum_;
}

void ContentCompareDetailInfo::setTargetRowNum(int64_t value)
{
    targetRowNum_ = value;
    targetRowNumIsSet_ = true;
}

bool ContentCompareDetailInfo::targetRowNumIsSet() const
{
    return targetRowNumIsSet_;
}

void ContentCompareDetailInfo::unsettargetRowNum()
{
    targetRowNumIsSet_ = false;
}

int64_t ContentCompareDetailInfo::getDifferenceRowNum() const
{
    return differenceRowNum_;
}

void ContentCompareDetailInfo::setDifferenceRowNum(int64_t value)
{
    differenceRowNum_ = value;
    differenceRowNumIsSet_ = true;
}

bool ContentCompareDetailInfo::differenceRowNumIsSet() const
{
    return differenceRowNumIsSet_;
}

void ContentCompareDetailInfo::unsetdifferenceRowNum()
{
    differenceRowNumIsSet_ = false;
}

bool ContentCompareDetailInfo::isLineCompareResult() const
{
    return lineCompareResult_;
}

void ContentCompareDetailInfo::setLineCompareResult(bool value)
{
    lineCompareResult_ = value;
    lineCompareResultIsSet_ = true;
}

bool ContentCompareDetailInfo::lineCompareResultIsSet() const
{
    return lineCompareResultIsSet_;
}

void ContentCompareDetailInfo::unsetlineCompareResult()
{
    lineCompareResultIsSet_ = false;
}

bool ContentCompareDetailInfo::isContentCompareResult() const
{
    return contentCompareResult_;
}

void ContentCompareDetailInfo::setContentCompareResult(bool value)
{
    contentCompareResult_ = value;
    contentCompareResultIsSet_ = true;
}

bool ContentCompareDetailInfo::contentCompareResultIsSet() const
{
    return contentCompareResultIsSet_;
}

void ContentCompareDetailInfo::unsetcontentCompareResult()
{
    contentCompareResultIsSet_ = false;
}

std::string ContentCompareDetailInfo::getMessage() const
{
    return message_;
}

void ContentCompareDetailInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ContentCompareDetailInfo::messageIsSet() const
{
    return messageIsSet_;
}

void ContentCompareDetailInfo::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


