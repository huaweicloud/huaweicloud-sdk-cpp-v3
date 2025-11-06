

#include "huaweicloud/codeartsrepo/v4/model/PositionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PositionDto::PositionDto()
{
    baseSha_ = "";
    baseShaIsSet_ = false;
    startSha_ = "";
    startShaIsSet_ = false;
    headSha_ = "";
    headShaIsSet_ = false;
    oldPath_ = "";
    oldPathIsSet_ = false;
    newPath_ = "";
    newPathIsSet_ = false;
    positionType_ = "";
    positionTypeIsSet_ = false;
    oldLine_ = 0;
    oldLineIsSet_ = false;
    newLine_ = 0;
    newLineIsSet_ = false;
}

PositionDto::~PositionDto() = default;

void PositionDto::validate()
{
}

web::json::value PositionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baseShaIsSet_) {
        val[utility::conversions::to_string_t("base_sha")] = ModelBase::toJson(baseSha_);
    }
    if(startShaIsSet_) {
        val[utility::conversions::to_string_t("start_sha")] = ModelBase::toJson(startSha_);
    }
    if(headShaIsSet_) {
        val[utility::conversions::to_string_t("head_sha")] = ModelBase::toJson(headSha_);
    }
    if(oldPathIsSet_) {
        val[utility::conversions::to_string_t("old_path")] = ModelBase::toJson(oldPath_);
    }
    if(newPathIsSet_) {
        val[utility::conversions::to_string_t("new_path")] = ModelBase::toJson(newPath_);
    }
    if(positionTypeIsSet_) {
        val[utility::conversions::to_string_t("position_type")] = ModelBase::toJson(positionType_);
    }
    if(oldLineIsSet_) {
        val[utility::conversions::to_string_t("old_line")] = ModelBase::toJson(oldLine_);
    }
    if(newLineIsSet_) {
        val[utility::conversions::to_string_t("new_line")] = ModelBase::toJson(newLine_);
    }

    return val;
}
bool PositionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("base_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("head_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("head_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeadSha(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("position_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPositionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_line"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_line"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewLine(refVal);
        }
    }
    return ok;
}


std::string PositionDto::getBaseSha() const
{
    return baseSha_;
}

void PositionDto::setBaseSha(const std::string& value)
{
    baseSha_ = value;
    baseShaIsSet_ = true;
}

bool PositionDto::baseShaIsSet() const
{
    return baseShaIsSet_;
}

void PositionDto::unsetbaseSha()
{
    baseShaIsSet_ = false;
}

std::string PositionDto::getStartSha() const
{
    return startSha_;
}

void PositionDto::setStartSha(const std::string& value)
{
    startSha_ = value;
    startShaIsSet_ = true;
}

bool PositionDto::startShaIsSet() const
{
    return startShaIsSet_;
}

void PositionDto::unsetstartSha()
{
    startShaIsSet_ = false;
}

std::string PositionDto::getHeadSha() const
{
    return headSha_;
}

void PositionDto::setHeadSha(const std::string& value)
{
    headSha_ = value;
    headShaIsSet_ = true;
}

bool PositionDto::headShaIsSet() const
{
    return headShaIsSet_;
}

void PositionDto::unsetheadSha()
{
    headShaIsSet_ = false;
}

std::string PositionDto::getOldPath() const
{
    return oldPath_;
}

void PositionDto::setOldPath(const std::string& value)
{
    oldPath_ = value;
    oldPathIsSet_ = true;
}

bool PositionDto::oldPathIsSet() const
{
    return oldPathIsSet_;
}

void PositionDto::unsetoldPath()
{
    oldPathIsSet_ = false;
}

std::string PositionDto::getNewPath() const
{
    return newPath_;
}

void PositionDto::setNewPath(const std::string& value)
{
    newPath_ = value;
    newPathIsSet_ = true;
}

bool PositionDto::newPathIsSet() const
{
    return newPathIsSet_;
}

void PositionDto::unsetnewPath()
{
    newPathIsSet_ = false;
}

std::string PositionDto::getPositionType() const
{
    return positionType_;
}

void PositionDto::setPositionType(const std::string& value)
{
    positionType_ = value;
    positionTypeIsSet_ = true;
}

bool PositionDto::positionTypeIsSet() const
{
    return positionTypeIsSet_;
}

void PositionDto::unsetpositionType()
{
    positionTypeIsSet_ = false;
}

int32_t PositionDto::getOldLine() const
{
    return oldLine_;
}

void PositionDto::setOldLine(int32_t value)
{
    oldLine_ = value;
    oldLineIsSet_ = true;
}

bool PositionDto::oldLineIsSet() const
{
    return oldLineIsSet_;
}

void PositionDto::unsetoldLine()
{
    oldLineIsSet_ = false;
}

int32_t PositionDto::getNewLine() const
{
    return newLine_;
}

void PositionDto::setNewLine(int32_t value)
{
    newLine_ = value;
    newLineIsSet_ = true;
}

bool PositionDto::newLineIsSet() const
{
    return newLineIsSet_;
}

void PositionDto::unsetnewLine()
{
    newLineIsSet_ = false;
}

}
}
}
}
}


