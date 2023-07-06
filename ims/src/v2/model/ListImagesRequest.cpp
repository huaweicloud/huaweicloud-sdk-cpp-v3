

#include "huaweicloud/ims/v2/model/ListImagesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImagesRequest::ListImagesRequest()
{
    imagetype_ = "";
    imagetypeIsSet_ = false;
    isregistered_ = "";
    isregisteredIsSet_ = false;
    osBit_ = "";
    osBitIsSet_ = false;
    osType_ = "";
    osTypeIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
    supportDiskintensive_ = "";
    supportDiskintensiveIsSet_ = false;
    supportHighperformance_ = "";
    supportHighperformanceIsSet_ = false;
    supportKvm_ = "";
    supportKvmIsSet_ = false;
    supportKvmGpuType_ = "";
    supportKvmGpuTypeIsSet_ = false;
    supportKvmInfiniband_ = "";
    supportKvmInfinibandIsSet_ = false;
    supportLargememory_ = "";
    supportLargememoryIsSet_ = false;
    supportXen_ = "";
    supportXenIsSet_ = false;
    supportXenGpuType_ = "";
    supportXenGpuTypeIsSet_ = false;
    supportXenHana_ = "";
    supportXenHanaIsSet_ = false;
    containerFormat_ = "";
    containerFormatIsSet_ = false;
    diskFormat_ = "";
    diskFormatIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    memberStatus_ = "";
    memberStatusIsSet_ = false;
    minDisk_ = 0;
    minDiskIsSet_ = false;
    minRam_ = 0;
    minRamIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    protected_ = false;
    protectedIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    virtualEnvType_ = "";
    virtualEnvTypeIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    flavorId_ = "";
    flavorIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    architecture_ = "";
    architectureIsSet_ = false;
}

ListImagesRequest::~ListImagesRequest() = default;

void ListImagesRequest::validate()
{
}

