

#include "huaweicloud/ims/v2/model/UpdateImageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




UpdateImageResponse::UpdateImageResponse()
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
    supportAmd_ = "";
    supportAmdIsSet_ = false;
}

UpdateImageResponse::~UpdateImageResponse() = default;

void UpdateImageResponse::validate()
{
}

web::json::value UpdateImageResponse::toJson() const
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
    if(supportAmdIsSet_) {
        val[utility::conversions::to_string_t("__support_amd")] = ModelBase::toJson(supportAmd_);
    }

    return val;
}

bool UpdateImageResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("__support_amd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__support_amd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportAmd(refVal);
        }
    }
    return ok;
}


std::string UpdateImageResponse::getBackupId() const
{
    return backupId_;
}

void UpdateImageResponse::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool UpdateImageResponse::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void UpdateImageResponse::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string UpdateImageResponse::getDataOrigin() const
{
    return dataOrigin_;
}

void UpdateImageResponse::setDataOrigin(const std::string& value)
{
    dataOrigin_ = value;
    dataOriginIsSet_ = true;
}

bool UpdateImageResponse::dataOriginIsSet() const
{
    return dataOriginIsSet_;
}

void UpdateImageResponse::unsetdataOrigin()
{
    dataOriginIsSet_ = false;
}

std::string UpdateImageResponse::getDescription() const
{
    return description_;
}

void UpdateImageResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateImageResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateImageResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateImageResponse::getImageSize() const
{
    return imageSize_;
}

void UpdateImageResponse::setImageSize(const std::string& value)
{
    imageSize_ = value;
    imageSizeIsSet_ = true;
}

bool UpdateImageResponse::imageSizeIsSet() const
{
    return imageSizeIsSet_;
}

void UpdateImageResponse::unsetimageSize()
{
    imageSizeIsSet_ = false;
}

std::string UpdateImageResponse::getImageSourceType() const
{
    return imageSourceType_;
}

void UpdateImageResponse::setImageSourceType(const std::string& value)
{
    imageSourceType_ = value;
    imageSourceTypeIsSet_ = true;
}

bool UpdateImageResponse::imageSourceTypeIsSet() const
{
    return imageSourceTypeIsSet_;
}

void UpdateImageResponse::unsetimageSourceType()
{
    imageSourceTypeIsSet_ = false;
}

std::string UpdateImageResponse::getImagetype() const
{
    return imagetype_;
}

void UpdateImageResponse::setImagetype(const std::string& value)
{
    imagetype_ = value;
    imagetypeIsSet_ = true;
}

bool UpdateImageResponse::imagetypeIsSet() const
{
    return imagetypeIsSet_;
}

void UpdateImageResponse::unsetimagetype()
{
    imagetypeIsSet_ = false;
}

std::string UpdateImageResponse::getIsregistered() const
{
    return isregistered_;
}

void UpdateImageResponse::setIsregistered(const std::string& value)
{
    isregistered_ = value;
    isregisteredIsSet_ = true;
}

bool UpdateImageResponse::isregisteredIsSet() const
{
    return isregisteredIsSet_;
}

void UpdateImageResponse::unsetisregistered()
{
    isregisteredIsSet_ = false;
}

std::string UpdateImageResponse::getOriginalimagename() const
{
    return originalimagename_;
}

void UpdateImageResponse::setOriginalimagename(const std::string& value)
{
    originalimagename_ = value;
    originalimagenameIsSet_ = true;
}

bool UpdateImageResponse::originalimagenameIsSet() const
{
    return originalimagenameIsSet_;
}

void UpdateImageResponse::unsetoriginalimagename()
{
    originalimagenameIsSet_ = false;
}

std::string UpdateImageResponse::getOsBit() const
{
    return osBit_;
}

void UpdateImageResponse::setOsBit(const std::string& value)
{
    osBit_ = value;
    osBitIsSet_ = true;
}

bool UpdateImageResponse::osBitIsSet() const
{
    return osBitIsSet_;
}

