#ifndef HUAWEICLOUD_SDK_IMS_V2_ImsClient_H_
#define HUAWEICLOUD_SDK_IMS_V2_ImsClient_H_

#include <huaweicloud/ims/v2/ImsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/ims/v2/model/AddImageTagRequest.h>
#include <huaweicloud/ims/v2/model/AddImageTagRequestBody.h>
#include <huaweicloud/ims/v2/model/AddImageTagResponse.h>
#include <huaweicloud/ims/v2/model/AddOrUpdateTagsRequestBody.h>
#include <huaweicloud/ims/v2/model/BatchAddMembersRequest.h>
#include <huaweicloud/ims/v2/model/BatchAddMembersRequestBody.h>
#include <huaweicloud/ims/v2/model/BatchAddMembersResponse.h>
#include <huaweicloud/ims/v2/model/BatchAddOrDeleteTagsRequest.h>
#include <huaweicloud/ims/v2/model/BatchAddOrDeleteTagsRequestBody.h>
#include <huaweicloud/ims/v2/model/BatchAddOrDeleteTagsResponse.h>
#include <huaweicloud/ims/v2/model/BatchDeleteMembersRequest.h>
#include <huaweicloud/ims/v2/model/BatchDeleteMembersResponse.h>
#include <huaweicloud/ims/v2/model/BatchUpdateMembersRequest.h>
#include <huaweicloud/ims/v2/model/BatchUpdateMembersRequestBody.h>
#include <huaweicloud/ims/v2/model/BatchUpdateMembersResponse.h>
#include <huaweicloud/ims/v2/model/CopyImageCrossRegionRequest.h>
#include <huaweicloud/ims/v2/model/CopyImageCrossRegionRequestBody.h>
#include <huaweicloud/ims/v2/model/CopyImageCrossRegionResponse.h>
#include <huaweicloud/ims/v2/model/CopyImageInRegionRequest.h>
#include <huaweicloud/ims/v2/model/CopyImageInRegionRequestBody.h>
#include <huaweicloud/ims/v2/model/CopyImageInRegionResponse.h>
#include <huaweicloud/ims/v2/model/CreateDataImageRequest.h>
#include <huaweicloud/ims/v2/model/CreateDataImageRequestBody.h>
#include <huaweicloud/ims/v2/model/CreateDataImageResponse.h>
#include <huaweicloud/ims/v2/model/CreateImageRequest.h>
#include <huaweicloud/ims/v2/model/CreateImageRequestBody.h>
#include <huaweicloud/ims/v2/model/CreateImageResponse.h>
#include <huaweicloud/ims/v2/model/CreateOrUpdateTagsRequest.h>
#include <huaweicloud/ims/v2/model/CreateOrUpdateTagsResponse.h>
#include <huaweicloud/ims/v2/model/CreateWholeImageRequest.h>
#include <huaweicloud/ims/v2/model/CreateWholeImageRequestBody.h>
#include <huaweicloud/ims/v2/model/CreateWholeImageResponse.h>
#include <huaweicloud/ims/v2/model/DeleteImageTagRequest.h>
#include <huaweicloud/ims/v2/model/DeleteImageTagResponse.h>
#include <huaweicloud/ims/v2/model/ExportImageRequest.h>
#include <huaweicloud/ims/v2/model/ExportImageRequestBody.h>
#include <huaweicloud/ims/v2/model/ExportImageResponse.h>
#include <huaweicloud/ims/v2/model/ImportImageQuickRequest.h>
#include <huaweicloud/ims/v2/model/ImportImageQuickResponse.h>
#include <huaweicloud/ims/v2/model/ListImageByTagsRequest.h>
#include <huaweicloud/ims/v2/model/ListImageByTagsRequestBody.h>
#include <huaweicloud/ims/v2/model/ListImageByTagsResponse.h>
#include <huaweicloud/ims/v2/model/ListImageTagsRequest.h>
#include <huaweicloud/ims/v2/model/ListImageTagsResponse.h>
#include <huaweicloud/ims/v2/model/ListImagesRequest.h>
#include <huaweicloud/ims/v2/model/ListImagesResponse.h>
#include <huaweicloud/ims/v2/model/ListImagesTagsRequest.h>
#include <huaweicloud/ims/v2/model/ListImagesTagsResponse.h>
#include <huaweicloud/ims/v2/model/ListOsVersionsRequest.h>
#include <huaweicloud/ims/v2/model/ListOsVersionsResponse.h>
#include <huaweicloud/ims/v2/model/ListOsVersionsResponseBody.h>
#include <huaweicloud/ims/v2/model/ListTagsRequest.h>
#include <huaweicloud/ims/v2/model/ListTagsResponse.h>
#include <huaweicloud/ims/v2/model/QuickImportImageByFileRequestBody.h>
#include <huaweicloud/ims/v2/model/RegisterImageRequest.h>
#include <huaweicloud/ims/v2/model/RegisterImageRequestBody.h>
#include <huaweicloud/ims/v2/model/RegisterImageResponse.h>
#include <huaweicloud/ims/v2/model/ShowImageQuotaRequest.h>
#include <huaweicloud/ims/v2/model/ShowImageQuotaResponse.h>
#include <huaweicloud/ims/v2/model/UpdateImageRequest.h>
#include <huaweicloud/ims/v2/model/UpdateImageRequestBody.h>
#include <huaweicloud/ims/v2/model/UpdateImageResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/ims/v2/model/ListVersionsRequest.h>
#include <huaweicloud/ims/v2/model/ListVersionsResponse.h>
#include <huaweicloud/ims/v2/model/ShowVersionRequest.h>
#include <huaweicloud/ims/v2/model/ShowVersionResponse.h>
#include <string>

