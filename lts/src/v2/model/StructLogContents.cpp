

#include "huaweicloud/lts/v2/model/StructLogContents.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




StructLogContents::StructLogContents()
{
    logContent_ = "";
    logContentIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

StructLogContents::~StructLogContents() = default;

void StructLogContents::validate()
{
}

web::json::value StructLogContents::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logContentIsSet_) {
        val[utility::conversions::to_string_t("log_content")] = ModelBase::toJson(logContent_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}

bool StructLogContents::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogContent(refVal);
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
    return ok;
}

std::string StructLogContents::getLogContent() const
{
    return logContent_;
}

void StructLogContents::setLogContent(const std::string& value)
{
    logContent_ = value;
    logContentIsSet_ = true;
}

bool StructLogContents::logContentIsSet() const
{
    return logContentIsSet_;
}

void StructLogContents::unsetlogContent()
{
    logContentIsSet_ = false;
}

std::string StructLogContents::getLineNum() const
{
    return lineNum_;
}

void StructLogContents::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool StructLogContents::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void StructLogContents::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


