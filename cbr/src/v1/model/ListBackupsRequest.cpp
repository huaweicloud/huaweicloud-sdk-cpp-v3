

#include "huaweicloud/cbr/v1/model/ListBackupsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListBackupsRequest::ListBackupsRequest()
{
    checkpointId_ = "";
    checkpointIdIsSet_ = false;
    dec_ = false;
    decIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    imageType_ = "";
    imageTypeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    resourceAz_ = "";
    resourceAzIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    ownType_ = "";
    ownTypeIsSet_ = false;
    memberStatus_ = "";
    memberStatusIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    usedPercent_ = "";
    usedPercentIsSet_ = false;
    showReplication_ = false;
    showReplicationIsSet_ = false;
    incremental_ = false;
    incrementalIsSet_ = false;
}

ListBackupsRequest::~ListBackupsRequest() = default;

void ListBackupsRequest::validate()
{
}

web::json::value ListBackupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIdIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_id")] = ModelBase::toJson(checkpointId_);
    }
    if(decIsSet_) {
        val[utility::conversions::to_string_t("dec")] = ModelBase::toJson(dec_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(imageTypeIsSet_) {
        val[utility::conversions::to_string_t("image_type")] = ModelBase::toJson(imageType_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(resourceAzIsSet_) {
        val[utility::conversions::to_string_t("resource_az")] = ModelBase::toJson(resourceAz_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(ownTypeIsSet_) {
        val[utility::conversions::to_string_t("own_type")] = ModelBase::toJson(ownType_);
    }
    if(memberStatusIsSet_) {
        val[utility::conversions::to_string_t("member_status")] = ModelBase::toJson(memberStatus_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(usedPercentIsSet_) {
        val[utility::conversions::to_string_t("used_percent")] = ModelBase::toJson(usedPercent_);
    }
    if(showReplicationIsSet_) {
        val[utility::conversions::to_string_t("show_replication")] = ModelBase::toJson(showReplication_);
    }
    if(incrementalIsSet_) {
        val[utility::conversions::to_string_t("incremental")] = ModelBase::toJson(incremental_);
    }

    return val;
}

bool ListBackupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checkpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpointId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dec"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDec(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("own_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("own_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_percent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_percent"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedPercent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_replication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_replication"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowReplication(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("incremental"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incremental"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncremental(refVal);
        }
    }
    return ok;
}


std::string ListBackupsRequest::getCheckpointId() const
{
    return checkpointId_;
}

void ListBackupsRequest::setCheckpointId(const std::string& value)
{
    checkpointId_ = value;
    checkpointIdIsSet_ = true;
}

bool ListBackupsRequest::checkpointIdIsSet() const
{
    return checkpointIdIsSet_;
}

void ListBackupsRequest::unsetcheckpointId()
{
    checkpointIdIsSet_ = false;
}

bool ListBackupsRequest::isDec() const
{
    return dec_;
}

void ListBackupsRequest::setDec(bool value)
{
    dec_ = value;
    decIsSet_ = true;
}

bool ListBackupsRequest::decIsSet() const
{
    return decIsSet_;
}

void ListBackupsRequest::unsetdec()
{
    decIsSet_ = false;
}

std::string ListBackupsRequest::getEndTime() const
{
    return endTime_;
}

void ListBackupsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBackupsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBackupsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListBackupsRequest::getImageType() const
{
    return imageType_;
}

void ListBackupsRequest::setImageType(const std::string& value)
{
    imageType_ = value;
    imageTypeIsSet_ = true;
}

bool ListBackupsRequest::imageTypeIsSet() const
{
    return imageTypeIsSet_;
}

void ListBackupsRequest::unsetimageType()
{
    imageTypeIsSet_ = false;
}

int32_t ListBackupsRequest::getLimit() const
{
    return limit_;
}

void ListBackupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBackupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBackupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListBackupsRequest::getMarker() const
{
    return marker_;
}

void ListBackupsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListBackupsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListBackupsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListBackupsRequest::getName() const
{
    return name_;
}

void ListBackupsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListBackupsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListBackupsRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListBackupsRequest::getOffset() const
{
    return offset_;
}

void ListBackupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBackupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBackupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListBackupsRequest::getResourceAz() const
{
    return resourceAz_;
}

void ListBackupsRequest::setResourceAz(const std::string& value)
{
    resourceAz_ = value;
    resourceAzIsSet_ = true;
}

bool ListBackupsRequest::resourceAzIsSet() const
{
    return resourceAzIsSet_;
}

void ListBackupsRequest::unsetresourceAz()
{
    resourceAzIsSet_ = false;
}

std::string ListBackupsRequest::getResourceId() const
{
    return resourceId_;
}

void ListBackupsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListBackupsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListBackupsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ListBackupsRequest::getResourceName() const
{
    return resourceName_;
}

void ListBackupsRequest::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ListBackupsRequest::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ListBackupsRequest::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string ListBackupsRequest::getResourceType() const
{
    return resourceType_;
}

void ListBackupsRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ListBackupsRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ListBackupsRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ListBackupsRequest::getSort() const
{
    return sort_;
}

void ListBackupsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListBackupsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListBackupsRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListBackupsRequest::getStartTime() const
{
    return startTime_;
}

void ListBackupsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListBackupsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListBackupsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListBackupsRequest::getStatus() const
{
    return status_;
}

void ListBackupsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListBackupsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListBackupsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListBackupsRequest::getVaultId() const
{
    return vaultId_;
}

void ListBackupsRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool ListBackupsRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void ListBackupsRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

std::string ListBackupsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListBackupsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListBackupsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListBackupsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListBackupsRequest::getOwnType() const
{
    return ownType_;
}

void ListBackupsRequest::setOwnType(const std::string& value)
{
    ownType_ = value;
    ownTypeIsSet_ = true;
}

bool ListBackupsRequest::ownTypeIsSet() const
{
    return ownTypeIsSet_;
}

void ListBackupsRequest::unsetownType()
{
    ownTypeIsSet_ = false;
}

std::string ListBackupsRequest::getMemberStatus() const
{
    return memberStatus_;
}

void ListBackupsRequest::setMemberStatus(const std::string& value)
{
    memberStatus_ = value;
    memberStatusIsSet_ = true;
}

bool ListBackupsRequest::memberStatusIsSet() const
{
    return memberStatusIsSet_;
}

void ListBackupsRequest::unsetmemberStatus()
{
    memberStatusIsSet_ = false;
}

std::string ListBackupsRequest::getParentId() const
{
    return parentId_;
}

void ListBackupsRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ListBackupsRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ListBackupsRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string ListBackupsRequest::getUsedPercent() const
{
    return usedPercent_;
}

void ListBackupsRequest::setUsedPercent(const std::string& value)
{
    usedPercent_ = value;
    usedPercentIsSet_ = true;
}

bool ListBackupsRequest::usedPercentIsSet() const
{
    return usedPercentIsSet_;
}

void ListBackupsRequest::unsetusedPercent()
{
    usedPercentIsSet_ = false;
}

bool ListBackupsRequest::isShowReplication() const
{
    return showReplication_;
}

void ListBackupsRequest::setShowReplication(bool value)
{
    showReplication_ = value;
    showReplicationIsSet_ = true;
}

bool ListBackupsRequest::showReplicationIsSet() const
{
    return showReplicationIsSet_;
}

void ListBackupsRequest::unsetshowReplication()
{
    showReplicationIsSet_ = false;
}

bool ListBackupsRequest::isIncremental() const
{
    return incremental_;
}

void ListBackupsRequest::setIncremental(bool value)
{
    incremental_ = value;
    incrementalIsSet_ = true;
}

bool ListBackupsRequest::incrementalIsSet() const
{
    return incrementalIsSet_;
}

void ListBackupsRequest::unsetincremental()
{
    incrementalIsSet_ = false;
}

}
}
}
}
}


