

#include "huaweicloud/cfw/v1/model/IpsContent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




IpsContent::IpsContent()
{
    content_ = "";
    contentIsSet_ = false;
    depth_ = 0;
    depthIsSet_ = false;
    isHex_ = false;
    isHexIsSet_ = false;
    isIgnore_ = false;
    isIgnoreIsSet_ = false;
    isUri_ = false;
    isUriIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    relativePosition_ = 0;
    relativePositionIsSet_ = false;
}

IpsContent::~IpsContent() = default;

void IpsContent::validate()
{
}

web::json::value IpsContent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(depthIsSet_) {
        val[utility::conversions::to_string_t("depth")] = ModelBase::toJson(depth_);
    }
    if(isHexIsSet_) {
        val[utility::conversions::to_string_t("is_hex")] = ModelBase::toJson(isHex_);
    }
    if(isIgnoreIsSet_) {
        val[utility::conversions::to_string_t("is_ignore")] = ModelBase::toJson(isIgnore_);
    }
    if(isUriIsSet_) {
        val[utility::conversions::to_string_t("is_uri")] = ModelBase::toJson(isUri_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(relativePositionIsSet_) {
        val[utility::conversions::to_string_t("relative_position")] = ModelBase::toJson(relativePosition_);
    }

    return val;
}
bool IpsContent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("depth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_hex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_hex"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsHex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ignore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ignore"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIgnore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_uri"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relative_position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relative_position"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelativePosition(refVal);
        }
    }
    return ok;
}


std::string IpsContent::getContent() const
{
    return content_;
}

void IpsContent::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool IpsContent::contentIsSet() const
{
    return contentIsSet_;
}

void IpsContent::unsetcontent()
{
    contentIsSet_ = false;
}

int32_t IpsContent::getDepth() const
{
    return depth_;
}

void IpsContent::setDepth(int32_t value)
{
    depth_ = value;
    depthIsSet_ = true;
}

bool IpsContent::depthIsSet() const
{
    return depthIsSet_;
}

void IpsContent::unsetdepth()
{
    depthIsSet_ = false;
}

bool IpsContent::isIsHex() const
{
    return isHex_;
}

void IpsContent::setIsHex(bool value)
{
    isHex_ = value;
    isHexIsSet_ = true;
}

bool IpsContent::isHexIsSet() const
{
    return isHexIsSet_;
}

void IpsContent::unsetisHex()
{
    isHexIsSet_ = false;
}

bool IpsContent::isIsIgnore() const
{
    return isIgnore_;
}

void IpsContent::setIsIgnore(bool value)
{
    isIgnore_ = value;
    isIgnoreIsSet_ = true;
}

bool IpsContent::isIgnoreIsSet() const
{
    return isIgnoreIsSet_;
}

void IpsContent::unsetisIgnore()
{
    isIgnoreIsSet_ = false;
}

bool IpsContent::isIsUri() const
{
    return isUri_;
}

void IpsContent::setIsUri(bool value)
{
    isUri_ = value;
    isUriIsSet_ = true;
}

bool IpsContent::isUriIsSet() const
{
    return isUriIsSet_;
}

void IpsContent::unsetisUri()
{
    isUriIsSet_ = false;
}

int32_t IpsContent::getOffset() const
{
    return offset_;
}

void IpsContent::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool IpsContent::offsetIsSet() const
{
    return offsetIsSet_;
}

void IpsContent::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t IpsContent::getRelativePosition() const
{
    return relativePosition_;
}

void IpsContent::setRelativePosition(int32_t value)
{
    relativePosition_ = value;
    relativePositionIsSet_ = true;
}

bool IpsContent::relativePositionIsSet() const
{
    return relativePositionIsSet_;
}

void IpsContent::unsetrelativePosition()
{
    relativePositionIsSet_ = false;
}

}
}
}
}
}