void UpdateImageResponse::unsetosBit()
{
    osBitIsSet_ = false;
}

std::string UpdateImageResponse::getOsType() const
{
    return osType_;
}

void UpdateImageResponse::setOsType(const std::string& value)
{
    osType_ = value;
    osTypeIsSet_ = true;
}

bool UpdateImageResponse::osTypeIsSet() const
{
    return osTypeIsSet_;
}

void UpdateImageResponse::unsetosType()
{
    osTypeIsSet_ = false;
}

std::string UpdateImageResponse::getOsVersion() const
{
    return osVersion_;
}

void UpdateImageResponse::setOsVersion(const std::string& value)
{
    osVersion_ = value;
    osVersionIsSet_ = true;
}

bool UpdateImageResponse::osVersionIsSet() const
{
    return osVersionIsSet_;
}

void UpdateImageResponse::unsetosVersion()
{
    osVersionIsSet_ = false;
}

std::string UpdateImageResponse::getPlatform() const
{
    return platform_;
}

void UpdateImageResponse::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool UpdateImageResponse::platformIsSet() const
{
    return platformIsSet_;
}

void UpdateImageResponse::unsetplatform()
{
    platformIsSet_ = false;
}

std::string UpdateImageResponse::getProductcode() const
{
    return productcode_;
}

void UpdateImageResponse::setProductcode(const std::string& value)
{
    productcode_ = value;
    productcodeIsSet_ = true;
}

bool UpdateImageResponse::productcodeIsSet() const
{
    return productcodeIsSet_;
}

void UpdateImageResponse::unsetproductcode()
{
    productcodeIsSet_ = false;
}

std::string UpdateImageResponse::getSupportDiskintensive() const
{
    return supportDiskintensive_;
}

void UpdateImageResponse::setSupportDiskintensive(const std::string& value)
{
    supportDiskintensive_ = value;
    supportDiskintensiveIsSet_ = true;
}

bool UpdateImageResponse::supportDiskintensiveIsSet() const
{
    return supportDiskintensiveIsSet_;
}

void UpdateImageResponse::unsetsupportDiskintensive()
{
    supportDiskintensiveIsSet_ = false;
}

std::string UpdateImageResponse::getSupportHighperformance() const
{
    return supportHighperformance_;
}

void UpdateImageResponse::setSupportHighperformance(const std::string& value)
{
    supportHighperformance_ = value;
    supportHighperformanceIsSet_ = true;
}

bool UpdateImageResponse::supportHighperformanceIsSet() const
{
    return supportHighperformanceIsSet_;
}

void UpdateImageResponse::unsetsupportHighperformance()
{
    supportHighperformanceIsSet_ = false;
}

std::string UpdateImageResponse::getSupportKvm() const
{
    return supportKvm_;
}

void UpdateImageResponse::setSupportKvm(const std::string& value)
{
    supportKvm_ = value;
    supportKvmIsSet_ = true;
}

bool UpdateImageResponse::supportKvmIsSet() const
{
    return supportKvmIsSet_;
}

void UpdateImageResponse::unsetsupportKvm()
{
    supportKvmIsSet_ = false;
}

std::string UpdateImageResponse::getSupportKvmGpuType() const
{
    return supportKvmGpuType_;
}

void UpdateImageResponse::setSupportKvmGpuType(const std::string& value)
{
    supportKvmGpuType_ = value;
    supportKvmGpuTypeIsSet_ = true;
}

bool UpdateImageResponse::supportKvmGpuTypeIsSet() const
{
    return supportKvmGpuTypeIsSet_;
}

void UpdateImageResponse::unsetsupportKvmGpuType()
{
    supportKvmGpuTypeIsSet_ = false;
}

std::string UpdateImageResponse::getSupportKvmInfiniband() const
{
    return supportKvmInfiniband_;
}

void UpdateImageResponse::setSupportKvmInfiniband(const std::string& value)
{
    supportKvmInfiniband_ = value;
    supportKvmInfinibandIsSet_ = true;
}

