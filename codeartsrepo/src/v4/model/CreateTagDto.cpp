

#include "huaweicloud/codeartsrepo/v4/model/CreateTagDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateTagDto::CreateTagDto()
{
    tagName_ = "";
    tagNameIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

CreateTagDto::~CreateTagDto() = default;

void CreateTagDto::validate()
{
}

web::json::value CreateTagDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagNameIsSet_) {
        val[utility::conversions::to_string_t("tag_name")] = ModelBase::toJson(tagName_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool CreateTagDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string CreateTagDto::getTagName() const
{
    return tagName_;
}

void CreateTagDto::setTagName(const std::string& value)
{
    tagName_ = value;
    tagNameIsSet_ = true;
}

bool CreateTagDto::tagNameIsSet() const
{
    return tagNameIsSet_;
}

void CreateTagDto::unsettagName()
{
    tagNameIsSet_ = false;
}

std::string CreateTagDto::getRef() const
{
    return ref_;
}

void CreateTagDto::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool CreateTagDto::refIsSet() const
{
    return refIsSet_;
}

void CreateTagDto::unsetref()
{
    refIsSet_ = false;
}

std::string CreateTagDto::getMessage() const
{
    return message_;
}

void CreateTagDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateTagDto::messageIsSet() const
{
    return messageIsSet_;
}

void CreateTagDto::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


