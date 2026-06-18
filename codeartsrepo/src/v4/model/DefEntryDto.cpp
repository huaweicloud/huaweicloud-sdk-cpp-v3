

#include "huaweicloud/codeartsrepo/v4/model/DefEntryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DefEntryDto::DefEntryDto()
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
    range_ = "";
    rangeIsSet_ = false;
    syntaxType_ = "";
    syntaxTypeIsSet_ = false;
    revision_ = "";
    revisionIsSet_ = false;
    extend_ = "";
    extendIsSet_ = false;
}

DefEntryDto::~DefEntryDto() = default;

void DefEntryDto::validate()
{
}

web::json::value DefEntryDto::toJson() const
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
    if(rangeIsSet_) {
        val[utility::conversions::to_string_t("range")] = ModelBase::toJson(range_);
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
bool DefEntryDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRange(refVal);
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


std::string DefEntryDto::getTagName() const
{
    return tagName_;
}

void DefEntryDto::setTagName(const std::string& value)
{
    tagName_ = value;
    tagNameIsSet_ = true;
}

bool DefEntryDto::tagNameIsSet() const
{
    return tagNameIsSet_;
}

void DefEntryDto::unsettagName()
{
    tagNameIsSet_ = false;
}

std::string DefEntryDto::getFilePath() const
{
    return filePath_;
}

void DefEntryDto::setFilePath(const std::string& value)
{
    filePath_ = value;
    filePathIsSet_ = true;
}

bool DefEntryDto::filePathIsSet() const
{
    return filePathIsSet_;
}

void DefEntryDto::unsetfilePath()
{
    filePathIsSet_ = false;
}

std::string DefEntryDto::getBlob() const
{
    return blob_;
}

void DefEntryDto::setBlob(const std::string& value)
{
    blob_ = value;
    blobIsSet_ = true;
}

bool DefEntryDto::blobIsSet() const
{
    return blobIsSet_;
}

void DefEntryDto::unsetblob()
{
    blobIsSet_ = false;
}

std::string DefEntryDto::getLineImage() const
{
    return lineImage_;
}

void DefEntryDto::setLineImage(const std::string& value)
{
    lineImage_ = value;
    lineImageIsSet_ = true;
}

bool DefEntryDto::lineImageIsSet() const
{
    return lineImageIsSet_;
}

void DefEntryDto::unsetlineImage()
{
    lineImageIsSet_ = false;
}

int32_t DefEntryDto::getLineNumber() const
{
    return lineNumber_;
}

void DefEntryDto::setLineNumber(int32_t value)
{
    lineNumber_ = value;
    lineNumberIsSet_ = true;
}

bool DefEntryDto::lineNumberIsSet() const
{
    return lineNumberIsSet_;
}

void DefEntryDto::unsetlineNumber()
{
    lineNumberIsSet_ = false;
}

std::string DefEntryDto::getRange() const
{
    return range_;
}

void DefEntryDto::setRange(const std::string& value)
{
    range_ = value;
    rangeIsSet_ = true;
}

bool DefEntryDto::rangeIsSet() const
{
    return rangeIsSet_;
}

void DefEntryDto::unsetrange()
{
    rangeIsSet_ = false;
}

std::string DefEntryDto::getSyntaxType() const
{
    return syntaxType_;
}

void DefEntryDto::setSyntaxType(const std::string& value)
{
    syntaxType_ = value;
    syntaxTypeIsSet_ = true;
}

bool DefEntryDto::syntaxTypeIsSet() const
{
    return syntaxTypeIsSet_;
}

void DefEntryDto::unsetsyntaxType()
{
    syntaxTypeIsSet_ = false;
}

std::string DefEntryDto::getRevision() const
{
    return revision_;
}

void DefEntryDto::setRevision(const std::string& value)
{
    revision_ = value;
    revisionIsSet_ = true;
}

bool DefEntryDto::revisionIsSet() const
{
    return revisionIsSet_;
}

void DefEntryDto::unsetrevision()
{
    revisionIsSet_ = false;
}

std::string DefEntryDto::getExtend() const
{
    return extend_;
}

void DefEntryDto::setExtend(const std::string& value)
{
    extend_ = value;
    extendIsSet_ = true;
}

bool DefEntryDto::extendIsSet() const
{
    return extendIsSet_;
}

void DefEntryDto::unsetextend()
{
    extendIsSet_ = false;
}

}
}
}
}
}


