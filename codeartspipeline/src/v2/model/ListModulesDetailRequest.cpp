

#include "huaweicloud/codeartspipeline/v2/model/ListModulesDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListModulesDetailRequest::ListModulesDetailRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    regionName_ = "";
    regionNameIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    productLine_ = "";
    productLineIsSet_ = false;
    tagsIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    locationsIsSet_ = false;
}

ListModulesDetailRequest::~ListModulesDetailRequest() = default;

void ListModulesDetailRequest::validate()
{
}

web::json::value ListModulesDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(regionNameIsSet_) {
        val[utility::conversions::to_string_t("region_name")] = ModelBase::toJson(regionName_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(productLineIsSet_) {
        val[utility::conversions::to_string_t("productLine")] = ModelBase::toJson(productLine_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(locationsIsSet_) {
        val[utility::conversions::to_string_t("locations")] = ModelBase::toJson(locations_);
    }

    return val;
}
bool ListModulesDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("productLine"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("productLine"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductLine(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("locations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("locations"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocations(refVal);
        }
    }
    return ok;
}


std::string ListModulesDetailRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ListModulesDetailRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ListModulesDetailRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ListModulesDetailRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ListModulesDetailRequest::getRegionName() const
{
    return regionName_;
}

void ListModulesDetailRequest::setRegionName(const std::string& value)
{
    regionName_ = value;
    regionNameIsSet_ = true;
}

bool ListModulesDetailRequest::regionNameIsSet() const
{
    return regionNameIsSet_;
}

void ListModulesDetailRequest::unsetregionName()
{
    regionNameIsSet_ = false;
}

std::string ListModulesDetailRequest::getName() const
{
    return name_;
}

void ListModulesDetailRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListModulesDetailRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListModulesDetailRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListModulesDetailRequest::getProductLine() const
{
    return productLine_;
}

void ListModulesDetailRequest::setProductLine(const std::string& value)
{
    productLine_ = value;
    productLineIsSet_ = true;
}

bool ListModulesDetailRequest::productLineIsSet() const
{
    return productLineIsSet_;
}

void ListModulesDetailRequest::unsetproductLine()
{
    productLineIsSet_ = false;
}

std::vector<std::string>& ListModulesDetailRequest::getTags()
{
    return tags_;
}

void ListModulesDetailRequest::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListModulesDetailRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListModulesDetailRequest::unsettags()
{
    tagsIsSet_ = false;
}

int32_t ListModulesDetailRequest::getOffset() const
{
    return offset_;
}

void ListModulesDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListModulesDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListModulesDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListModulesDetailRequest::getLimit() const
{
    return limit_;
}

void ListModulesDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListModulesDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListModulesDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<std::string>& ListModulesDetailRequest::getLocations()
{
    return locations_;
}

void ListModulesDetailRequest::setLocations(const std::vector<std::string>& value)
{
    locations_ = value;
    locationsIsSet_ = true;
}

bool ListModulesDetailRequest::locationsIsSet() const
{
    return locationsIsSet_;
}

void ListModulesDetailRequest::unsetlocations()
{
    locationsIsSet_ = false;
}

}
}
}
}
}


