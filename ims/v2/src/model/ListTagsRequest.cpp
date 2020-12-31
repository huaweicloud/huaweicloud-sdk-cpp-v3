

#include "huaweicloud/ims/model/ListTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListTagsRequest::ListTagsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    imagetype_ = "";
    imagetypeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    minDisk_ = 0;
    minDiskIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
    osType_ = "";
    osTypeIsSet_ = false;
    memberStatus_ = "";
    memberStatusIsSet_ = false;
    virtualEnvType_ = "";
    virtualEnvTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    architecture_ = "";
    architectureIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

ListTagsRequest::~ListTagsRequest() = default;

void ListTagsRequest::validate()
{
}

web::json::value ListTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(imagetypeIsSet_) {
        val[utility::conversions::to_string_t("__imagetype")] = ModelBase::toJson(imagetype_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(minDiskIsSet_) {
        val[utility::conversions::to_string_t("min_disk")] = ModelBase::toJson(minDisk_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("__platform")] = ModelBase::toJson(platform_);
    }
    if(osTypeIsSet_) {
        val[utility::conversions::to_string_t("__os_type")] = ModelBase::toJson(osType_);
    }
    if(memberStatusIsSet_) {
        val[utility::conversions::to_string_t("member_status")] = ModelBase::toJson(memberStatus_);
    }
    if(virtualEnvTypeIsSet_) {
        val[utility::conversions::to_string_t("virtual_env_type")] = ModelBase::toJson(virtualEnvType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(architectureIsSet_) {
        val[utility::conversions::to_string_t("architecture")] = ModelBase::toJson(architecture_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}

bool ListTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__imagetype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__imagetype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImagetype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("min_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_disk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinDisk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__os_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virtual_env_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virtual_env_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirtualEnvType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("architecture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("architecture"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchitecture(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}


int32_t ListTagsRequest::getLimit() const
{
    return limit_;
}

void ListTagsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTagsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTagsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTagsRequest::getPage() const
{
    return page_;
}

void ListTagsRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListTagsRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListTagsRequest::unsetpage()
{
    pageIsSet_ = false;
}

std::string ListTagsRequest::getImagetype() const
{
    return imagetype_;
}

void ListTagsRequest::setImagetype(const std::string& value)
{
    imagetype_ = value;
    imagetypeIsSet_ = true;
}

bool ListTagsRequest::imagetypeIsSet() const
{
    return imagetypeIsSet_;
}

void ListTagsRequest::unsetimagetype()
{
    imagetypeIsSet_ = false;
}

std::string ListTagsRequest::getId() const
{
    return id_;
}

void ListTagsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListTagsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListTagsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListTagsRequest::getStatus() const
{
    return status_;
}

void ListTagsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTagsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListTagsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListTagsRequest::getName() const
{
    return name_;
}

void ListTagsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTagsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListTagsRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListTagsRequest::getMinDisk() const
{
    return minDisk_;
}

void ListTagsRequest::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool ListTagsRequest::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void ListTagsRequest::unsetminDisk()
{
    minDiskIsSet_ = false;
}

std::string ListTagsRequest::getPlatform() const
{
    return platform_;
}

void ListTagsRequest::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool ListTagsRequest::platformIsSet() const
{
    return platformIsSet_;
}

void ListTagsRequest::unsetplatform()
{
    platformIsSet_ = false;
}

std::string ListTagsRequest::getOsType() const
{
    return osType_;
}

void ListTagsRequest::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool ListTagsRequest::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void ListTagsRequest::unsetosType()
{
    osTypeIsSet_ = false;
}

std::string ListTagsRequest::getMemberStatus() const
{
    return memberStatus_;
}

void ListTagsRequest::setMemberStatus(const std::string& value)
{
    memberStatus_ = value;
    memberStatusIsSet_ = true;
}

bool ListTagsRequest::memberStatusIsSet() const
{
    return memberStatusIsSet_;
}

void ListTagsRequest::unsetmemberStatus()
{
    memberStatusIsSet_ = false;
}

std::string ListTagsRequest::getVirtualEnvType() const
{
    return virtualEnvType_;
}

void ListTagsRequest::setVirtualEnvType(const std::string& value)
{
    virtualEnvType_ = value;
    virtualEnvTypeIsSet_ = true;
}

bool ListTagsRequest::virtualEnvTypeIsSet() const
{
    return virtualEnvTypeIsSet_;
}

void ListTagsRequest::unsetvirtualEnvType()
{
    virtualEnvTypeIsSet_ = false;
}

std::string ListTagsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListTagsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListTagsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListTagsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListTagsRequest::getArchitecture() const
{
    return architecture_;
}

void ListTagsRequest::setArchitecture(const std::string& value)
{
    architecture_ = value;
    architectureIsSet_ = true;
}

bool ListTagsRequest::architectureIsSet() const
{
    return architectureIsSet_;
}

void ListTagsRequest::unsetarchitecture()
{
    architectureIsSet_ = false;
}

std::string ListTagsRequest::getCreatedAt() const
{
    return createdAt_;
}

void ListTagsRequest::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListTagsRequest::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListTagsRequest::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ListTagsRequest::getUpdatedAt() const
{
    return updatedAt_;
}

void ListTagsRequest::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListTagsRequest::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListTagsRequest::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


