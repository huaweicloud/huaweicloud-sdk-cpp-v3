

#include "huaweicloud/lts/v2/model/ListLogStreamRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogStreamRequest::ListLogStreamRequest()
{
    logGroupId_ = "";
    logGroupIdIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListLogStreamRequest::~ListLogStreamRequest() = default;

void ListLogStreamRequest::validate()
{
}

web::json::value ListLogStreamRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupIdIsSet_) {
        val[utility::conversions::to_string_t("log_group_id")] = ModelBase::toJson(logGroupId_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool ListLogStreamRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}

std::string ListLogStreamRequest::getLogGroupId() const
{
    return logGroupId_;
}

void ListLogStreamRequest::setLogGroupId(const std::string& value)
{
    logGroupId_ = value;
    logGroupIdIsSet_ = true;
}

bool ListLogStreamRequest::logGroupIdIsSet() const
{
    return logGroupIdIsSet_;
}

void ListLogStreamRequest::unsetlogGroupId()
{
    logGroupIdIsSet_ = false;
}

std::string ListLogStreamRequest::getTag() const
{
    return tag_;
}

void ListLogStreamRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListLogStreamRequest::tagIsSet() const
{
    return tagIsSet_;
}

void ListLogStreamRequest::unsettag()
{
    tagIsSet_ = false;
}

std::string ListLogStreamRequest::getContentType() const
{
    return contentType_;
}

void ListLogStreamRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListLogStreamRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListLogStreamRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


