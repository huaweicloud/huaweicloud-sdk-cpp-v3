

#include "huaweicloud/codehub/v4/model/CommentPathDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CommentPathDto::CommentPathDto()
{
    newIsSet_ = false;
    oldIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
}

CommentPathDto::~CommentPathDto() = default;

void CommentPathDto::validate()
{
}

web::json::value CommentPathDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newIsSet_) {
        val[utility::conversions::to_string_t("new")] = ModelBase::toJson(new_);
    }
    if(oldIsSet_) {
        val[utility::conversions::to_string_t("old")] = ModelBase::toJson(old_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }

    return val;
}
bool CommentPathDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new"));
        if(!fieldValue.is_null())
        {
            std::vector<LineDiscussionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old"));
        if(!fieldValue.is_null())
        {
            std::vector<LineDiscussionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOld(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    return ok;
}


std::vector<LineDiscussionDto>& CommentPathDto::getNew()
{
    return new_;
}

void CommentPathDto::setNew(const std::vector<LineDiscussionDto>& value)
{
    new_ = value;
    newIsSet_ = true;
}

bool CommentPathDto::newIsSet() const
{
    return newIsSet_;
}

void CommentPathDto::unsetnew()
{
    newIsSet_ = false;
}

std::vector<LineDiscussionDto>& CommentPathDto::getOld()
{
    return old_;
}

void CommentPathDto::setOld(const std::vector<LineDiscussionDto>& value)
{
    old_ = value;
    oldIsSet_ = true;
}

bool CommentPathDto::oldIsSet() const
{
    return oldIsSet_;
}

void CommentPathDto::unsetold()
{
    oldIsSet_ = false;
}

std::string CommentPathDto::getPath() const
{
    return path_;
}

void CommentPathDto::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool CommentPathDto::pathIsSet() const
{
    return pathIsSet_;
}

void CommentPathDto::unsetpath()
{
    pathIsSet_ = false;
}

}
}
}
}
}


