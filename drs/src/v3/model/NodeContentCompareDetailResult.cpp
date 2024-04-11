

#include "huaweicloud/drs/v3/model/NodeContentCompareDetailResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




NodeContentCompareDetailResult::NodeContentCompareDetailResult()
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
    compareLineConfigFilter_ = "";
    compareLineConfigFilterIsSet_ = false;
}

NodeContentCompareDetailResult::~NodeContentCompareDetailResult() = default;

void NodeContentCompareDetailResult::validate()
{
}

web::json::value NodeContentCompareDetailResult::toJson() const
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
    if(compareLineConfigFilterIsSet_) {
        val[utility::conversions::to_string_t("compare_line_config_filter")] = ModelBase::toJson(compareLineConfigFilter_);
    }

    return val;
}
bool NodeContentCompareDetailResult::fromJson(const web::json::value& val)
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


std::string NodeContentCompareDetailResult::getSourceDb() const
{
    return sourceDb_;
}

void NodeContentCompareDetailResult::setSourceDb(const std::string& value)
{
    sourceDb_ = value;
    sourceDbIsSet_ = true;
}

bool NodeContentCompareDetailResult::sourceDbIsSet() const
{
    return sourceDbIsSet_;
}

void NodeContentCompareDetailResult::unsetsourceDb()
{
    sourceDbIsSet_ = false;
}

std::string NodeContentCompareDetailResult::getTargetDb() const
{
    return targetDb_;
}

void NodeContentCompareDetailResult::setTargetDb(const std::string& value)
{
    targetDb_ = value;
    targetDbIsSet_ = true;
}

bool NodeContentCompareDetailResult::targetDbIsSet() const
{
    return targetDbIsSet_;
}

void NodeContentCompareDetailResult::unsettargetDb()
{
    targetDbIsSet_ = false;
}

std::string NodeContentCompareDetailResult::getSourceTableName() const
{
    return sourceTableName_;
}

void NodeContentCompareDetailResult::setSourceTableName(const std::string& value)
{
    sourceTableName_ = value;
    sourceTableNameIsSet_ = true;
}

bool NodeContentCompareDetailResult::sourceTableNameIsSet() const
{
    return sourceTableNameIsSet_;
}

void NodeContentCompareDetailResult::unsetsourceTableName()
{
    sourceTableNameIsSet_ = false;
}

std::string NodeContentCompareDetailResult::getTargetTableName() const
{
    return targetTableName_;
}

void NodeContentCompareDetailResult::setTargetTableName(const std::string& value)
{
    targetTableName_ = value;
    targetTableNameIsSet_ = true;
}

bool NodeContentCompareDetailResult::targetTableNameIsSet() const
{
    return targetTableNameIsSet_;
}

void NodeContentCompareDetailResult::unsettargetTableName()
{
    targetTableNameIsSet_ = false;
}

int64_t NodeContentCompareDetailResult::getSourceRowNum() const
{
    return sourceRowNum_;
}

void NodeContentCompareDetailResult::setSourceRowNum(int64_t value)
{
    sourceRowNum_ = value;
    sourceRowNumIsSet_ = true;
}

bool NodeContentCompareDetailResult::sourceRowNumIsSet() const
{
    return sourceRowNumIsSet_;
}

void NodeContentCompareDetailResult::unsetsourceRowNum()
{
    sourceRowNumIsSet_ = false;
}

int64_t NodeContentCompareDetailResult::getTargetRowNum() const
{
    return targetRowNum_;
}

void NodeContentCompareDetailResult::setTargetRowNum(int64_t value)
{
    targetRowNum_ = value;
    targetRowNumIsSet_ = true;
}

bool NodeContentCompareDetailResult::targetRowNumIsSet() const
{
    return targetRowNumIsSet_;
}

void NodeContentCompareDetailResult::unsettargetRowNum()
{
    targetRowNumIsSet_ = false;
}

int64_t NodeContentCompareDetailResult::getDifferenceRowNum() const
{
    return differenceRowNum_;
}

void NodeContentCompareDetailResult::setDifferenceRowNum(int64_t value)
{
    differenceRowNum_ = value;
    differenceRowNumIsSet_ = true;
}

bool NodeContentCompareDetailResult::differenceRowNumIsSet() const
{
    return differenceRowNumIsSet_;
}

void NodeContentCompareDetailResult::unsetdifferenceRowNum()
{
    differenceRowNumIsSet_ = false;
}

bool NodeContentCompareDetailResult::isLineCompareResult() const
{
    return lineCompareResult_;
}

void NodeContentCompareDetailResult::setLineCompareResult(bool value)
{
    lineCompareResult_ = value;
    lineCompareResultIsSet_ = true;
}

bool NodeContentCompareDetailResult::lineCompareResultIsSet() const
{
    return lineCompareResultIsSet_;
}

void NodeContentCompareDetailResult::unsetlineCompareResult()
{
    lineCompareResultIsSet_ = false;
}

bool NodeContentCompareDetailResult::isContentCompareResult() const
{
    return contentCompareResult_;
}

void NodeContentCompareDetailResult::setContentCompareResult(bool value)
{
    contentCompareResult_ = value;
    contentCompareResultIsSet_ = true;
}

bool NodeContentCompareDetailResult::contentCompareResultIsSet() const
{
    return contentCompareResultIsSet_;
}

void NodeContentCompareDetailResult::unsetcontentCompareResult()
{
    contentCompareResultIsSet_ = false;
}

std::string NodeContentCompareDetailResult::getMessage() const
{
    return message_;
}

void NodeContentCompareDetailResult::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool NodeContentCompareDetailResult::messageIsSet() const
{
    return messageIsSet_;
}

void NodeContentCompareDetailResult::unsetmessage()
{
    messageIsSet_ = false;
}

std::string NodeContentCompareDetailResult::getCompareLineConfigFilter() const
{
    return compareLineConfigFilter_;
}

void NodeContentCompareDetailResult::setCompareLineConfigFilter(const std::string& value)
{
    compareLineConfigFilter_ = value;
    compareLineConfigFilterIsSet_ = true;
}

bool NodeContentCompareDetailResult::compareLineConfigFilterIsSet() const
{
    return compareLineConfigFilterIsSet_;
}

void NodeContentCompareDetailResult::unsetcompareLineConfigFilter()
{
    compareLineConfigFilterIsSet_ = false;
}

}
}
}
}
}