#include <huaweicloud/ims/v2/model/ShowJobRequest.h>
#include <huaweicloud/ims/v2/model/ShowJobResponse.h>
#include <string>

#include <huaweicloud/ims/v2/model/GlanceAddImageMemberRequest.h>
#include <huaweicloud/ims/v2/model/GlanceAddImageMemberRequestBody.h>
#include <huaweicloud/ims/v2/model/GlanceAddImageMemberResponse.h>
#include <huaweicloud/ims/v2/model/GlanceCreateImageMetadataRequest.h>
#include <huaweicloud/ims/v2/model/GlanceCreateImageMetadataRequestBody.h>
#include <huaweicloud/ims/v2/model/GlanceCreateImageMetadataResponse.h>
#include <huaweicloud/ims/v2/model/GlanceCreateTagRequest.h>
#include <huaweicloud/ims/v2/model/GlanceCreateTagResponse.h>
#include <huaweicloud/ims/v2/model/GlanceDeleteImageMemberRequest.h>
#include <huaweicloud/ims/v2/model/GlanceDeleteImageMemberResponse.h>
#include <huaweicloud/ims/v2/model/GlanceDeleteImageRequest.h>
#include <huaweicloud/ims/v2/model/GlanceDeleteImageRequestBody.h>
#include <huaweicloud/ims/v2/model/GlanceDeleteImageResponse.h>
#include <huaweicloud/ims/v2/model/GlanceDeleteTagRequest.h>
#include <huaweicloud/ims/v2/model/GlanceDeleteTagResponse.h>
#include <huaweicloud/ims/v2/model/GlanceListImageMemberSchemasRequest.h>
#include <huaweicloud/ims/v2/model/GlanceListImageMemberSchemasResponse.h>
#include <huaweicloud/ims/v2/model/GlanceListImageMembersRequest.h>
#include <huaweicloud/ims/v2/model/GlanceListImageMembersResponse.h>
#include <huaweicloud/ims/v2/model/GlanceListImageSchemasRequest.h>
#include <huaweicloud/ims/v2/model/GlanceListImageSchemasResponse.h>
#include <huaweicloud/ims/v2/model/GlanceListImagesRequest.h>
#include <huaweicloud/ims/v2/model/GlanceListImagesResponse.h>
#include <huaweicloud/ims/v2/model/GlanceShowImageMemberRequest.h>
#include <huaweicloud/ims/v2/model/GlanceShowImageMemberResponse.h>
#include <huaweicloud/ims/v2/model/GlanceShowImageMemberSchemasRequest.h>
#include <huaweicloud/ims/v2/model/GlanceShowImageMemberSchemasResponse.h>
#include <huaweicloud/ims/v2/model/GlanceShowImageRequest.h>
#include <huaweicloud/ims/v2/model/GlanceShowImageResponse.h>
#include <huaweicloud/ims/v2/model/GlanceShowImageSchemasRequest.h>
#include <huaweicloud/ims/v2/model/GlanceShowImageSchemasResponse.h>
#include <huaweicloud/ims/v2/model/GlanceUpdateImageMemberRequest.h>
#include <huaweicloud/ims/v2/model/GlanceUpdateImageMemberRequestBody.h>
#include <huaweicloud/ims/v2/model/GlanceUpdateImageMemberResponse.h>
#include <huaweicloud/ims/v2/model/GlanceUpdateImageRequest.h>
#include <huaweicloud/ims/v2/model/GlanceUpdateImageRequestBody.h>
#include <huaweicloud/ims/v2/model/GlanceUpdateImageResponse.h>
#include <string>
#include <vector>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Ims::V2::Model;

