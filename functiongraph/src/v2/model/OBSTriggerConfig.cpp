

#include "huaweicloud/functiongraph/v2/model/OBSTriggerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




OBSTriggerConfig::OBSTriggerConfig()
{
    bucket_ = "";
    bucketIsSet_ = false;
    eventsIsSet_ = false;
    prefix_ = "";
    prefixIsSet_ = false;
    suffix_ = "";
    suffixIsSet_ = false;
}

OBSTriggerConfig::~OBSTriggerConfig() = default;

void OBSTriggerConfig::validate()
{
}

web::json::value OBSTriggerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bucketIsSet_) {
        val[utility::conversions::to_string_t("bucket")] = ModelBase::toJson(bucket_);
    }
    if(eventsIsSet_) {
        val[utility::conversions::to_string_t("events")] = ModelBase::toJson(events_);
    }
    if(prefixIsSet_) {
        val[utility::conversions::to_string_t("prefix")] = ModelBase::toJson(prefix_);
    }
    if(suffixIsSet_) {
        val[utility::conversions::to_string_t("suffix")] = ModelBase::toJson(suffix_);
    }

    return val;
}
bool OBSTriggerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bucket"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucket(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("events"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suffix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suffix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuffix(refVal);
        }
    }
    return ok;
}


std::string OBSTriggerConfig::getBucket() const
{
    return bucket_;
}

void OBSTriggerConfig::setBucket(const std::string& value)
{
    bucket_ = value;
    bucketIsSet_ = true;
}

bool OBSTriggerConfig::bucketIsSet() const
{
    return bucketIsSet_;
}

void OBSTriggerConfig::unsetbucket()
{
    bucketIsSet_ = false;
}

std::vector<std::string>& OBSTriggerConfig::getEvents()
{
    return events_;
}

void OBSTriggerConfig::setEvents(const std::vector<std::string>& value)
{
    events_ = value;
    eventsIsSet_ = true;
}

bool OBSTriggerConfig::eventsIsSet() const
{
    return eventsIsSet_;
}

void OBSTriggerConfig::unsetevents()
{
    eventsIsSet_ = false;
}

std::string OBSTriggerConfig::getPrefix() const
{
    return prefix_;
}

void OBSTriggerConfig::setPrefix(const std::string& value)
{
    prefix_ = value;
    prefixIsSet_ = true;
}

bool OBSTriggerConfig::prefixIsSet() const
{
    return prefixIsSet_;
}

void OBSTriggerConfig::unsetprefix()
{
    prefixIsSet_ = false;
}

std::string OBSTriggerConfig::getSuffix() const
{
    return suffix_;
}

void OBSTriggerConfig::setSuffix(const std::string& value)
{
    suffix_ = value;
    suffixIsSet_ = true;
}

bool OBSTriggerConfig::suffixIsSet() const
{
    return suffixIsSet_;
}

void OBSTriggerConfig::unsetsuffix()
{
    suffixIsSet_ = false;
}

}
}
}
}
}


