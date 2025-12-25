

#include "huaweicloud/codeartsartifact/v2/model/ShowFileTreeResult_children.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowFileTreeResult_children::ShowFileTreeResult_children()
{
    name_ = "";
    nameIsSet_ = false;
    uri_ = "";
    uriIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    modified_ = "";
    modifiedIsSet_ = false;
    folder_ = false;
    folderIsSet_ = false;
    modifiedBy_ = "";
    modifiedByIsSet_ = false;
    hasChild_ = false;
    hasChildIsSet_ = false;
}

ShowFileTreeResult_children::~ShowFileTreeResult_children() = default;

void ShowFileTreeResult_children::validate()
{
}

web::json::value ShowFileTreeResult_children::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(modifiedIsSet_) {
        val[utility::conversions::to_string_t("modified")] = ModelBase::toJson(modified_);
    }
    if(folderIsSet_) {
        val[utility::conversions::to_string_t("folder")] = ModelBase::toJson(folder_);
    }
    if(modifiedByIsSet_) {
        val[utility::conversions::to_string_t("modified_by")] = ModelBase::toJson(modifiedBy_);
    }
    if(hasChildIsSet_) {
        val[utility::conversions::to_string_t("has_child")] = ModelBase::toJson(hasChild_);
    }

    return val;
}
bool ShowFileTreeResult_children::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("folder"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("folder"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFolder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modified_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modified_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifiedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_child"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_child"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasChild(refVal);
        }
    }
    return ok;
}


std::string ShowFileTreeResult_children::getName() const
{
    return name_;
}

void ShowFileTreeResult_children::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowFileTreeResult_children::nameIsSet() const
{
    return nameIsSet_;
}

void ShowFileTreeResult_children::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowFileTreeResult_children::getUri() const
{
    return uri_;
}

void ShowFileTreeResult_children::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool ShowFileTreeResult_children::uriIsSet() const
{
    return uriIsSet_;
}

void ShowFileTreeResult_children::unseturi()
{
    uriIsSet_ = false;
}

std::string ShowFileTreeResult_children::getPath() const
{
    return path_;
}

void ShowFileTreeResult_children::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ShowFileTreeResult_children::pathIsSet() const
{
    return pathIsSet_;
}

void ShowFileTreeResult_children::unsetpath()
{
    pathIsSet_ = false;
}

std::string ShowFileTreeResult_children::getModified() const
{
    return modified_;
}

void ShowFileTreeResult_children::setModified(const std::string& value)
{
    modified_ = value;
    modifiedIsSet_ = true;
}

bool ShowFileTreeResult_children::modifiedIsSet() const
{
    return modifiedIsSet_;
}

void ShowFileTreeResult_children::unsetmodified()
{
    modifiedIsSet_ = false;
}

bool ShowFileTreeResult_children::isFolder() const
{
    return folder_;
}

void ShowFileTreeResult_children::setFolder(bool value)
{
    folder_ = value;
    folderIsSet_ = true;
}

bool ShowFileTreeResult_children::folderIsSet() const
{
    return folderIsSet_;
}

void ShowFileTreeResult_children::unsetfolder()
{
    folderIsSet_ = false;
}

std::string ShowFileTreeResult_children::getModifiedBy() const
{
    return modifiedBy_;
}

void ShowFileTreeResult_children::setModifiedBy(const std::string& value)
{
    modifiedBy_ = value;
    modifiedByIsSet_ = true;
}

bool ShowFileTreeResult_children::modifiedByIsSet() const
{
    return modifiedByIsSet_;
}

void ShowFileTreeResult_children::unsetmodifiedBy()
{
    modifiedByIsSet_ = false;
}

bool ShowFileTreeResult_children::isHasChild() const
{
    return hasChild_;
}

void ShowFileTreeResult_children::setHasChild(bool value)
{
    hasChild_ = value;
    hasChildIsSet_ = true;
}

bool ShowFileTreeResult_children::hasChildIsSet() const
{
    return hasChildIsSet_;
}

void ShowFileTreeResult_children::unsethasChild()
{
    hasChildIsSet_ = false;
}

}
}
}
}
}


