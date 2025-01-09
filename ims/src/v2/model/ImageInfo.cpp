

#include "huaweicloud/ims/v2/model/ImageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ImageInfo::ImageInfo()
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
    systemSupportMarket_ = false;
    systemSupportMarketIsSet_ = false;
    checksum_ = "";
    checksumIsSet_ = false;
    containerFormat_ = "";
    containerFormatIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    diskFormat_ = "";
    diskFormatIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
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
    size_ = 0;
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
    hwFirmwareType_ = "";
    hwFirmwareTypeIsSet_ = false;
    supportArm_ = "";
    supportArmIsSet_ = false;
    maxRam_ = "";
    maxRamIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
    osFeatureList_ = "";
    osFeatureListIsSet_ = false;
    accountCode_ = "";
    accountCodeIsSet_ = false;
    hwVifMultiqueueEnabled_ = "";
    hwVifMultiqueueEnabledIsSet_ = false;
    isOffshelved_ = "";
    isOffshelvedIsSet_ = false;
    lazyloading_ = "";
    lazyloadingIsSet_ = false;
    rootOrigin_ = "";
    rootOriginIsSet_ = false;
    sequenceNum_ = "";
    sequenceNumIsSet_ = false;
    activeAt_ = "";
    activeAtIsSet_ = false;
    supportAgentList_ = "";
    supportAgentListIsSet_ = false;
    imageDisplayname_ = "";
    imageDisplaynameIsSet_ = false;
    supportAmd_ = "";
    supportAmdIsSet_ = false;
    supportKvmHi1822Hisriov_ = "";
    supportKvmHi1822HisriovIsSet_ = false;
    supportKvmHi1822Hivirtionet_ = "";
    supportKvmHi1822HivirtionetIsSet_ = false;
    osShutdownTimeout_ = "";
    osShutdownTimeoutIsSet_ = false;
}

ImageInfo::~ImageInfo() = default;

void ImageInfo::validate()
{
}

