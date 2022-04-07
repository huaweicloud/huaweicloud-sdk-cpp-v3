#ifndef HUAWEICLOUD_SDK_VOD_V1_VodClient_H_
#define HUAWEICLOUD_SDK_VOD_V1_VodClient_H_

#include <huaweicloud/vod/v1/VodExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/vod/v1/model/AssetProcessReq.h>
#include <huaweicloud/vod/v1/model/AssetReviewReq.h>
#include <huaweicloud/vod/v1/model/CancelAssetTranscodeTaskRequest.h>
#include <huaweicloud/vod/v1/model/CancelAssetTranscodeTaskResponse.h>
#include <huaweicloud/vod/v1/model/CancelExtractAudioTaskRequest.h>
#include <huaweicloud/vod/v1/model/CancelExtractAudioTaskResponse.h>
#include <huaweicloud/vod/v1/model/CheckMd5DuplicationRequest.h>
#include <huaweicloud/vod/v1/model/CheckMd5DuplicationResponse.h>
#include <huaweicloud/vod/v1/model/ConfirmAssetUploadReq.h>
#include <huaweicloud/vod/v1/model/ConfirmAssetUploadRequest.h>
#include <huaweicloud/vod/v1/model/ConfirmAssetUploadResponse.h>
#include <huaweicloud/vod/v1/model/ConfirmImageUploadReq.h>
#include <huaweicloud/vod/v1/model/ConfirmImageUploadRequest.h>
#include <huaweicloud/vod/v1/model/ConfirmImageUploadResponse.h>
#include <huaweicloud/vod/v1/model/CreateAssetByFileUploadReq.h>
#include <huaweicloud/vod/v1/model/CreateAssetByFileUploadRequest.h>
#include <huaweicloud/vod/v1/model/CreateAssetByFileUploadResponse.h>
#include <huaweicloud/vod/v1/model/CreateAssetCategoryRequest.h>
#include <huaweicloud/vod/v1/model/CreateAssetCategoryResponse.h>
#include <huaweicloud/vod/v1/model/CreateAssetProcessTaskRequest.h>
#include <huaweicloud/vod/v1/model/CreateAssetProcessTaskResponse.h>
#include <huaweicloud/vod/v1/model/CreateAssetReviewTaskRequest.h>
#include <huaweicloud/vod/v1/model/CreateAssetReviewTaskResponse.h>
#include <huaweicloud/vod/v1/model/CreateCategoryReq.h>
#include <huaweicloud/vod/v1/model/CreateExtractAudioTaskRequest.h>
#include <huaweicloud/vod/v1/model/CreateExtractAudioTaskResponse.h>
#include <huaweicloud/vod/v1/model/CreatePreheatingAssetReq.h>
#include <huaweicloud/vod/v1/model/CreatePreheatingAssetRequest.h>
#include <huaweicloud/vod/v1/model/CreatePreheatingAssetResponse.h>
#include <huaweicloud/vod/v1/model/CreateTakeOverTaskReq.h>
#include <huaweicloud/vod/v1/model/CreateTakeOverTaskRequest.h>
#include <huaweicloud/vod/v1/model/CreateTakeOverTaskResponse.h>
#include <huaweicloud/vod/v1/model/CreateTemplateGroupRequest.h>
#include <huaweicloud/vod/v1/model/CreateTemplateGroupResponse.h>
#include <huaweicloud/vod/v1/model/CreateWatermarkTemplateReq.h>
#include <huaweicloud/vod/v1/model/CreateWatermarkTemplateRequest.h>
#include <huaweicloud/vod/v1/model/CreateWatermarkTemplateResponse.h>
#include <huaweicloud/vod/v1/model/DeleteAssetCategoryRequest.h>
#include <huaweicloud/vod/v1/model/DeleteAssetCategoryResponse.h>
#include <huaweicloud/vod/v1/model/DeleteAssetsRequest.h>
#include <huaweicloud/vod/v1/model/DeleteAssetsResponse.h>
#include <huaweicloud/vod/v1/model/DeleteTemplateGroupRequest.h>
#include <huaweicloud/vod/v1/model/DeleteTemplateGroupResponse.h>
#include <huaweicloud/vod/v1/model/DeleteWatermarkTemplateRequest.h>
#include <huaweicloud/vod/v1/model/DeleteWatermarkTemplateResponse.h>
#include <huaweicloud/vod/v1/model/ExtractAudioTaskReq.h>
#include <huaweicloud/vod/v1/model/ListAssetCategoryRequest.h>
#include <huaweicloud/vod/v1/model/ListAssetCategoryResponse.h>
#include <huaweicloud/vod/v1/model/ListAssetListRequest.h>
#include <huaweicloud/vod/v1/model/ListAssetListResponse.h>
#include <huaweicloud/vod/v1/model/ListDomainLogsRequest.h>
#include <huaweicloud/vod/v1/model/ListDomainLogsResponse.h>
#include <huaweicloud/vod/v1/model/ListTemplateGroupRequest.h>
#include <huaweicloud/vod/v1/model/ListTemplateGroupResponse.h>
#include <huaweicloud/vod/v1/model/ListTopStatisticsRequest.h>
#include <huaweicloud/vod/v1/model/ListTopStatisticsResponse.h>
#include <huaweicloud/vod/v1/model/ListWatermarkTemplateRequest.h>
#include <huaweicloud/vod/v1/model/ListWatermarkTemplateResponse.h>
#include <huaweicloud/vod/v1/model/ModifyTransTemplateGroup.h>
#include <huaweicloud/vod/v1/model/PublishAssetFromObsReq.h>
#include <huaweicloud/vod/v1/model/PublishAssetFromObsRequest.h>
#include <huaweicloud/vod/v1/model/PublishAssetFromObsResponse.h>
#include <huaweicloud/vod/v1/model/PublishAssetReq.h>
#include <huaweicloud/vod/v1/model/PublishAssetsRequest.h>
#include <huaweicloud/vod/v1/model/PublishAssetsResponse.h>
#include <huaweicloud/vod/v1/model/QueryCategoryRsp.h>
#include <huaweicloud/vod/v1/model/ShowAssetCipherRequest.h>
#include <huaweicloud/vod/v1/model/ShowAssetCipherResponse.h>
#include <huaweicloud/vod/v1/model/ShowAssetDetailRequest.h>
#include <huaweicloud/vod/v1/model/ShowAssetDetailResponse.h>
#include <huaweicloud/vod/v1/model/ShowAssetMetaRequest.h>
#include <huaweicloud/vod/v1/model/ShowAssetMetaResponse.h>
#include <huaweicloud/vod/v1/model/ShowAssetTempAuthorityRequest.h>
#include <huaweicloud/vod/v1/model/ShowAssetTempAuthorityResponse.h>
#include <huaweicloud/vod/v1/model/ShowCdnStatisticsRequest.h>
#include <huaweicloud/vod/v1/model/ShowCdnStatisticsResponse.h>
#include <huaweicloud/vod/v1/model/ShowPreheatingAssetRequest.h>
#include <huaweicloud/vod/v1/model/ShowPreheatingAssetResponse.h>
#include <huaweicloud/vod/v1/model/ShowVodStatisticsRequest.h>
#include <huaweicloud/vod/v1/model/ShowVodStatisticsResponse.h>
#include <huaweicloud/vod/v1/model/TransTemplateGroup.h>
#include <huaweicloud/vod/v1/model/UnpublishAssetsRequest.h>
#include <huaweicloud/vod/v1/model/UnpublishAssetsResponse.h>
#include <huaweicloud/vod/v1/model/UpdateAssetCategoryRequest.h>
#include <huaweicloud/vod/v1/model/UpdateAssetCategoryResponse.h>
#include <huaweicloud/vod/v1/model/UpdateAssetMetaReq.h>
#include <huaweicloud/vod/v1/model/UpdateAssetMetaRequest.h>
#include <huaweicloud/vod/v1/model/UpdateAssetMetaResponse.h>
#include <huaweicloud/vod/v1/model/UpdateAssetRequest.h>
#include <huaweicloud/vod/v1/model/UpdateAssetResponse.h>
#include <huaweicloud/vod/v1/model/UpdateBucketAuthorizedReq.h>
#include <huaweicloud/vod/v1/model/UpdateBucketAuthorizedRequest.h>
#include <huaweicloud/vod/v1/model/UpdateBucketAuthorizedResponse.h>
#include <huaweicloud/vod/v1/model/UpdateCategoryReq.h>
#include <huaweicloud/vod/v1/model/UpdateCoverByThumbnailReq.h>
#include <huaweicloud/vod/v1/model/UpdateCoverByThumbnailRequest.h>
#include <huaweicloud/vod/v1/model/UpdateCoverByThumbnailResponse.h>
#include <huaweicloud/vod/v1/model/UpdateTemplateGroupRequest.h>
#include <huaweicloud/vod/v1/model/UpdateTemplateGroupResponse.h>
#include <huaweicloud/vod/v1/model/UpdateWatermarkTemplateReq.h>
#include <huaweicloud/vod/v1/model/UpdateWatermarkTemplateRequest.h>
#include <huaweicloud/vod/v1/model/UpdateWatermarkTemplateResponse.h>
#include <huaweicloud/vod/v1/model/UploadAssetReq.h>
#include <huaweicloud/vod/v1/model/UploadMetaDataByUrlReq.h>
#include <huaweicloud/vod/v1/model/UploadMetaDataByUrlRequest.h>
#include <huaweicloud/vod/v1/model/UploadMetaDataByUrlResponse.h>
#include <string>