bool UpdateImageResponse::supportKvmInfinibandIsSet() const
{
    return supportKvmInfinibandIsSet_;
}

void UpdateImageResponse::unsetsupportKvmInfiniband()
{
    supportKvmInfinibandIsSet_ = false;
}

std::string UpdateImageResponse::getSupportLargememory() const
{
    return supportLargememory_;
}

void UpdateImageResponse::setSupportLargememory(const std::string& value)
{
    supportLargememory_ = value;
    supportLargememoryIsSet_ = true;
}

bool UpdateImageResponse::supportLargememoryIsSet() const
{
    return supportLargememoryIsSet_;
}

void UpdateImageResponse::unsetsupportLargememory()
{
    supportLargememoryIsSet_ = false;
}

std::string UpdateImageResponse::getSupportXen() const
{
    return supportXen_;
}

void UpdateImageResponse::setSupportXen(const std::string& value)
{
    supportXen_ = value;
    supportXenIsSet_ = true;
}

bool UpdateImageResponse::supportXenIsSet() const
{
    return supportXenIsSet_;
}

void UpdateImageResponse::unsetsupportXen()
{
    supportXenIsSet_ = false;
}

std::string UpdateImageResponse::getSupportXenGpuType() const
{
    return supportXenGpuType_;
}

void UpdateImageResponse::setSupportXenGpuType(const std::string& value)
{
    supportXenGpuType_ = value;
    supportXenGpuTypeIsSet_ = true;
}

bool UpdateImageResponse::supportXenGpuTypeIsSet() const
{
    return supportXenGpuTypeIsSet_;
}

void UpdateImageResponse::unsetsupportXenGpuType()
{
    supportXenGpuTypeIsSet_ = false;
}

std::string UpdateImageResponse::getSupportXenHana() const
{
    return supportXenHana_;
}

void UpdateImageResponse::setSupportXenHana(const std::string& value)
{
    supportXenHana_ = value;
    supportXenHanaIsSet_ = true;
}

bool UpdateImageResponse::supportXenHanaIsSet() const
{
    return supportXenHanaIsSet_;
}

void UpdateImageResponse::unsetsupportXenHana()
{
    supportXenHanaIsSet_ = false;
}

bool UpdateImageResponse::isSystemSupportMarket() const
{
    return systemSupportMarket_;
}

void UpdateImageResponse::setSystemSupportMarket(bool value)
{
    systemSupportMarket_ = value;
    systemSupportMarketIsSet_ = true;
}

bool UpdateImageResponse::systemSupportMarketIsSet() const
{
    return systemSupportMarketIsSet_;
}

void UpdateImageResponse::unsetsystemSupportMarket()
{
    systemSupportMarketIsSet_ = false;
}

std::string UpdateImageResponse::getChecksum() const
{
    return checksum_;
}

void UpdateImageResponse::setChecksum(const std::string& value)
{
    checksum_ = value;
    checksumIsSet_ = true;
}

bool UpdateImageResponse::checksumIsSet() const
{
    return checksumIsSet_;
}

void UpdateImageResponse::unsetchecksum()
{
    checksumIsSet_ = false;
}

std::string UpdateImageResponse::getContainerFormat() const
{
    return containerFormat_;
}

void UpdateImageResponse::setContainerFormat(const std::string& value)
{
    containerFormat_ = value;
    containerFormatIsSet_ = true;
}

bool UpdateImageResponse::containerFormatIsSet() const
{
    return containerFormatIsSet_;
}

void UpdateImageResponse::unsetcontainerFormat()
{
    containerFormatIsSet_ = false;
}

std::string UpdateImageResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateImageResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateImageResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateImageResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateImageResponse::getDiskFormat() const
{
    return diskFormat_;
}

void UpdateImageResponse::setDiskFormat(const std::string& value)
{
    diskFormat_ = value;
    diskFormatIsSet_ = true;
}

