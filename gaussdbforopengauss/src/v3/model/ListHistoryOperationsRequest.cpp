

#include "huaweicloud/gaussdbforopengauss/v3/model/ListHistoryOperationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListHistoryOperationsRequest::ListHistoryOperationsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configId_ = "";
    configIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListHistoryOperationsRequest::~ListHistoryOperationsRequest() = default;

void ListHistoryOperationsRequest::validate()
{
}

web::json::value ListHistoryOperationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListHistoryOperationsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
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


std::string ListHistoryOperationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListHistoryOperationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListHistoryOperationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListHistoryOperationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListHistoryOperationsRequest::getConfigId() const
{
    return configId_;
}

void ListHistoryOperationsRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ListHistoryOperationsRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ListHistoryOperationsRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

int32_t ListHistoryOperationsRequest::getOffset() const
{
    return offset_;
}

void ListHistoryOperationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHistoryOperationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHistoryOperationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHistoryOperationsRequest::getLimit() const
{
    return limit_;
}

void ListHistoryOperationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHistoryOperationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHistoryOperationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


