#ifndef HUAWEICLOUD_SDK_IMS_V2_ImsClient_H_
#define HUAWEICLOUD_SDK_IMS_V2_ImsClient_H_

#include <huaweicloud/ims/ImsExport.h>
#include "huaweicloud/core/Client.h"
#include "huaweicloud/core/ClientBuilder.h"


#include "huaweicloud/ims/model/AddOrUpdateTagsRequestBody.h"
#include "huaweicloud/ims/model/BatchAddMembersRequest.h"
#include "huaweicloud/ims/model/BatchAddMembersRequestBody.h"
#include "huaweicloud/ims/model/BatchAddMembersResponse.h"
#include "huaweicloud/ims/model/BatchDeleteMembersRequest.h"
#include "huaweicloud/ims/model/BatchDeleteMembersResponse.h"
#include "huaweicloud/ims/model/BatchUpdateMembersRequest.h"
#include "huaweicloud/ims/model/BatchUpdateMembersRequestBody.h"
#include "huaweicloud/ims/model/BatchUpdateMembersResponse.h"
#include "huaweicloud/ims/model/CopyImageCrossRegionRequest.h"
#include "huaweicloud/ims/model/CopyImageCrossRegionRequestBody.h"
#include "huaweicloud/ims/model/CopyImageCrossRegionResponse.h"
#include "huaweicloud/ims/model/CopyImageInRegionRequest.h"
#include "huaweicloud/ims/model/CopyImageInRegionRequestBody.h"
#include "huaweicloud/ims/model/CopyImageInRegionResponse.h"
#include "huaweicloud/ims/model/CreateDataImageRequest.h"
#include "huaweicloud/ims/model/CreateDataImageRequestBody.h"
#include "huaweicloud/ims/model/CreateDataImageResponse.h"
#include "huaweicloud/ims/model/CreateImageRequest.h"
#include "huaweicloud/ims/model/CreateImageRequestBody.h"
#include "huaweicloud/ims/model/CreateImageResponse.h"
#include "huaweicloud/ims/model/CreateOrUpdateTagsRequest.h"
#include "huaweicloud/ims/model/CreateOrUpdateTagsResponse.h"
#include "huaweicloud/ims/model/CreateWholeImageRequest.h"
#include "huaweicloud/ims/model/CreateWholeImageRequestBody.h"
#include "huaweicloud/ims/model/CreateWholeImageResponse.h"
#include "huaweicloud/ims/model/ExportImageRequest.h"
#include "huaweicloud/ims/model/ExportImageRequestBody.h"
#include "huaweicloud/ims/model/ExportImageResponse.h"
#include "huaweicloud/ims/model/ImportImageQuickRequest.h"
#include "huaweicloud/ims/model/ImportImageQuickResponse.h"
#include "huaweicloud/ims/model/ListImagesRequest.h"
#include "huaweicloud/ims/model/ListImagesResponse.h"
#include "huaweicloud/ims/model/ListOsVersionsRequest.h"
#include "huaweicloud/ims/model/ListOsVersionsResponse.h"
#include "huaweicloud/ims/model/ListOsVersionsResponseBody.h"
#include "huaweicloud/ims/model/ListTagsRequest.h"
#include "huaweicloud/ims/model/ListTagsResponse.h"
#include "huaweicloud/ims/model/QuickImportImageByFileRequestBody.h"
#include "huaweicloud/ims/model/RegisterImageRequest.h"
#include "huaweicloud/ims/model/RegisterImageRequestBody.h"
#include "huaweicloud/ims/model/RegisterImageResponse.h"
#include "huaweicloud/ims/model/ShowImageQuotaRequest.h"
#include "huaweicloud/ims/model/ShowImageQuotaResponse.h"
#include "huaweicloud/ims/model/UpdateImageRequest.h"
#include "huaweicloud/ims/model/UpdateImageRequestBody.h"
#include "huaweicloud/ims/model/UpdateImageResponse.h"
#include <string>
#include <vector>

#include "huaweicloud/ims/model/ShowJobRequest.h"
#include "huaweicloud/ims/model/ShowJobResponse.h"
#include <string>

