

#include "huaweicloud/iotda/v5/model/ListDeviceAuthenticationTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceAuthenticationTemplatesRequest::ListDeviceAuthenticationTemplatesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDeviceAuthenticationTemplatesRequest::~ListDeviceAuthenticationTemplatesRequest() = default;

void ListDeviceAuthenticationTemplatesRequest::validate()
{
}

web::json::value ListDeviceAuthenticationTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDeviceAuthenticationTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    return ok;
}


std::string ListDeviceAuthenticationTemplatesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDeviceAuthenticationTemplatesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDeviceAuthenticationTemplatesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDeviceAuthenticationTemplatesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDeviceAuthenticationTemplatesRequest::getTemplateName() const
{
    return templateName_;
}

void ListDeviceAuthenticationTemplatesRequest::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ListDeviceAuthenticationTemplatesRequest::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ListDeviceAuthenticationTemplatesRequest::unsettemplateName()
{
    templateNameIsSet_ = false;
}

int32_t ListDeviceAuthenticationTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListDeviceAuthenticationTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDeviceAuthenticationTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDeviceAuthenticationTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDeviceAuthenticationTemplatesRequest::getMarker() const
{
    return marker_;
}

void ListDeviceAuthenticationTemplatesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDeviceAuthenticationTemplatesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDeviceAuthenticationTemplatesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListDeviceAuthenticationTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListDeviceAuthenticationTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDeviceAuthenticationTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDeviceAuthenticationTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


