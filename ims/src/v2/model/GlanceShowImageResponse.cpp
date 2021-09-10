

#include "huaweicloud/ims/v2/model/GlanceShowImageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




GlanceShowImageResponse::GlanceShowImageResponse()
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
    lazyloading_ = "";
    lazyloadingIsSet_ = false;
    osFeatureList_ = "";
    osFeatureListIsSet_ = false;
    rootOrigin_ = "";
    rootOriginIsSet_ = false;
    sequenceNum_ = "";
    sequenceNumIsSet_ = false;
    supportAgentList_ = "";
    supportAgentListIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
    activeAt_ = "";
    activeAtIsSet_ = false;
    hwVifMultiqueueEnabled_ = "";
    hwVifMultiqueueEnabledIsSet_ = false;
    maxRam_ = "";
    maxRamIsSet_ = false;
    imageLocation_ = "";
    imageLocationIsSet_ = false;
    isConfigInit_ = "";
    isConfigInitIsSet_ = false;
    accountCode_ = "";
    accountCodeIsSet_ = false;
}

GlanceShowImageResponse::~GlanceShowImageResponse() = default;

void GlanceShowImageResponse::validate()
{
}

web::json::value GlanceShowImageResponse::toJson() const
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
    if(lazyloadingIsSet_) {
        val[utility::conversions::to_string_t("__lazyloading")] = ModelBase::toJson(lazyloading_);
    }
    if(osFeatureListIsSet_) {
        val[utility::conversions::to_string_t("__os_feature_list")] = ModelBase::toJson(osFeatureList_);
    }
    if(rootOriginIsSet_) {
        val[utility::conversions::to_string_t("__root_origin")] = ModelBase::toJson(rootOrigin_);
    }
    if(sequenceNumIsSet_) {
        val[utility::conversions::to_string_t("__sequence_num")] = ModelBase::toJson(sequenceNum_);
    }
    if(supportAgentListIsSet_) {
        val[utility::conversions::to_string_t("__support_agent_list")] = ModelBase::toJson(supportAgentList_);
    }
    if(systemCmkidIsSet_) {
        val[utility::conversions::to_string_t("__system__cmkid")] = ModelBase::toJson(systemCmkid_);
    }
    if(activeAtIsSet_) {
        val[utility::conversions::to_string_t("active_at")] = ModelBase::toJson(activeAt_);
    }
    if(hwVifMultiqueueEnabledIsSet_) {
        val[utility::conversions::to_string_t("hw_vif_multiqueue_enabled")] = ModelBase::toJson(hwVifMultiqueueEnabled_);
    }
    if(maxRamIsSet_) {
        val[utility::conversions::to_string_t("max_ram")] = ModelBase::toJson(maxRam_);
    }
    if(imageLocationIsSet_) {
        val[utility::conversions::to_string_t("__image_location")] = ModelBase::toJson(imageLocation_);
    }
    if(isConfigInitIsSet_) {
        val[utility::conversions::to_string_t("__is_config_init")] = ModelBase::toJson(isConfigInit_);
    }
    if(accountCodeIsSet_) {
        val[utility::conversions::to_string_t("__account_code")] = ModelBase::toJson(accountCode_);
    }

    return val;
}

bool GlanceShowImageResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("__lazyloading"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__lazyloading"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLazyloading(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__os_feature_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_feature_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsFeatureList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__root_origin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__root_origin"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootOrigin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__sequence_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__sequence_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequenceNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_agent_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_agent_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAgentList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__system__cmkid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__cmkid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemCmkid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hw_vif_multiqueue_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw_vif_multiqueue_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwVifMultiqueueEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__image_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__image_location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__is_config_init"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__is_config_init"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsConfigInit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__account_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__account_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccountCode(refVal);
        }
    }
    return ok;
}


std::string GlanceShowImageResponse::getBackupId() const
{
    return backupId_;
}

void GlanceShowImageResponse::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool GlanceShowImageResponse::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void GlanceShowImageResponse::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string GlanceShowImageResponse::getDataOrigin() const
{
    return dataOrigin_;
}

void GlanceShowImageResponse::setDataOrigin(const std::string& value)
{
    dataOrigin_ = value;
    dataOriginIsSet_ = true;
}

bool GlanceShowImageResponse::dataOriginIsSet() const
{
    return dataOriginIsSet_;
}

