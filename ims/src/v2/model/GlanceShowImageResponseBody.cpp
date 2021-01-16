

#include "huaweicloud/ims/v2/model/GlanceShowImageResponseBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceShowImageResponseBody::GlanceShowImageResponseBody()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    dataOrigin_ = "";
    dataOriginIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    imageSize_ = "";
    imageSizeIsSet_ = false;
    imageSourceType_ = "";
    imageSourceTypeIsSet_ = false;
    imagetype_ = "";
    imagetypeIsSet_ = false;
    isregistered_ = "";
    isregisteredIsSet_ = false;
    originalimagename_ = "";
    originalimagenameIsSet_ = false;
    osBit_ = "";
    osBitIsSet_ = false;
    osType_ = "";
    osTypeIsSet_ = false;
    osVersion_ = "";
    osVersionIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
    productcode_ = "";
    productcodeIsSet_ = false;
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
    checksum_ = "";
    checksumIsSet_ = false;
    containerFormat_ = "";
    containerFormatIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    deleted_ = false;
    deletedIsSet_ = false;
    deletedAt_ = "";
    deletedAtIsSet_ = false;
    diskFormat_ = "";
    diskFormatIsSet_ = false;
    file_ = "";
    fileIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
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
    schema_ = "";
    schemaIsSet_ = false;
    self_ = "";
    selfIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tagsIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    virtualEnvType_ = "";
    virtualEnvTypeIsSet_ = false;
    virtualSize_ = 0;
    virtualSizeIsSet_ = false;
    visibility_ = "";
    visibilityIsSet_ = false;
    supportFcInject_ = "";
    supportFcInjectIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    hwFirmwareType_ = "";
    hwFirmwareTypeIsSet_ = false;
    supportArm_ = "";
    supportArmIsSet_ = false;
    isOffshelved_ = "";
    isOffshelvedIsSet_ = false;
}

GlanceShowImageResponseBody::~GlanceShowImageResponseBody() = default;

void GlanceShowImageResponseBody::validate()
{
}

