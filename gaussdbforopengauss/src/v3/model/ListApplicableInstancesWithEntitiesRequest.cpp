

#include "huaweicloud/gaussdbforopengauss/v3/model/ListApplicableInstancesWithEntitiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListApplicableInstancesWithEntitiesRequest::ListApplicableInstancesWithEntitiesRequest()
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

ListApplicableInstancesWithEntitiesRequest::~ListApplicableInstancesWithEntitiesRequest() = default;

void ListApplicableInstancesWithEntitiesRequest::validate()
{
}

web::json::value ListApplicableInstancesWithEntitiesRequest::toJson() const
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
bool ListApplicableInstancesWithEntitiesRequest::fromJson(const web::json::value& val)
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


std::string ListApplicableInstancesWithEntitiesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListApplicableInstancesWithEntitiesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListApplicableInstancesWithEntitiesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListApplicableInstancesWithEntitiesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListApplicableInstancesWithEntitiesRequest::getConfigId() const
{
    return configId_;
}

void ListApplicableInstancesWithEntitiesRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ListApplicableInstancesWithEntitiesRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ListApplicableInstancesWithEntitiesRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

int32_t ListApplicableInstancesWithEntitiesRequest::getOffset() const
{
    return offset_;
}

void ListApplicableInstancesWithEntitiesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListApplicableInstancesWithEntitiesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListApplicableInstancesWithEntitiesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListApplicableInstancesWithEntitiesRequest::getLimit() const
{
    return limit_;
}

void ListApplicableInstancesWithEntitiesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListApplicableInstancesWithEntitiesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListApplicableInstancesWithEntitiesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


