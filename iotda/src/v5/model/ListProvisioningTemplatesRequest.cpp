

#include "huaweicloud/iotda/v5/model/ListProvisioningTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListProvisioningTemplatesRequest::ListProvisioningTemplatesRequest()
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

ListProvisioningTemplatesRequest::~ListProvisioningTemplatesRequest() = default;

void ListProvisioningTemplatesRequest::validate()
{
}

web::json::value ListProvisioningTemplatesRequest::toJson() const
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
bool ListProvisioningTemplatesRequest::fromJson(const web::json::value& val)
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


std::string ListProvisioningTemplatesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListProvisioningTemplatesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListProvisioningTemplatesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListProvisioningTemplatesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListProvisioningTemplatesRequest::getTemplateName() const
{
    return templateName_;
}

void ListProvisioningTemplatesRequest::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ListProvisioningTemplatesRequest::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ListProvisioningTemplatesRequest::unsettemplateName()
{
    templateNameIsSet_ = false;
}

int32_t ListProvisioningTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListProvisioningTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProvisioningTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProvisioningTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProvisioningTemplatesRequest::getMarker() const
{
    return marker_;
}

void ListProvisioningTemplatesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListProvisioningTemplatesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListProvisioningTemplatesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListProvisioningTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListProvisioningTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProvisioningTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProvisioningTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


