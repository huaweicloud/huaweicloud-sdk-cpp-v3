

#include "huaweicloud/codeartspipeline/v2/model/ListPluginVersionNumberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPluginVersionNumberRequest::ListPluginVersionNumberRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListPluginVersionNumberRequest::~ListPluginVersionNumberRequest() = default;

void ListPluginVersionNumberRequest::validate()
{
}

web::json::value ListPluginVersionNumberRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListPluginVersionNumberRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListPluginVersionNumberRequest::getDomainId() const
{
    return domainId_;
}

void ListPluginVersionNumberRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListPluginVersionNumberRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListPluginVersionNumberRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListPluginVersionNumberRequest::getPluginName() const
{
    return pluginName_;
}

void ListPluginVersionNumberRequest::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool ListPluginVersionNumberRequest::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void ListPluginVersionNumberRequest::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string ListPluginVersionNumberRequest::getOffset() const
{
    return offset_;
}

void ListPluginVersionNumberRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPluginVersionNumberRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPluginVersionNumberRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListPluginVersionNumberRequest::getLimit() const
{
    return limit_;
}

void ListPluginVersionNumberRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPluginVersionNumberRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPluginVersionNumberRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


