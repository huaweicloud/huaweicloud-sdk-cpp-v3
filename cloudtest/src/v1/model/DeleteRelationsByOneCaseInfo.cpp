

#include "huaweicloud/cloudtest/v1/model/DeleteRelationsByOneCaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




DeleteRelationsByOneCaseInfo::DeleteRelationsByOneCaseInfo()
{
    workItemIdsIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    relateType_ = "";
    relateTypeIsSet_ = false;
}

DeleteRelationsByOneCaseInfo::~DeleteRelationsByOneCaseInfo() = default;

void DeleteRelationsByOneCaseInfo::validate()
{
}

web::json::value DeleteRelationsByOneCaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workItemIdsIsSet_) {
        val[utility::conversions::to_string_t("work_item_ids")] = ModelBase::toJson(workItemIds_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(relateTypeIsSet_) {
        val[utility::conversions::to_string_t("relate_type")] = ModelBase::toJson(relateType_);
    }

    return val;
}
bool DeleteRelationsByOneCaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("work_item_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_item_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkItemIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateType(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeleteRelationsByOneCaseInfo::getWorkItemIds()
{
    return workItemIds_;
}

void DeleteRelationsByOneCaseInfo::setWorkItemIds(const std::vector<std::string>& value)
{
    workItemIds_ = value;
    workItemIdsIsSet_ = true;
}

bool DeleteRelationsByOneCaseInfo::workItemIdsIsSet() const
{
    return workItemIdsIsSet_;
}

void DeleteRelationsByOneCaseInfo::unsetworkItemIds()
{
    workItemIdsIsSet_ = false;
}

std::string DeleteRelationsByOneCaseInfo::getProjectUuid() const
{
    return projectUuid_;
}

void DeleteRelationsByOneCaseInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool DeleteRelationsByOneCaseInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void DeleteRelationsByOneCaseInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string DeleteRelationsByOneCaseInfo::getVersionUri() const
{
    return versionUri_;
}

void DeleteRelationsByOneCaseInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool DeleteRelationsByOneCaseInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void DeleteRelationsByOneCaseInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string DeleteRelationsByOneCaseInfo::getRelateType() const
{
    return relateType_;
}

void DeleteRelationsByOneCaseInfo::setRelateType(const std::string& value)
{
    relateType_ = value;
    relateTypeIsSet_ = true;
}

bool DeleteRelationsByOneCaseInfo::relateTypeIsSet() const
{
    return relateTypeIsSet_;
}

void DeleteRelationsByOneCaseInfo::unsetrelateType()
{
    relateTypeIsSet_ = false;
}

}
}
}
}
}


