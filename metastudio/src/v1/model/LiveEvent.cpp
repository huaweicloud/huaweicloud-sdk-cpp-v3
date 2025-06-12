

#include "huaweicloud/metastudio/v1/model/LiveEvent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveEvent::LiveEvent()
{
    timestamp_ = 0L;
    timestampIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

LiveEvent::~LiveEvent() = default;

void LiveEvent::validate()
{
}

web::json::value LiveEvent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool LiveEvent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


int64_t LiveEvent::getTimestamp() const
{
    return timestamp_;
}

void LiveEvent::setTimestamp(int64_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool LiveEvent::timestampIsSet() const
{
    return timestampIsSet_;
}

void LiveEvent::unsettimestamp()
{
    timestampIsSet_ = false;
}

int32_t LiveEvent::getType() const
{
    return type_;
}

void LiveEvent::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool LiveEvent::typeIsSet() const
{
    return typeIsSet_;
}

void LiveEvent::unsettype()
{
    typeIsSet_ = false;
}

std::string LiveEvent::getContent() const
{
    return content_;
}

void LiveEvent::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool LiveEvent::contentIsSet() const
{
    return contentIsSet_;
}

void LiveEvent::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


