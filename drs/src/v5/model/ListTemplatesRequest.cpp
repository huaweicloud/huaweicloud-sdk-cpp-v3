

#include "huaweicloud/drs/v5/model/ListTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListTemplatesRequest::ListTemplatesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTemplatesRequest::~ListTemplatesRequest() = default;

void ListTemplatesRequest::validate()
{
}

web::json::value ListTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListTemplatesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListTemplatesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListTemplatesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListTemplatesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