void GlanceShowImageResponse::unsetdataOrigin()
{
    dataOriginIsSet_ = false;
}

std::string GlanceShowImageResponse::getDescription() const
{
    return description_;
}

void GlanceShowImageResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool GlanceShowImageResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void GlanceShowImageResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string GlanceShowImageResponse::getImageSize() const
{
    return imageSize_;
}

void GlanceShowImageResponse::setImageSize(const std::string& value)
{
    imageSize_ = value;
    imageSizeIsSet_ = true;
}

bool GlanceShowImageResponse::imageSizeIsSet() const
{
    return imageSizeIsSet_;
}

void GlanceShowImageResponse::unsetimageSize()
{
    imageSizeIsSet_ = false;
}

std::string GlanceShowImageResponse::getImageSourceType() const
{
    return imageSourceType_;
}

void GlanceShowImageResponse::setImageSourceType(const std::string& value)
{
    imageSourceType_ = value;
    imageSourceTypeIsSet_ = true;
}

bool GlanceShowImageResponse::imageSourceTypeIsSet() const
{
    return imageSourceTypeIsSet_;
}

void GlanceShowImageResponse::unsetimageSourceType()
{
    imageSourceTypeIsSet_ = false;
}

std::string GlanceShowImageResponse::getImagetype() const
{
    return imagetype_;
}

void GlanceShowImageResponse::setImagetype(const std::string& value)
{
    imagetype_ = value;
    imagetypeIsSet_ = true;
}

bool GlanceShowImageResponse::imagetypeIsSet() const
{
    return imagetypeIsSet_;
}

void GlanceShowImageResponse::unsetimagetype()
{
    imagetypeIsSet_ = false;
}

std::string GlanceShowImageResponse::getIsregistered() const
{
    return isregistered_;
}

void GlanceShowImageResponse::setIsregistered(const std::string& value)
{
    isregistered_ = value;
    isregisteredIsSet_ = true;
}

bool GlanceShowImageResponse::isregisteredIsSet() const
{
    return isregisteredIsSet_;
}

void GlanceShowImageResponse::unsetisregistered()
{
    isregisteredIsSet_ = false;
}

std::string GlanceShowImageResponse::getOriginalimagename() const
{
    return originalimagename_;
}

void GlanceShowImageResponse::setOriginalimagename(const std::string& value)
{
    originalimagename_ = value;
    originalimagenameIsSet_ = true;
}

bool GlanceShowImageResponse::originalimagenameIsSet() const
{
    return originalimagenameIsSet_;
}

void GlanceShowImageResponse::unsetoriginalimagename()
{
    originalimagenameIsSet_ = false;
}

std::string GlanceShowImageResponse::getOsBit() const
{
    return osBit_;
}

void GlanceShowImageResponse::setOsBit(const std::string& value)
{
    osBit_ = value;
    osBitIsSet_ = true;
}

bool GlanceShowImageResponse::osBitIsSet() const
{
    return osBitIsSet_;
}

void GlanceShowImageResponse::unsetosBit()
{
    osBitIsSet_ = false;
}

std::string GlanceShowImageResponse::getOsType() const
{
    return osType_;
}

void GlanceShowImageResponse::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool GlanceShowImageResponse::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void GlanceShowImageResponse::unsetosType()
{
    osTypeIsSet_ = false;
}

std::string GlanceShowImageResponse::getOsVersion() const
{
    return osVersion_;
}

void GlanceShowImageResponse::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool GlanceShowImageResponse::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void GlanceShowImageResponse::unsetosVersion()
{
    osVersionIsSet_ = false;
}

std::string GlanceShowImageResponse::getPlatform() const
{
    return platform_;
}

void GlanceShowImageResponse::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool GlanceShowImageResponse::platformIsSet() const
{
    return platformIsSet_;
}

void GlanceShowImageResponse::unsetplatform()
{
    platformIsSet_ = false;
}

std::string GlanceShowImageResponse::getProductcode() const
{
    return productcode_;
}

void GlanceShowImageResponse::setProductcode(const std::string& value)
{
    productcode_ = value;
    productcodeIsSet_ = true;
}

bool GlanceShowImageResponse::productcodeIsSet() const
{
    return productcodeIsSet_;
}