bool UpdateImageResponse::diskFormatIsSet() const
{
    return diskFormatIsSet_;
}

void UpdateImageResponse::unsetdiskFormat()
{
    diskFormatIsSet_ = false;
}

std::string UpdateImageResponse::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateImageResponse::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateImageResponse::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateImageResponse::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateImageResponse::getFile() const
{
    return file_;
}

void UpdateImageResponse::setFile(const std::string& value)
{
    file_ = value;
    fileIsSet_ = true;
}

bool UpdateImageResponse::fileIsSet() const
{
    return fileIsSet_;
}

void UpdateImageResponse::unsetfile()
{
    fileIsSet_ = false;
}

std::string UpdateImageResponse::getId() const
{
    return id_;
}

void UpdateImageResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateImageResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateImageResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateImageResponse::getMinDisk() const
{
    return minDisk_;
}

void UpdateImageResponse::setMinDisk(int32_t value)
{
    minDisk_ = value;
    minDiskIsSet_ = true;
}

bool UpdateImageResponse::minDiskIsSet() const
{
    return minDiskIsSet_;
}

void UpdateImageResponse::unsetminDisk()
{
    minDiskIsSet_ = false;
}

int32_t UpdateImageResponse::getMinRam() const
{
    return minRam_;
}

void UpdateImageResponse::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool UpdateImageResponse::minRamIsSet() const
{
    return minRamIsSet_;
}

void UpdateImageResponse::unsetminRam()
{
    minRamIsSet_ = false;
}

std::string UpdateImageResponse::getName() const
{
    return name_;
}

void UpdateImageResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateImageResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateImageResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateImageResponse::getOwner() const
{
    return owner_;
}

void UpdateImageResponse::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool UpdateImageResponse::ownerIsSet() const
{
    return ownerIsSet_;
}

void UpdateImageResponse::unsetowner()
{
    ownerIsSet_ = false;
}

bool UpdateImageResponse::isProtected() const
{
    return protected_;
}

