

#include "huaweicloud/gaussdbfornosql/v3/model/ShowApplyHistoryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowApplyHistoryRequest::ShowApplyHistoryRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowApplyHistoryRequest::~ShowApplyHistoryRequest() = default;

void ShowApplyHistoryRequest::validate()
{
}

web::json::value ShowApplyHistoryRequest::toJson() const
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

bool ShowApplyHistoryRequest::fromJson(const web::json::value& val)
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

std::string ShowApplyHistoryRequest::getConfigId() const
{
    return configId_;
}

void ShowApplyHistoryRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ShowApplyHistoryRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ShowApplyHistoryRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

int32_t ShowApplyHistoryRequest::getOffset() const
{
    return offset_;
}

void ShowApplyHistoryRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowApplyHistoryRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowApplyHistoryRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowApplyHistoryRequest::getLimit() const
{
    return limit_;
}

void ShowApplyHistoryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowApplyHistoryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowApplyHistoryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


