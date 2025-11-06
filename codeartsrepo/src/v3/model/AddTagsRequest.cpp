

#include "huaweicloud/codeartsrepo/v3/model/AddTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddTagsRequest::AddTagsRequest()
{
    tagName_ = "";
    tagNameIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

AddTagsRequest::~AddTagsRequest() = default;

void AddTagsRequest::validate()
{
}

web::json::value AddTagsRequest::toJson() const
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
bool AddTagsRequest::fromJson(const web::json::value& val)
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


std::string AddTagsRequest::getTagName() const
{
    return tagName_;
}

void AddTagsRequest::setTagName(const std::string& value)
{
    tagName_ = value;
    tagNameIsSet_ = true;
}

bool AddTagsRequest::tagNameIsSet() const
{
    return tagNameIsSet_;
}

void AddTagsRequest::unsettagName()
{
    tagNameIsSet_ = false;
}

std::string AddTagsRequest::getRef() const
{
    return ref_;
}

void AddTagsRequest::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool AddTagsRequest::refIsSet() const
{
    return refIsSet_;
}

void AddTagsRequest::unsetref()
{
    refIsSet_ = false;
}

std::string AddTagsRequest::getMessage() const
{
    return message_;
}

void AddTagsRequest::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool AddTagsRequest::messageIsSet() const
{
    return messageIsSet_;
}

void AddTagsRequest::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


