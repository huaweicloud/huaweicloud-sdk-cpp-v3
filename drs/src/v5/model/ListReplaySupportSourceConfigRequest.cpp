

#include "huaweicloud/drs/v5/model/ListReplaySupportSourceConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListReplaySupportSourceConfigRequest::ListReplaySupportSourceConfigRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListReplaySupportSourceConfigRequest::~ListReplaySupportSourceConfigRequest() = default;

void ListReplaySupportSourceConfigRequest::validate()
{
}

web::json::value ListReplaySupportSourceConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListReplaySupportSourceConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


int32_t ListReplaySupportSourceConfigRequest::getOffset() const
{
    return offset_;
}

void ListReplaySupportSourceConfigRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReplaySupportSourceConfigRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReplaySupportSourceConfigRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListReplaySupportSourceConfigRequest::getLimit() const
{
    return limit_;
}

void ListReplaySupportSourceConfigRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReplaySupportSourceConfigRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListReplaySupportSourceConfigRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListReplaySupportSourceConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListReplaySupportSourceConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListReplaySupportSourceConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListReplaySupportSourceConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


