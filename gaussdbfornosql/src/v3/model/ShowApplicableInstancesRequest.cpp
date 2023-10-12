

#include "huaweicloud/gaussdbfornosql/v3/model/ShowApplicableInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowApplicableInstancesRequest::ShowApplicableInstancesRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowApplicableInstancesRequest::~ShowApplicableInstancesRequest() = default;

void ShowApplicableInstancesRequest::validate()
{
}

web::json::value ShowApplicableInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ShowApplicableInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ShowApplicableInstancesRequest::getConfigId() const
{
    return configId_;
}

void ShowApplicableInstancesRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ShowApplicableInstancesRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ShowApplicableInstancesRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

int32_t ShowApplicableInstancesRequest::getOffset() const
{
    return offset_;
}

void ShowApplicableInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowApplicableInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowApplicableInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowApplicableInstancesRequest::getLimit() const
{
    return limit_;
}

void ShowApplicableInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowApplicableInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowApplicableInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


