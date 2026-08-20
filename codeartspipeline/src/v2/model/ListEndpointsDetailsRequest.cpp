

#include "huaweicloud/codeartspipeline/v2/model/ListEndpointsDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListEndpointsDetailsRequest::ListEndpointsDetailsRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    regionName_ = "";
    regionNameIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListEndpointsDetailsRequest::~ListEndpointsDetailsRequest() = default;

void ListEndpointsDetailsRequest::validate()
{
}

web::json::value ListEndpointsDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListEndpointsDetailsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
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


std::string ListEndpointsDetailsRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListEndpointsDetailsRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListEndpointsDetailsRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListEndpointsDetailsRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ListEndpointsDetailsRequest::getRegionName() const
{
    return regionName_;
}

void ListEndpointsDetailsRequest::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool ListEndpointsDetailsRequest::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void ListEndpointsDetailsRequest::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string ListEndpointsDetailsRequest::getModuleId() const
{
    return moduleId_;
}

void ListEndpointsDetailsRequest::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool ListEndpointsDetailsRequest::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void ListEndpointsDetailsRequest::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

int32_t ListEndpointsDetailsRequest::getOffset() const
{
    return offset_;
}

void ListEndpointsDetailsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEndpointsDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEndpointsDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListEndpointsDetailsRequest::getLimit() const
{
    return limit_;
}

void ListEndpointsDetailsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEndpointsDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEndpointsDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


