

#include "huaweicloud/codeartscheck/v2/model/DefectFragmentV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




DefectFragmentV2::DefectFragmentV2()
{
    lineNum_ = "";
    lineNumIsSet_ = false;
    lineContent_ = "";
    lineContentIsSet_ = false;
    startOffset_ = 0;
    startOffsetIsSet_ = false;
    endOffset_ = 0;
    endOffsetIsSet_ = false;
}

DefectFragmentV2::~DefectFragmentV2() = default;

void DefectFragmentV2::validate()
{
}

web::json::value DefectFragmentV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(lineContentIsSet_) {
        val[utility::conversions::to_string_t("line_content")] = ModelBase::toJson(lineContent_);
    }
    if(startOffsetIsSet_) {
        val[utility::conversions::to_string_t("start_offset")] = ModelBase::toJson(startOffset_);
    }
    if(endOffsetIsSet_) {
        val[utility::conversions::to_string_t("end_offset")] = ModelBase::toJson(endOffset_);
    }

    return val;
}
bool DefectFragmentV2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndOffset(refVal);
        }
    }
    return ok;
}


std::string DefectFragmentV2::getLineNum() const
{
    return lineNum_;
}

void DefectFragmentV2::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool DefectFragmentV2::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void DefectFragmentV2::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string DefectFragmentV2::getLineContent() const
{
    return lineContent_;
}

void DefectFragmentV2::setLineContent(const std::string& value)
{
    lineContent_ = value;
    lineContentIsSet_ = true;
}

bool DefectFragmentV2::lineContentIsSet() const
{
    return lineContentIsSet_;
}

void DefectFragmentV2::unsetlineContent()
{
    lineContentIsSet_ = false;
}

int32_t DefectFragmentV2::getStartOffset() const
{
    return startOffset_;
}

void DefectFragmentV2::setStartOffset(int32_t value)
{
    startOffset_ = value;
    startOffsetIsSet_ = true;
}

bool DefectFragmentV2::startOffsetIsSet() const
{
    return startOffsetIsSet_;
}

void DefectFragmentV2::unsetstartOffset()
{
    startOffsetIsSet_ = false;
}

int32_t DefectFragmentV2::getEndOffset() const
{
    return endOffset_;
}

void DefectFragmentV2::setEndOffset(int32_t value)
{
    endOffset_ = value;
    endOffsetIsSet_ = true;
}

bool DefectFragmentV2::endOffsetIsSet() const
{
    return endOffsetIsSet_;
}

void DefectFragmentV2::unsetendOffset()
{
    endOffsetIsSet_ = false;
}

}
}
}
}
}


