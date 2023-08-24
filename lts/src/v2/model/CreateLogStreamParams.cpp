

#include "huaweicloud/lts/v2/model/CreateLogStreamParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogStreamParams::CreateLogStreamParams()
{
    logStreamName_ = "";
    logStreamNameIsSet_ = false;
    ttlInDays_ = 0;
    ttlInDaysIsSet_ = false;
    tagsIsSet_ = false;
}

CreateLogStreamParams::~CreateLogStreamParams() = default;

void CreateLogStreamParams::validate()
{
}

web::json::value CreateLogStreamParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logStreamNameIsSet_) {
        val[utility::conversions::to_string_t("log_stream_name")] = ModelBase::toJson(logStreamName_);
    }
    if(ttlInDaysIsSet_) {
        val[utility::conversions::to_string_t("ttl_in_days")] = ModelBase::toJson(ttlInDays_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool CreateLogStreamParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtlInDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string CreateLogStreamParams::getLogStreamName() const
{
    return logStreamName_;
}

void CreateLogStreamParams::setLogStreamName(const std::string& value)
{
    logStreamName_ = value;
    logStreamNameIsSet_ = true;
}

bool CreateLogStreamParams::logStreamNameIsSet() const
{
    return logStreamNameIsSet_;
}

void CreateLogStreamParams::unsetlogStreamName()
{
    logStreamNameIsSet_ = false;
}

int32_t CreateLogStreamParams::getTtlInDays() const
{
    return ttlInDays_;
}

void CreateLogStreamParams::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool CreateLogStreamParams::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void CreateLogStreamParams::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

std::vector<TagsBody>& CreateLogStreamParams::getTags()
{
    return tags_;
}

void CreateLogStreamParams::setTags(const std::vector<TagsBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateLogStreamParams::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateLogStreamParams::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


