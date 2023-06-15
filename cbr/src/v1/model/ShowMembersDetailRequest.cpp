

#include "huaweicloud/cbr/v1/model/ShowMembersDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowMembersDetailRequest::ShowMembersDetailRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    destProjectId_ = "";
    destProjectIdIsSet_ = false;
    imageId_ = "";
    imageIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
}

ShowMembersDetailRequest::~ShowMembersDetailRequest() = default;

void ShowMembersDetailRequest::validate()
{
}

web::json::value ShowMembersDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(destProjectIdIsSet_) {
        val[utility::conversions::to_string_t("dest_project_id")] = ModelBase::toJson(destProjectId_);
    }
    if(imageIdIsSet_) {
        val[utility::conversions::to_string_t("image_id")] = ModelBase::toJson(imageId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
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
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}

bool ShowMembersDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dest_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dest_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    return ok;
}


std::string ShowMembersDetailRequest::getBackupId() const
{
    return backupId_;
}

void ShowMembersDetailRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowMembersDetailRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowMembersDetailRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ShowMembersDetailRequest::getDestProjectId() const
{
    return destProjectId_;
}

void ShowMembersDetailRequest::setDestProjectId(const std::string& value)
{
    destProjectId_ = value;
    destProjectIdIsSet_ = true;
}

bool ShowMembersDetailRequest::destProjectIdIsSet() const
{
    return destProjectIdIsSet_;
}

void ShowMembersDetailRequest::unsetdestProjectId()
{
    destProjectIdIsSet_ = false;
}

std::string ShowMembersDetailRequest::getImageId() const
{
    return imageId_;
}

void ShowMembersDetailRequest::setImageId(const std::string& value)
{
    imageId_ = value;
    imageIdIsSet_ = true;
}

bool ShowMembersDetailRequest::imageIdIsSet() const
{
    return imageIdIsSet_;
}

void ShowMembersDetailRequest::unsetimageId()
{
    imageIdIsSet_ = false;
}

std::string ShowMembersDetailRequest::getStatus() const
{
    return status_;
}

void ShowMembersDetailRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowMembersDetailRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ShowMembersDetailRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowMembersDetailRequest::getVaultId() const
{
    return vaultId_;
}

void ShowMembersDetailRequest::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool ShowMembersDetailRequest::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void ShowMembersDetailRequest::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

int32_t ShowMembersDetailRequest::getLimit() const
{
    return limit_;
}

void ShowMembersDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowMembersDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowMembersDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowMembersDetailRequest::getMarker() const
{
    return marker_;
}

void ShowMembersDetailRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ShowMembersDetailRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ShowMembersDetailRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ShowMembersDetailRequest::getOffset() const
{
    return offset_;
}

void ShowMembersDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowMembersDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowMembersDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowMembersDetailRequest::getSort() const
{
    return sort_;
}

void ShowMembersDetailRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ShowMembersDetailRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ShowMembersDetailRequest::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