#include "huaweicloud/ims/model/GlanceAddImageMemberRequest.h"
#include "huaweicloud/ims/model/GlanceAddImageMemberRequestBody.h"
#include "huaweicloud/ims/model/GlanceAddImageMemberResponse.h"
#include "huaweicloud/ims/model/GlanceCreateImageMetadataRequest.h"
#include "huaweicloud/ims/model/GlanceCreateImageMetadataRequestBody.h"
#include "huaweicloud/ims/model/GlanceCreateImageMetadataResponse.h"
#include "huaweicloud/ims/model/GlanceCreateTagRequest.h"
#include "huaweicloud/ims/model/GlanceCreateTagResponse.h"
#include "huaweicloud/ims/model/GlanceDeleteImageMemberRequest.h"
#include "huaweicloud/ims/model/GlanceDeleteImageMemberResponse.h"
#include "huaweicloud/ims/model/GlanceDeleteImageRequest.h"
#include "huaweicloud/ims/model/GlanceDeleteImageRequestBody.h"
#include "huaweicloud/ims/model/GlanceDeleteImageResponse.h"
#include "huaweicloud/ims/model/GlanceDeleteTagRequest.h"
#include "huaweicloud/ims/model/GlanceDeleteTagResponse.h"
#include "huaweicloud/ims/model/GlanceListImageMemberSchemasRequest.h"
#include "huaweicloud/ims/model/GlanceListImageMemberSchemasResponse.h"
#include "huaweicloud/ims/model/GlanceListImageMembersRequest.h"
#include "huaweicloud/ims/model/GlanceListImageMembersResponse.h"
#include "huaweicloud/ims/model/GlanceListImageSchemasRequest.h"
#include "huaweicloud/ims/model/GlanceListImageSchemasResponse.h"
#include "huaweicloud/ims/model/GlanceListImagesRequest.h"
#include "huaweicloud/ims/model/GlanceListImagesResponse.h"
#include "huaweicloud/ims/model/GlanceShowImageMemberRequest.h"
#include "huaweicloud/ims/model/GlanceShowImageMemberResponse.h"
#include "huaweicloud/ims/model/GlanceShowImageMemberSchemasRequest.h"
#include "huaweicloud/ims/model/GlanceShowImageMemberSchemasResponse.h"
#include "huaweicloud/ims/model/GlanceShowImageRequest.h"
#include "huaweicloud/ims/model/GlanceShowImageResponse.h"
#include "huaweicloud/ims/model/GlanceShowImageSchemasRequest.h"
#include "huaweicloud/ims/model/GlanceShowImageSchemasResponse.h"
#include "huaweicloud/ims/model/GlanceUpdateImageMemberRequest.h"
#include "huaweicloud/ims/model/GlanceUpdateImageMemberRequestBody.h"
#include "huaweicloud/ims/model/GlanceUpdateImageMemberResponse.h"
#include "huaweicloud/ims/model/GlanceUpdateImageRequest.h"
#include "huaweicloud/ims/model/GlanceUpdateImageRequestBody.h"
#include "huaweicloud/ims/model/GlanceUpdateImageResponse.h"
#include <string>
#include <vector>

#include <cpprest/details/basic_types.h>
#include "huaweicloud/core/utils/ModelBase.h"
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Ims::V2::Model;

class HUAWEICLOUD_IMS_EXPORT  ImsClient : public Client
{
public:

    ImsClient();

    virtual ~ImsClient();

    static ClientBuilder<ImsClient> newBuilder();

