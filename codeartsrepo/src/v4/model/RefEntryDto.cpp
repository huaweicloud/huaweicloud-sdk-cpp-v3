

#include "huaweicloud/codeartsrepo/v4/model/RefEntryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RefEntryDto::RefEntryDto()
{
    tagName_ = "";
    tagNameIsSet_ = false;
    filePath_ = "";
    filePathIsSet_ = false;
    blob_ = "";
    blobIsSet_ = false;
    lineImage_ = "";
    lineImageIsSet_ = false;
    lineNumber_ = 0;
    lineNumberIsSet_ = false;
    syntaxType_ = "";
    syntaxTypeIsSet_ = false;
    revision_ = "";
    revisionIsSet_ = false;
    extend_ = "";
    extendIsSet_ = false;
}

RefEntryDto::~RefEntryDto() = default;

void RefEntryDto::validate()
{
}

web::json::value RefEntryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagNameIsSet_) {
        val[utility::conversions::to_string_t("tag_name")] = ModelBase::toJson(tagName_);
    }
    if(filePathIsSet_) {
        val[utility::conversions::to_string_t("file_path")] = ModelBase::toJson(filePath_);
    }
    if(blobIsSet_) {
        val[utility::conversions::to_string_t("blob")] = ModelBase::toJson(blob_);
    }
    if(lineImageIsSet_) {
        val[utility::conversions::to_string_t("line_image")] = ModelBase::toJson(lineImage_);
    }
    if(lineNumberIsSet_) {
        val[utility::conversions::to_string_t("line_number")] = ModelBase::toJson(lineNumber_);
    }
    if(syntaxTypeIsSet_) {
        val[utility::conversions::to_string_t("syntax_type")] = ModelBase::toJson(syntaxType_);
    }
    if(revisionIsSet_) {
        val[utility::conversions::to_string_t("revision")] = ModelBase::toJson(revision_);
    }
    if(extendIsSet_) {
        val[utility::conversions::to_string_t("extend")] = ModelBase::toJson(extend_);
    }

    return val;
}
bool RefEntryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blob"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blob"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlob(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("line_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("syntax_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("syntax_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyntaxType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("revision"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revision"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRevision(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtend(refVal);
        }
    }
    return ok;
}


std::string RefEntryDto::getTagName() const
{
    return tagName_;
}

void RefEntryDto::setTagName(const std::string& value)
{
    tagName_ = value;
    tagNameIsSet_ = true;
}

bool RefEntryDto::tagNameIsSet() const
{
    return tagNameIsSet_;
}

void RefEntryDto::unsettagName()
{
    tagNameIsSet_ = false;
}

std::string RefEntryDto::getFilePath() const
{
    return filePath_;
}

void RefEntryDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool RefEntryDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void RefEntryDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string RefEntryDto::getBlob() const
{
    return blob_;
}

void RefEntryDto::setBlob(const std::string& value)
{
    blob_ = value;
    blobIsSet_ = true;
}

bool RefEntryDto::blobIsSet() const
{
    return blobIsSet_;
}

void RefEntryDto::unsetblob()
{
    blobIsSet_ = false;
}

std::string RefEntryDto::getLineImage() const
{
    return lineImage_;
}

void RefEntryDto::setLineImage(const std::string& value)
{
    lineImage_ = value;
    lineImageIsSet_ = true;
}

bool RefEntryDto::lineImageIsSet() const
{
    return lineImageIsSet_;
}

void RefEntryDto::unsetlineImage()
{
    lineImageIsSet_ = false;
}

int32_t RefEntryDto::getLineNumber() const
{
    return lineNumber_;
}

void RefEntryDto::setLineNumber(int32_t value)
{
    lineNumber_ = value;
    lineNumberIsSet_ = true;
}

bool RefEntryDto::lineNumberIsSet() const
{
    return lineNumberIsSet_;
}

void RefEntryDto::unsetlineNumber()
{
    lineNumberIsSet_ = false;
}

std::string RefEntryDto::getSyntaxType() const
{
    return syntaxType_;
}

void RefEntryDto::setSyntaxType(const std::string& value)
{
    syntaxType_ = value;
    syntaxTypeIsSet_ = true;
}

bool RefEntryDto::syntaxTypeIsSet() const
{
    return syntaxTypeIsSet_;
}

void RefEntryDto::unsetsyntaxType()
{
    syntaxTypeIsSet_ = false;
}

std::string RefEntryDto::getRevision() const
{
    return revision_;
}

void RefEntryDto::setRevision(const std::string& value)
{
    revision_ = value;
    revisionIsSet_ = true;
}

bool RefEntryDto::revisionIsSet() const
{
    return revisionIsSet_;
}

void RefEntryDto::unsetrevision()
{
    revisionIsSet_ = false;
}

std::string RefEntryDto::getExtend() const
{
    return extend_;
}

void RefEntryDto::setExtend(const std::string& value)
{
    extend_ = value;
    extendIsSet_ = true;
}

bool RefEntryDto::extendIsSet() const
{
    return extendIsSet_;
}

void RefEntryDto::unsetextend()
{
    extendIsSet_ = false;
}

}
}
}
}
}