#include <huaweicloud/vod/v1/model/ListTakeOverTaskRequest.h>
#include <huaweicloud/vod/v1/model/ListTakeOverTaskResponse.h>
#include <huaweicloud/vod/v1/model/ShowTakeOverAssetDetailsRequest.h>
#include <huaweicloud/vod/v1/model/ShowTakeOverAssetDetailsResponse.h>
#include <huaweicloud/vod/v1/model/ShowTakeOverTaskDetailsRequest.h>
#include <huaweicloud/vod/v1/model/ShowTakeOverTaskDetailsResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Vod::V1::Model;

class HUAWEICLOUD_VOD_V1_EXPORT  VodClient : public Client
{
public:

    VodClient();

    virtual ~VodClient();

    static ClientBuilder<VodClient> newBuilder();

    /// <summary>
    /// 取消媒资转码任务
    /// </summary>
    /// <remarks>
    /// 取消媒资转码任务，只能取消排队中的转码任务。
    /// </remarks>
    /// <param name="assetId">媒资ID。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CancelAssetTranscodeTaskResponse> cancelAssetTranscodeTask(
        CancelAssetTranscodeTaskRequest &request
    );
    /// <summary>
    /// 取消提取音频任务
    /// </summary>
    /// <remarks>
    /// 取消提取音频任务，只有排队中的提取音频任务才可以取消。
    /// </remarks>
    /// <param name="assetId">媒资ID。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CancelExtractAudioTaskResponse> cancelExtractAudioTask(
        CancelExtractAudioTaskRequest &request
    );
    /// <summary>
    /// 上传检验
    /// </summary>
    /// <remarks>
    /// 校验媒资文件是否已存储于视频点播服务中。
    /// </remarks>
    /// <param name="size">文件大小</param>
    /// <param name="md5">文件MD5。  建议参考[上传校验](https://support.huaweicloud.com/api-vod/vod_04_0212.html#vod_04_0212__section575102165412)生成对应的MD5值。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CheckMd5DuplicationResponse> checkMd5Duplication(
        CheckMd5DuplicationRequest &request
    );
    /// <summary>
    /// 确认媒资上传
    /// </summary>
    /// <remarks>
    /// 媒资分段上传完成后，需要调用此接口通知点播服务媒资上传的状态，表示媒资上传创建完成。
    /// </remarks>
    /// <param name="confirmAssetUploadReq">确认媒资上传</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ConfirmAssetUploadResponse> confirmAssetUpload(
        ConfirmAssetUploadRequest &request
    );
    /// <summary>
    /// 确认水印图片上传
    /// </summary>
    /// <remarks>
    /// 确认水印图片上传状态。
    /// </remarks>
    /// <param name="confirmImageUploadReq">上传方式创建媒资</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ConfirmImageUploadResponse> confirmImageUpload(
        ConfirmImageUploadRequest &request
    );
    /// <summary>
    /// 创建媒资：上传方式
    /// </summary>
    /// <remarks>
    /// 调用该接口创建媒资时，需要将对应的媒资文件上传到点播服务的OBS桶中。  若上传的单媒资文件大小小于20M，则可以直接用PUT方法对该接口返回的地址进行上传。具体使用方法请参考[示例1：媒资上传（20M以下）](https://support.huaweicloud.com/api-vod/vod_04_0195.html)。  若上传的单个媒资大小大于20M，则需要进行二进制流分割后上传，该接口的具体使用方法请参考[示例2：媒资分段上传（20M以上）](https://support.huaweicloud.com/api-vod/vod_04_0216.html)。
    /// </remarks>
    /// <param name="createAssetByFileReq">上传方式创建媒资</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CreateAssetByFileUploadResponse> createAssetByFileUpload(
        CreateAssetByFileUploadRequest &request
    );
    /// <summary>
    /// 创建媒资分类
    /// </summary>
    /// <remarks>
    /// 创建媒资分类。
    /// </remarks>
    /// <param name="createCategoryReq">创建媒资分类</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CreateAssetCategoryResponse> createAssetCategory(
        CreateAssetCategoryRequest &request
    );
    /// <summary>
    /// 媒资处理
    /// </summary>
    /// <remarks>
    /// 实现视频转码、截图、加密等处理。既可以同时启动多种操作，也可以只启动一种操作。
    /// </remarks>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="assetProcessReq"> (optional)</param>
    std::shared_ptr<CreateAssetProcessTaskResponse> createAssetProcessTask(
        CreateAssetProcessTaskRequest &request
    );
    /// <summary>
    /// 创建审核媒资任务
    /// </summary>
    /// <remarks>
    /// 对上传的媒资进行审核。审核后，可以调用[查询媒资详细信息](https://support.huaweicloud.com/api-vod/vod_04_0202.html)接口查看审核结果。
    /// </remarks>
    /// <param name="assetReviewReq"></param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CreateAssetReviewTaskResponse> createAssetReviewTask(
        CreateAssetReviewTaskRequest &request
    );
    /// <summary>
    /// 音频提取
    /// </summary>
    /// <remarks>
    /// 用于从已有视频文件中提取音频。
    /// </remarks>
    /// <param name="extractAudioTaskReq">创建提取音频请求体</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CreateExtractAudioTaskResponse> createExtractAudioTask(
        CreateExtractAudioTaskRequest &request
    );
    /// <summary>
    /// CDN预热
    /// </summary>
    /// <remarks>
    /// 媒资发布后，可通过指定媒资ID或URL向CDN预热。用户初次请求时，将由CDN节点提供请求媒资，加快用户下载缓存时间，提高用户体验。
    /// </remarks>
    /// <param name="createPreheatingAssetReq">CDN预热</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CreatePreheatingAssetResponse> createPreheatingAsset(
        CreatePreheatingAssetRequest &request
    );
    /// <summary>
    /// 创建媒资：OBS托管方式
    /// </summary>
    /// <remarks>
    /// 通过存量托管的方式，将已存储在OBS桶中的音视频文件同步到点播服务。  OBS托管方式分为增量托管和存量托管，增量托管暂只支持通过视频点播控制台配置，配置后，若OBS有新增音视频文件，则会自动同步到点播服务中，具体请参见[增量托管](https://support.huaweicloud.com/usermanual-vod/vod010032.html)。两个托管方式都需要先将对应的OBS桶授权给点播服务，具体请参见[桶授权](https://support.huaweicloud.com/usermanual-vod/vod010031.html)。
    /// </remarks>
    /// <param name="createTakeOverTaskReq"></param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CreateTakeOverTaskResponse> createTakeOverTask(
        CreateTakeOverTaskRequest &request
    );
    /// <summary>
    /// 创建自定义转码模板组
    /// </summary>
    /// <remarks>
    /// 创建自定义转码模板组。
    /// </remarks>
    /// <param name="transTemplateGroup">创建自定义模板组</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CreateTemplateGroupResponse> createTemplateGroup(
        CreateTemplateGroupRequest &request
    );
    /// <summary>
    /// 创建水印模板
    /// </summary>
    /// <remarks>
    /// 创建水印模板。
    /// </remarks>
    /// <param name="createWatermarkTemplateReq">创建水印模板请求体</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<CreateWatermarkTemplateResponse> createWatermarkTemplate(
        CreateWatermarkTemplateRequest &request
    );
    /// <summary>
    /// 删除媒资分类
    /// </summary>
    /// <remarks>
    /// 删除媒资分类。
    /// </remarks>
    /// <param name="id">视频分类ID</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<DeleteAssetCategoryResponse> deleteAssetCategory(
        DeleteAssetCategoryRequest &request
    );
    /// <summary>
    /// 删除媒资
    /// </summary>
    /// <remarks>
    /// 删除媒资。
    /// </remarks>
    /// <param name="assetId">媒资ID，支持一次删除多个媒资，批量删除时以逗号分隔。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="deleteType">删除类型，当值为origin时只删除源文件，保留转码后文件。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<DeleteAssetsResponse> deleteAssets(
        DeleteAssetsRequest &request
    );
    /// <summary>
    /// 删除自定义转码模板组
    /// </summary>
    /// <remarks>
    /// 删除自定义转码模板组。
    /// </remarks>
    /// <param name="groupId">模板组id</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<DeleteTemplateGroupResponse> deleteTemplateGroup(
        DeleteTemplateGroupRequest &request
    );
    /// <summary>
    /// 删除水印模板
    /// </summary>
    /// <remarks>
    /// 删除水印模板 
    /// </remarks>
    /// <param name="id">水印模板配置id </param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<DeleteWatermarkTemplateResponse> deleteWatermarkTemplate(
        DeleteWatermarkTemplateRequest &request
    );
    /// <summary>
    /// 查询指定分类信息
    /// </summary>
    /// <remarks>
    /// 查询指定分类信息，及其子分类（即下一级分类）的列表。
    /// </remarks>
    /// <param name="id">视频分类ID。  若设置为0，则查询所有一级分类。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListAssetCategoryResponse> listAssetCategory(
        ListAssetCategoryRequest &request
    );
    /// <summary>
    /// 查询媒资列表
    /// </summary>
    /// <remarks>
    /// 查询媒资列表，列表中的每一条记录包含媒资的概要信息。
    /// </remarks>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="assetId">媒资ID，最多同时查询10个。 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="status">媒资状态，同时查询多个状态的媒资。  取值如下： - CREATING：上传中 - FAILED：上传失败 - CREATED：上传成功 - PUBLISHED：已发布 - TRANSCODING：转码中 - TRANSCODE_SUCCEED：转码成功 - TRANSCODE_FAILED：转码失败 - THUMBNAILING：截图中 - THUMBNAIL_SUCCEED：截图成功 - THUMBNAIL_FAILED：截图失败 - UN_REVIEW：未审核 - REVIEWING：审核中 - REVIEW_SUSPICIOUS ：审核不过，待人工复审 - REVIEW_PASSED：审核通过 - REVIEW_FAILED：审核任务失败 - REVIEW_BLOCKED：已屏蔽 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="startTime">起始时间。  格式为yyyymmddhhm mss。必须是与时区无关的UTC时间。 (optional, default to &quot;&quot;)</param>
    /// <param name="endTime">结束时间。  格式为yyyymmddhhm mss。必须是与时区无关的UTC时间。 (optional, default to &quot;&quot;)</param>
    /// <param name="categoryId">分类ID。 (optional, default to 0)</param>
    /// <param name="tags">媒资标签。 单个标签不超过16个字节， 最多不超过16 个标签。 多个用英文逗号分隔，UTF8编码。 (optional, default to &quot;&quot;)</param>
    /// <param name="queryString">在媒资标题、 描述、分类名称中模糊查询的字符串。 (optional, default to &quot;&quot;)</param>
    /// <param name="mediaType">音视频文件的格式，支持多格式查询，最多不超过20个。  取值如下： - 视频文件格式：MP4、TS、MOV、MXF、MPG、FLV、WMV、AVI、M4V、F4V、MPEG - 音频文件格式：MP3、OGG、WAV、WMA、APE、FLAC、AAC、AC3、MMF、AMR、M4A、M4R、WV、MP2 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="page">分页编号。  默认值：0。 (optional, default to 0)</param>
    /// <param name="size">每页记录数。  取值范围：[1,100]。  默认值：10。 (optional, default to 0)</param>
    /// <param name="order">查询顺序，按createTime顺序还是倒序 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListAssetListResponse> listAssetList(
        ListAssetListRequest &request
    );
    /// <summary>
    /// 查询域名播放日志
    /// </summary>
    /// <remarks>
    /// 查询指定点播域名某段时间内在CDN的相关日志。
    /// </remarks>
    /// <param name="domainName">加速域名，参考格式：www.test1.com。</param>
    /// <param name="queryDate">查询日期，yyyyMMddHHmmss。 - 查询结果为开始时间之后24小时内的日志数据 - 只能查最近一个月内的数据</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="pageSize">每页显示日志数量。  (optional, default to 0)</param>
    /// <param name="pageNumber">当前页数。  (optional, default to 0)</param>
    std::shared_ptr<ListDomainLogsResponse> listDomainLogs(
        ListDomainLogsRequest &request
    );
    /// <summary>
    /// 查询转码模板组列表
    /// </summary>
    /// <remarks>
    /// 查询转码模板组列表。
    /// </remarks>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="groupId">模板组id (optional, default to &quot;&quot;)</param>
    /// <param name="status">模板启用状态 (optional, default to &quot;&quot;)</param>
    /// <param name="page">分页编号。  默认为0，指定group_id时该参数无效。 (optional, default to 0)</param>
    /// <param name="size">每页记录数。  默认为10，范围[1,100]。指定group_id时该参数无效。 (optional, default to 0)</param>
    std::shared_ptr<ListTemplateGroupResponse> listTemplateGroup(
        ListTemplateGroupRequest &request
    );
    /// <summary>
    /// 查询TopN媒资信息
    /// </summary>
    /// <remarks>
    /// 查询指定域名在指定日期播放次数排名Top 100的媒资统计数据。
    /// </remarks>
    /// <param name="domain">查询域名，暂只支持查询单个或者全部域名。  取值如下： - 单个加速域名，格式：example.test1.com。 - ALL：表示查询名下全部域名。</param>
    /// <param name="date">查询日期，格式为yyyymmdd - date必须为昨天或之前的日期。 - 最多只能查最近一个月内的数据。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ListTopStatisticsResponse> listTopStatistics(
        ListTopStatisticsRequest &request
    );
    /// <summary>
    /// 查询水印列表
    /// </summary>
    /// <remarks>
    /// 查询水印模板
    /// </remarks>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="id">水印模板配置id，一次最多10个。 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="page">分页编号。  默认为0。指定id时该参数无效。 (optional, default to 0)</param>
    /// <param name="size">每页记录数。  默认为10，范围[1,100]。指定id时该参数无效。 (optional, default to 0)</param>
    std::shared_ptr<ListWatermarkTemplateResponse> listWatermarkTemplate(
        ListWatermarkTemplateRequest &request
    );
    /// <summary>
    /// 创建媒资：OBS转存方式
    /// </summary>
    /// <remarks>
    /// 若您在使用点播服务前，已经在OBS桶中存储了音视频文件，您可以使用该接口将存储在OBS桶中的音视频文件转存到点播服务中，使用点播服务的音视频管理功能。调用该接口前，您需要调用[桶授权](https://support.huaweicloud.com/api-vod/vod_04_0199.html)接口，将存储音视频文件的OBS桶授权给点播服务。
    /// </remarks>
    /// <param name="publishAssetFromObsReq">从OBS一键发布媒资</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<PublishAssetFromObsResponse> publishAssetFromObs(
        PublishAssetFromObsRequest &request
    );
    /// <summary>
    /// 媒资发布
    /// </summary>
    /// <remarks>
    /// 将媒资设置为发布状态。支持批量发布。
    /// </remarks>
    /// <param name="publishAssetReq">媒资发布</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<PublishAssetsResponse> publishAssets(
        PublishAssetsRequest &request
    );
    /// <summary>
    /// 密钥查询
    /// </summary>
    /// <remarks>
    /// 终端播放HLS加密视频时，向租户管理系统请求密钥，租户管理系统先查询其本地有没有已缓存的密钥，没有时则调用此接口向VOD查询。该接口的具体使用场景请参见[通过HLS加密防止视频泄露](https://support.huaweicloud.com/bestpractice-vod/vod_10_0004.html)。
    /// </remarks>
    /// <param name="assetId">媒资ID。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ShowAssetCipherResponse> showAssetCipher(
        ShowAssetCipherRequest &request
    );
    /// <summary>
    /// 查询指定媒资的详细信息
    /// </summary>
    /// <remarks>
    /// 查询指定媒资的详细信息。
    /// </remarks>
    /// <param name="assetId">媒资ID。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="categories">查询的信息类型。 - 为空时表示查询所有信息。 - 不为空时支持同时查询一个或者多个类型的信息，取值如下： - - base_info：媒资基本信息。 - - transcode_info：转码结果信息。 - - thumbnail_info：截图结果信息。 - - review_info：审核结果信息。 (optional, default to std::vector&lt;std::string&gt;())</param>
    std::shared_ptr<ShowAssetDetailResponse> showAssetDetail(
        ShowAssetDetailRequest &request
    );
    /// <summary>
    /// 查询媒资信息
    /// </summary>
    /// <remarks>
    /// 查询媒资信息，支持指定媒资ID、分类、状态、起止时间查询。
    /// </remarks>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="assetId">媒资id，最多同时查询10个媒资。 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="status">媒资状态。  取值如下： - UNCREATED：未创建（媒资ID不存在 ） - DELETED：已删除 - CANCELLED：上传取消 - SERVER_ERROR：上传失败（点播服务端故障） - UPLOAD_FAILED：上传失败（向OBS上传失败） - CREATING：创建中 - PUBLISHED：已发布 - TRANSCODING：待发布（转码中） - TRANSCODE_FAILED：待发布（转码失败） - TRANSCODE_SUCCEED：待发布（转码成功） - CREATED：待发布（未转码） (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="transcodeStatus">转码状态  取值如下： - TRANSCODING：转码中 - TRANSCODE_FAILED：转码失败 - TRANSCODE_SUCCEED：转码成功 - UN_TRANSCODE：未转码 - WAITING_TRANSCODE：等待转码 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="assetStatus">媒资状态。  取值如下： - PUBLISHED：已发布 - CREATED：未发布 (optional, default to std::vector&lt;std::string&gt;())</param>
    /// <param name="startTime">起始时间，查询指定“**asset_id**”时，该参数无效。  格式为yyyymmddhhmmss。必须是与时区无关的UTC时间。 (optional, default to &quot;&quot;)</param>
    /// <param name="endTime">结束时间，查询指定“**asset_id**”时，该参数无效。  格式为yyyymmddhhmmss。必须是与时区无关的UTC时间。 (optional, default to &quot;&quot;)</param>
    /// <param name="categoryId">分类ID。 (optional, default to 0)</param>
    /// <param name="tags">媒资标签。  单个标签不超过16个字节，最多不超过16个标签。  多个用逗号分隔，UTF8编码。 (optional, default to &quot;&quot;)</param>
    /// <param name="queryString">在媒资标题、描述中模糊查询的字符串。 (optional, default to &quot;&quot;)</param>
    /// <param name="page">分页编号，查询指定“asset_id”时，该参数无效。  默认值：0。 (optional, default to 0)</param>
    /// <param name="size">每页记录数，查询指定“**asset_id**”时，该参数无效。  取值范围：[1,100]。  默认值：10。 (optional, default to 0)</param>
    std::shared_ptr<ShowAssetMetaResponse> showAssetMeta(
        ShowAssetMetaRequest &request
    );
    /// <summary>
    /// 获取分段上传授权
    /// </summary>
    /// <remarks>
    /// 客户端请求创建媒资时，如果媒资文件超过20MB，需采用分段的方式向OBS上传，在每次与OBS交互前，客户端需通过此接口获取到授权方可与OBS交互。  该接口可以获取[初始化多段上传任务](https://support.huaweicloud.com/api-obs/obs_04_0098.html)、[上传段](https://support.huaweicloud.com/api-obs/obs_04_0099.html)、[合并段](https://support.huaweicloud.com/api-obs/obs_04_0102.html)、[列举已上传段](https://support.huaweicloud.com/api-obs/obs_04_0101.html)、[取消段合并](https://support.huaweicloud.com/api-obs/obs_04_0103.html)的带有临时授权的URL，用户需要根据OBS的接口文档配置相应请求的HTTP请求方法、请求头、请求体，然后请求对应的带有临时授权的URL。  视频分段上传方式和OBS的接口文档保持一致，包括HTTP请求方法、请求头、请求体等各种入参，此接口的作用是为用户生成带有鉴权信息的URL（鉴权信息即query_str），用来替换OBS接口中对应的URL，临时给用户开通向点播服务的桶上传文件的权限。  调用获取授权接口时需要传入bucket、object_key、http_verb，其中bucket和object_key是由[创建媒资：上传方式](https://support.huaweicloud.com/api-vod/vod_04_0196.html)接口中返回的响应体中的target字段获得的bucket和object，http_verb需要根据指定的操作选择。
    /// </remarks>
    /// <param name="httpVerb">分段上传时调用OBS接口的HTTP方法，具体操作需要的HTTP方法请参考OBS的接口文档。  - 初始化上传任务：POST - 上传段：PUT - 合并段：POST - 取消段：DELETE - 列举已上传段：GET</param>
    /// <param name="bucket">桶名。  调用[创建媒资：上传方式](https://support.huaweicloud.com/api-vod/vod_04_0196.html)接口中返回的响应体中的target字段获得的bucket值。</param>
    /// <param name="objectKey">对象名。  调用[创建媒资：上传方式](https://support.huaweicloud.com/api-vod/vod_04_0196.html)接口中返回的响应体中的target字段获得的object值。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="contentType">文件类型对应的content-type，如MP4对应video/mp4。 (optional, default to &quot;&quot;)</param>
    /// <param name="contentMd5">上传段时每段的MD5。 (optional, default to &quot;&quot;)</param>
    /// <param name="uploadId">每一个上传任务的id，是OBS进行初始段后OBS返回的。 (optional, default to &quot;&quot;)</param>
    /// <param name="partNumber">上传段时每一段的id。  取值范围：[1,10000]。 (optional, default to 0)</param>
    std::shared_ptr<ShowAssetTempAuthorityResponse> showAssetTempAuthority(
        ShowAssetTempAuthorityRequest &request
    );
    /// <summary>
    /// 查询CDN统计信息
    /// </summary>
    /// <remarks>
    /// 查询CDN的统计数据，包括流量、峰值带宽、请求总数、请求命中率、流量命中率。
    /// </remarks>
    /// <param name="statType">统计数据类型。  取值如下： - cdn_bw：CDN峰值带宽 - cdn_flux：CDN流量 - req_num：请求总数 - req_hit_rate：请求命中率 - flux_hit_rate：流量命中率  每次只能查询一种统计数据。</param>
    /// <param name="domain">域名列表，多个域名以逗号（半角）分隔。  示例：example.test1.com,example.test2.com。  ALL表示查询名下全部域名。一次最多查询100个域名。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="startTime">起始时间，格式为yyyymmddhhmmss。 (optional, default to &quot;&quot;)</param>
    /// <param name="endTime">结束时间，格式为yyyymmddhhmmss。  - “**start_time**”、“**end_time**”均不存在时，“**start_time**”取当天零点，“end_time”取当前时间。  - “**start_time**”不存在、“**end_time**”存在，请求非法。  - “**start_time**”存在、“**end_time**”不存在，“**end_time**”取当前时间。  - 只能查询最近三个月内的数据，且时间跨度不能超过31天。  - 起始时间和结束时间会自动规整，起始时间规整为指定时间所在的整点时刻，结束时间规整为指定时间所在时间的下一小时整点时刻。 (optional, default to &quot;&quot;)</param>
    /// <param name="interval">查询粒度间隔。  取值如下： - 时间跨度1天：5分钟、1小时、4小时、8小时，分别对应300秒、3600秒、14400秒和28800秒。 - 时间跨度2~7天：1小时、4小时、8小时、1天，分别对应3600秒、14400秒、28800秒和86400秒。 - 时间跨度8~31天：4小时、8小时、1天，分别对应14400秒、28800秒和86400秒。  单位：秒。  若不设置，默认取对应时间跨度的最小间隔。 (optional, default to 0)</param>
    std::shared_ptr<ShowCdnStatisticsResponse> showCdnStatistics(
        ShowCdnStatisticsRequest &request
    );
    /// <summary>
    /// 查询CDN预热
    /// </summary>
    /// <remarks>
    /// 查询预热结果。
    /// </remarks>
    /// <param name="taskId">任务ID</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ShowPreheatingAssetResponse> showPreheatingAsset(
        ShowPreheatingAssetRequest &request
    );
    /// <summary>
    /// 查询源站统计信息
    /// </summary>
    /// <remarks>
    /// 查询点播源站的统计数据，包括流量、存储空间、转码时长。
    /// </remarks>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="startTime">起始时间，格式为yyyymmddhhmmss。 (optional, default to &quot;&quot;)</param>
    /// <param name="endTime">结束时间，格式为yyyymmddhhmmss。 - “start_time”、“end_time”均不存在时，“start_time”取当天零点，“end_time”取当前时间。 - “start_time”不存在、“end_time”存在，请求非法。 - “start_time”存在、“end_time”不存在，“end_time”取当前时间。 - 只能查询最近三个月内的数据，且时间跨度不能超过31天。 - 起始时间和结束时间会自动规整，起始时间规整为指定时间所在的整点时刻，结束时间规整为指定时间所在时间的下一小时整点时刻。 (optional, default to &quot;&quot;)</param>
    /// <param name="interval">查询粒度间隔。  取值如下： - 时间跨度1天：1小时、4小时、8小时，分别对应3600秒、14400秒和28800秒。 - 时间跨度2~7天：1小时、4小时、8小时、1天，分别对应3600秒、14400秒、28800秒和86400秒。 - 时间跨度8~31天：4小时、8小时、1天，分别对应14400秒、28800秒和86400秒。  单位：秒。  若不设置，默认取对应时间跨度的最小间隔。 (optional, default to 0)</param>
    std::shared_ptr<ShowVodStatisticsResponse> showVodStatistics(
        ShowVodStatisticsRequest &request
    );
    /// <summary>
    /// 媒资发布取消
    /// </summary>
    /// <remarks>
    /// 将媒资设置为未发布状态。
    /// </remarks>
    /// <param name="unpublishAssetReq">媒资取消发布</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<UnpublishAssetsResponse> unpublishAssets(
        UnpublishAssetsRequest &request
    );
    /// <summary>
    /// 视频更新
    /// </summary>
    /// <remarks>
    /// 媒资创建后，单独上传封面、更新视频文件或更新已有封面。  如果是更新视频文件，更新完后要通过[确认媒资上传](https://support.huaweicloud.com/api-vod/vod_04_0198.html)接口通知点播服务。  如果是更新封面或单独上传封面，则不需通知。  更新视频可以使用分段上传，具体方式可以参考[示例2：媒资分段上传（20M以上）](https://support.huaweicloud.com/api-vod/vod_04_0216.html)。
    /// </remarks>
    /// <param name="uploadAssetReq">更新媒资文件或封面</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<UpdateAssetResponse> updateAsset(
        UpdateAssetRequest &request
    );
    /// <summary>
    /// 修改媒资分类
    /// </summary>
    /// <remarks>
    /// 修改媒资分类。
    /// </remarks>
    /// <param name="updateCategoryReq">修改媒资分类</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<UpdateAssetCategoryResponse> updateAssetCategory(
        UpdateAssetCategoryRequest &request
    );
    /// <summary>
    /// 修改媒资属性
    /// </summary>
    /// <remarks>
    /// 修改媒资属性。
    /// </remarks>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="updateAssetMetaReq">更新媒资信息的请求参数的封装 (optional)</param>
    std::shared_ptr<UpdateAssetMetaResponse> updateAssetMeta(
        UpdateAssetMetaRequest &request
    );
    /// <summary>
    /// 桶授权
    /// </summary>
    /// <remarks>
    /// 用户可以通过该接口将OBS桶授权给点播服务或取消点播服务的授权。
    /// </remarks>
    /// <param name="updateBucketAuthorizedReq">桶策略授权</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<UpdateBucketAuthorizedResponse> updateBucketAuthorized(
        UpdateBucketAuthorizedRequest &request
    );
    /// <summary>
    /// 设置封面
    /// </summary>
    /// <remarks>
    /// 将视频截图生成的某张图片设置成封面。
    /// </remarks>
    /// <param name="updateCoverByThumbnailReq">截图文件的URL。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<UpdateCoverByThumbnailResponse> updateCoverByThumbnail(
        UpdateCoverByThumbnailRequest &request
    );
    /// <summary>
    /// 修改自定义转码模板组
    /// </summary>
    /// <remarks>
    /// 修改自定义转码模板组。
    /// </remarks>
    /// <param name="transTemplateGroup">修改模板组</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<UpdateTemplateGroupResponse> updateTemplateGroup(
        UpdateTemplateGroupRequest &request
    );
    /// <summary>
    /// 修改水印模板
    /// </summary>
    /// <remarks>
    /// 修改水印模板 
    /// </remarks>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="updateWatermarkTemplateReq">修改水印模板请求体  (optional)</param>
    std::shared_ptr<UpdateWatermarkTemplateResponse> updateWatermarkTemplate(
        UpdateWatermarkTemplateRequest &request
    );
    /// <summary>
    /// 创建媒资：URL拉取注入
    /// </summary>
    /// <remarks>
    /// 基于音视频源文件URL，将音视频文件离线拉取上传到点播服务。
    /// </remarks>
    /// <param name="uploadMetaDataByUrlReq">创建媒资：URL拉取注入</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<UploadMetaDataByUrlResponse> uploadMetaDataByUrl(
        UploadMetaDataByUrlRequest &request
    );
    /// <summary>
    /// 查询托管任务
    /// </summary>
    /// <remarks>
    /// 查询OBS存量托管任务列表。
    /// </remarks>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="status">任务状态。 (optional, default to &quot;&quot;)</param>
    /// <param name="taskId">任务ID。 (optional, default to &quot;&quot;)</param>
    /// <param name="page">分页编号，默认为0。 (optional, default to 0)</param>
    /// <param name="size">每页记录数。  默认10，范围[1,100]，指定task_id时该参数无效。 (optional, default to 0)</param>
    std::shared_ptr<ListTakeOverTaskResponse> listTakeOverTask(
        ListTakeOverTaskRequest &request
    );
    /// <summary>
    /// 查询托管媒资详情
    /// </summary>
    /// <remarks>
    /// 查询OBS托管媒资的详细信息。
    /// </remarks>
    /// <param name="sourceBucket">媒资原始输入存放的桶。</param>
    /// <param name="sourceObject">媒资原始输入的objectKey。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    std::shared_ptr<ShowTakeOverAssetDetailsResponse> showTakeOverAssetDetails(
        ShowTakeOverAssetDetailsRequest &request
    );
    /// <summary>
    /// 查询托管任务详情
    /// </summary>
    /// <remarks>
    /// 查询OBS存量托管任务详情。
    /// </remarks>
    /// <param name="taskId">任务ID。</param>
    /// <param name="authorization">使用AK/SK方式认证时必选，携带的鉴权信息。  (optional, default to &quot;&quot;)</param>
    /// <param name="xSdkDate">使用AK/SK方式认证时必选，请求的发生时间。  (optional, default to &quot;&quot;)</param>
    /// <param name="page">分页编号，默认为0。 (optional, default to 0)</param>
    /// <param name="size">每页记录数。  默认10，范围[1,100] (optional, default to 0)</param>
    std::shared_ptr<ShowTakeOverTaskDetailsResponse> showTakeOverTaskDetails(
        ShowTakeOverTaskDetailsRequest &request
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

template class HUAWEICLOUD_VOD_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Vod::V1::VodClient>;

#endif // HUAWEICLOUD_SDK_VOD_V1_VodClient_H_