void GlanceShowImageResponse::unsetproductcode()
{
    productcodeIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportDiskintensive() const
{
    return supportDiskintensive_;
}

void GlanceShowImageResponse::setSupportDiskintensive(const std::string& value)
{
    supportDiskintensive_ = value;
    supportDiskintensiveIsSet_ = true;
}

bool GlanceShowImageResponse::supportDiskintensiveIsSet() const
{
    return supportDiskintensiveIsSet_;
}

void GlanceShowImageResponse::unsetsupportDiskintensive()
{
    supportDiskintensiveIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportHighperformance() const
{
    return supportHighperformance_;
}

void GlanceShowImageResponse::setSupportHighperformance(const std::string& value)
{
    supportHighperformance_ = value;
    supportHighperformanceIsSet_ = true;
}

bool GlanceShowImageResponse::supportHighperformanceIsSet() const
{
    return supportHighperformanceIsSet_;
}

void GlanceShowImageResponse::unsetsupportHighperformance()
{
    supportHighperformanceIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportKvm() const
{
    return supportKvm_;
}

void GlanceShowImageResponse::setSupportKvm(const std::string& value)
{
    supportKvm_ = value;
    supportKvmIsSet_ = true;
}

bool GlanceShowImageResponse::supportKvmIsSet() const
{
    return supportKvmIsSet_;
}

void GlanceShowImageResponse::unsetsupportKvm()
{
    supportKvmIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportKvmGpuType() const
{
    return supportKvmGpuType_;
}

void GlanceShowImageResponse::setSupportKvmGpuType(const std::string& value)
{
    supportKvmGpuType_ = value;
    supportKvmGpuTypeIsSet_ = true;
}

bool GlanceShowImageResponse::supportKvmGpuTypeIsSet() const
{
    return supportKvmGpuTypeIsSet_;
}

void GlanceShowImageResponse::unsetsupportKvmGpuType()
{
    supportKvmGpuTypeIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportKvmInfiniband() const
{
    return supportKvmInfiniband_;
}

void GlanceShowImageResponse::setSupportKvmInfiniband(const std::string& value)
{
    supportKvmInfiniband_ = value;
    supportKvmInfinibandIsSet_ = true;
}

bool GlanceShowImageResponse::supportKvmInfinibandIsSet() const
{
    return supportKvmInfinibandIsSet_;
}

void GlanceShowImageResponse::unsetsupportKvmInfiniband()
{
    supportKvmInfinibandIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportLargememory() const
{
    return supportLargememory_;
}

void GlanceShowImageResponse::setSupportLargememory(const std::string& value)
{
    supportLargememory_ = value;
    supportLargememoryIsSet_ = true;
}

bool GlanceShowImageResponse::supportLargememoryIsSet() const
{
    return supportLargememoryIsSet_;
}

void GlanceShowImageResponse::unsetsupportLargememory()
{
    supportLargememoryIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportXen() const
{
    return supportXen_;
}

void GlanceShowImageResponse::setSupportXen(const std::string& value)
{
    supportXen_ = value;
    supportXenIsSet_ = true;
}

bool GlanceShowImageResponse::supportXenIsSet() const
{
    return supportXenIsSet_;
}

void GlanceShowImageResponse::unsetsupportXen()
{
    supportXenIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportXenGpuType() const
{
    return supportXenGpuType_;
}

void GlanceShowImageResponse::setSupportXenGpuType(const std::string& value)
{
    supportXenGpuType_ = value;
    supportXenGpuTypeIsSet_ = true;
}

bool GlanceShowImageResponse::supportXenGpuTypeIsSet() const
{
    return supportXenGpuTypeIsSet_;
}

void GlanceShowImageResponse::unsetsupportXenGpuType()
{
    supportXenGpuTypeIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportXenHana() const
{
    return supportXenHana_;
}

void GlanceShowImageResponse::setSupportXenHana(const std::string& value)
{
    supportXenHana_ = value;
    supportXenHanaIsSet_ = true;
}

bool GlanceShowImageResponse::supportXenHanaIsSet() const
{
    return supportXenHanaIsSet_;
}

void GlanceShowImageResponse::unsetsupportXenHana()
{
    supportXenHanaIsSet_ = false;
}

std::string GlanceShowImageResponse::getChecksum() const
{
    return checksum_;
}

void GlanceShowImageResponse::setChecksum(const std::string& value)
{
    checksum_ = value;
    checksumIsSet_ = true;
}

bool GlanceShowImageResponse::checksumIsSet() const
{
    return checksumIsSet_;
}

void GlanceShowImageResponse::unsetchecksum()
{
    checksumIsSet_ = false;
}

std::string GlanceShowImageResponse::getContainerFormat() const
{
    return containerFormat_;
}

void GlanceShowImageResponse::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool GlanceShowImageResponse::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void GlanceShowImageResponse::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string GlanceShowImageResponse::getCreatedAt() const
{
    return createdAt_;
}

void GlanceShowImageResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool GlanceShowImageResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void GlanceShowImageResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string GlanceShowImageResponse::getDiskFormat() const
{
    return diskFormat_;
}

void GlanceShowImageResponse::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool GlanceShowImageResponse::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void GlanceShowImageResponse::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

std::string GlanceShowImageResponse::getFile() const
{
    return file_;
}

void GlanceShowImageResponse::setFile(const std::string& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool GlanceShowImageResponse::fileIsSet() const
{
    return fileIsSet_;
}

void GlanceShowImageResponse::unsetfile()
{
    fileIsSet_ = false;
}

std::string GlanceShowImageResponse::getId() const
{
    return id_;
}

void GlanceShowImageResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GlanceShowImageResponse::idIsSet() const
{
    return idIsSet_;
}

void GlanceShowImageResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t GlanceShowImageResponse::getMinDisk() const
{
    return minDisk_;
}

void GlanceShowImageResponse::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool GlanceShowImageResponse::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void GlanceShowImageResponse::unsetminDisk()
{
    minDiskIsSet_ = false;
}

int32_t GlanceShowImageResponse::getMinRam() const
{
    return minRam_;
}

void GlanceShowImageResponse::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool GlanceShowImageResponse::minRamIsSet() const
{
    return minRamIsSet_;
}

void GlanceShowImageResponse::unsetminRam()
{
    minRamIsSet_ = false;
}

std::string GlanceShowImageResponse::getName() const
{
    return name_;
}

void GlanceShowImageResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GlanceShowImageResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GlanceShowImageResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string GlanceShowImageResponse::getOwner() const
{
    return owner_;
}

void GlanceShowImageResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool GlanceShowImageResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void GlanceShowImageResponse::unsetowner()
{
    ownerIsSet_ = false;
}

bool GlanceShowImageResponse::isProtected() const
{
    return protected_;
}

void GlanceShowImageResponse::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool GlanceShowImageResponse::protectedIsSet() const
{
    return protectedIsSet_;
}

void GlanceShowImageResponse::unsetprotected()
{
    protectedIsSet_ = false;
}

std::string GlanceShowImageResponse::getSchema() const
{
    return schema_;
}

void GlanceShowImageResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool GlanceShowImageResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void GlanceShowImageResponse::unsetschema()
{
    schemaIsSet_ = false;
}

std::string GlanceShowImageResponse::getSelf() const
{
    return self_;
}

void GlanceShowImageResponse::setSelf(const std::string& value)
{
    self_ = value;
    selfIsSet_ = true;
}

bool GlanceShowImageResponse::selfIsSet() const
{
    return selfIsSet_;
}

void GlanceShowImageResponse::unsetself()
{
    selfIsSet_ = false;
}

int64_t GlanceShowImageResponse::getSize() const
{
    return size_;
}

void GlanceShowImageResponse::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool GlanceShowImageResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void GlanceShowImageResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string GlanceShowImageResponse::getStatus() const
{
    return status_;
}

void GlanceShowImageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GlanceShowImageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GlanceShowImageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& GlanceShowImageResponse::getTags()
{
    return tags_;
}

void GlanceShowImageResponse::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool GlanceShowImageResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void GlanceShowImageResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string GlanceShowImageResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void GlanceShowImageResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool GlanceShowImageResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void GlanceShowImageResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string GlanceShowImageResponse::getVirtualEnvType() const
{
    return virtualEnvType_;
}

void GlanceShowImageResponse::setVirtualEnvType(const std::string& value)
{
    virtualEnvType_ = value;
    virtualEnvTypeIsSet_ = true;
}

bool GlanceShowImageResponse::virtualEnvTypeIsSet() const
{
    return virtualEnvTypeIsSet_;
}

void GlanceShowImageResponse::unsetvirtualEnvType()
{
    virtualEnvTypeIsSet_ = false;
}

int32_t GlanceShowImageResponse::getVirtualSize() const
{
    return virtualSize_;
}

void GlanceShowImageResponse::setVirtualSize(int32_t value)
{
    virtualSize_ = value;
    virtualSizeIsSet_ = true;
}

bool GlanceShowImageResponse::virtualSizeIsSet() const
{
    return virtualSizeIsSet_;
}

void GlanceShowImageResponse::unsetvirtualSize()
{
    virtualSizeIsSet_ = false;
}

std::string GlanceShowImageResponse::getVisibility() const
{
    return visibility_;
}

void GlanceShowImageResponse::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool GlanceShowImageResponse::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void GlanceShowImageResponse::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportFcInject() const
{
    return supportFcInject_;
}

void GlanceShowImageResponse::setSupportFcInject(const std::string& value)
{
    supportFcInject_ = value;
    supportFcInjectIsSet_ = true;
}

bool GlanceShowImageResponse::supportFcInjectIsSet() const
{
    return supportFcInjectIsSet_;
}

void GlanceShowImageResponse::unsetsupportFcInject()
{
    supportFcInjectIsSet_ = false;
}

std::string GlanceShowImageResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void GlanceShowImageResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool GlanceShowImageResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void GlanceShowImageResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string GlanceShowImageResponse::getHwFirmwareType() const
{
    return hwFirmwareType_;
}

void GlanceShowImageResponse::setHwFirmwareType(const std::string& value)
{
    hwFirmwareType_ = value;
    hwFirmwareTypeIsSet_ = true;
}

bool GlanceShowImageResponse::hwFirmwareTypeIsSet() const
{
    return hwFirmwareTypeIsSet_;
}

void GlanceShowImageResponse::unsethwFirmwareType()
{
    hwFirmwareTypeIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportArm() const
{
    return supportArm_;
}

void GlanceShowImageResponse::setSupportArm(const std::string& value)
{
    supportArm_ = value;
    supportArmIsSet_ = true;
}

bool GlanceShowImageResponse::supportArmIsSet() const
{
    return supportArmIsSet_;
}

void GlanceShowImageResponse::unsetsupportArm()
{
    supportArmIsSet_ = false;
}

std::string GlanceShowImageResponse::getIsOffshelved() const
{
    return isOffshelved_;
}

void GlanceShowImageResponse::setIsOffshelved(const std::string& value)
{
    isOffshelved_ = value;
    isOffshelvedIsSet_ = true;
}

bool GlanceShowImageResponse::isOffshelvedIsSet() const
{
    return isOffshelvedIsSet_;
}

void GlanceShowImageResponse::unsetisOffshelved()
{
    isOffshelvedIsSet_ = false;
}

std::string GlanceShowImageResponse::getLazyloading() const
{
    return lazyloading_;
}

void GlanceShowImageResponse::setLazyloading(const std::string& value)
{
    lazyloading_ = value;
    lazyloadingIsSet_ = true;
}

bool GlanceShowImageResponse::lazyloadingIsSet() const
{
    return lazyloadingIsSet_;
}

void GlanceShowImageResponse::unsetlazyloading()
{
    lazyloadingIsSet_ = false;
}

std::string GlanceShowImageResponse::getOsFeatureList() const
{
    return osFeatureList_;
}

void GlanceShowImageResponse::setOsFeatureList(const std::string& value)
{
    osFeatureList_ = value;
    osFeatureListIsSet_ = true;
}

bool GlanceShowImageResponse::osFeatureListIsSet() const
{
    return osFeatureListIsSet_;
}

void GlanceShowImageResponse::unsetosFeatureList()
{
    osFeatureListIsSet_ = false;
}

std::string GlanceShowImageResponse::getRootOrigin() const
{
    return rootOrigin_;
}

void GlanceShowImageResponse::setRootOrigin(const std::string& value)
{
    rootOrigin_ = value;
    rootOriginIsSet_ = true;
}

bool GlanceShowImageResponse::rootOriginIsSet() const
{
    return rootOriginIsSet_;
}

void GlanceShowImageResponse::unsetrootOrigin()
{
    rootOriginIsSet_ = false;
}

std::string GlanceShowImageResponse::getSequenceNum() const
{
    return sequenceNum_;
}

void GlanceShowImageResponse::setSequenceNum(const std::string& value)
{
    sequenceNum_ = value;
    sequenceNumIsSet_ = true;
}

bool GlanceShowImageResponse::sequenceNumIsSet() const
{
    return sequenceNumIsSet_;
}

void GlanceShowImageResponse::unsetsequenceNum()
{
    sequenceNumIsSet_ = false;
}

std::string GlanceShowImageResponse::getSupportAgentList() const
{
    return supportAgentList_;
}

void GlanceShowImageResponse::setSupportAgentList(const std::string& value)
{
    supportAgentList_ = value;
    supportAgentListIsSet_ = true;
}

bool GlanceShowImageResponse::supportAgentListIsSet() const
{
    return supportAgentListIsSet_;
}

void GlanceShowImageResponse::unsetsupportAgentList()
{
    supportAgentListIsSet_ = false;
}

std::string GlanceShowImageResponse::getSystemCmkid() const
{
    return systemCmkid_;
}

void GlanceShowImageResponse::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool GlanceShowImageResponse::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void GlanceShowImageResponse::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

std::string GlanceShowImageResponse::getActiveAt() const
{
    return activeAt_;
}

void GlanceShowImageResponse::setActiveAt(const std::string& value)
{
    activeAt_ = value;
    activeAtIsSet_ = true;
}

bool GlanceShowImageResponse::activeAtIsSet() const
{
    return activeAtIsSet_;
}

void GlanceShowImageResponse::unsetactiveAt()
{
    activeAtIsSet_ = false;
}

std::string GlanceShowImageResponse::getHwVifMultiqueueEnabled() const
{
    return hwVifMultiqueueEnabled_;
}

void GlanceShowImageResponse::setHwVifMultiqueueEnabled(const std::string& value)
{
    hwVifMultiqueueEnabled_ = value;
    hwVifMultiqueueEnabledIsSet_ = true;
}

bool GlanceShowImageResponse::hwVifMultiqueueEnabledIsSet() const
{
    return hwVifMultiqueueEnabledIsSet_;
}

void GlanceShowImageResponse::unsethwVifMultiqueueEnabled()
{
    hwVifMultiqueueEnabledIsSet_ = false;
}

std::string GlanceShowImageResponse::getMaxRam() const
{
    return maxRam_;
}

void GlanceShowImageResponse::setMaxRam(const std::string& value)
{
    maxRam_ = value;
    maxRamIsSet_ = true;
}

bool GlanceShowImageResponse::maxRamIsSet() const
{
    return maxRamIsSet_;
}

void GlanceShowImageResponse::unsetmaxRam()
{
    maxRamIsSet_ = false;
}

std::string GlanceShowImageResponse::getImageLocation() const
{
    return imageLocation_;
}

void GlanceShowImageResponse::setImageLocation(const std::string& value)
{
    imageLocation_ = value;
    imageLocationIsSet_ = true;
}

bool GlanceShowImageResponse::imageLocationIsSet() const
{
    return imageLocationIsSet_;
}

void GlanceShowImageResponse::unsetimageLocation()
{
    imageLocationIsSet_ = false;
}

std::string GlanceShowImageResponse::getIsConfigInit() const
{
    return isConfigInit_;
}

void GlanceShowImageResponse::setIsConfigInit(const std::string& value)
{
    isConfigInit_ = value;
    isConfigInitIsSet_ = true;
}

bool GlanceShowImageResponse::isConfigInitIsSet() const
{
    return isConfigInitIsSet_;
}

void GlanceShowImageResponse::unsetisConfigInit()
{
    isConfigInitIsSet_ = false;
}

std::string GlanceShowImageResponse::getAccountCode() const
{
    return accountCode_;
}

void GlanceShowImageResponse::setAccountCode(const std::string& value)
{
    accountCode_ = value;
    accountCodeIsSet_ = true;
}

bool GlanceShowImageResponse::accountCodeIsSet() const
{
    return accountCodeIsSet_;
}

void GlanceShowImageResponse::unsetaccountCode()
{
    accountCodeIsSet_ = false;
}

}
}
}
}
}


