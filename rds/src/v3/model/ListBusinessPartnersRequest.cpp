

#include "huaweicloud/rds/v3/model/ListBusinessPartnersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListBusinessPartnersRequest::ListBusinessPartnersRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListBusinessPartnersRequest::~ListBusinessPartnersRequest() = default;

void ListBusinessPartnersRequest::validate()
{
}

web::json::value ListBusinessPartnersRequest::toJson() const
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
bool ListBusinessPartnersRequest::fromJson(const web::json::value& val)
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


std::string ListBusinessPartnersRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListBusinessPartnersRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListBusinessPartnersRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListBusinessPartnersRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListBusinessPartnersRequest::getOffset() const
{
    return offset_;
}

void ListBusinessPartnersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBusinessPartnersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBusinessPartnersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBusinessPartnersRequest::getLimit() const
{
    return limit_;
}

void ListBusinessPartnersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBusinessPartnersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBusinessPartnersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


