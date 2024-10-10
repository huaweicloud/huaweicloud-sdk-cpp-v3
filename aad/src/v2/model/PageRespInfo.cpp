

#include "huaweicloud/aad/v2/model/PageRespInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




PageRespInfo::PageRespInfo()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

PageRespInfo::~PageRespInfo() = default;

void PageRespInfo::validate()
{
}

web::json::value PageRespInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("content_type")] = ModelBase::toJson(contentType_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool PageRespInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
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


std::string PageRespInfo::getContentType() const
{
    return contentType_;
}

void PageRespInfo::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool PageRespInfo::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void PageRespInfo::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string PageRespInfo::getContent() const
{
    return content_;
}

void PageRespInfo::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool PageRespInfo::contentIsSet() const
{
    return contentIsSet_;
}

void PageRespInfo::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


