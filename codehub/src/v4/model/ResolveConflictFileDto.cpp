

#include "huaweicloud/codehub/v4/model/ResolveConflictFileDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ResolveConflictFileDto::ResolveConflictFileDto()
{
    oldPath_ = "";
    oldPathIsSet_ = false;
    newPath_ = "";
    newPathIsSet_ = false;
    sectionsIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

ResolveConflictFileDto::~ResolveConflictFileDto() = default;

void ResolveConflictFileDto::validate()
{
}

web::json::value ResolveConflictFileDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oldPathIsSet_) {
        val[utility::conversions::to_string_t("old_path")] = ModelBase::toJson(oldPath_);
    }
    if(newPathIsSet_) {
        val[utility::conversions::to_string_t("new_path")] = ModelBase::toJson(newPath_);
    }
    if(sectionsIsSet_) {
        val[utility::conversions::to_string_t("sections")] = ModelBase::toJson(sections_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool ResolveConflictFileDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("old_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sections"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSections(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


std::string ResolveConflictFileDto::getOldPath() const
{
    return oldPath_;
}

void ResolveConflictFileDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool ResolveConflictFileDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void ResolveConflictFileDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string ResolveConflictFileDto::getNewPath() const
{
    return newPath_;
}

void ResolveConflictFileDto::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool ResolveConflictFileDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void ResolveConflictFileDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

Object ResolveConflictFileDto::getSections() const
{
    return sections_;
}

void ResolveConflictFileDto::setSections(const Object& value)
{
    sections_ = value;
    sectionsIsSet_ = true;
}

bool ResolveConflictFileDto::sectionsIsSet() const
{
    return sectionsIsSet_;
}

void ResolveConflictFileDto::unsetsections()
{
    sectionsIsSet_ = false;
}

std::string ResolveConflictFileDto::getContent() const
{
    return content_;
}

void ResolveConflictFileDto::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ResolveConflictFileDto::contentIsSet() const
{
    return contentIsSet_;
}

void ResolveConflictFileDto::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


