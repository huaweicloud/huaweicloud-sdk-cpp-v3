

#include "huaweicloud/lts/v2/model/LogContents.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




LogContents::LogContents()
{
    content_ = "";
    contentIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    labelsIsSet_ = false;
}

LogContents::~LogContents() = default;

void LogContents::validate()
{
}

web::json::value LogContents::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }

    return val;
}

bool LogContents::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    return ok;
}


std::string LogContents::getContent() const
{
    return content_;
}

void LogContents::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool LogContents::contentIsSet() const
{
    return contentIsSet_;
}

void LogContents::unsetcontent()
{
    contentIsSet_ = false;
}

std::string LogContents::getLineNum() const
{
    return lineNum_;
}

void LogContents::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool LogContents::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void LogContents::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::map<std::string, std::string>& LogContents::getLabels()
{
    return labels_;
}

void LogContents::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool LogContents::labelsIsSet() const
{
    return labelsIsSet_;
}

void LogContents::unsetlabels()
{
    labelsIsSet_ = false;
}

}
}
}
}
}


