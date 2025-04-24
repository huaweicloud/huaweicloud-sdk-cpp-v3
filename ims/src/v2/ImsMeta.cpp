
#include <huaweicloud/ims/v2/ImsMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef ImsMeta::genRequestDefForAddImageTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForBatchAddMembers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForBatchAddOrDeleteTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForBatchDeleteMembers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForBatchDeleteTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForBatchUpdateMembers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForCopyImageCrossRegion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForCopyImageInRegion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForCreateDataImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForCreateImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForCreateOrUpdateTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForCreateWholeImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForDeleteImageTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForExportImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForImportImageQuick() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForListImageByTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForListImageMembers() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForListImageTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForListImages() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Imagetype")
                  .withJsonTag("__imagetype")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Isregistered")
                  .withJsonTag("__isregistered")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OsBit")
                  .withJsonTag("__os_bit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OsType")
                  .withJsonTag("__os_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Platform")
                  .withJsonTag("__platform")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportDiskintensive")
                  .withJsonTag("__support_diskintensive")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportHighperformance")
                  .withJsonTag("__support_highperformance")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportKvm")
                  .withJsonTag("__support_kvm")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportKvmGpuType")
                  .withJsonTag("__support_kvm_gpu_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportKvmInfiniband")
                  .withJsonTag("__support_kvm_infiniband")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportLargememory")
                  .withJsonTag("__support_largememory")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportXen")
                  .withJsonTag("__support_xen")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportXenGpuType")
                  .withJsonTag("__support_xen_gpu_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportXenHana")
                  .withJsonTag("__support_xen_hana")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ContainerFormat")
                  .withJsonTag("container_format")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DiskFormat")
                  .withJsonTag("disk_format")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MemberStatus")
                  .withJsonTag("member_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MinDisk")
                  .withJsonTag("min_disk")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MinRam")
                  .withJsonTag("min_ram")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Owner")
                  .withJsonTag("owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protected")
                  .withJsonTag("protected")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tag")
                  .withJsonTag("tag")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VirtualEnvType")
                  .withJsonTag("virtual_env_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Visibility")
                  .withJsonTag("visibility")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FlavorId")
                  .withJsonTag("flavor_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedAt")
                  .withJsonTag("created_at")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UpdatedAt")
                  .withJsonTag("updated_at")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Architecture")
                  .withJsonTag("architecture")
                  .withLocationType(Query_));
    FieldDef headerParamXSdkDate;
    reqDefBuilder.withRequestField(headerParamXSdkDate
                  .withName("XSdkDate")
                  .withJsonTag("X-Sdk-Date")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForListImagesTags() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForListOsVersions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Tag")
                  .withJsonTag("tag")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForListTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Imagetype")
                  .withJsonTag("__imagetype")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MinDisk")
                  .withJsonTag("min_disk")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Platform")
                  .withJsonTag("__platform")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OsType")
                  .withJsonTag("__os_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MemberStatus")
                  .withJsonTag("member_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("VirtualEnvType")
                  .withJsonTag("virtual_env_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterpriseProjectId")
                  .withJsonTag("enterprise_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Architecture")
                  .withJsonTag("architecture")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedAt")
                  .withJsonTag("created_at")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UpdatedAt")
                  .withJsonTag("updated_at")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForRegisterImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForShowImageMember() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForShowImageQuota() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForShowJob() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForShowJobProgress() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForUpdateImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForListVersions() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForShowVersion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceAddImageMember() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceCreateImageMetadata() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceCreateTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceDeleteImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceDeleteImageMember() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceDeleteTag() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceListImageMemberSchemas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceListImageMembers() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceListImageSchemas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceListImages() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Imagetype")
                  .withJsonTag("__imagetype")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Isregistered")
                  .withJsonTag("__isregistered")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OsBit")
                  .withJsonTag("__os_bit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OsType")
                  .withJsonTag("__os_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Platform")
                  .withJsonTag("__platform")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportDiskintensive")
                  .withJsonTag("__support_diskintensive")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportHighperformance")
                  .withJsonTag("__support_highperformance")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportKvm")
                  .withJsonTag("__support_kvm")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportKvmGpuType")
                  .withJsonTag("__support_kvm_gpu_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportKvmInfiniband")
                  .withJsonTag("__support_kvm_infiniband")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportLargememory")
                  .withJsonTag("__support_largememory")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportXen")
                  .withJsonTag("__support_xen")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportXenGpuType")
                  .withJsonTag("__support_xen_gpu_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SupportXenHana")
                  .withJsonTag("__support_xen_hana")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ContainerFormat")
                  .withJsonTag("container_format")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DiskFormat")
                  .withJsonTag("disk_format")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Id")
                  .withJsonTag("id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Marker")
                  .withJsonTag("marker")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MemberStatus")
                  .withJsonTag("member_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MinDisk")
                  .withJsonTag("min_disk")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MinRam")
                  .withJsonTag("min_ram")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Owner")
                  .withJsonTag("owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Protected")
                  .withJsonTag("protected")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortDir")
                  .withJsonTag("sort_dir")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortKey")
                  .withJsonTag("sort_key")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Tag")
                  .withJsonTag("tag")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Visibility")
                  .withJsonTag("visibility")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedAt")
                  .withJsonTag("created_at")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UpdatedAt")
                  .withJsonTag("updated_at")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceShowImage() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceShowImageMember() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceShowImageMemberSchemas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceShowImageSchemas() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceUpdateImage() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ImsMeta::genRequestDefForGlanceUpdateImageMember() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}


}
}
}
}