web::json::value ImageInfo::toJson() const
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
    if(systemSupportMarketIsSet_) {
        val[utility::conversions::to_string_t("__system_support_market")] = ModelBase::toJson(systemSupportMarket_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
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
    if(hwFirmwareTypeIsSet_) {
        val[utility::conversions::to_string_t("hw_firmware_type")] = ModelBase::toJson(hwFirmwareType_);
    }
    if(supportArmIsSet_) {
        val[utility::conversions::to_string_t("__support_arm")] = ModelBase::toJson(supportArm_);
    }
    if(maxRamIsSet_) {
        val[utility::conversions::to_string_t("max_ram")] = ModelBase::toJson(maxRam_);
    }
    if(systemCmkidIsSet_) {
        val[utility::conversions::to_string_t("__system__cmkid")] = ModelBase::toJson(systemCmkid_);
    }
    if(osFeatureListIsSet_) {
        val[utility::conversions::to_string_t("__os_feature_list")] = ModelBase::toJson(osFeatureList_);
    }
    if(accountCodeIsSet_) {
        val[utility::conversions::to_string_t("__account_code")] = ModelBase::toJson(accountCode_);
    }
    if(hwVifMultiqueueEnabledIsSet_) {
        val[utility::conversions::to_string_t("hw_vif_multiqueue_enabled")] = ModelBase::toJson(hwVifMultiqueueEnabled_);
    }
    if(isOffshelvedIsSet_) {
        val[utility::conversions::to_string_t("__is_offshelved")] = ModelBase::toJson(isOffshelved_);
    }
    if(lazyloadingIsSet_) {
        val[utility::conversions::to_string_t("__lazyloading")] = ModelBase::toJson(lazyloading_);
    }
    if(rootOriginIsSet_) {
        val[utility::conversions::to_string_t("__root_origin")] = ModelBase::toJson(rootOrigin_);
    }
    if(sequenceNumIsSet_) {
        val[utility::conversions::to_string_t("__sequence_num")] = ModelBase::toJson(sequenceNum_);
    }
    if(activeAtIsSet_) {
        val[utility::conversions::to_string_t("active_at")] = ModelBase::toJson(activeAt_);
    }
    if(supportAgentListIsSet_) {
        val[utility::conversions::to_string_t("__support_agent_list")] = ModelBase::toJson(supportAgentList_);
    }
    if(imageDisplaynameIsSet_) {
        val[utility::conversions::to_string_t("__image_displayname")] = ModelBase::toJson(imageDisplayname_);
    }
    if(supportAmdIsSet_) {
        val[utility::conversions::to_string_t("__support_amd")] = ModelBase::toJson(supportAmd_);
    }
    if(supportKvmHi1822HisriovIsSet_) {
        val[utility::conversions::to_string_t("__support_kvm_hi1822_hisriov")] = ModelBase::toJson(supportKvmHi1822Hisriov_);
    }
    if(supportKvmHi1822HivirtionetIsSet_) {
        val[utility::conversions::to_string_t("__support_kvm_hi1822_hivirtionet")] = ModelBase::toJson(supportKvmHi1822Hivirtionet_);
    }
    if(osShutdownTimeoutIsSet_) {
        val[utility::conversions::to_string_t("os_shutdown_timeout")] = ModelBase::toJson(osShutdownTimeout_);
    }

    return val;
}
bool ImageInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("__system_support_market"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system_support_market"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemSupportMarket(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("max_ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_ram"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxRam(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("__os_feature_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__os_feature_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsFeatureList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hw_vif_multiqueue_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hw_vif_multiqueue_enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwVifMultiqueueEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("active_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("__image_displayname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__image_displayname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageDisplayname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_amd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_amd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAmd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_kvm_hi1822_hisriov"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_kvm_hi1822_hisriov"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportKvmHi1822Hisriov(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__support_kvm_hi1822_hivirtionet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_kvm_hi1822_hivirtionet"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportKvmHi1822Hivirtionet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("os_shutdown_timeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os_shutdown_timeout"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsShutdownTimeout(refVal);
        }
    }
    return ok;
}


std::string ImageInfo::getBackupId() const
{
    return backupId_;
}

void ImageInfo::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ImageInfo::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ImageInfo::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ImageInfo::getDataOrigin() const
{
    return dataOrigin_;
}

void ImageInfo::setDataOrigin(const std::string& value)
{
    dataOrigin_ = value;
    dataOriginIsSet_ = true;
}

bool ImageInfo::dataOriginIsSet() const
{
    return dataOriginIsSet_;
}

void ImageInfo::unsetdataOrigin()
{
    dataOriginIsSet_ = false;
}

std::string ImageInfo::getDescription() const
{
    return description_;
}

void ImageInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImageInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImageInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ImageInfo::getImageSize() const
{
    return imageSize_;
}

void ImageInfo::setImageSize(const std::string& value)
{
    imageSize_ = value;
    imageSizeIsSet_ = true;
}

bool ImageInfo::imageSizeIsSet() const
{
    return imageSizeIsSet_;
}

void ImageInfo::unsetimageSize()
{
    imageSizeIsSet_ = false;
}

std::string ImageInfo::getImageSourceType() const
{
    return imageSourceType_;
}

void ImageInfo::setImageSourceType(const std::string& value)
{
    imageSourceType_ = value;
    imageSourceTypeIsSet_ = true;
}

bool ImageInfo::imageSourceTypeIsSet() const
{
    return imageSourceTypeIsSet_;
}

void ImageInfo::unsetimageSourceType()
{
    imageSourceTypeIsSet_ = false;
}

std::string ImageInfo::getImagetype() const
{
    return imagetype_;
}

void ImageInfo::setImagetype(const std::string& value)
{
    imagetype_ = value;
    imagetypeIsSet_ = true;
}

bool ImageInfo::imagetypeIsSet() const
{
    return imagetypeIsSet_;
}

void ImageInfo::unsetimagetype()
{
    imagetypeIsSet_ = false;
}

std::string ImageInfo::getIsregistered() const
{
    return isregistered_;
}

void ImageInfo::setIsregistered(const std::string& value)
{
    isregistered_ = value;
    isregisteredIsSet_ = true;
}

bool ImageInfo::isregisteredIsSet() const
{
    return isregisteredIsSet_;
}

void ImageInfo::unsetisregistered()
{
    isregisteredIsSet_ = false;
}

std::string ImageInfo::getOriginalimagename() const
{
    return originalimagename_;
}

void ImageInfo::setOriginalimagename(const std::string& value)
{
    originalimagename_ = value;
    originalimagenameIsSet_ = true;
}

bool ImageInfo::originalimagenameIsSet() const
{
    return originalimagenameIsSet_;
}

void ImageInfo::unsetoriginalimagename()
{
    originalimagenameIsSet_ = false;
}

std::string ImageInfo::getOsBit() const
{
    return osBit_;
}

void ImageInfo::setOsBit(const std::string& value)
{
    osBit_ = value;
    osBitIsSet_ = true;
}

bool ImageInfo::osBitIsSet() const
{
    return osBitIsSet_;
}

void ImageInfo::unsetosBit()
{
    osBitIsSet_ = false;
}

std::string ImageInfo::getOsType() const
{
    return osType_;
}

void ImageInfo::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool ImageInfo::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void ImageInfo::unsetosType()
{
    osTypeIsSet_ = false;
}

std::string ImageInfo::getOsVersion() const
{
    return osVersion_;
}

void ImageInfo::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool ImageInfo::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void ImageInfo::unsetosVersion()
{
    osVersionIsSet_ = false;
}

std::string ImageInfo::getPlatform() const
{
    return platform_;
}

void ImageInfo::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool ImageInfo::platformIsSet() const
{
    return platformIsSet_;
}

void ImageInfo::unsetplatform()
{
    platformIsSet_ = false;
}

std::string ImageInfo::getProductcode() const
{
    return productcode_;
}

void ImageInfo::setProductcode(const std::string& value)
{
    productcode_ = value;
    productcodeIsSet_ = true;
}

bool ImageInfo::productcodeIsSet() const
{
    return productcodeIsSet_;
}

void ImageInfo::unsetproductcode()
{
    productcodeIsSet_ = false;
}

std::string ImageInfo::getSupportDiskintensive() const
{
    return supportDiskintensive_;
}

void ImageInfo::setSupportDiskintensive(const std::string& value)
{
    supportDiskintensive_ = value;
    supportDiskintensiveIsSet_ = true;
}

bool ImageInfo::supportDiskintensiveIsSet() const
{
    return supportDiskintensiveIsSet_;
}

void ImageInfo::unsetsupportDiskintensive()
{
    supportDiskintensiveIsSet_ = false;
}

std::string ImageInfo::getSupportHighperformance() const
{
    return supportHighperformance_;
}

void ImageInfo::setSupportHighperformance(const std::string& value)
{
    supportHighperformance_ = value;
    supportHighperformanceIsSet_ = true;
}

bool ImageInfo::supportHighperformanceIsSet() const
{
    return supportHighperformanceIsSet_;
}

void ImageInfo::unsetsupportHighperformance()
{
    supportHighperformanceIsSet_ = false;
}

std::string ImageInfo::getSupportKvm() const
{
    return supportKvm_;
}

void ImageInfo::setSupportKvm(const std::string& value)
{
    supportKvm_ = value;
    supportKvmIsSet_ = true;
}

bool ImageInfo::supportKvmIsSet() const
{
    return supportKvmIsSet_;
}

void ImageInfo::unsetsupportKvm()
{
    supportKvmIsSet_ = false;
}

std::string ImageInfo::getSupportKvmGpuType() const
{
    return supportKvmGpuType_;
}

void ImageInfo::setSupportKvmGpuType(const std::string& value)
{
    supportKvmGpuType_ = value;
    supportKvmGpuTypeIsSet_ = true;
}

bool ImageInfo::supportKvmGpuTypeIsSet() const
{
    return supportKvmGpuTypeIsSet_;
}

void ImageInfo::unsetsupportKvmGpuType()
{
    supportKvmGpuTypeIsSet_ = false;
}

std::string ImageInfo::getSupportKvmInfiniband() const
{
    return supportKvmInfiniband_;
}

void ImageInfo::setSupportKvmInfiniband(const std::string& value)
{
    supportKvmInfiniband_ = value;
    supportKvmInfinibandIsSet_ = true;
}

bool ImageInfo::supportKvmInfinibandIsSet() const
{
    return supportKvmInfinibandIsSet_;
}

void ImageInfo::unsetsupportKvmInfiniband()
{
    supportKvmInfinibandIsSet_ = false;
}

std::string ImageInfo::getSupportLargememory() const
{
    return supportLargememory_;
}

void ImageInfo::setSupportLargememory(const std::string& value)
{
    supportLargememory_ = value;
    supportLargememoryIsSet_ = true;
}

bool ImageInfo::supportLargememoryIsSet() const
{
    return supportLargememoryIsSet_;
}

void ImageInfo::unsetsupportLargememory()
{
    supportLargememoryIsSet_ = false;
}

std::string ImageInfo::getSupportXen() const
{
    return supportXen_;
}

void ImageInfo::setSupportXen(const std::string& value)
{
    supportXen_ = value;
    supportXenIsSet_ = true;
}

bool ImageInfo::supportXenIsSet() const
{
    return supportXenIsSet_;
}

void ImageInfo::unsetsupportXen()
{
    supportXenIsSet_ = false;
}

std::string ImageInfo::getSupportXenGpuType() const
{
    return supportXenGpuType_;
}

void ImageInfo::setSupportXenGpuType(const std::string& value)
{
    supportXenGpuType_ = value;
    supportXenGpuTypeIsSet_ = true;
}

bool ImageInfo::supportXenGpuTypeIsSet() const
{
    return supportXenGpuTypeIsSet_;
}

void ImageInfo::unsetsupportXenGpuType()
{
    supportXenGpuTypeIsSet_ = false;
}

std::string ImageInfo::getSupportXenHana() const
{
    return supportXenHana_;
}

void ImageInfo::setSupportXenHana(const std::string& value)
{
    supportXenHana_ = value;
    supportXenHanaIsSet_ = true;
}

bool ImageInfo::supportXenHanaIsSet() const
{
    return supportXenHanaIsSet_;
}

void ImageInfo::unsetsupportXenHana()
{
    supportXenHanaIsSet_ = false;
}

bool ImageInfo::isSystemSupportMarket() const
{
    return systemSupportMarket_;
}

void ImageInfo::setSystemSupportMarket(bool value)
{
    systemSupportMarket_ = value;
    systemSupportMarketIsSet_ = true;
}

bool ImageInfo::systemSupportMarketIsSet() const
{
    return systemSupportMarketIsSet_;
}

void ImageInfo::unsetsystemSupportMarket()
{
    systemSupportMarketIsSet_ = false;
}

std::string ImageInfo::getChecksum() const
{
    return checksum_;
}

void ImageInfo::setChecksum(const std::string& value)
{
    checksum_ = value;
    checksumIsSet_ = true;
}

bool ImageInfo::checksumIsSet() const
{
    return checksumIsSet_;
}

void ImageInfo::unsetchecksum()
{
    checksumIsSet_ = false;
}

std::string ImageInfo::getContainerFormat() const
{
    return containerFormat_;
}

void ImageInfo::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool ImageInfo::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void ImageInfo::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string ImageInfo::getCreatedAt() const
{
    return createdAt_;
}

void ImageInfo::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ImageInfo::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ImageInfo::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ImageInfo::getDiskFormat() const
{
    return diskFormat_;
}

void ImageInfo::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool ImageInfo::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void ImageInfo::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

std::string ImageInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ImageInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ImageInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ImageInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ImageInfo::getFile() const
{
    return file_;
}

void ImageInfo::setFile(const std::string& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool ImageInfo::fileIsSet() const
{
    return fileIsSet_;
}

void ImageInfo::unsetfile()
{
    fileIsSet_ = false;
}

std::string ImageInfo::getId() const
{
    return id_;
}

void ImageInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ImageInfo::idIsSet() const
{
    return idIsSet_;
}

void ImageInfo::unsetid()
{
    idIsSet_ = false;
}

int32_t ImageInfo::getMinDisk() const
{
    return minDisk_;
}

void ImageInfo::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool ImageInfo::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void ImageInfo::unsetminDisk()
{
    minDiskIsSet_ = false;
}

int32_t ImageInfo::getMinRam() const
{
    return minRam_;
}

void ImageInfo::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool ImageInfo::minRamIsSet() const
{
    return minRamIsSet_;
}

void ImageInfo::unsetminRam()
{
    minRamIsSet_ = false;
}

std::string ImageInfo::getName() const
{
    return name_;
}

void ImageInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ImageInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ImageInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ImageInfo::getOwner() const
{
    return owner_;
}

void ImageInfo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool ImageInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void ImageInfo::unsetowner()
{
    ownerIsSet_ = false;
}

bool ImageInfo::isProtected() const
{
    return protected_;
}

void ImageInfo::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool ImageInfo::protectedIsSet() const
{
    return protectedIsSet_;
}

void ImageInfo::unsetprotected()
{
    protectedIsSet_ = false;
}

std::string ImageInfo::getSchema() const
{
    return schema_;
}

void ImageInfo::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool ImageInfo::schemaIsSet() const
{
    return schemaIsSet_;
}

void ImageInfo::unsetschema()
{
    schemaIsSet_ = false;
}

std::string ImageInfo::getSelf() const
{
    return self_;
}

void ImageInfo::setSelf(const std::string& value)
{
    self_ = value;
    selfIsSet_ = true;
}

bool ImageInfo::selfIsSet() const
{
    return selfIsSet_;
}

void ImageInfo::unsetself()
{
    selfIsSet_ = false;
}

int32_t ImageInfo::getSize() const
{
    return size_;
}

void ImageInfo::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ImageInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void ImageInfo::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ImageInfo::getStatus() const
{
    return status_;
}

void ImageInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ImageInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ImageInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& ImageInfo::getTags()
{
    return tags_;
}

void ImageInfo::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ImageInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void ImageInfo::unsettags()
{
    tagsIsSet_ = false;
}

std::string ImageInfo::getUpdatedAt() const
{
    return updatedAt_;
}

void ImageInfo::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ImageInfo::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ImageInfo::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ImageInfo::getVirtualEnvType() const
{
    return virtualEnvType_;
}

void ImageInfo::setVirtualEnvType(const std::string& value)
{
    virtualEnvType_ = value;
    virtualEnvTypeIsSet_ = true;
}

bool ImageInfo::virtualEnvTypeIsSet() const
{
    return virtualEnvTypeIsSet_;
}

void ImageInfo::unsetvirtualEnvType()
{
    virtualEnvTypeIsSet_ = false;
}

int32_t ImageInfo::getVirtualSize() const
{
    return virtualSize_;
}

void ImageInfo::setVirtualSize(int32_t value)
{
    virtualSize_ = value;
    virtualSizeIsSet_ = true;
}

bool ImageInfo::virtualSizeIsSet() const
{
    return virtualSizeIsSet_;
}

void ImageInfo::unsetvirtualSize()
{
    virtualSizeIsSet_ = false;
}

std::string ImageInfo::getVisibility() const
{
    return visibility_;
}

void ImageInfo::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool ImageInfo::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void ImageInfo::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string ImageInfo::getSupportFcInject() const
{
    return supportFcInject_;
}

void ImageInfo::setSupportFcInject(const std::string& value)
{
    supportFcInject_ = value;
    supportFcInjectIsSet_ = true;
}

bool ImageInfo::supportFcInjectIsSet() const
{
    return supportFcInjectIsSet_;
}

void ImageInfo::unsetsupportFcInject()
{
    supportFcInjectIsSet_ = false;
}

std::string ImageInfo::getHwFirmwareType() const
{
    return hwFirmwareType_;
}

void ImageInfo::setHwFirmwareType(const std::string& value)
{
    hwFirmwareType_ = value;
    hwFirmwareTypeIsSet_ = true;
}

bool ImageInfo::hwFirmwareTypeIsSet() const
{
    return hwFirmwareTypeIsSet_;
}

void ImageInfo::unsethwFirmwareType()
{
    hwFirmwareTypeIsSet_ = false;
}

std::string ImageInfo::getSupportArm() const
{
    return supportArm_;
}

void ImageInfo::setSupportArm(const std::string& value)
{
    supportArm_ = value;
    supportArmIsSet_ = true;
}

bool ImageInfo::supportArmIsSet() const
{
    return supportArmIsSet_;
}

void ImageInfo::unsetsupportArm()
{
    supportArmIsSet_ = false;
}

std::string ImageInfo::getMaxRam() const
{
    return maxRam_;
}

void ImageInfo::setMaxRam(const std::string& value)
{
    maxRam_ = value;
    maxRamIsSet_ = true;
}

bool ImageInfo::maxRamIsSet() const
{
    return maxRamIsSet_;
}

void ImageInfo::unsetmaxRam()
{
    maxRamIsSet_ = false;
}

std::string ImageInfo::getSystemCmkid() const
{
    return systemCmkid_;
}

void ImageInfo::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool ImageInfo::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void ImageInfo::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

std::string ImageInfo::getOsFeatureList() const
{
    return osFeatureList_;
}

void ImageInfo::setOsFeatureList(const std::string& value)
{
    osFeatureList_ = value;
    osFeatureListIsSet_ = true;
}

bool ImageInfo::osFeatureListIsSet() const
{
    return osFeatureListIsSet_;
}

void ImageInfo::unsetosFeatureList()
{
    osFeatureListIsSet_ = false;
}

std::string ImageInfo::getAccountCode() const
{
    return accountCode_;
}

void ImageInfo::setAccountCode(const std::string& value)
{
    accountCode_ = value;
    accountCodeIsSet_ = true;
}

bool ImageInfo::accountCodeIsSet() const
{
    return accountCodeIsSet_;
}

void ImageInfo::unsetaccountCode()
{
    accountCodeIsSet_ = false;
}

std::string ImageInfo::getHwVifMultiqueueEnabled() const
{
    return hwVifMultiqueueEnabled_;
}

void ImageInfo::setHwVifMultiqueueEnabled(const std::string& value)
{
    hwVifMultiqueueEnabled_ = value;
    hwVifMultiqueueEnabledIsSet_ = true;
}

bool ImageInfo::hwVifMultiqueueEnabledIsSet() const
{
    return hwVifMultiqueueEnabledIsSet_;
}

void ImageInfo::unsethwVifMultiqueueEnabled()
{
    hwVifMultiqueueEnabledIsSet_ = false;
}

std::string ImageInfo::getIsOffshelved() const
{
    return isOffshelved_;
}

void ImageInfo::setIsOffshelved(const std::string& value)
{
    isOffshelved_ = value;
    isOffshelvedIsSet_ = true;
}

bool ImageInfo::isOffshelvedIsSet() const
{
    return isOffshelvedIsSet_;
}

void ImageInfo::unsetisOffshelved()
{
    isOffshelvedIsSet_ = false;
}

std::string ImageInfo::getLazyloading() const
{
    return lazyloading_;
}

void ImageInfo::setLazyloading(const std::string& value)
{
    lazyloading_ = value;
    lazyloadingIsSet_ = true;
}

bool ImageInfo::lazyloadingIsSet() const
{
    return lazyloadingIsSet_;
}

void ImageInfo::unsetlazyloading()
{
    lazyloadingIsSet_ = false;
}

std::string ImageInfo::getRootOrigin() const
{
    return rootOrigin_;
}

void ImageInfo::setRootOrigin(const std::string& value)
{
    rootOrigin_ = value;
    rootOriginIsSet_ = true;
}

bool ImageInfo::rootOriginIsSet() const
{
    return rootOriginIsSet_;
}

void ImageInfo::unsetrootOrigin()
{
    rootOriginIsSet_ = false;
}

std::string ImageInfo::getSequenceNum() const
{
    return sequenceNum_;
}

void ImageInfo::setSequenceNum(const std::string& value)
{
    sequenceNum_ = value;
    sequenceNumIsSet_ = true;
}

bool ImageInfo::sequenceNumIsSet() const
{
    return sequenceNumIsSet_;
}

void ImageInfo::unsetsequenceNum()
{
    sequenceNumIsSet_ = false;
}

std::string ImageInfo::getActiveAt() const
{
    return activeAt_;
}

void ImageInfo::setActiveAt(const std::string& value)
{
    activeAt_ = value;
    activeAtIsSet_ = true;
}

bool ImageInfo::activeAtIsSet() const
{
    return activeAtIsSet_;
}

void ImageInfo::unsetactiveAt()
{
    activeAtIsSet_ = false;
}

std::string ImageInfo::getSupportAgentList() const
{
    return supportAgentList_;
}

void ImageInfo::setSupportAgentList(const std::string& value)
{
    supportAgentList_ = value;
    supportAgentListIsSet_ = true;
}

bool ImageInfo::supportAgentListIsSet() const
{
    return supportAgentListIsSet_;
}

void ImageInfo::unsetsupportAgentList()
{
    supportAgentListIsSet_ = false;
}

std::string ImageInfo::getImageDisplayname() const
{
    return imageDisplayname_;
}

void ImageInfo::setImageDisplayname(const std::string& value)
{
    imageDisplayname_ = value;
    imageDisplaynameIsSet_ = true;
}

bool ImageInfo::imageDisplaynameIsSet() const
{
    return imageDisplaynameIsSet_;
}

void ImageInfo::unsetimageDisplayname()
{
    imageDisplaynameIsSet_ = false;
}

std::string ImageInfo::getSupportAmd() const
{
    return supportAmd_;
}

void ImageInfo::setSupportAmd(const std::string& value)
{
    supportAmd_ = value;
    supportAmdIsSet_ = true;
}

bool ImageInfo::supportAmdIsSet() const
{
    return supportAmdIsSet_;
}

void ImageInfo::unsetsupportAmd()
{
    supportAmdIsSet_ = false;
}

std::string ImageInfo::getSupportKvmHi1822Hisriov() const
{
    return supportKvmHi1822Hisriov_;
}

void ImageInfo::setSupportKvmHi1822Hisriov(const std::string& value)
{
    supportKvmHi1822Hisriov_ = value;
    supportKvmHi1822HisriovIsSet_ = true;
}

bool ImageInfo::supportKvmHi1822HisriovIsSet() const
{
    return supportKvmHi1822HisriovIsSet_;
}

void ImageInfo::unsetsupportKvmHi1822Hisriov()
{
    supportKvmHi1822HisriovIsSet_ = false;
}

std::string ImageInfo::getSupportKvmHi1822Hivirtionet() const
{
    return supportKvmHi1822Hivirtionet_;
}

void ImageInfo::setSupportKvmHi1822Hivirtionet(const std::string& value)
{
    supportKvmHi1822Hivirtionet_ = value;
    supportKvmHi1822HivirtionetIsSet_ = true;
}

bool ImageInfo::supportKvmHi1822HivirtionetIsSet() const
{
    return supportKvmHi1822HivirtionetIsSet_;
}

void ImageInfo::unsetsupportKvmHi1822Hivirtionet()
{
    supportKvmHi1822HivirtionetIsSet_ = false;
}

std::string ImageInfo::getOsShutdownTimeout() const
{
    return osShutdownTimeout_;
}

void ImageInfo::setOsShutdownTimeout(const std::string& value)
{
    osShutdownTimeout_ = value;
    osShutdownTimeoutIsSet_ = true;
}

bool ImageInfo::osShutdownTimeoutIsSet() const
{
    return osShutdownTimeoutIsSet_;
}

void ImageInfo::unsetosShutdownTimeout()
{
    osShutdownTimeoutIsSet_ = false;
}

}
}
}
}
}


