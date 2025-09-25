

#include "huaweicloud/codeartspipeline/v2/model/ListPLuginVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPLuginVersionRequest::ListPLuginVersionRequest()
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

ListPLuginVersionRequest::~ListPLuginVersionRequest() = default;

void ListPLuginVersionRequest::validate()
{
}

web::json::value ListPLuginVersionRequest::toJson() const
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
bool ListPLuginVersionRequest::fromJson(const web::json::value& val)
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


std::string ListPLuginVersionRequest::getDomainId() const
{
    return domainId_;
}

void ListPLuginVersionRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListPLuginVersionRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListPLuginVersionRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ListPLuginVersionRequest::getPluginName() const
{
    return pluginName_;
}

void ListPLuginVersionRequest::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool ListPLuginVersionRequest::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void ListPLuginVersionRequest::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string ListPLuginVersionRequest::getOffset() const
{
    return offset_;
}

void ListPLuginVersionRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPLuginVersionRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPLuginVersionRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListPLuginVersionRequest::getLimit() const
{
    return limit_;
}

void ListPLuginVersionRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPLuginVersionRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPLuginVersionRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


