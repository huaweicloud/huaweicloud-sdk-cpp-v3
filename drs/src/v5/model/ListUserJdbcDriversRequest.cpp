

#include "huaweicloud/drs/v5/model/ListUserJdbcDriversRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListUserJdbcDriversRequest::ListUserJdbcDriversRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    driverType_ = "";
    driverTypeIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListUserJdbcDriversRequest::~ListUserJdbcDriversRequest() = default;

void ListUserJdbcDriversRequest::validate()
{
}

web::json::value ListUserJdbcDriversRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(driverTypeIsSet_) {
        val[utility::conversions::to_string_t("driver_type")] = ModelBase::toJson(driverType_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListUserJdbcDriversRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("driver_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driver_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDriverType(refVal);
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


int32_t ListUserJdbcDriversRequest::getLimit() const
{
    return limit_;
}

void ListUserJdbcDriversRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListUserJdbcDriversRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListUserJdbcDriversRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListUserJdbcDriversRequest::getOffset() const
{
    return offset_;
}

void ListUserJdbcDriversRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListUserJdbcDriversRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListUserJdbcDriversRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListUserJdbcDriversRequest::getDriverType() const
{
    return driverType_;
}

void ListUserJdbcDriversRequest::setDriverType(const std::string& value)
{
    driverType_ = value;
    driverTypeIsSet_ = true;
}

bool ListUserJdbcDriversRequest::driverTypeIsSet() const
{
    return driverTypeIsSet_;
}

void ListUserJdbcDriversRequest::unsetdriverType()
{
    driverTypeIsSet_ = false;
}

std::string ListUserJdbcDriversRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListUserJdbcDriversRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListUserJdbcDriversRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListUserJdbcDriversRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