void UpdateImageResponse::setProtected(bool value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool UpdateImageResponse::protectedIsSet() const
{
    return protectedIsSet_;
}

void UpdateImageResponse::unsetprotected()
{
    protectedIsSet_ = false;
}

std::string UpdateImageResponse::getSchema() const
{
    return schema_;
}

void UpdateImageResponse::setSchema(const std::string& value)
{
    schema_ = value;
    schemaIsSet_ = true;
}

bool UpdateImageResponse::schemaIsSet() const
{
    return schemaIsSet_;
}

void UpdateImageResponse::unsetschema()
{
    schemaIsSet_ = false;
}

std::string UpdateImageResponse::getSelf() const
{
    return self_;
}

void UpdateImageResponse::setSelf(const std::string& value)
{
    self_ = value;
    selfIsSet_ = true;
}

bool UpdateImageResponse::selfIsSet() const
{
    return selfIsSet_;
}

void UpdateImageResponse::unsetself()
{
    selfIsSet_ = false;
}

int32_t UpdateImageResponse::getSize() const
{
    return size_;
}

void UpdateImageResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool UpdateImageResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void UpdateImageResponse::unsetsize()
{
    sizeIsSet_ = false;
}

std::string UpdateImageResponse::getStatus() const
{
    return status_;
}

void UpdateImageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateImageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateImageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& UpdateImageResponse::getTags()
{
    return tags_;
}

void UpdateImageResponse::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateImageResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateImageResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string UpdateImageResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateImageResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateImageResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateImageResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string UpdateImageResponse::getVirtualEnvType() const
{
    return virtualEnvType_;
}

void UpdateImageResponse::setVirtualEnvType(const std::string& value)
{
    virtualEnvType_ = value;
    virtualEnvTypeIsSet_ = true;
}

bool UpdateImageResponse::virtualEnvTypeIsSet() const
{
    return virtualEnvTypeIsSet_;
}

void UpdateImageResponse::unsetvirtualEnvType()
{
    virtualEnvTypeIsSet_ = false;
}

int32_t UpdateImageResponse::getVirtualSize() const
{
    return virtualSize_;
}

void UpdateImageResponse::setVirtualSize(int32_t value)
{
    virtualSize_ = value;
    virtualSizeIsSet_ = true;
}

bool UpdateImageResponse::virtualSizeIsSet() const
{
    return virtualSizeIsSet_;
}

void UpdateImageResponse::unsetvirtualSize()
{
    virtualSizeIsSet_ = false;
}

std::string UpdateImageResponse::getVisibility() const
{
    return visibility_;
}

void UpdateImageResponse::setVisibility(const std::string& value)
{
    visibility_ = value;
    visibilityIsSet_ = true;
}

bool UpdateImageResponse::visibilityIsSet() const
{
    return visibilityIsSet_;
}

void UpdateImageResponse::unsetvisibility()
{
    visibilityIsSet_ = false;
}

std::string UpdateImageResponse::getSupportFcInject() const
{
    return supportFcInject_;
}

void UpdateImageResponse::setSupportFcInject(const std::string& value)
{
    supportFcInject_ = value;
    supportFcInjectIsSet_ = true;
}

bool UpdateImageResponse::supportFcInjectIsSet() const
{
    return supportFcInjectIsSet_;
}

void UpdateImageResponse::unsetsupportFcInject()
{
    supportFcInjectIsSet_ = false;
}

std::string UpdateImageResponse::getHwFirmwareType() const
{
    return hwFirmwareType_;
}

void UpdateImageResponse::setHwFirmwareType(const std::string& value)
{
    hwFirmwareType_ = value;
    hwFirmwareTypeIsSet_ = true;
}

bool UpdateImageResponse::hwFirmwareTypeIsSet() const
{
    return hwFirmwareTypeIsSet_;
}

void UpdateImageResponse::unsethwFirmwareType()
{
    hwFirmwareTypeIsSet_ = false;
}

std::string UpdateImageResponse::getSupportArm() const
{
    return supportArm_;
}

void UpdateImageResponse::setSupportArm(const std::string& value)
{
    supportArm_ = value;
    supportArmIsSet_ = true;
}

bool UpdateImageResponse::supportArmIsSet() const
{
    return supportArmIsSet_;
}

void UpdateImageResponse::unsetsupportArm()
{
    supportArmIsSet_ = false;
}

std::string UpdateImageResponse::getMaxRam() const
{
    return maxRam_;
}

void UpdateImageResponse::setMaxRam(const std::string& value)
{
    maxRam_ = value;
    maxRamIsSet_ = true;
}

bool UpdateImageResponse::maxRamIsSet() const
{
    return maxRamIsSet_;
}

void UpdateImageResponse::unsetmaxRam()
{
    maxRamIsSet_ = false;
}

std::string UpdateImageResponse::getSystemCmkid() const
{
    return systemCmkid_;
}

void UpdateImageResponse::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool UpdateImageResponse::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void UpdateImageResponse::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

std::string UpdateImageResponse::getOsFeatureList() const
{
    return osFeatureList_;
}

void UpdateImageResponse::setOsFeatureList(const std::string& value)
{
    osFeatureList_ = value;
    osFeatureListIsSet_ = true;
}

bool UpdateImageResponse::osFeatureListIsSet() const
{
    return osFeatureListIsSet_;
}

void UpdateImageResponse::unsetosFeatureList()
{
    osFeatureListIsSet_ = false;
}

std::string UpdateImageResponse::getAccountCode() const
{
    return accountCode_;
}

void UpdateImageResponse::setAccountCode(const std::string& value)
{
    accountCode_ = value;
    accountCodeIsSet_ = true;
}

bool UpdateImageResponse::accountCodeIsSet() const
{
    return accountCodeIsSet_;
}

void UpdateImageResponse::unsetaccountCode()
{
    accountCodeIsSet_ = false;
}

std::string UpdateImageResponse::getHwVifMultiqueueEnabled() const
{
    return hwVifMultiqueueEnabled_;
}

void UpdateImageResponse::setHwVifMultiqueueEnabled(const std::string& value)
{
    hwVifMultiqueueEnabled_ = value;
    hwVifMultiqueueEnabledIsSet_ = true;
}

bool UpdateImageResponse::hwVifMultiqueueEnabledIsSet() const
{
    return hwVifMultiqueueEnabledIsSet_;
}

void UpdateImageResponse::unsethwVifMultiqueueEnabled()
{
    hwVifMultiqueueEnabledIsSet_ = false;
}

std::string UpdateImageResponse::getIsOffshelved() const
{
    return isOffshelved_;
}

void UpdateImageResponse::setIsOffshelved(const std::string& value)
{
    isOffshelved_ = value;
    isOffshelvedIsSet_ = true;
}

bool UpdateImageResponse::isOffshelvedIsSet() const
{
    return isOffshelvedIsSet_;
}

void UpdateImageResponse::unsetisOffshelved()
{
    isOffshelvedIsSet_ = false;
}

std::string UpdateImageResponse::getLazyloading() const
{
    return lazyloading_;
}

void UpdateImageResponse::setLazyloading(const std::string& value)
{
    lazyloading_ = value;
    lazyloadingIsSet_ = true;
}

bool UpdateImageResponse::lazyloadingIsSet() const
{
    return lazyloadingIsSet_;
}

void UpdateImageResponse::unsetlazyloading()
{
    lazyloadingIsSet_ = false;
}

std::string UpdateImageResponse::getRootOrigin() const
{
    return rootOrigin_;
}

void UpdateImageResponse::setRootOrigin(const std::string& value)
{
    rootOrigin_ = value;
    rootOriginIsSet_ = true;
}

bool UpdateImageResponse::rootOriginIsSet() const
{
    return rootOriginIsSet_;
}

void UpdateImageResponse::unsetrootOrigin()
{
    rootOriginIsSet_ = false;
}

std::string UpdateImageResponse::getSequenceNum() const
{
    return sequenceNum_;
}

void UpdateImageResponse::setSequenceNum(const std::string& value)
{
    sequenceNum_ = value;
    sequenceNumIsSet_ = true;
}

bool UpdateImageResponse::sequenceNumIsSet() const
{
    return sequenceNumIsSet_;
}

void UpdateImageResponse::unsetsequenceNum()
{
    sequenceNumIsSet_ = false;
}

std::string UpdateImageResponse::getActiveAt() const
{
    return activeAt_;
}

void UpdateImageResponse::setActiveAt(const std::string& value)
{
    activeAt_ = value;
    activeAtIsSet_ = true;
}

bool UpdateImageResponse::activeAtIsSet() const
{
    return activeAtIsSet_;
}

void UpdateImageResponse::unsetactiveAt()
{
    activeAtIsSet_ = false;
}

std::string UpdateImageResponse::getSupportAgentList() const
{
    return supportAgentList_;
}

void UpdateImageResponse::setSupportAgentList(const std::string& value)
{
    supportAgentList_ = value;
    supportAgentListIsSet_ = true;
}

bool UpdateImageResponse::supportAgentListIsSet() const
{
    return supportAgentListIsSet_;
}

void UpdateImageResponse::unsetsupportAgentList()
{
    supportAgentListIsSet_ = false;
}

std::string UpdateImageResponse::getSupportAmd() const
{
    return supportAmd_;
}

void UpdateImageResponse::setSupportAmd(const std::string& value)
{
    supportAmd_ = value;
    supportAmdIsSet_ = true;
}

bool UpdateImageResponse::supportAmdIsSet() const
{
    return supportAmdIsSet_;
}

void UpdateImageResponse::unsetsupportAmd()
{
    supportAmdIsSet_ = false;
}

}
}
}
}
}


