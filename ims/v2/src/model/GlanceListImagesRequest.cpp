

#include "huaweicloud/ims/model/GlanceListImagesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceListImagesRequest::GlanceListImagesRequest()
{
    imagetype_ = "";
    imagetypeIsSet_ = false;
    isregistered_ = false;
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
    visibility_ = "";
    visibilityIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

GlanceListImagesRequest::~GlanceListImagesRequest() = default;

void GlanceListImagesRequest::validate()
{
}

web::json::value GlanceListImagesRequest::toJson() const
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
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}

bool GlanceListImagesRequest::fromJson(const web::json::value& val)
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
            bool refVal;
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
    if(val.has_field(utility::conversions::to_string_t("visibility"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("visibility"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVisibility(refVal);
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


std::string GlanceListImagesRequest::getImagetype() const
{
    return imagetype_;
}

void GlanceListImagesRequest::setImagetype(const std::string& value)
{
    imagetype_ = value;
    imagetypeIsSet_ = true;
}

bool GlanceListImagesRequest::imagetypeIsSet() const
{
    return imagetypeIsSet_;
}

void GlanceListImagesRequest::unsetimagetype()
{
    imagetypeIsSet_ = false;
}

bool GlanceListImagesRequest::isIsregistered() const
{
    return isregistered_;
}

void GlanceListImagesRequest::setIsregistered(bool value)
{
    isregistered_ = value;
    isregisteredIsSet_ = true;
}

bool GlanceListImagesRequest::isregisteredIsSet() const
{
    return isregisteredIsSet_;
}

void GlanceListImagesRequest::unsetisregistered()
{
    isregisteredIsSet_ = false;
}

std::string GlanceListImagesRequest::getOsBit() const
{
    return osBit_;
}

void GlanceListImagesRequest::setOsBit(const std::string& value)
{
    osBit_ = value;
    osBitIsSet_ = true;
}

bool GlanceListImagesRequest::osBitIsSet() const
{
    return osBitIsSet_;
}

void GlanceListImagesRequest::unsetosBit()
{
    osBitIsSet_ = false;
}

std::string GlanceListImagesRequest::getOsType() const
{
    return osType_;
}

void GlanceListImagesRequest::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool GlanceListImagesRequest::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void GlanceListImagesRequest::unsetosType()
{
    osTypeIsSet_ = false;
}

std::string GlanceListImagesRequest::getPlatform() const
{
    return platform_;
}

void GlanceListImagesRequest::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool GlanceListImagesRequest::platformIsSet() const
{
    return platformIsSet_;
}

void GlanceListImagesRequest::unsetplatform()
{
    platformIsSet_ = false;
}

std::string GlanceListImagesRequest::getSupportDiskintensive() const
{
    return supportDiskintensive_;
}

void GlanceListImagesRequest::setSupportDiskintensive(const std::string& value)
{
    supportDiskintensive_ = value;
    supportDiskintensiveIsSet_ = true;
}

bool GlanceListImagesRequest::supportDiskintensiveIsSet() const
{
    return supportDiskintensiveIsSet_;
}

void GlanceListImagesRequest::unsetsupportDiskintensive()
{
    supportDiskintensiveIsSet_ = false;
}

std::string GlanceListImagesRequest::getSupportHighperformance() const
{
    return supportHighperformance_;
}

void GlanceListImagesRequest::setSupportHighperformance(const std::string& value)
{
    supportHighperformance_ = value;
    supportHighperformanceIsSet_ = true;
}

bool GlanceListImagesRequest::supportHighperformanceIsSet() const
{
    return supportHighperformanceIsSet_;
}

void GlanceListImagesRequest::unsetsupportHighperformance()
{
    supportHighperformanceIsSet_ = false;
}

std::string GlanceListImagesRequest::getSupportKvm() const
{
    return supportKvm_;
}

void GlanceListImagesRequest::setSupportKvm(const std::string& value)
{
    supportKvm_ = value;
    supportKvmIsSet_ = true;
}

bool GlanceListImagesRequest::supportKvmIsSet() const
{
    return supportKvmIsSet_;
}

void GlanceListImagesRequest::unsetsupportKvm()
{
    supportKvmIsSet_ = false;
}

std::string GlanceListImagesRequest::getSupportKvmGpuType() const
{
    return supportKvmGpuType_;
}

void GlanceListImagesRequest::setSupportKvmGpuType(const std::string& value)
{
    supportKvmGpuType_ = value;
    supportKvmGpuTypeIsSet_ = true;
}

bool GlanceListImagesRequest::supportKvmGpuTypeIsSet() const
{
    return supportKvmGpuTypeIsSet_;
}

void GlanceListImagesRequest::unsetsupportKvmGpuType()
{
    supportKvmGpuTypeIsSet_ = false;
}

std::string GlanceListImagesRequest::getSupportKvmInfiniband() const
{
    return supportKvmInfiniband_;
}

void GlanceListImagesRequest::setSupportKvmInfiniband(const std::string& value)
{
    supportKvmInfiniband_ = value;
    supportKvmInfinibandIsSet_ = true;
}

bool GlanceListImagesRequest::supportKvmInfinibandIsSet() const
{
    return supportKvmInfinibandIsSet_;
}

void GlanceListImagesRequest::unsetsupportKvmInfiniband()
{
    supportKvmInfinibandIsSet_ = false;
}

std::string GlanceListImagesRequest::getSupportLargememory() const
{
    return supportLargememory_;
}

void GlanceListImagesRequest::setSupportLargememory(const std::string& value)
{
    supportLargememory_ = value;
    supportLargememoryIsSet_ = true;
}

bool GlanceListImagesRequest::supportLargememoryIsSet() const
{
    return supportLargememoryIsSet_;
}

void GlanceListImagesRequest::unsetsupportLargememory()
{
    supportLargememoryIsSet_ = false;
}

std::string GlanceListImagesRequest::getSupportXen() const
{
    return supportXen_;
}

void GlanceListImagesRequest::setSupportXen(const std::string& value)
{
    supportXen_ = value;
    supportXenIsSet_ = true;
}

bool GlanceListImagesRequest::supportXenIsSet() const
{
    return supportXenIsSet_;
}

void GlanceListImagesRequest::unsetsupportXen()
{
    supportXenIsSet_ = false;
}

std::string GlanceListImagesRequest::getSupportXenGpuType() const
{
    return supportXenGpuType_;
}

void GlanceListImagesRequest::setSupportXenGpuType(const std::string& value)
{
    supportXenGpuType_ = value;
    supportXenGpuTypeIsSet_ = true;
}

bool GlanceListImagesRequest::supportXenGpuTypeIsSet() const
{
    return supportXenGpuTypeIsSet_;
}

void GlanceListImagesRequest::unsetsupportXenGpuType()
{
    supportXenGpuTypeIsSet_ = false;
}

std::string GlanceListImagesRequest::getSupportXenHana() const
{
    return supportXenHana_;
}

void GlanceListImagesRequest::setSupportXenHana(const std::string& value)
{
    supportXenHana_ = value;
    supportXenHanaIsSet_ = true;
}

bool GlanceListImagesRequest::supportXenHanaIsSet() const
{
    return supportXenHanaIsSet_;
}

void GlanceListImagesRequest::unsetsupportXenHana()
{
    supportXenHanaIsSet_ = false;
}

std::string GlanceListImagesRequest::getContainerFormat() const
{
    return containerFormat_;
}

void GlanceListImagesRequest::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool GlanceListImagesRequest::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void GlanceListImagesRequest::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string GlanceListImagesRequest::getDiskFormat() const
{
    return diskFormat_;
}

void GlanceListImagesRequest::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool GlanceListImagesRequest::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void GlanceListImagesRequest::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

std::string GlanceListImagesRequest::getId() const
{
    return id_;
}

void GlanceListImagesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GlanceListImagesRequest::idIsSet() const
{
    return idIsSet_;
}

void GlanceListImagesRequest::unsetid()
{
    idIsSet_ = false;
}

int32_t GlanceListImagesRequest::getLimit() const
{
    return limit_;
}

void GlanceListImagesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool GlanceListImagesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void GlanceListImagesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string GlanceListImagesRequest::getMarker() const
{
    return marker_;
}

void GlanceListImagesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool GlanceListImagesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void GlanceListImagesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string GlanceListImagesRequest::getMemberStatus() const
{
    return memberStatus_;
}

void GlanceListImagesRequest::setMemberStatus(const std::string& value)
{
    memberStatus_ = value;
    memberStatusIsSet_ = true;
}

bool GlanceListImagesRequest::memberStatusIsSet() const
{
    return memberStatusIsSet_;
}

void GlanceListImagesRequest::unsetmemberStatus()
{
    memberStatusIsSet_ = false;
}

int32_t GlanceListImagesRequest::getMinDisk() const
{
    return minDisk_;
}

void GlanceListImagesRequest::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool GlanceListImagesRequest::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void GlanceListImagesRequest::unsetminDisk()
{
    minDiskIsSet_ = false;
}

int32_t GlanceListImagesRequest::getMinRam() const
{
    return minRam_;
}

void GlanceListImagesRequest::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool GlanceListImagesRequest::minRamIsSet() const
{
    return minRamIsSet_;
}

void GlanceListImagesRequest::unsetminRam()
{
    minRamIsSet_ = false;
}

std::string GlanceListImagesRequest::getName() const
{
    return name_;
}

void GlanceListImagesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GlanceListImagesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void GlanceListImagesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string GlanceListImagesRequest::getOwner() const
{
    return owner_;
}

void GlanceListImagesRequest::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool GlanceListImagesRequest::ownerIsSet() const
{
    return ownerIsSet_;
}

void GlanceListImagesRequest::unsetowner()
{
    ownerIsSet_ = false;
}

bool GlanceListImagesRequest::isProtected() const
{
    return protected_;
}

void GlanceListImagesRequest::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool GlanceListImagesRequest::protectedIsSet() const
{
    return protectedIsSet_;
}

void GlanceListImagesRequest::unsetprotected()
{
    protectedIsSet_ = false;
}

std::string GlanceListImagesRequest::getSortDir() const
{
    return sortDir_;
}

void GlanceListImagesRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool GlanceListImagesRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void GlanceListImagesRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string GlanceListImagesRequest::getSortKey() const
{
    return sortKey_;
}

void GlanceListImagesRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool GlanceListImagesRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void GlanceListImagesRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string GlanceListImagesRequest::getStatus() const
{
    return status_;
}

void GlanceListImagesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GlanceListImagesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void GlanceListImagesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string GlanceListImagesRequest::getTag() const
{
    return tag_;
}

void GlanceListImagesRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool GlanceListImagesRequest::tagIsSet() const
{
    return tagIsSet_;
}

void GlanceListImagesRequest::unsettag()
{
    tagIsSet_ = false;
}

std::string GlanceListImagesRequest::getVisibility() const
{
    return visibility_;
}

void GlanceListImagesRequest::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool GlanceListImagesRequest::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void GlanceListImagesRequest::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string GlanceListImagesRequest::getCreatedAt() const
{
    return createdAt_;
}

void GlanceListImagesRequest::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GlanceListImagesRequest::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GlanceListImagesRequest::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GlanceListImagesRequest::getUpdatedAt() const
{
    return updatedAt_;
}

void GlanceListImagesRequest::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GlanceListImagesRequest::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GlanceListImagesRequest::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


