

#include "huaweicloud/gaussdbforopengauss/v3/model/ListApplicableInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListApplicableInstancesRequest::ListApplicableInstancesRequest()
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

ListApplicableInstancesRequest::~ListApplicableInstancesRequest() = default;

void ListApplicableInstancesRequest::validate()
{
}

web::json::value ListApplicableInstancesRequest::toJson() const
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
bool ListApplicableInstancesRequest::fromJson(const web::json::value& val)
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


std::string ListApplicableInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListApplicableInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListApplicableInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListApplicableInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListApplicableInstancesRequest::getConfigId() const
{
    return configId_;
}

void ListApplicableInstancesRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ListApplicableInstancesRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ListApplicableInstancesRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

int32_t ListApplicableInstancesRequest::getOffset() const
{
    return offset_;
}

void ListApplicableInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListApplicableInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListApplicableInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListApplicableInstancesRequest::getLimit() const
{
    return limit_;
}

void ListApplicableInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicableInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicableInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