web::json::value ListImagesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imagetypeIsSet_) {
        val[utility::conversions::to_string_t("__imagetype")] = ModelBase::toJson(imagetype_);
    }
    if(isregisteredIsSet_) {
        val[utility::conversions::to_string_t("__isregistered")] = ModelBase::toJson(isregistered_);
    }
    if(osBitIsSet_) {
        val[utility::conversions::to_string_t("__os_bit")] = ModelBase::toJson(osBit_);
    }
    if(osTypeIsSet_) {
        val[utility::conversions::to_string_t("__os_type")] = ModelBase::toJson(osType_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("__platform")] = ModelBase::toJson(platform_);
    }
    if(supportDiskintensiveIsSet_) {
        val[utility::conversions::to_string_t("__support_diskintensive")] = ModelBase::toJson(supportDiskintensive_);
    }
    if(supportHighperformanceIsSet_) {
        val[utility::conversions::to_string_t("__support_highperformance")] = ModelBase::toJson(supportHighperformance_);
    }
    if(supportKvmIsSet_) {
        val[utility::conversions::to_string_t("__support_kvm")] = ModelBase::toJson(supportKvm_);
    }
    if(supportKvmGpuTypeIsSet_) {
        val[utility::conversions::to_string_t("__support_kvm_gpu_type")] = ModelBase::toJson(supportKvmGpuType_);
    }
    if(supportKvmInfinibandIsSet_) {
        val[utility::conversions::to_string_t("__support_kvm_infiniband")] = ModelBase::toJson(supportKvmInfiniband_);
    }
    if(supportLargememoryIsSet_) {
        val[utility::conversions::to_string_t("__support_largememory")] = ModelBase::toJson(supportLargememory_);
    }
    if(supportXenIsSet_) {
        val[utility::conversions::to_string_t("__support_xen")] = ModelBase::toJson(supportXen_);
    }
    if(supportXenGpuTypeIsSet_) {
        val[utility::conversions::to_string_t("__support_xen_gpu_type")] = ModelBase::toJson(supportXenGpuType_);
    }
    if(supportXenHanaIsSet_) {
        val[utility::conversions::to_string_t("__support_xen_hana")] = ModelBase::toJson(supportXenHana_);
    }
    if(containerFormatIsSet_) {
        val[utility::conversions::to_string_t("container_format")] = ModelBase::toJson(containerFormat_);
    }
    if(diskFormatIsSet_) {
        val[utility::conversions::to_string_t("disk_format")] = ModelBase::toJson(diskFormat_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(memberStatusIsSet_) {
        val[utility::conversions::to_string_t("member_status")] = ModelBase::toJson(memberStatus_);
    }
    if(minDiskIsSet_) {
        val[utility::conversions::to_string_t("min_disk")] = ModelBase::toJson(minDisk_);
    }
    if(minRamIsSet_) {
        val[utility::conversions::to_string_t("min_ram")] = ModelBase::toJson(minRam_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(protectedIsSet_) {
        val[utility::conversions::to_string_t("protected")] = ModelBase::toJson(protected_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(virtualEnvTypeIsSet_) {
        val[utility::conversions::to_string_t("virtual_env_type")] = ModelBase::toJson(virtualEnvType_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(flavorIdIsSet_) {
        val[utility::conversions::to_string_t("flavor_id")] = ModelBase::toJson(flavorId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(architectureIsSet_) {
        val[utility::conversions::to_string_t("architecture")] = ModelBase::toJson(architecture_);
    }

    return val;
}

bool ListImagesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("__imagetype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__imagetype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImagetype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__isregistered"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__isregistered"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsregistered(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__os_bit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_bit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsBit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("__platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_diskintensive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_diskintensive"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportDiskintensive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_highperformance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_highperformance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportHighperformance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_kvm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_kvm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportKvm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_kvm_gpu_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_kvm_gpu_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportKvmGpuType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_kvm_infiniband"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_kvm_infiniband"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportKvmInfiniband(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_largememory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_largememory"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportLargememory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_xen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_xen"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportXen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_xen_gpu_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_xen_gpu_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportXenGpuType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_xen_hana"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_xen_hana"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportXenHana(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("container_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskFormat(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("member_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("min_ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinRam(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("architecture"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("architecture"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchitecture(refVal);
        }
    }
    return ok;
}

std::string ListImagesRequest::getImagetype() const
{
    return imagetype_;
}

void ListImagesRequest::setImagetype(const std::string& value)
{
    imagetype_ = value;
    imagetypeIsSet_ = true;
}

bool ListImagesRequest::imagetypeIsSet() const
{
    return imagetypeIsSet_;
}

void ListImagesRequest::unsetimagetype()
{
    imagetypeIsSet_ = false;
}

std::string ListImagesRequest::getIsregistered() const
{
    return isregistered_;
}

void ListImagesRequest::setIsregistered(const std::string& value)
{
    isregistered_ = value;
    isregisteredIsSet_ = true;
}

bool ListImagesRequest::isregisteredIsSet() const
{
    return isregisteredIsSet_;
}

void ListImagesRequest::unsetisregistered()
{
    isregisteredIsSet_ = false;
}

std::string ListImagesRequest::getOsBit() const
{
    return osBit_;
}

void ListImagesRequest::setOsBit(const std::string& value)
{
    osBit_ = value;
    osBitIsSet_ = true;
}

bool ListImagesRequest::osBitIsSet() const
{
    return osBitIsSet_;
}

void ListImagesRequest::unsetosBit()
{
    osBitIsSet_ = false;
}

std::string ListImagesRequest::getOsType() const
{
    return osType_;
}

void ListImagesRequest::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool ListImagesRequest::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void ListImagesRequest::unsetosType()
{
    osTypeIsSet_ = false;
}

std::string ListImagesRequest::getPlatform() const
{
    return platform_;
}

void ListImagesRequest::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool ListImagesRequest::platformIsSet() const
{
    return platformIsSet_;
}

void ListImagesRequest::unsetplatform()
{
    platformIsSet_ = false;
}

std::string ListImagesRequest::getSupportDiskintensive() const
{
    return supportDiskintensive_;
}

void ListImagesRequest::setSupportDiskintensive(const std::string& value)
{
    supportDiskintensive_ = value;
    supportDiskintensiveIsSet_ = true;
}

bool ListImagesRequest::supportDiskintensiveIsSet() const
{
    return supportDiskintensiveIsSet_;
}

void ListImagesRequest::unsetsupportDiskintensive()
{
    supportDiskintensiveIsSet_ = false;
}

std::string ListImagesRequest::getSupportHighperformance() const
{
    return supportHighperformance_;
}

void ListImagesRequest::setSupportHighperformance(const std::string& value)
{
    supportHighperformance_ = value;
    supportHighperformanceIsSet_ = true;
}

bool ListImagesRequest::supportHighperformanceIsSet() const
{
    return supportHighperformanceIsSet_;
}

void ListImagesRequest::unsetsupportHighperformance()
{
    supportHighperformanceIsSet_ = false;
}

std::string ListImagesRequest::getSupportKvm() const
{
    return supportKvm_;
}

void ListImagesRequest::setSupportKvm(const std::string& value)
{
    supportKvm_ = value;
    supportKvmIsSet_ = true;
}

bool ListImagesRequest::supportKvmIsSet() const
{
    return supportKvmIsSet_;
}

void ListImagesRequest::unsetsupportKvm()
{
    supportKvmIsSet_ = false;
}

std::string ListImagesRequest::getSupportKvmGpuType() const
{
    return supportKvmGpuType_;
}

void ListImagesRequest::setSupportKvmGpuType(const std::string& value)
{
    supportKvmGpuType_ = value;
    supportKvmGpuTypeIsSet_ = true;
}

bool ListImagesRequest::supportKvmGpuTypeIsSet() const
{
    return supportKvmGpuTypeIsSet_;
}

void ListImagesRequest::unsetsupportKvmGpuType()
{
    supportKvmGpuTypeIsSet_ = false;
}

std::string ListImagesRequest::getSupportKvmInfiniband() const
{
    return supportKvmInfiniband_;
}

void ListImagesRequest::setSupportKvmInfiniband(const std::string& value)
{
    supportKvmInfiniband_ = value;
    supportKvmInfinibandIsSet_ = true;
}

bool ListImagesRequest::supportKvmInfinibandIsSet() const
{
    return supportKvmInfinibandIsSet_;
}

void ListImagesRequest::unsetsupportKvmInfiniband()
{
    supportKvmInfinibandIsSet_ = false;
}

std::string ListImagesRequest::getSupportLargememory() const
{
    return supportLargememory_;
}

void ListImagesRequest::setSupportLargememory(const std::string& value)
{
    supportLargememory_ = value;
    supportLargememoryIsSet_ = true;
}

bool ListImagesRequest::supportLargememoryIsSet() const
{
    return supportLargememoryIsSet_;
}

void ListImagesRequest::unsetsupportLargememory()
{
    supportLargememoryIsSet_ = false;
}

std::string ListImagesRequest::getSupportXen() const
{
    return supportXen_;
}

void ListImagesRequest::setSupportXen(const std::string& value)
{
    supportXen_ = value;
    supportXenIsSet_ = true;
}

bool ListImagesRequest::supportXenIsSet() const
{
    return supportXenIsSet_;
}

void ListImagesRequest::unsetsupportXen()
{
    supportXenIsSet_ = false;
}

std::string ListImagesRequest::getSupportXenGpuType() const
{
    return supportXenGpuType_;
}

void ListImagesRequest::setSupportXenGpuType(const std::string& value)
{
    supportXenGpuType_ = value;
    supportXenGpuTypeIsSet_ = true;
}

bool ListImagesRequest::supportXenGpuTypeIsSet() const
{
    return supportXenGpuTypeIsSet_;
}

void ListImagesRequest::unsetsupportXenGpuType()
{
    supportXenGpuTypeIsSet_ = false;
}

std::string ListImagesRequest::getSupportXenHana() const
{
    return supportXenHana_;
}

void ListImagesRequest::setSupportXenHana(const std::string& value)
{
    supportXenHana_ = value;
    supportXenHanaIsSet_ = true;
}

bool ListImagesRequest::supportXenHanaIsSet() const
{
    return supportXenHanaIsSet_;
}

void ListImagesRequest::unsetsupportXenHana()
{
    supportXenHanaIsSet_ = false;
}

std::string ListImagesRequest::getContainerFormat() const
{
    return containerFormat_;
}

void ListImagesRequest::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool ListImagesRequest::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void ListImagesRequest::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string ListImagesRequest::getDiskFormat() const
{
    return diskFormat_;
}

void ListImagesRequest::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool ListImagesRequest::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void ListImagesRequest::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

std::string ListImagesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListImagesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListImagesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListImagesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListImagesRequest::getId() const
{
    return id_;
}

void ListImagesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListImagesRequest::idIsSet() const
{
    return idIsSet_;
}

void ListImagesRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t ListImagesRequest::getLimit() const
{
    return limit_;
}

void ListImagesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListImagesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListImagesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListImagesRequest::getMarker() const
{
    return marker_;
}

void ListImagesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListImagesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListImagesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListImagesRequest::getMemberStatus() const
{
    return memberStatus_;
}

void ListImagesRequest::setMemberStatus(const std::string& value)
{
    memberStatus_ = value;
    memberStatusIsSet_ = true;
}

bool ListImagesRequest::memberStatusIsSet() const
{
    return memberStatusIsSet_;
}

void ListImagesRequest::unsetmemberStatus()
{
    memberStatusIsSet_ = false;
}

int32_t ListImagesRequest::getMinDisk() const
{
    return minDisk_;
}

void ListImagesRequest::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool ListImagesRequest::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void ListImagesRequest::unsetminDisk()
{
    minDiskIsSet_ = false;
}

int32_t ListImagesRequest::getMinRam() const
{
    return minRam_;
}

void ListImagesRequest::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool ListImagesRequest::minRamIsSet() const
{
    return minRamIsSet_;
}

void ListImagesRequest::unsetminRam()
{
    minRamIsSet_ = false;
}

std::string ListImagesRequest::getName() const
{
    return name_;
}

void ListImagesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListImagesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListImagesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListImagesRequest::getOwner() const
{
    return owner_;
}

void ListImagesRequest::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ListImagesRequest::ownerIsSet() const
{
    return ownerIsSet_;
}

void ListImagesRequest::unsetowner()
{
    ownerIsSet_ = false;
}

bool ListImagesRequest::isProtected() const
{
    return protected_;
}

void ListImagesRequest::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool ListImagesRequest::protectedIsSet() const
{
    return protectedIsSet_;
}

void ListImagesRequest::unsetprotected()
{
    protectedIsSet_ = false;
}

std::string ListImagesRequest::getSortDir() const
{
    return sortDir_;
}

void ListImagesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListImagesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListImagesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListImagesRequest::getSortKey() const
{
    return sortKey_;
}

void ListImagesRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListImagesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListImagesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListImagesRequest::getStatus() const
{
    return status_;
}

void ListImagesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListImagesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListImagesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListImagesRequest::getTag() const
{
    return tag_;
}

void ListImagesRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListImagesRequest::tagIsSet() const
{
    return tagIsSet_;
}

void ListImagesRequest::unsettag()
{
    tagIsSet_ = false;
}

std::string ListImagesRequest::getVirtualEnvType() const
{
    return virtualEnvType_;
}

void ListImagesRequest::setVirtualEnvType(const std::string& value)
{
    virtualEnvType_ = value;
    virtualEnvTypeIsSet_ = true;
}

bool ListImagesRequest::virtualEnvTypeIsSet() const
{
    return virtualEnvTypeIsSet_;
}

void ListImagesRequest::unsetvirtualEnvType()
{
    virtualEnvTypeIsSet_ = false;
}

std::string ListImagesRequest::getVisibility() const
{
    return visibility_;
}

void ListImagesRequest::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool ListImagesRequest::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void ListImagesRequest::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string ListImagesRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListImagesRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListImagesRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListImagesRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListImagesRequest::getFlavorId() const
{
    return flavorId_;
}

void ListImagesRequest::setFlavorId(const std::string& value)
{
    flavorId_ = value;
    flavorIdIsSet_ = true;
}

bool ListImagesRequest::flavorIdIsSet() const
{
    return flavorIdIsSet_;
}

void ListImagesRequest::unsetflavorId()
{
    flavorIdIsSet_ = false;
}

std::string ListImagesRequest::getCreatedAt() const
{
    return createdAt_;
}

void ListImagesRequest::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ListImagesRequest::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ListImagesRequest::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ListImagesRequest::getUpdatedAt() const
{
    return updatedAt_;
}

void ListImagesRequest::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListImagesRequest::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListImagesRequest::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ListImagesRequest::getArchitecture() const
{
    return architecture_;
}

void ListImagesRequest::setArchitecture(const std::string& value)
{
    architecture_ = value;
    architectureIsSet_ = true;
}

bool ListImagesRequest::architectureIsSet() const
{
    return architectureIsSet_;
}

void ListImagesRequest::unsetarchitecture()
{
    architectureIsSet_ = false;
}

}
}
}
}
}