    /// <summary>
    /// 批量添加镜像成员
    /// </summary>
    /// <remarks>
    /// 该接口为扩展接口，主要用于镜像共享时用户将多个镜像共享给多个用户。 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。如何查询异步任务，请参见异步任务查询。
    /// </remarks>
    /// <param name="members">镜像ID列表</param>
    std::shared_ptr<BatchAddMembersResponse> batchAddMembers(
        BatchAddMembersRequest &request
    );
    /// <summary>
    /// 批量删除镜像成员
    /// </summary>
    /// <remarks>
    /// 该接口为扩展接口，主要用于取消镜像共享。 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。如何查询异步任务，请参见异步任务查询。
    /// </remarks>
    /// <param name="members">请求参数</param>
    std::shared_ptr<BatchDeleteMembersResponse> batchDeleteMembers(
        BatchDeleteMembersRequest &request
    );
    /// <summary>
    /// 批量更新镜像成员状态
    /// </summary>
    /// <remarks>
    /// 该接口为扩展接口，主要用于用户接受或者拒绝多个共享镜像时批量更新镜像成员的状态。 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。如何查询异步任务，请参见异步任务查询。
    /// </remarks>
    /// <param name="members">请求参数</param>
    std::shared_ptr<BatchUpdateMembersResponse> batchUpdateMembers(
        BatchUpdateMembersRequest &request
    );
    /// <summary>
    /// 跨Region复制镜像
    /// </summary>
    /// <remarks>
    /// 该接口为扩展接口，用户在一个区域制作的私有镜像，可以通过跨Region复制镜像将镜像复制到其他区域，在其他区域发放相同类型的云服务器，帮助用户实现区域间的业务迁移。 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。 如何查询异步任务，请参见异步任务进度查询。
    /// </remarks>
    /// <param name="imageId">镜像ID</param>
    /// <param name="bodyparam">请求参数</param>
    std::shared_ptr<CopyImageCrossRegionResponse> copyImageCrossRegion(
        CopyImageCrossRegionRequest &request
    );
    /// <summary>
    /// Region内复制镜像
    /// </summary>
    /// <remarks>
    /// 该接口为扩展接口，主要用于用户将一个已有镜像复制为另一个镜像。复制镜像时，可以更改镜像的加密等属性，以满足不同的场景。 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。如何查询异步任务，请参见异步任务查询。
    /// </remarks>
    /// <param name="imageId">镜像ID</param>
    /// <param name="bodyparam">请求参数</param>
    std::shared_ptr<CopyImageInRegionResponse> copyImageInRegion(
        CopyImageInRegionRequest &request
    );
    /// <summary>
    /// 使用外部镜像文件制作数据镜像
    /// </summary>
    /// <remarks>
    /// 使用上传至OBS桶中的外部数据卷镜像文件制作数据镜像。作为异步接口，调用成功，只是说明后台收到了制作请求，镜像是否制作成功需要通过异步任务查询接口查询该任务的执行状态。具体请参考异步任务查询。
    /// </remarks>
    /// <param name="bodyparam">请求参数</param>
    std::shared_ptr<CreateDataImageResponse> createDataImage(
        CreateDataImageRequest &request
    );
    /// <summary>
    /// 制作镜像
    /// </summary>
    /// <remarks>
    /// 本接口用于制作私有镜像，支持： 使用云服务器制作私有镜像。 使用上传至OBS桶中的外部镜像文件制作私有镜像。 使用数据卷制作系统盘镜像。 作为异步接口，调用成功，只是说明云平台收到了制作请求，镜像是否制作成功需要通过异步任务查询接口查询该任务的执行状态，具体请参考异步任务查询。
    /// </remarks>
    /// <param name="eCSbodyparam">使用云服务器制作镜像时的Request Body</param>
    std::shared_ptr<CreateImageResponse> createImage(
        CreateImageRequest &request
    );
    /// <summary>
    /// 增加或修改标签
    /// </summary>
    /// <remarks>
    /// 该接口主要用于为某个镜像增加或修改一个自定义标签。通过自定义标签，用户可以将镜像进行分类。
    /// </remarks>
    /// <param name="bodyparam">请求参数</param>
    std::shared_ptr<CreateOrUpdateTagsResponse> createOrUpdateTags(
        CreateOrUpdateTagsRequest &request
    );
    /// <summary>
    /// 制作整机镜像
    /// </summary>
    /// <remarks>
    /// 使用云服务器或者云服务器备份制作整机镜像。作为异步接口，调用成功，只是说明后台收到了制作整机镜像的请求，镜像是否制作成功需要通过异步任务查询接口查询该任务的执行状态，具体请参考异步任务查询。
    /// </remarks>
    /// <param name="eCSmakewholeimagebody">请求参数</param>
    std::shared_ptr<CreateWholeImageResponse> createWholeImage(
        CreateWholeImageRequest &request
    );
    /// <summary>
    /// 导出镜像
    /// </summary>
    /// <remarks>
    /// 该接口为扩展接口，用于用户将自己的私有镜像导出到指定的OBS桶中。
    /// </remarks>
    /// <param name="imageId">镜像ID。</param>
    /// <param name="bodyparam">请求参数</param>
    std::shared_ptr<ExportImageResponse> exportImage(
        ExportImageRequest &request
    );
    /// <summary>
    /// 镜像文件快速导入
    /// </summary>
    /// <remarks>
    /// 使用上传至OBS桶中的超大外部镜像文件制作私有镜像，目前仅支持RAW或ZVHD2格式镜像文件。且要求镜像文件大小不能超过1TB。 由于快速导入功能要求提前转换镜像文件格式为RAW或ZVHD2格式，因此镜像文件小于128GB时推荐您优先使用常规的创建私有镜像的方式。 作为异步接口，调用成功，只是说明后台收到了制作请求，镜像是否制作成功需要通过异步任务查询接口查询该任务的执行状态，具体请参考异步任务查询。
    /// </remarks>
    /// <param name="fileCreateIms">快速通道创建镜像的Request Body</param>
    std::shared_ptr<ImportImageQuickResponse> importImageQuick(
        ImportImageQuickRequest &request
    );
    /// <summary>
    /// 查询镜像列表
    /// </summary>
    /// <remarks>
    /// 根据不同条件查询镜像列表信息。 可以在URI后面用‘?’和‘&amp;’添加不同的查询条件组合，请参考请求样例。
    /// </remarks>
    /// <param name="imagetype">镜像类型，目前支持以下类型： 公共镜像：gold 私有镜像：private 共享镜像：shared (optional, default to &quot;&quot;)</param>
    /// <param name="isregistered">镜像是否可用，取值为true，扩展接口会默认为true，普通用户只能查询取值为true的镜像。 (optional, default to &quot;&quot;)</param>
    /// <param name="osBit">操作系统位数，一般取值为32或者64。 (optional, default to &quot;&quot;)</param>
    /// <param name="osType">镜像系统类型，取值为Linux，Windows，Other。 (optional, default to &quot;&quot;)</param>
    /// <param name="platform">镜像平台分类 (optional, default to &quot;&quot;)</param>
    /// <param name="supportDiskintensive">表示该镜像支持密集存储。如果镜像支持密集存储性能，则值为true，否则无需增加该属性。 (optional, default to &quot;&quot;)</param>
    /// <param name="supportHighperformance">表示该镜像支持高计算性能。如果镜像支持高计算性能，则值为true，否则无需增加该属性。 (optional, default to &quot;&quot;)</param>
    /// <param name="supportKvm">如果镜像支持KVM，取值为true，否则无需增加该属性。 (optional, default to &quot;&quot;)</param>
    /// <param name="supportKvmGpuType">表示该镜像是支持KVM虚拟化平台下的GPU类型，如果不支持KVM虚拟机下GPU类型，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存。 (optional, default to &quot;&quot;)</param>
    /// <param name="supportKvmInfiniband">如果镜像支持KVM虚拟化下Infiniband网卡类型，取值为true。否则，无需添加该属性。该属性与“__support_xen”属性不共存。 (optional, default to &quot;&quot;)</param>
    /// <param name="supportLargememory">表示该镜像支持超大内存。如果镜像支持超大内存，取值为true，否则无需增加该属性。 (optional, default to &quot;&quot;)</param>
    /// <param name="supportXen">如果镜像支持XEN，取值为true，否则无需增加该属性。 (optional, default to &quot;&quot;)</param>
    /// <param name="supportXenGpuType">表示该镜像是支持XEN虚拟化平台下的GPU优化类型，如果不支持XEN虚拟化下GPU类型，无需添加该属性 。该属性与“__support_xen”和“__support_kvm”属性不共存。 (optional, default to &quot;&quot;)</param>
    /// <param name="supportXenHana">如果镜像支持XEN虚拟化下HANA类型，取值为true。否则，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存。 (optional, default to &quot;&quot;)</param>
    /// <param name="containerFormat">容器类型 (optional, default to &quot;&quot;)</param>
    /// <param name="diskFormat">镜像格式，目前支持vhd，zvhd、raw，qcow2,zvhd2。默认值是vhd。 (optional, default to &quot;&quot;)</param>
    /// <param name="enterpriseProjectId">表示查询某个企业项目下的镜像。 取值为0，表示查询属于default企业项目下的镜像。 取值为UUID，表示查询属于该UUID对应的企业项目下的镜像。取值为all_granted_eps，表示查询当前用户所有企业项目下的镜像。 关于企业项目ID的获取及企业项目特性的详细信息，请参考《企业管理用户指南》。 (optional, default to &quot;&quot;)</param>
    /// <param name="id">镜像ID (optional, default to &quot;&quot;)</param>
    /// <param name="limit">用于分页，表示查询几条镜像记录，取值为整数，默认取值为500。 (optional, default to 0)</param>
    /// <param name="marker">用于分页，表示从哪个镜像开始查询，取值为镜像ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="memberStatus">成员状态。目前取值有accepted、rejected、pending。accepted表示已经接受共享的镜像，rejected表示已经拒绝了其他用户共享的镜像，pending表示需要确认的其他用户的共享镜像。需要在查询时设置“visibility”参数为“shared”。 (optional, default to &quot;&quot;)</param>
    /// <param name="minDisk">镜像运行需要的最小磁盘，单位为GB 。取值为40～1024GB。 (optional, default to 0)</param>
    /// <param name="minRam">镜像运行需要的最小内存，单位为MB。参数取值依据弹性云服务器的规格限制，一般设置为0。 (optional, default to 0)</param>
    /// <param name="name">镜像名称 (optional, default to &quot;&quot;)</param>
    /// <param name="owner">镜像属于哪个租户 (optional, default to &quot;&quot;)</param>
    /// <param name="protected">镜像是否是受保护，取值为true/false，一般查询公共镜像时候取值为true，查询私有镜像可以不指定。 (optional, default to false)</param>
    /// <param name="sortDir">用于排序，表示升序还是降序，取值为asc和desc。与sort_key一起组合使用，默认为降序desc。 (optional, default to &quot;&quot;)</param>
    /// <param name="sortKey">用于排序，表示按照哪个字段排序。取值为镜像属性name，container_format，disk_format，status ，id，size字段，默认为创建时间。 (optional, default to &quot;&quot;)</param>
    /// <param name="status">镜像状态。取值如下： queued：表示镜像元数据已经创建成功，等待上传镜像文件。 saving：表示镜像正在上传文件到后端存储。 deleted：表示镜像已经删除。 killed：表示镜像上传错误。 active：表示镜像可以正常使用。 (optional, default to &quot;&quot;)</param>
    /// <param name="tag">标签，用户为镜像增加自定义标签后可以通过该参数过滤查询。 (optional, default to &quot;&quot;)</param>
    /// <param name="virtualEnvType">镜像使用环境类型：FusionCompute，Ironic，DataImage。如果弹性云服务器镜像，则取值为FusionCompute，如果是数据卷镜像则取值是DataImage，如果是裸金属服务器镜像，则取值是Ironic。 (optional, default to &quot;&quot;)</param>
    /// <param name="visibility">是否被其他租户可见，取值为public或private (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">请求的发生时间,格式为YYYYMMDDTHHMMSSZ。取值为当前系统的GMT时间。使用AK/SK认证时该字段必选 (optional, default to &quot;&quot;)</param>
    /// <param name="flavorId">用于通过云服务器规格过滤出可用公共镜像，取值为规格ID。 当前仅支持通过单个规格进行过滤。 (optional, default to &quot;&quot;)</param>
    /// <param name="createdAt">镜像创建时间。支持按照时间点过滤查询，取值格式为“操作符:UTC时间”。 其中操作符支持如下几种： gt：大于 gte：大于等于 lt：小于 lte：小于等于 eq：等于 neq：不等于 时间格式支持：yyyy-MM-ddThh:mm:ssZ或者yyyy-MM-dd hh:mm:ss 例如，查询创建时间在2018-10-28 10:00:00之前的镜像，可以通过如下条件过滤： created_at&#x3D;gt:2018-10-28T10:00:00Z (optional, default to &quot;&quot;)</param>
    /// <param name="updatedAt">镜像修改时间。支持按照时间点过滤查询，取值格式为“ 操作符:UTC时间”。 其中操作符支持如下几种： gt：大于 gte：大于等于 lt：小于 lte：小于等于 eq：等于 neq：不等于 时间格式支持：yyyy-MM-ddThh:mm:ssZ或者yyyy-MM-dd hh:mm:ss 例如，查询修改时间在2018-10-28 10:00:00之前的镜像，可以通过如下条件过滤： updated_at&#x3D;gt:2018-10-28T10:00:00Z (optional, default to &quot;&quot;)</param>
    /// <param name="architecture">镜像架构类型。取值包括： x86 arm (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListImagesResponse> listImages(
        ListImagesRequest &request
    );
    /// <summary>
    /// 查询镜像支持的OS列表
    /// </summary>
    /// <remarks>
    /// 查询当前区域弹性云服务器的OS兼容性列表。
    /// </remarks>
    /// <param name="tag">OS的标签。 根据标签值可以过滤查询指定特性的OS信息。 取值范围： bms：表示该镜像支持BMS的os_version列表。 uefi：支持UEFI启动方式的os_version列表。 arm：显示基于arm架构的os_version列表。 x86：显示基于x86架构的os_version列表。不带tag查询条件则默认查询当前region支持的所有的OS列表。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListOsVersionsResponse> listOsVersions(
        ListOsVersionsRequest &request
    );
    /// <summary>
    /// 按条件查询租户镜像标签列表
    /// </summary>
    /// <remarks>
    /// 根据不同条件查询镜像标签列表信息。
    /// </remarks>
    /// <param name="limit">用于分页，表示查询几条记录，取值为整数，默认为所有。 (optional, default to 0)</param>
    /// <param name="page">页码，表示需要查询第几页的数据。默认值为1。 (optional, default to 0)</param>
    /// <param name="imagetype">镜像类型，目前支持以下类型：公共镜像：gold私有镜像：private共享镜像：shared (optional, default to &quot;&quot;)</param>
    /// <param name="id">镜像ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="status">镜像状态。取值如下： queued：表示镜像元数据已经创建成功，等待上传镜像文件。 saving：表示镜像正在上传文件到后端存储。 deleted：表示镜像已经删除。 killed：表示镜像上传错误。 active：表示镜像可以正常使用。 (optional, default to &quot;&quot;)</param>
    /// <param name="name">镜像名称。 (optional, default to &quot;&quot;)</param>
    /// <param name="minDisk">镜像运行需要的最小磁盘，单位为GB 。 (optional, default to 0)</param>
    /// <param name="platform">镜像平台分类。 (optional, default to &quot;&quot;)</param>
    /// <param name="osType">镜像系统类型，取值如下：Linux,Windows,Other (optional, default to &quot;&quot;)</param>
    /// <param name="memberStatus">成员状态。目前取值有accepted、rejected、pending。 (optional, default to &quot;&quot;)</param>
    /// <param name="virtualEnvType">镜像使用环境类型：FusionCompute、Ironic、DataImage。 (optional, default to &quot;&quot;)</param>
    /// <param name="enterpriseProjectId">表示查询某个企业项目下的镜像。 (optional, default to &quot;&quot;)</param>
    /// <param name="architecture">镜像架构类型。取值包括：x86，arm (optional, default to &quot;&quot;)</param>
    /// <param name="createdAt">镜像创建时间。支持按照时间点过滤查询，取值格式为“操作符:UTC时间”。 其中操作符支持如下几种： gt：大于 gte：大于等于 lt：小于 lte：小于等于 eq：等于 neq：不等于 时间格式支持：yyyy-MM-ddThh:mm:ssZ或者yyyy-MM-dd hh:mm:ss 例如，查询创建时间在2018-10-28 10:00:00之前的镜像，可以通过如下条件过滤： created_at&#x3D;gt:2018-10-28T10:00:00Z (optional, default to &quot;&quot;)</param>
    /// <param name="updatedAt">镜像修改时间。支持按照时间点过滤查询，取值格式为“ 操作符:UTC时间”。 其中操作符支持如下几种： gt：大于 gte：大于等于 lt：小于 lte：小于等于 eq：等于 neq：不等于 时间格式支持：yyyy-MM-ddThh:mm:ssZ或者yyyy-MM-dd hh:mm:ss 例如，查询修改时间在2018-10-28 10:00:00之前的镜像，可以通过如下条件过滤： updated_at&#x3D;gt:2018-10-28T10:00:00Z (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListTagsResponse> listTags(
        ListTagsRequest &request
    );
    /// <summary>
    /// 注册镜像
    /// </summary>
    /// <remarks>
    /// 该接口用于将镜像文件注册为云平台未初始化的私有镜像。 使用该接口注册镜像的具体步骤如下： 将镜像文件上传到OBS个人桶中。具体操作请参见《对象存储服务客户端指南（OBS Browser）》或《对象存储服务API参考》。 使用创建镜像元数据接口创建镜像元数据。调用成功后，保存该镜像的ID。创建镜像元数据请参考创建镜像元数据（OpenStack原生）。 根据2得到的镜像ID，使用注册镜像接口注册OBS桶中的镜像文件。 注册镜像接口作为异步接口，调用成功后，说明后台收到了注册请求。需要根据镜像ID查询该镜像状态验证镜像注册是否成功。当镜像状态变为“active”时，表示镜像注册成功。 如何查询异步任务，请参见异步任务查询。
    /// </remarks>
    /// <param name="imageId">镜像ID。 image_id为用户调用创建镜像元数据接口所创建出来镜像的id，使用其他方式创建的镜像id会导致注册失败。 注册接口调用成功后，请根据镜像id查询镜像的状态。镜像状态变为active表示镜像注册成功，详情请参见查询镜像详情（OpenStack原生）。</param>
    /// <param name="bodyparam">请求参数</param>
    std::shared_ptr<RegisterImageResponse> registerImage(
        RegisterImageRequest &request
    );
    /// <summary>
    /// 查询镜像配额
    /// </summary>
    /// <remarks>
    /// 该接口为扩展接口，主要用于查询租户在当前Region的私有镜像的配额数量。
    /// </remarks>
    std::shared_ptr<ShowImageQuotaResponse> showImageQuota(
        ShowImageQuotaRequest &request
    );
    /// <summary>
    /// 更新镜像信息
    /// </summary>
    /// <remarks>
    /// 更新镜像信息接口，主要用于镜像属性的修改。当前仅支持可用（active）状态的镜像更新相关信息。
    /// </remarks>
    /// <param name="imageId">镜像ID</param>
    /// <param name="bodyparam">请求参数</param>
    std::shared_ptr<UpdateImageResponse> updateImage(
        UpdateImageRequest &request
    );
    /// <summary>
    /// 查询job状态
    /// </summary>
    /// <remarks>
    /// 该接口为扩展接口，主要用于查询异步接口执行情况，比如查询导出镜像任务的执行状态。
    /// </remarks>
    /// <param name="jobId">异步任务ID</param>
    std::shared_ptr<ShowJobResponse> showJob(
        ShowJobRequest &request
    );
    /// <summary>
    /// 添加镜像成员（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 用户共享镜像给其他用户时，使用该接口向该镜像成员中添加接受镜像用户的项目ID。
    /// </remarks>
    /// <param name="imageId">镜像id</param>
    /// <param name="addMemberBody">添加镜像成员请求体</param>
    std::shared_ptr<GlanceAddImageMemberResponse> glanceAddImageMember(
        GlanceAddImageMemberRequest &request
    );
    /// <summary>
    /// 创建镜像元数据（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 创建镜像元数据。调用创建镜像元数据接口成功后，只是创建了镜像的元数据，镜像对应的实际镜像文件并不存在
    /// </remarks>
    /// <param name="bodyparam">创建镜像元数据body体</param>
    std::shared_ptr<GlanceCreateImageMetadataResponse> glanceCreateImageMetadata(
        GlanceCreateImageMetadataRequest &request
    );
    /// <summary>
    /// 增加标签（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口主要用于为某个镜像添加一个自定义标签。通过自定义标签，用户可以将镜像进行分类。
    /// </remarks>
    /// <param name="imageId">镜像id</param>
    /// <param name="tag">新增的tag。字符串中不能包含“&#x3D;”和“.”。</param>
    std::shared_ptr<GlanceCreateTagResponse> glanceCreateTag(
        GlanceCreateTagRequest &request
    );
    /// <summary>
    /// 删除镜像（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口主要用于删除镜像，用户可以通过该接口将自己的私有镜像删除。
    /// </remarks>
    /// <param name="imageId">镜像ID</param>
    /// <param name="deleteImageBody">请求参数 (optional)</param>
    std::shared_ptr<GlanceDeleteImageResponse> glanceDeleteImage(
        GlanceDeleteImageRequest &request
    );
    /// <summary>
    /// 删除指定的镜像成员（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口用于取消对某个用户的镜像共享。
    /// </remarks>
    /// <param name="imageId">镜像id</param>
    /// <param name="memberId">成员id</param>
    std::shared_ptr<GlanceDeleteImageMemberResponse> glanceDeleteImageMember(
        GlanceDeleteImageMemberRequest &request
    );
    /// <summary>
    /// 删除标签（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口主要用于删除某个镜像的自定义标签，通过该接口，用户可以将私有镜像中一些不用的标签删除。
    /// </remarks>
    /// <param name="imageId">镜像id</param>
    /// <param name="tag">新增的tag。字符串中不能包含“&#x3D;”和“.”。</param>
    std::shared_ptr<GlanceDeleteTagResponse> glanceDeleteTag(
        GlanceDeleteTagRequest &request
    );
    /// <summary>
    /// 查询镜像成员列表视图（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口主要用于查询镜像成员列表视图，通过视图，用户可以了解到镜像成员包含哪些属性，同时也可以了解每个属性的数据类型。
    /// </remarks>
    std::shared_ptr<GlanceListImageMemberSchemasResponse> glanceListImageMemberSchemas(
        GlanceListImageMemberSchemasRequest &request
    );
    /// <summary>
    /// 获取镜像成员列表（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口用于共享镜像过程中，获取接受该镜像的成员列表。
    /// </remarks>
    /// <param name="imageId">镜像id</param>
    std::shared_ptr<GlanceListImageMembersResponse> glanceListImageMembers(
        GlanceListImageMembersRequest &request
    );
    /// <summary>
    /// 查询镜像列表视图（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口主要用于查询镜像列表视图，通过该接口用户可以了解到镜像列表的详细情况和数据结构。
    /// </remarks>
    std::shared_ptr<GlanceListImageSchemasResponse> glanceListImageSchemas(
        GlanceListImageSchemasRequest &request
    );
    /// <summary>
    /// 查询镜像列表（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 获取镜像列表。 使用本接口查询镜像列表时，需要使用分页查询才能返回全部的镜像列表。 分页说明 分页是指返回一组镜像的一个子集，在返回的时候会存在下个子集的链接和首个子集的链接，默认返回的子集中数量为25，用户也可以通过使用limit和marker两个参数自己分页，指定返回子集中需要返回的数量。 响应中的参数first是查询首页的URL。next是查询下一页的URL。当查询镜像列表最后一页时，不存在next。
    /// </remarks>
    /// <param name="imagetype">镜像类型，目前支持以下类型：公共镜像：gold私有镜像：private共享镜像：shared (optional, default to &quot;&quot;)</param>
    /// <param name="isregistered">镜像是否是受保护，取值为true/false。一般查询公共镜像时候取值为true，查询私有镜像可以不指定。 (optional, default to false)</param>
    /// <param name="osBit">操作系统位数，一般取值为32或者64 (optional, default to &quot;&quot;)</param>
    /// <param name="osType">镜像系统类型，取值为Linux，Windows，Other (optional, default to &quot;&quot;)</param>
    /// <param name="platform">镜像平台分类，取值为Windows，Ubuntu，RedHat，SUSE，CentOS，Debian，OpenSUSE, Oracle Linux，Fedora，Other，CoreOS和EuleOS (optional, default to &quot;&quot;)</param>
    /// <param name="supportDiskintensive">表示该镜像支持密集存储。如果镜像支持密集存储性能，则值为true，否则无需增加该属性 (optional, default to &quot;&quot;)</param>
    /// <param name="supportHighperformance">表示该镜像支持高计算性能。如果镜像支持高计算性能，则值为true，否则无需增加该属性 (optional, default to &quot;&quot;)</param>
    /// <param name="supportKvm">如果镜像支持KVM，取值为true，否则无需增加该属性 (optional, default to &quot;&quot;)</param>
    /// <param name="supportKvmGpuType">表示该镜像是支持KVM虚拟化平台下的GPU类型,如果不支持KVM虚拟机下GPU类型，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存 (optional, default to &quot;&quot;)</param>
    /// <param name="supportKvmInfiniband">如果镜像支持KVM虚拟化下Infiniband网卡类型，取值为true。否则，无需添加该属性。该属性与“__support_xen”属性不共存。 (optional, default to &quot;&quot;)</param>
    /// <param name="supportLargememory">表示该镜像支持超大内存。如果镜像支持超大内存，取值为true，否则无需增加该属性 (optional, default to &quot;&quot;)</param>
    /// <param name="supportXen">如果镜像支持XEN，取值为true，否则无需增加该属性 (optional, default to &quot;&quot;)</param>
    /// <param name="supportXenGpuType">表示该镜像是支持XEN虚拟化平台下的GPU优化类型,如果不支持XEN虚拟化下GPU类型，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存 (optional, default to &quot;&quot;)</param>
    /// <param name="supportXenHana">如果镜像支持XEN虚拟化下HANA类型，取值为true。否则，无需添加该属性。该属性与“__support_xen”和“__support_kvm”属性不共存 (optional, default to &quot;&quot;)</param>
    /// <param name="containerFormat">容器类型 (optional, default to &quot;&quot;)</param>
    /// <param name="diskFormat">镜像格式，目前支持vhd，zvhd、raw，qcow2。默认值是vhd (optional, default to &quot;&quot;)</param>
    /// <param name="id">镜像ID (optional, default to &quot;&quot;)</param>
    /// <param name="limit">用于分页，表示查询几条镜像记录，取值为整数，默认返回25条镜像记录 (optional, default to 0)</param>
    /// <param name="marker">用于分页，表示从哪个镜像开始查询，取值为镜像ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="memberStatus">成员状态。目前取值有accepted、rejected、pending。accepted表示已经接受共享的镜像，rejected表示已经拒绝了其他用户共享的镜像，pending表示需要确认的其他用户的共享镜像。需要在查询时，设置“visibility”参数为“shared” (optional, default to &quot;&quot;)</param>
    /// <param name="minDisk">镜像运行需要的最小磁盘，单位为GB 。取值为40～1024GB。取值为1～1024GB。取值为40～255GB (optional, default to 0)</param>
    /// <param name="minRam">镜像运行需要的最小内存，单位为MB。参数取值依据弹性云服务器的规格限制，一般设置为0。 (optional, default to 0)</param>
    /// <param name="name">镜像名称 (optional, default to &quot;&quot;)</param>
    /// <param name="owner">镜像属于哪个租户 (optional, default to &quot;&quot;)</param>
    /// <param name="protected">镜像是否是受保护，查询公共镜像时候取值为True，查询私有镜像可以不指定。 (optional, default to false)</param>
    /// <param name="sortDir">用于排序，表示升序还是降序，取值为asc和desc。与sort_key一起组合使用，默认为降序desc (optional, default to &quot;&quot;)</param>
    /// <param name="sortKey">用于排序，表示按照哪个字段排序。取值为镜像属性name，container_format，disk_format，status，id，size字段，默认为创建时间。 (optional, default to &quot;&quot;)</param>
    /// <param name="status">镜像状态。取值如下：queued：表示镜像元数据已经创建成功，等待上传镜像文件。saving：表示镜像正在上传文件到后端存储。deleted：表示镜像已经删除。killed：表示镜像上传错误。active：表示镜像可以正常使用 (optional, default to &quot;&quot;)</param>
    /// <param name="tag">标签，用户为镜像增加自定义标签后可以通过该参数过滤查询 (optional, default to &quot;&quot;)</param>
    /// <param name="visibility">是否被其他租户可见，取值如下： public：公共镜像 private：私有镜像 shared：共享镜像 (optional, default to &quot;&quot;)</param>
    /// <param name="createdAt">镜像创建时间。支持按照时间点过滤查询，取值格式为“ 操作符:UTC时间”。 其中操作符支持如下几种： gt：大于 gte：大于等于 lt：小于 lte：小于等于 eq：等于 neq：不等于 时间格式支持：yyyy-MM-ddThh:mm:ssZ或者yyyy-MM-dd hh:mm:ss 例如，查询创建时间在2018-10-28 10:00:00之前的镜像，可以通过如下条件过滤： created_at&#x3D;gt:2018-10-28T10:00:00Z (optional, default to &quot;&quot;)</param>
    /// <param name="updatedAt">镜像修改时间。支持按照时间点过滤查询，取值格式为 “ 操作符:UTC时间”。 其中操作符支持如下几种： gt：大于 gte：大于等于 lt：小于 lte：小于等于 eq：等于 neq：不等于 时间格式支持：yyyy-MM-ddThh:mm:ssZ或者yyyy-MM-dd hh:mm:ss 例如，查询修改时间在2018-10-28 10:00:00之前的镜像，可以通过如下条件过滤： updated_at&#x3D;gt:2018-10-28T10:00:00Z (optional, default to &quot;&quot;)</param>
    std::shared_ptr<GlanceListImagesResponse> glanceListImages(
        GlanceListImagesRequest &request
    );
    /// <summary>
    /// 查询镜像详情（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 查询单个镜像详情，用户可以通过该接口查询单个私有或者公共镜像的详情
    /// </remarks>
    /// <param name="imageId">镜像ID</param>
    std::shared_ptr<GlanceShowImageResponse> glanceShowImage(
        GlanceShowImageRequest &request
    );
    /// <summary>
    /// 获取镜像成员详情（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口主要用于镜像共享中查询某个镜像成员的详情。
    /// </remarks>
    /// <param name="imageId">镜像id</param>
    /// <param name="memberId">成员id</param>
    std::shared_ptr<GlanceShowImageMemberResponse> glanceShowImageMember(
        GlanceShowImageMemberRequest &request
    );
    /// <summary>
    /// 查询镜像成员视图（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口主要用于查询镜像成员视图，通过视图，用户可以了解到镜像成员包含哪些属性，同时也可以了解每个属性的数据类型。
    /// </remarks>
    std::shared_ptr<GlanceShowImageMemberSchemasResponse> glanceShowImageMemberSchemas(
        GlanceShowImageMemberSchemasRequest &request
    );
    /// <summary>
    /// 查询镜像视图（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 该接口主要用于查询镜像视图，通过视图，用户可以了解到镜像包含哪些属性，同时也可以了解每个属性的数据类型等。
    /// </remarks>
    std::shared_ptr<GlanceShowImageSchemasResponse> glanceShowImageSchemas(
        GlanceShowImageSchemasRequest &request
    );
    /// <summary>
    /// 更新镜像信息（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 修改镜像信息
    /// </remarks>
    /// <param name="imageId">镜像ID</param>
    /// <param name="bodyparam">更新镜像请求体</param>
    std::shared_ptr<GlanceUpdateImageResponse> glanceUpdateImage(
        GlanceUpdateImageRequest &request
    );
    /// <summary>
    /// 更新镜像成员状态（OpenStack原生）
    /// </summary>
    /// <remarks>
    /// 用户接受或者拒绝共享镜像时，使用该接口更新镜像成员的状态。
    /// </remarks>
    /// <param name="imageId">镜像id</param>
    /// <param name="memberId">成员id</param>
    /// <param name="memberStatus">请求参数</param>
    std::shared_ptr<GlanceUpdateImageMemberResponse> glanceUpdateImageMember(
        GlanceUpdateImageMemberRequest &request
    );

private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const utility::datetime &value);
    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

#ifdef RTTR_FLAG
template class HUAWEICLOUD_IMS_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Ims::V2::ImsClient>;
#endif

#endif // HUAWEICLOUD_SDK_IMS_V2_ImsClient_H_

