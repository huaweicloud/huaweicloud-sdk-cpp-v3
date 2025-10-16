

#include "huaweicloud/gaussdbforopengauss/v3/model/ListPluginInfoListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListPluginInfoListRequest::ListPluginInfoListRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
}

ListPluginInfoListRequest::~ListPluginInfoListRequest() = default;

void ListPluginInfoListRequest::validate()
{
}

web::json::value ListPluginInfoListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }

    return val;
}
bool ListPluginInfoListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginName(refVal);
        }
    }
    return ok;
}


std::string ListPluginInfoListRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPluginInfoListRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPluginInfoListRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPluginInfoListRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListPluginInfoListRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPluginInfoListRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPluginInfoListRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPluginInfoListRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

int32_t ListPluginInfoListRequest::getOffset() const
{
    return offset_;
}

void ListPluginInfoListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPluginInfoListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPluginInfoListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPluginInfoListRequest::getLimit() const
{
    return limit_;
}

void ListPluginInfoListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPluginInfoListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPluginInfoListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPluginInfoListRequest::getPluginName() const
{
    return pluginName_;
}

void ListPluginInfoListRequest::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool ListPluginInfoListRequest::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void ListPluginInfoListRequest::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

}
}
}
}
}