web::json::value GlanceShowImageResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("__backup_id")] = ModelBase::toJson(backupId_);
    }
    if(dataOriginIsSet_) {
        val[utility::conversions::to_string_t("__data_origin")] = ModelBase::toJson(dataOrigin_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("__description")] = ModelBase::toJson(description_);
    }
    if(imageSizeIsSet_) {
        val[utility::conversions::to_string_t("__image_size")] = ModelBase::toJson(imageSize_);
    }
    if(imageSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("__image_source_type")] = ModelBase::toJson(imageSourceType_);
    }
    if(imagetypeIsSet_) {
        val[utility::conversions::to_string_t("__imagetype")] = ModelBase::toJson(imagetype_);
    }
    if(isregisteredIsSet_) {
        val[utility::conversions::to_string_t("__isregistered")] = ModelBase::toJson(isregistered_);
    }
    if(originalimagenameIsSet_) {
        val[utility::conversions::to_string_t("__originalimagename")] = ModelBase::toJson(originalimagename_);
    }
    if(osBitIsSet_) {
        val[utility::conversions::to_string_t("__os_bit")] = ModelBase::toJson(osBit_);
    }
    if(osTypeIsSet_) {
        val[utility::conversions::to_string_t("__os_type")] = ModelBase::toJson(osType_);
    }
    if(osVersionIsSet_) {
        val[utility::conversions::to_string_t("__os_version")] = ModelBase::toJson(osVersion_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("__platform")] = ModelBase::toJson(platform_);
    }
    if(productcodeIsSet_) {
        val[utility::conversions::to_string_t("__productcode")] = ModelBase::toJson(productcode_);
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
    if(checksumIsSet_) {
        val[utility::conversions::to_string_t("checksum")] = ModelBase::toJson(checksum_);
    }
    if(containerFormatIsSet_) {
        val[utility::conversions::to_string_t("container_format")] = ModelBase::toJson(containerFormat_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(deletedAtIsSet_) {
        val[utility::conversions::to_string_t("deleted_at")] = ModelBase::toJson(deletedAt_);
    }
    if(diskFormatIsSet_) {
        val[utility::conversions::to_string_t("disk_format")] = ModelBase::toJson(diskFormat_);
    }
    if(fileIsSet_) {
        val[utility::conversions::to_string_t("file")] = ModelBase::toJson(file_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(schemaIsSet_) {
        val[utility::conversions::to_string_t("schema")] = ModelBase::toJson(schema_);
    }
    if(selfIsSet_) {
        val[utility::conversions::to_string_t("self")] = ModelBase::toJson(self_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(virtualEnvTypeIsSet_) {
        val[utility::conversions::to_string_t("virtual_env_type")] = ModelBase::toJson(virtualEnvType_);
    }
    if(virtualSizeIsSet_) {
        val[utility::conversions::to_string_t("virtual_size")] = ModelBase::toJson(virtualSize_);
    }
    if(visibilityIsSet_) {
        val[utility::conversions::to_string_t("visibility")] = ModelBase::toJson(visibility_);
    }
    if(supportFcInjectIsSet_) {
        val[utility::conversions::to_string_t("__support_fc_inject")] = ModelBase::toJson(supportFcInject_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(hwFirmwareTypeIsSet_) {
        val[utility::conversions::to_string_t("hw_firmware_type")] = ModelBase::toJson(hwFirmwareType_);
    }
    if(supportArmIsSet_) {
        val[utility::conversions::to_string_t("__support_arm")] = ModelBase::toJson(supportArm_);
    }
    if(isOffshelvedIsSet_) {
        val[utility::conversions::to_string_t("__is_offshelved")] = ModelBase::toJson(isOffshelved_);
    }

    return val;
}

bool GlanceShowImageResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("__backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__data_origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__data_origin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__image_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__image_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__image_source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__image_source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageSourceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("__isregistered"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__isregistered"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsregistered(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__originalimagename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__originalimagename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalimagename(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("__os_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("__productcode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__productcode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductcode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("checksum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checksum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChecksum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFile(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("schema"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchema(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("self"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("self"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelf(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("virtual_env_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virtual_env_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirtualEnvType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("virtual_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("virtual_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVirtualSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("__support_fc_inject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_fc_inject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportFcInject(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hw_firmware_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw_firmware_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwFirmwareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_arm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_arm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportArm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__is_offshelved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__is_offshelved"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOffshelved(refVal);
        }
    }
    return ok;
}


std::string GlanceShowImageResponseBody::getBackupId() const
{
    return backupId_;
}

void GlanceShowImageResponseBody::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool GlanceShowImageResponseBody::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void GlanceShowImageResponseBody::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getDataOrigin() const
{
    return dataOrigin_;
}

void GlanceShowImageResponseBody::setDataOrigin(const std::string& value)
{
    dataOrigin_ = value;
    dataOriginIsSet_ = true;
}

bool GlanceShowImageResponseBody::dataOriginIsSet() const
{
    return dataOriginIsSet_;
}

void GlanceShowImageResponseBody::unsetdataOrigin()
{
    dataOriginIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getDescription() const
{
    return description_;
}

void GlanceShowImageResponseBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool GlanceShowImageResponseBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void GlanceShowImageResponseBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getImageSize() const
{
    return imageSize_;
}

void GlanceShowImageResponseBody::setImageSize(const std::string& value)
{
    imageSize_ = value;
    imageSizeIsSet_ = true;
}

bool GlanceShowImageResponseBody::imageSizeIsSet() const
{
    return imageSizeIsSet_;
}

void GlanceShowImageResponseBody::unsetimageSize()
{
    imageSizeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getImageSourceType() const
{
    return imageSourceType_;
}

void GlanceShowImageResponseBody::setImageSourceType(const std::string& value)
{
    imageSourceType_ = value;
    imageSourceTypeIsSet_ = true;
}

bool GlanceShowImageResponseBody::imageSourceTypeIsSet() const
{
    return imageSourceTypeIsSet_;
}

void GlanceShowImageResponseBody::unsetimageSourceType()
{
    imageSourceTypeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getImagetype() const
{
    return imagetype_;
}

void GlanceShowImageResponseBody::setImagetype(const std::string& value)
{
    imagetype_ = value;
    imagetypeIsSet_ = true;
}

bool GlanceShowImageResponseBody::imagetypeIsSet() const
{
    return imagetypeIsSet_;
}

void GlanceShowImageResponseBody::unsetimagetype()
{
    imagetypeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getIsregistered() const
{
    return isregistered_;
}

void GlanceShowImageResponseBody::setIsregistered(const std::string& value)
{
    isregistered_ = value;
    isregisteredIsSet_ = true;
}

bool GlanceShowImageResponseBody::isregisteredIsSet() const
{
    return isregisteredIsSet_;
}

void GlanceShowImageResponseBody::unsetisregistered()
{
    isregisteredIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getOriginalimagename() const
{
    return originalimagename_;
}

void GlanceShowImageResponseBody::setOriginalimagename(const std::string& value)
{
    originalimagename_ = value;
    originalimagenameIsSet_ = true;
}

bool GlanceShowImageResponseBody::originalimagenameIsSet() const
{
    return originalimagenameIsSet_;
}

void GlanceShowImageResponseBody::unsetoriginalimagename()
{
    originalimagenameIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getOsBit() const
{
    return osBit_;
}

void GlanceShowImageResponseBody::setOsBit(const std::string& value)
{
    osBit_ = value;
    osBitIsSet_ = true;
}

bool GlanceShowImageResponseBody::osBitIsSet() const
{
    return osBitIsSet_;
}

void GlanceShowImageResponseBody::unsetosBit()
{
    osBitIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getOsType() const
{
    return osType_;
}

void GlanceShowImageResponseBody::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool GlanceShowImageResponseBody::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void GlanceShowImageResponseBody::unsetosType()
{
    osTypeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getOsVersion() const
{
    return osVersion_;
}

void GlanceShowImageResponseBody::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool GlanceShowImageResponseBody::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void GlanceShowImageResponseBody::unsetosVersion()
{
    osVersionIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getPlatform() const
{
    return platform_;
}

void GlanceShowImageResponseBody::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool GlanceShowImageResponseBody::platformIsSet() const
{
    return platformIsSet_;
}

void GlanceShowImageResponseBody::unsetplatform()
{
    platformIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getProductcode() const
{
    return productcode_;
}

void GlanceShowImageResponseBody::setProductcode(const std::string& value)
{
    productcode_ = value;
    productcodeIsSet_ = true;
}

bool GlanceShowImageResponseBody::productcodeIsSet() const
{
    return productcodeIsSet_;
}

void GlanceShowImageResponseBody::unsetproductcode()
{
    productcodeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportDiskintensive() const
{
    return supportDiskintensive_;
}

void GlanceShowImageResponseBody::setSupportDiskintensive(const std::string& value)
{
    supportDiskintensive_ = value;
    supportDiskintensiveIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportDiskintensiveIsSet() const
{
    return supportDiskintensiveIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportDiskintensive()
{
    supportDiskintensiveIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportHighperformance() const
{
    return supportHighperformance_;
}

void GlanceShowImageResponseBody::setSupportHighperformance(const std::string& value)
{
    supportHighperformance_ = value;
    supportHighperformanceIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportHighperformanceIsSet() const
{
    return supportHighperformanceIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportHighperformance()
{
    supportHighperformanceIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportKvm() const
{
    return supportKvm_;
}

void GlanceShowImageResponseBody::setSupportKvm(const std::string& value)
{
    supportKvm_ = value;
    supportKvmIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportKvmIsSet() const
{
    return supportKvmIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportKvm()
{
    supportKvmIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportKvmGpuType() const
{
    return supportKvmGpuType_;
}

void GlanceShowImageResponseBody::setSupportKvmGpuType(const std::string& value)
{
    supportKvmGpuType_ = value;
    supportKvmGpuTypeIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportKvmGpuTypeIsSet() const
{
    return supportKvmGpuTypeIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportKvmGpuType()
{
    supportKvmGpuTypeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportKvmInfiniband() const
{
    return supportKvmInfiniband_;
}

void GlanceShowImageResponseBody::setSupportKvmInfiniband(const std::string& value)
{
    supportKvmInfiniband_ = value;
    supportKvmInfinibandIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportKvmInfinibandIsSet() const
{
    return supportKvmInfinibandIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportKvmInfiniband()
{
    supportKvmInfinibandIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportLargememory() const
{
    return supportLargememory_;
}

void GlanceShowImageResponseBody::setSupportLargememory(const std::string& value)
{
    supportLargememory_ = value;
    supportLargememoryIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportLargememoryIsSet() const
{
    return supportLargememoryIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportLargememory()
{
    supportLargememoryIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportXen() const
{
    return supportXen_;
}

void GlanceShowImageResponseBody::setSupportXen(const std::string& value)
{
    supportXen_ = value;
    supportXenIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportXenIsSet() const
{
    return supportXenIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportXen()
{
    supportXenIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportXenGpuType() const
{
    return supportXenGpuType_;
}

void GlanceShowImageResponseBody::setSupportXenGpuType(const std::string& value)
{
    supportXenGpuType_ = value;
    supportXenGpuTypeIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportXenGpuTypeIsSet() const
{
    return supportXenGpuTypeIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportXenGpuType()
{
    supportXenGpuTypeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportXenHana() const
{
    return supportXenHana_;
}

void GlanceShowImageResponseBody::setSupportXenHana(const std::string& value)
{
    supportXenHana_ = value;
    supportXenHanaIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportXenHanaIsSet() const
{
    return supportXenHanaIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportXenHana()
{
    supportXenHanaIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getChecksum() const
{
    return checksum_;
}

void GlanceShowImageResponseBody::setChecksum(const std::string& value)
{
    checksum_ = value;
    checksumIsSet_ = true;
}

bool GlanceShowImageResponseBody::checksumIsSet() const
{
    return checksumIsSet_;
}

void GlanceShowImageResponseBody::unsetchecksum()
{
    checksumIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getContainerFormat() const
{
    return containerFormat_;
}

void GlanceShowImageResponseBody::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool GlanceShowImageResponseBody::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void GlanceShowImageResponseBody::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getCreatedAt() const
{
    return createdAt_;
}

void GlanceShowImageResponseBody::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GlanceShowImageResponseBody::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GlanceShowImageResponseBody::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

bool GlanceShowImageResponseBody::isDeleted() const
{
    return deleted_;
}

void GlanceShowImageResponseBody::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool GlanceShowImageResponseBody::deletedIsSet() const
{
    return deletedIsSet_;
}

void GlanceShowImageResponseBody::unsetdeleted()
{
    deletedIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getDeletedAt() const
{
    return deletedAt_;
}

void GlanceShowImageResponseBody::setDeletedAt(const std::string& value)
{
    deletedAt_ = value;
    deletedAtIsSet_ = true;
}

bool GlanceShowImageResponseBody::deletedAtIsSet() const
{
    return deletedAtIsSet_;
}

void GlanceShowImageResponseBody::unsetdeletedAt()
{
    deletedAtIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getDiskFormat() const
{
    return diskFormat_;
}

void GlanceShowImageResponseBody::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool GlanceShowImageResponseBody::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void GlanceShowImageResponseBody::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getFile() const
{
    return file_;
}

void GlanceShowImageResponseBody::setFile(const std::string& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool GlanceShowImageResponseBody::fileIsSet() const
{
    return fileIsSet_;
}

void GlanceShowImageResponseBody::unsetfile()
{
    fileIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getId() const
{
    return id_;
}

void GlanceShowImageResponseBody::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GlanceShowImageResponseBody::idIsSet() const
{
    return idIsSet_;
}

void GlanceShowImageResponseBody::unsetid()
{
    idIsSet_ = false;
}

int32_t GlanceShowImageResponseBody::getMinDisk() const
{
    return minDisk_;
}

void GlanceShowImageResponseBody::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool GlanceShowImageResponseBody::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void GlanceShowImageResponseBody::unsetminDisk()
{
    minDiskIsSet_ = false;
}

int32_t GlanceShowImageResponseBody::getMinRam() const
{
    return minRam_;
}

void GlanceShowImageResponseBody::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool GlanceShowImageResponseBody::minRamIsSet() const
{
    return minRamIsSet_;
}

void GlanceShowImageResponseBody::unsetminRam()
{
    minRamIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getName() const
{
    return name_;
}

void GlanceShowImageResponseBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GlanceShowImageResponseBody::nameIsSet() const
{
    return nameIsSet_;
}

void GlanceShowImageResponseBody::unsetname()
{
    nameIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getOwner() const
{
    return owner_;
}

void GlanceShowImageResponseBody::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool GlanceShowImageResponseBody::ownerIsSet() const
{
    return ownerIsSet_;
}

void GlanceShowImageResponseBody::unsetowner()
{
    ownerIsSet_ = false;
}

bool GlanceShowImageResponseBody::isProtected() const
{
    return protected_;
}

void GlanceShowImageResponseBody::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool GlanceShowImageResponseBody::protectedIsSet() const
{
    return protectedIsSet_;
}

void GlanceShowImageResponseBody::unsetprotected()
{
    protectedIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSchema() const
{
    return schema_;
}

void GlanceShowImageResponseBody::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool GlanceShowImageResponseBody::schemaIsSet() const
{
    return schemaIsSet_;
}

void GlanceShowImageResponseBody::unsetschema()
{
    schemaIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSelf() const
{
    return self_;
}

void GlanceShowImageResponseBody::setSelf(const std::string& value)
{
    self_ = value;
    selfIsSet_ = true;
}

bool GlanceShowImageResponseBody::selfIsSet() const
{
    return selfIsSet_;
}

void GlanceShowImageResponseBody::unsetself()
{
    selfIsSet_ = false;
}

int64_t GlanceShowImageResponseBody::getSize() const
{
    return size_;
}

void GlanceShowImageResponseBody::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool GlanceShowImageResponseBody::sizeIsSet() const
{
    return sizeIsSet_;
}

void GlanceShowImageResponseBody::unsetsize()
{
    sizeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getStatus() const
{
    return status_;
}

void GlanceShowImageResponseBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GlanceShowImageResponseBody::statusIsSet() const
{
    return statusIsSet_;
}

void GlanceShowImageResponseBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& GlanceShowImageResponseBody::getTags()
{
    return tags_;
}

void GlanceShowImageResponseBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool GlanceShowImageResponseBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void GlanceShowImageResponseBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getUpdatedAt() const
{
    return updatedAt_;
}

void GlanceShowImageResponseBody::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GlanceShowImageResponseBody::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GlanceShowImageResponseBody::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getVirtualEnvType() const
{
    return virtualEnvType_;
}

void GlanceShowImageResponseBody::setVirtualEnvType(const std::string& value)
{
    virtualEnvType_ = value;
    virtualEnvTypeIsSet_ = true;
}

bool GlanceShowImageResponseBody::virtualEnvTypeIsSet() const
{
    return virtualEnvTypeIsSet_;
}

void GlanceShowImageResponseBody::unsetvirtualEnvType()
{
    virtualEnvTypeIsSet_ = false;
}

int32_t GlanceShowImageResponseBody::getVirtualSize() const
{
    return virtualSize_;
}

void GlanceShowImageResponseBody::setVirtualSize(int32_t value)
{
    virtualSize_ = value;
    virtualSizeIsSet_ = true;
}

bool GlanceShowImageResponseBody::virtualSizeIsSet() const
{
    return virtualSizeIsSet_;
}

void GlanceShowImageResponseBody::unsetvirtualSize()
{
    virtualSizeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getVisibility() const
{
    return visibility_;
}

void GlanceShowImageResponseBody::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool GlanceShowImageResponseBody::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void GlanceShowImageResponseBody::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportFcInject() const
{
    return supportFcInject_;
}

void GlanceShowImageResponseBody::setSupportFcInject(const std::string& value)
{
    supportFcInject_ = value;
    supportFcInjectIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportFcInjectIsSet() const
{
    return supportFcInjectIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportFcInject()
{
    supportFcInjectIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void GlanceShowImageResponseBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool GlanceShowImageResponseBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void GlanceShowImageResponseBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getHwFirmwareType() const
{
    return hwFirmwareType_;
}

void GlanceShowImageResponseBody::setHwFirmwareType(const std::string& value)
{
    hwFirmwareType_ = value;
    hwFirmwareTypeIsSet_ = true;
}

bool GlanceShowImageResponseBody::hwFirmwareTypeIsSet() const
{
    return hwFirmwareTypeIsSet_;
}

void GlanceShowImageResponseBody::unsethwFirmwareType()
{
    hwFirmwareTypeIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getSupportArm() const
{
    return supportArm_;
}

void GlanceShowImageResponseBody::setSupportArm(const std::string& value)
{
    supportArm_ = value;
    supportArmIsSet_ = true;
}

bool GlanceShowImageResponseBody::supportArmIsSet() const
{
    return supportArmIsSet_;
}

void GlanceShowImageResponseBody::unsetsupportArm()
{
    supportArmIsSet_ = false;
}

std::string GlanceShowImageResponseBody::getIsOffshelved() const
{
    return isOffshelved_;
}

void GlanceShowImageResponseBody::setIsOffshelved(const std::string& value)
{
    isOffshelved_ = value;
    isOffshelvedIsSet_ = true;
}

bool GlanceShowImageResponseBody::isOffshelvedIsSet() const
{
    return isOffshelvedIsSet_;
}

void GlanceShowImageResponseBody::unsetisOffshelved()
{
    isOffshelvedIsSet_ = false;
}

}
}
}
}
}


