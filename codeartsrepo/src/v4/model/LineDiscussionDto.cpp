

#include "huaweicloud/codeartsrepo/v4/model/LineDiscussionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




LineDiscussionDto::LineDiscussionDto()
{
    discussionsIsSet_ = false;
    line_ = 0;
    lineIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

LineDiscussionDto::~LineDiscussionDto() = default;

void LineDiscussionDto::validate()
{
}

web::json::value LineDiscussionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(discussionsIsSet_) {
        val[utility::conversions::to_string_t("discussions")] = ModelBase::toJson(discussions_);
    }
    if(lineIsSet_) {
        val[utility::conversions::to_string_t("line")] = ModelBase::toJson(line_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool LineDiscussionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("discussions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discussions"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestBasicDiscussionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscussions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::vector<MergeRequestBasicDiscussionDto>& LineDiscussionDto::getDiscussions()
{
    return discussions_;
}

void LineDiscussionDto::setDiscussions(const std::vector<MergeRequestBasicDiscussionDto>& value)
{
    discussions_ = value;
    discussionsIsSet_ = true;
}

bool LineDiscussionDto::discussionsIsSet() const
{
    return discussionsIsSet_;
}

void LineDiscussionDto::unsetdiscussions()
{
    discussionsIsSet_ = false;
}

int32_t LineDiscussionDto::getLine() const
{
    return line_;
}

void LineDiscussionDto::setLine(int32_t value)
{
    line_ = value;
    lineIsSet_ = true;
}

bool LineDiscussionDto::lineIsSet() const
{
    return lineIsSet_;
}

void LineDiscussionDto::unsetline()
{
    lineIsSet_ = false;
}

std::string LineDiscussionDto::getType() const
{
    return type_;
}

void LineDiscussionDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LineDiscussionDto::typeIsSet() const
{
    return typeIsSet_;
}

void LineDiscussionDto::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


