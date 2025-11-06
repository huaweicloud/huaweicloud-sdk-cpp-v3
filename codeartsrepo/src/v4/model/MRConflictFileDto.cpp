

#include "huaweicloud/codeartsrepo/v4/model/MRConflictFileDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MRConflictFileDto::MRConflictFileDto()
{
    oldPath_ = "";
    oldPathIsSet_ = false;
    newPath_ = "";
    newPathIsSet_ = false;
    blobIcon_ = "";
    blobIconIsSet_ = false;
    blobPath_ = "";
    blobPathIsSet_ = false;
    conflictType_ = "";
    conflictTypeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    contentPath_ = "";
    contentPathIsSet_ = false;
    sectionsIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
}

MRConflictFileDto::~MRConflictFileDto() = default;

void MRConflictFileDto::validate()
{
}

web::json::value MRConflictFileDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oldPathIsSet_) {
        val[utility::conversions::to_string_t("old_path")] = ModelBase::toJson(oldPath_);
    }
    if(newPathIsSet_) {
        val[utility::conversions::to_string_t("new_path")] = ModelBase::toJson(newPath_);
    }
    if(blobIconIsSet_) {
        val[utility::conversions::to_string_t("blob_icon")] = ModelBase::toJson(blobIcon_);
    }
    if(blobPathIsSet_) {
        val[utility::conversions::to_string_t("blob_path")] = ModelBase::toJson(blobPath_);
    }
    if(conflictTypeIsSet_) {
        val[utility::conversions::to_string_t("conflict_type")] = ModelBase::toJson(conflictType_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(contentPathIsSet_) {
        val[utility::conversions::to_string_t("content_path")] = ModelBase::toJson(contentPath_);
    }
    if(sectionsIsSet_) {
        val[utility::conversions::to_string_t("sections")] = ModelBase::toJson(sections_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }

    return val;
}
bool MRConflictFileDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("blob_icon"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_icon"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobIcon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blob_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlobPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conflict_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conflict_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConflictType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sections"));
        if(!fieldValue.is_null())
        {
            std::vector<ConflictSectionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSections(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    return ok;
}


std::string MRConflictFileDto::getOldPath() const
{
    return oldPath_;
}

void MRConflictFileDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool MRConflictFileDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void MRConflictFileDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string MRConflictFileDto::getNewPath() const
{
    return newPath_;
}

void MRConflictFileDto::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool MRConflictFileDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void MRConflictFileDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

std::string MRConflictFileDto::getBlobIcon() const
{
    return blobIcon_;
}

void MRConflictFileDto::setBlobIcon(const std::string& value)
{
    blobIcon_ = value;
    blobIconIsSet_ = true;
}

bool MRConflictFileDto::blobIconIsSet() const
{
    return blobIconIsSet_;
}

void MRConflictFileDto::unsetblobIcon()
{
    blobIconIsSet_ = false;
}

std::string MRConflictFileDto::getBlobPath() const
{
    return blobPath_;
}

void MRConflictFileDto::setBlobPath(const std::string& value)
{
    blobPath_ = value;
    blobPathIsSet_ = true;
}

bool MRConflictFileDto::blobPathIsSet() const
{
    return blobPathIsSet_;
}

void MRConflictFileDto::unsetblobPath()
{
    blobPathIsSet_ = false;
}

std::string MRConflictFileDto::getConflictType() const
{
    return conflictType_;
}

void MRConflictFileDto::setConflictType(const std::string& value)
{
    conflictType_ = value;
    conflictTypeIsSet_ = true;
}

bool MRConflictFileDto::conflictTypeIsSet() const
{
    return conflictTypeIsSet_;
}

void MRConflictFileDto::unsetconflictType()
{
    conflictTypeIsSet_ = false;
}

std::string MRConflictFileDto::getContent() const
{
    return content_;
}

void MRConflictFileDto::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool MRConflictFileDto::contentIsSet() const
{
    return contentIsSet_;
}

void MRConflictFileDto::unsetcontent()
{
    contentIsSet_ = false;
}

std::string MRConflictFileDto::getContentPath() const
{
    return contentPath_;
}

void MRConflictFileDto::setContentPath(const std::string& value)
{
    contentPath_ = value;
    contentPathIsSet_ = true;
}

bool MRConflictFileDto::contentPathIsSet() const
{
    return contentPathIsSet_;
}

void MRConflictFileDto::unsetcontentPath()
{
    contentPathIsSet_ = false;
}

std::vector<ConflictSectionDto>& MRConflictFileDto::getSections()
{
    return sections_;
}

void MRConflictFileDto::setSections(const std::vector<ConflictSectionDto>& value)
{
    sections_ = value;
    sectionsIsSet_ = true;
}

bool MRConflictFileDto::sectionsIsSet() const
{
    return sectionsIsSet_;
}

void MRConflictFileDto::unsetsections()
{
    sectionsIsSet_ = false;
}

std::string MRConflictFileDto::getType() const
{
    return type_;
}

void MRConflictFileDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MRConflictFileDto::typeIsSet() const
{
    return typeIsSet_;
}

void MRConflictFileDto::unsettype()
{
    typeIsSet_ = false;
}

std::string MRConflictFileDto::getErrorMessage() const
{
    return errorMessage_;
}

void MRConflictFileDto::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool MRConflictFileDto::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void MRConflictFileDto::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

}
}
}
}
}