class HUAWEICLOUD_IMS_V2_EXPORT  ImsClient : public Client
{
public:

    ImsClient();

    virtual ~ImsClient();

    static ClientBuilder<ImsClient> newBuilder();

    // 添加镜像标签
    //
    // 该接口用于为指定镜像添加或更新指定的单个标签
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<AddImageTagResponse> addImageTag(
        AddImageTagRequest &request
    );
    // 批量添加镜像成员
    //
    // 该接口为扩展接口，主要用于镜像共享时用户将多个镜像共享给多个用户。
    // 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。如何查询异步任务，请参见异步任务查询。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<BatchAddMembersResponse> batchAddMembers(
        BatchAddMembersRequest &request
    );
    // 批量添加删除镜像标签
    //
    // 该接口用于为指定镜像批量添加/更新、删除标签。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<BatchAddOrDeleteTagsResponse> batchAddOrDeleteTags(
        BatchAddOrDeleteTagsRequest &request
    );
    // 批量删除镜像成员
    //
    // 该接口为扩展接口，主要用于取消镜像共享。
    // 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。如何查询异步任务，请参见异步任务查询。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<BatchDeleteMembersResponse> batchDeleteMembers(
        BatchDeleteMembersRequest &request
    );
    // 批量更新镜像成员状态
    //
    // 该接口为扩展接口，主要用于用户接受或者拒绝多个共享镜像时批量更新镜像成员的状态。
    // 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。如何查询异步任务，请参见异步任务查询。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<BatchUpdateMembersResponse> batchUpdateMembers(
        BatchUpdateMembersRequest &request
    );
    // 跨Region复制镜像
    //
    // 该接口为扩展接口，用户在一个区域制作的私有镜像，可以通过跨Region复制镜像将镜像复制到其他区域，在其他区域发放相同类型的云服务器，帮助用户实现区域间的业务迁移。
    // 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。
    // 如何查询异步任务，请参见异步任务进度查询。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CopyImageCrossRegionResponse> copyImageCrossRegion(
        CopyImageCrossRegionRequest &request
    );
    // Region内复制镜像
    //
    // 该接口为扩展接口，主要用于用户将一个已有镜像复制为另一个镜像。复制镜像时，可以更改镜像的加密等属性，以满足不同的场景。
    // 该接口为异步接口，返回job_id说明任务下发成功，查询异步任务状态，如果是success说明任务执行成功，如果是failed说明任务执行失败。如何查询异步任务，请参见异步任务查询。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CopyImageInRegionResponse> copyImageInRegion(
        CopyImageInRegionRequest &request
    );
    // 使用外部镜像文件制作数据镜像
    //
    // 使用上传至OBS桶中的外部数据卷镜像文件制作数据镜像。作为异步接口，调用成功，只是说明后台收到了制作请求，镜像是否制作成功需要通过异步任务查询接口查询该任务的执行状态。具体请参考异步任务查询。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CreateDataImageResponse> createDataImage(
        CreateDataImageRequest &request
    );
    // 制作镜像
    //
    // 本接口用于制作私有镜像，支持：
    // - 使用云服务器制作私有镜像。
    // - 使用上传至OBS桶中的外部镜像文件制作私有镜像。
    // - 使用数据卷制作系统盘镜像。
    // 
    // 作为异步接口，调用成功，只是说明云平台收到了制作请求，镜像是否制作成功需要通过异步任务查询接口查询该任务的执行状态，具体请参考异步任务查询。
    // 
    // 不同场景必选参数说明：
    // 
    // - 使用云服务器制作镜像时的请求的必选参数：name,instance_id。
    // - 使用上传至OBS桶中的外部镜像文件时的请求必选参数：name,image_url,min_disk。
    // - 使用数据卷制作系统盘镜像时的请求必选参数：name,volume_id,os_version
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CreateImageResponse> createImage(
        CreateImageRequest &request
    );
    // 增加或修改标签
    //
    // 该接口主要用于为某个镜像增加或修改一个自定义标签。通过自定义标签，用户可以将镜像进行分类。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CreateOrUpdateTagsResponse> createOrUpdateTags(
        CreateOrUpdateTagsRequest &request
    );
    // 制作整机镜像
    //
    // 使用云服务器或者云服务器备份制作整机镜像。作为异步接口，调用成功，只是说明后台收到了制作整机镜像的请求，镜像是否制作成功需要通过异步任务查询接口查询该任务的执行状态，具体请参考异步任务查询。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CreateWholeImageResponse> createWholeImage(
        CreateWholeImageRequest &request
    );
    // 删除镜像标签
    //
    // 该接口用于为镜像删除指定的标签
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DeleteImageTagResponse> deleteImageTag(
        DeleteImageTagRequest &request
    );
    // 导出镜像
    //
    // 该接口为扩展接口，用于用户将自己的私有镜像导出到指定的OBS桶中。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ExportImageResponse> exportImage(
        ExportImageRequest &request
    );
    // 镜像文件快速导入
    //
    // 使用上传至OBS桶中的超大外部镜像文件制作私有镜像，目前仅支持RAW或ZVHD2格式镜像文件。且要求镜像文件大小不能超过1TB。
    // 由于快速导入功能要求提前转换镜像文件格式为RAW或ZVHD2格式，因此镜像文件小于128GB时推荐您优先使用常规的创建私有镜像的方式。
    // 作为异步接口，调用成功，只是说明后台收到了制作请求，镜像是否制作成功需要通过异步任务查询接口查询该任务的执行状态，具体请参考异步任务查询。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ImportImageQuickResponse> importImageQuick(
        ImportImageQuickRequest &request
    );
    // 按标签查询镜像
    //
    // 该接口用于按标签或其他条件对镜像进行过滤或者计数使用。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListImageByTagsResponse> listImageByTags(
        ListImageByTagsRequest &request
    );
    // 查询镜像标签
    //
    // 该接口用于为查询指定镜像上的所有标签
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListImageTagsResponse> listImageTags(
        ListImageTagsRequest &request
    );
    // 查询镜像列表
    //
    // 根据不同条件查询镜像列表信息。
    // 可以在URI后面用‘?’和‘&amp;’添加不同的查询条件组合，请参考请求样例。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListImagesResponse> listImages(
        ListImagesRequest &request
    );
    // 查询租户所有镜像标签
    //
    // 该接口用于为查询租户的所有镜像上的标签。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListImagesTagsResponse> listImagesTags(
        ListImagesTagsRequest &request
    );
    // 查询镜像支持的OS列表
    //
    // 查询当前区域弹性云服务器的OS兼容性列表。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListOsVersionsResponse> listOsVersions(
        ListOsVersionsRequest &request
    );
    // 按条件查询租户镜像标签列表
    //
    // 根据不同条件查询镜像标签列表信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListTagsResponse> listTags(
        ListTagsRequest &request
    );
    // 注册镜像
    //
    // 该接口用于将镜像文件注册为云平台未初始化的私有镜像。
    // 使用该接口注册镜像的具体步骤如下：
    // 将镜像文件上传到OBS个人桶中。具体操作请参见《对象存储服务客户端指南（OBS Browser）》或《对象存储服务API参考》。
    // 使用创建镜像元数据接口创建镜像元数据。调用成功后，保存该镜像的ID。创建镜像元数据请参考创建镜像元数据（OpenStack原生）。
    // 根据2得到的镜像ID，使用注册镜像接口注册OBS桶中的镜像文件。
    // 注册镜像接口作为异步接口，调用成功后，说明后台收到了注册请求。需要根据镜像ID查询该镜像状态验证镜像注册是否成功。当镜像状态变为“active”时，表示镜像注册成功。
    // 如何查询异步任务，请参见异步任务查询。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<RegisterImageResponse> registerImage(
        RegisterImageRequest &request
    );
    // 查询镜像配额
    //
    // 该接口为扩展接口，主要用于查询租户在当前Region的私有镜像的配额数量。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowImageQuotaResponse> showImageQuota(
        ShowImageQuotaRequest &request
    );
    // 更新镜像信息
    //
    // 更新镜像信息接口，主要用于镜像属性的修改。当前仅支持可用（active）状态的镜像更新相关信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<UpdateImageResponse> updateImage(
        UpdateImageRequest &request
    );

    // 查询版本列表（OpenStack原生）
    //
    // 查询API的版本信息列表，包括API的版本兼容性、域名信息等。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ListVersionsResponse> listVersions(
        ListVersionsRequest &request
    );
    // 查询版本列表（OpenStack原生）
    //
    // 查询API的版本信息列表，包括API的版本兼容性、域名信息等。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowVersionResponse> showVersion(
        ShowVersionRequest &request
    );

    // 查询job状态
    //
    // 该接口为扩展接口，主要用于查询异步接口执行情况，比如查询导出镜像任务的执行状态。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowJobResponse> showJob(
        ShowJobRequest &request
    );

    // 添加镜像成员（OpenStack原生）
    //
    // 用户共享镜像给其他用户时，使用该接口向该镜像成员中添加接受镜像用户的项目ID。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceAddImageMemberResponse> glanceAddImageMember(
        GlanceAddImageMemberRequest &request
    );
    // 创建镜像元数据（OpenStack原生）
    //
    // 创建镜像元数据。调用创建镜像元数据接口成功后，只是创建了镜像的元数据，镜像对应的实际镜像文件并不存在
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceCreateImageMetadataResponse> glanceCreateImageMetadata(
        GlanceCreateImageMetadataRequest &request
    );
    // 增加标签（OpenStack原生）
    //
    // 该接口主要用于为某个镜像添加一个自定义标签。通过自定义标签，用户可以将镜像进行分类。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceCreateTagResponse> glanceCreateTag(
        GlanceCreateTagRequest &request
    );
    // 删除镜像（OpenStack原生）
    //
    // 该接口主要用于删除镜像，用户可以通过该接口将自己的私有镜像删除。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceDeleteImageResponse> glanceDeleteImage(
        GlanceDeleteImageRequest &request
    );
    // 删除指定的镜像成员（OpenStack原生）
    //
    // 该接口用于取消对某个用户的镜像共享。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceDeleteImageMemberResponse> glanceDeleteImageMember(
        GlanceDeleteImageMemberRequest &request
    );
    // 删除标签（OpenStack原生）
    //
    // 该接口主要用于删除某个镜像的自定义标签，通过该接口，用户可以将私有镜像中一些不用的标签删除。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceDeleteTagResponse> glanceDeleteTag(
        GlanceDeleteTagRequest &request
    );
    // 查询镜像成员列表视图（OpenStack原生）
    //
    // 该接口主要用于查询镜像成员列表视图，通过视图，用户可以了解到镜像成员包含哪些属性，同时也可以了解每个属性的数据类型。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceListImageMemberSchemasResponse> glanceListImageMemberSchemas(
        GlanceListImageMemberSchemasRequest &request
    );
    // 获取镜像成员列表（OpenStack原生）
    //
    // 该接口用于共享镜像过程中，获取接受该镜像的成员列表。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceListImageMembersResponse> glanceListImageMembers(
        GlanceListImageMembersRequest &request
    );
    // 查询镜像列表视图（OpenStack原生）
    //
    // 该接口主要用于查询镜像列表视图，通过该接口用户可以了解到镜像列表的详细情况和数据结构。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceListImageSchemasResponse> glanceListImageSchemas(
        GlanceListImageSchemasRequest &request
    );
    // 查询镜像列表（OpenStack原生）
    //
    // 获取镜像列表。
    // 使用本接口查询镜像列表时，需要使用分页查询才能返回全部的镜像列表。
    // 分页说明
    // 分页是指返回一组镜像的一个子集，在返回的时候会存在下个子集的链接和首个子集的链接，默认返回的子集中数量为25，用户也可以通过使用limit和marker两个参数自己分页，指定返回子集中需要返回的数量。
    // 响应中的参数first是查询首页的URL。next是查询下一页的URL。当查询镜像列表最后一页时，不存在next。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceListImagesResponse> glanceListImages(
        GlanceListImagesRequest &request
    );
    // 查询镜像详情（OpenStack原生）
    //
    // 查询单个镜像详情，用户可以通过该接口查询单个私有或者公共镜像的详情
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceShowImageResponse> glanceShowImage(
        GlanceShowImageRequest &request
    );
    // 获取镜像成员详情（OpenStack原生）
    //
    // 该接口主要用于镜像共享中查询某个镜像成员的详情。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceShowImageMemberResponse> glanceShowImageMember(
        GlanceShowImageMemberRequest &request
    );
    // 查询镜像成员视图（OpenStack原生）
    //
    // 该接口主要用于查询镜像成员视图，通过视图，用户可以了解到镜像成员包含哪些属性，同时也可以了解每个属性的数据类型。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceShowImageMemberSchemasResponse> glanceShowImageMemberSchemas(
        GlanceShowImageMemberSchemasRequest &request
    );
    // 查询镜像视图（OpenStack原生）
    //
    // 该接口主要用于查询镜像视图，通过视图，用户可以了解到镜像包含哪些属性，同时也可以了解每个属性的数据类型等。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceShowImageSchemasResponse> glanceShowImageSchemas(
        GlanceShowImageSchemasRequest &request
    );
    // 更新镜像信息（OpenStack原生）
    //
    // 修改镜像信息
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<GlanceUpdateImageResponse> glanceUpdateImage(
        GlanceUpdateImageRequest &request
    );
    // 更新镜像成员状态（OpenStack原生）
    //
    // 用户接受或者拒绝共享镜像时，使用该接口更新镜像成员的状态。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
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

template class HUAWEICLOUD_IMS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Ims::V2::ImsClient>;

#endif // HUAWEICLOUD_SDK_IMS_V2_ImsClient_H_

