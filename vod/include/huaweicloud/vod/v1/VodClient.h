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
#include <huaweicloud/vod/v1/model/CreateTemplateGroupCollectionRequest.h>
#include <huaweicloud/vod/v1/model/CreateTemplateGroupCollectionResponse.h>
#include <huaweicloud/vod/v1/model/CreateTemplateGroupRequest.h>
#include <huaweicloud/vod/v1/model/CreateTemplateGroupResponse.h>
#include <huaweicloud/vod/v1/model/CreateTranscodeTemplate.h>
#include <huaweicloud/vod/v1/model/CreateTranscodeTemplateRequest.h>
#include <huaweicloud/vod/v1/model/CreateTranscodeTemplateResponse.h>
#include <huaweicloud/vod/v1/model/CreateWatermarkTemplateReq.h>
#include <huaweicloud/vod/v1/model/CreateWatermarkTemplateRequest.h>
#include <huaweicloud/vod/v1/model/CreateWatermarkTemplateResponse.h>
#include <huaweicloud/vod/v1/model/DeleteAssetCategoryRequest.h>
#include <huaweicloud/vod/v1/model/DeleteAssetCategoryResponse.h>
#include <huaweicloud/vod/v1/model/DeleteAssetsRequest.h>
#include <huaweicloud/vod/v1/model/DeleteAssetsResponse.h>
#include <huaweicloud/vod/v1/model/DeleteTemplateGroupCollectionRequest.h>
#include <huaweicloud/vod/v1/model/DeleteTemplateGroupCollectionResponse.h>
#include <huaweicloud/vod/v1/model/DeleteTemplateGroupRequest.h>
#include <huaweicloud/vod/v1/model/DeleteTemplateGroupResponse.h>
#include <huaweicloud/vod/v1/model/DeleteTranscodeProductReq.h>
#include <huaweicloud/vod/v1/model/DeleteTranscodeProductRequest.h>
#include <huaweicloud/vod/v1/model/DeleteTranscodeProductResponse.h>
#include <huaweicloud/vod/v1/model/DeleteTranscodeTemplateRequest.h>
#include <huaweicloud/vod/v1/model/DeleteTranscodeTemplateResponse.h>
#include <huaweicloud/vod/v1/model/DeleteWatermarkTemplateRequest.h>
#include <huaweicloud/vod/v1/model/DeleteWatermarkTemplateResponse.h>
#include <huaweicloud/vod/v1/model/ExtractAudioTaskReq.h>
#include <huaweicloud/vod/v1/model/ListAssetCategoryRequest.h>
#include <huaweicloud/vod/v1/model/ListAssetCategoryResponse.h>
#include <huaweicloud/vod/v1/model/ListAssetDailySummaryLogRequest.h>
#include <huaweicloud/vod/v1/model/ListAssetDailySummaryLogResponse.h>
#include <huaweicloud/vod/v1/model/ListAssetListRequest.h>
#include <huaweicloud/vod/v1/model/ListAssetListResponse.h>
#include <huaweicloud/vod/v1/model/ListDomainLogsRequest.h>
#include <huaweicloud/vod/v1/model/ListDomainLogsResponse.h>
#include <huaweicloud/vod/v1/model/ListTemplateGroupCollectionRequest.h>
#include <huaweicloud/vod/v1/model/ListTemplateGroupCollectionResponse.h>
#include <huaweicloud/vod/v1/model/ListTemplateGroupRequest.h>
#include <huaweicloud/vod/v1/model/ListTemplateGroupResponse.h>
#include <huaweicloud/vod/v1/model/ListTopStatisticsRequest.h>
#include <huaweicloud/vod/v1/model/ListTopStatisticsResponse.h>
#include <huaweicloud/vod/v1/model/ListTranscodeTemplateRequest.h>
#include <huaweicloud/vod/v1/model/ListTranscodeTemplateResponse.h>
#include <huaweicloud/vod/v1/model/ListWatermarkTemplateRequest.h>
#include <huaweicloud/vod/v1/model/ListWatermarkTemplateResponse.h>
#include <huaweicloud/vod/v1/model/ModifySubtitleRequest.h>
#include <huaweicloud/vod/v1/model/ModifySubtitleResponse.h>
#include <huaweicloud/vod/v1/model/ModifyTemplateGroupCollection.h>
#include <huaweicloud/vod/v1/model/ModifyTransTemplate.h>
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
#include <huaweicloud/vod/v1/model/ShowStorageModeTypeRequest.h>
#include <huaweicloud/vod/v1/model/ShowStorageModeTypeResponse.h>
#include <huaweicloud/vod/v1/model/ShowVodRetrievalRequest.h>
#include <huaweicloud/vod/v1/model/ShowVodRetrievalResponse.h>
#include <huaweicloud/vod/v1/model/ShowVodStatisticsRequest.h>
#include <huaweicloud/vod/v1/model/ShowVodStatisticsResponse.h>
#include <huaweicloud/vod/v1/model/SubtitleModifyReq.h>
#include <huaweicloud/vod/v1/model/TransTemplateGroup.h>
#include <huaweicloud/vod/v1/model/TransTemplateGroupCollection.h>
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
#include <huaweicloud/vod/v1/model/UpdateStorageModeReq.h>
#include <huaweicloud/vod/v1/model/UpdateStorageModeRequest.h>
#include <huaweicloud/vod/v1/model/UpdateStorageModeResponse.h>
#include <huaweicloud/vod/v1/model/UpdateStorageModeTypeReq.h>
#include <huaweicloud/vod/v1/model/UpdateStorageModeTypeRequest.h>
#include <huaweicloud/vod/v1/model/UpdateStorageModeTypeResponse.h>
#include <huaweicloud/vod/v1/model/UpdateTemplateGroupCollectionRequest.h>
#include <huaweicloud/vod/v1/model/UpdateTemplateGroupCollectionResponse.h>
#include <huaweicloud/vod/v1/model/UpdateTemplateGroupRequest.h>
#include <huaweicloud/vod/v1/model/UpdateTemplateGroupResponse.h>
#include <huaweicloud/vod/v1/model/UpdateTranscodeTemplateRequest.h>
#include <huaweicloud/vod/v1/model/UpdateTranscodeTemplateResponse.h>
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
#include <huaweicloud/core/utils/Object.h>
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

    // 取消媒资转码任务
    //
    // 取消媒资转码任务，只能取消排队中的转码任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelAssetTranscodeTaskResponse> cancelAssetTranscodeTask(
        CancelAssetTranscodeTaskRequest &request
    );
    // 取消提取音频任务
    //
    // 取消提取音频任务，只有排队中的提取音频任务才可以取消。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelExtractAudioTaskResponse> cancelExtractAudioTask(
        CancelExtractAudioTaskRequest &request
    );
    // 上传检验
    //
    // 校验媒资文件是否已存储于视频点播服务中。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckMd5DuplicationResponse> checkMd5Duplication(
        CheckMd5DuplicationRequest &request
    );
    // 确认媒资上传
    //
    // 媒资分段上传完成后，需要调用此接口通知点播服务媒资上传的状态，表示媒资上传创建完成。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ConfirmAssetUploadResponse> confirmAssetUpload(
        ConfirmAssetUploadRequest &request
    );
    // 确认水印图片上传
    //
    // 确认水印图片上传状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ConfirmImageUploadResponse> confirmImageUpload(
        ConfirmImageUploadRequest &request
    );
    // 创建媒资：上传方式
    //
    // 调用该接口创建媒资时，需要将对应的媒资文件上传到点播服务的OBS桶中。
    // 
    // 若上传的单媒资文件大小小于20M，则可以直接用PUT方法对该接口返回的地址进行上传。具体使用方法请参考[示例1：媒资上传（20M以下）](https://support.huaweicloud.com/api-vod/vod_04_0195.html)。
    // 
    // 若上传的单个媒资大小大于20M，则需要进行二进制流分割后上传，该接口的具体使用方法请参考[示例2：媒资分段上传（20M以上）](https://support.huaweicloud.com/api-vod/vod_04_0216.html)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAssetByFileUploadResponse> createAssetByFileUpload(
        CreateAssetByFileUploadRequest &request
    );
    // 创建媒资分类
    //
    // 创建媒资分类。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAssetCategoryResponse> createAssetCategory(
        CreateAssetCategoryRequest &request
    );
    // 媒资处理
    //
    // 实现视频转码、截图、加密等处理。既可以同时启动多种操作，也可以只启动一种操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAssetProcessTaskResponse> createAssetProcessTask(
        CreateAssetProcessTaskRequest &request
    );
    // 创建审核媒资任务
    //
    // 对上传的媒资进行审核。审核后，可以调用[查询媒资详细信息](https://support.huaweicloud.com/api-vod/vod_04_0202.html)接口查看审核结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAssetReviewTaskResponse> createAssetReviewTask(
        CreateAssetReviewTaskRequest &request
    );
    // 音频提取
    //
    // 本接口为异步接口，创建音频提取任务下发成功后会返回asset_id和提取的audio_asset_id，但此时音频提取任务并没有立即完成，可通过消息订阅界面配置的音频提取完成事件来获取音频提取任务完成与否。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateExtractAudioTaskResponse> createExtractAudioTask(
        CreateExtractAudioTaskRequest &request
    );
    // CDN预热
    //
    // 媒资发布后，可通过指定媒资ID或URL向CDN预热。用户初次请求时，将由CDN节点提供请求媒资，加快用户下载缓存时间，提高用户体验。单租户每天最多预热1000个。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePreheatingAssetResponse> createPreheatingAsset(
        CreatePreheatingAssetRequest &request
    );
    // 创建媒资：OBS托管方式
    //
    // 通过存量托管的方式，将已存储在OBS桶中的音视频文件同步到点播服务。
    // 
    // OBS托管方式分为增量托管和存量托管，增量托管暂只支持通过视频点播控制台配置，配置后，若OBS有新增音视频文件，则会自动同步到点播服务中，具体请参见[增量托管](https://support.huaweicloud.com/usermanual-vod/vod010032.html)。两个托管方式都需要先将对应的OBS桶授权给点播服务，具体请参见[桶授权](https://support.huaweicloud.com/usermanual-vod/vod010031.html)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTakeOverTaskResponse> createTakeOverTask(
        CreateTakeOverTaskRequest &request
    );
    // 创建自定义转码模板组
    //
    // 创建自定义转码模板组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTemplateGroupResponse> createTemplateGroup(
        CreateTemplateGroupRequest &request
    );
    // 创建转码模板组集合
    //
    // 创建转码模板组集合
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTemplateGroupCollectionResponse> createTemplateGroupCollection(
        CreateTemplateGroupCollectionRequest &request
    );
    // 创建自定义转码模板
    //
    // 创建自定义转码模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTranscodeTemplateResponse> createTranscodeTemplate(
        CreateTranscodeTemplateRequest &request
    );
    // 创建水印模板
    //
    // 创建水印模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWatermarkTemplateResponse> createWatermarkTemplate(
        CreateWatermarkTemplateRequest &request
    );
    // 删除媒资分类
    //
    // 删除媒资分类。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAssetCategoryResponse> deleteAssetCategory(
        DeleteAssetCategoryRequest &request
    );
    // 删除媒资
    //
    // 删除媒资。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAssetsResponse> deleteAssets(
        DeleteAssetsRequest &request
    );
    // 删除自定义转码模板组
    //
    // 删除自定义转码模板组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTemplateGroupResponse> deleteTemplateGroup(
        DeleteTemplateGroupRequest &request
    );
    // 删除转码模板组集合
    //
    // 删除转码模板组集合
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTemplateGroupCollectionResponse> deleteTemplateGroupCollection(
        DeleteTemplateGroupCollectionRequest &request
    );
    // 删除转码产物
    //
    // 删除转码产物。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTranscodeProductResponse> deleteTranscodeProduct(
        DeleteTranscodeProductRequest &request
    );
    // 删除自定义模板
    //
    // 删除自定义模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTranscodeTemplateResponse> deleteTranscodeTemplate(
        DeleteTranscodeTemplateRequest &request
    );
    // 删除水印模板
    //
    // 删除水印模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteWatermarkTemplateResponse> deleteWatermarkTemplate(
        DeleteWatermarkTemplateRequest &request
    );
    // 查询指定分类信息
    //
    // 查询指定分类信息，及其子分类（即下一级分类）的列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAssetCategoryResponse> listAssetCategory(
        ListAssetCategoryRequest &request
    );
    // 查询媒资日播放统计数据
    //
    // 查询媒资日播放统计数据。
    // 
    // 使用媒资日播放统计查询API前，需要先提交工单开通统计功能，才能触发统计任务。
    // 
    // 支持查询最近一年的播放统计数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAssetDailySummaryLogResponse> listAssetDailySummaryLog(
        ListAssetDailySummaryLogRequest &request
    );
    // 查询媒资列表
    //
    // 查询媒资列表，列表中的每一条记录包含媒资的概要信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAssetListResponse> listAssetList(
        ListAssetListRequest &request
    );
    // 查询域名播放日志
    //
    // 查询指定点播域名某段时间内在CDN的相关日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainLogsResponse> listDomainLogs(
        ListDomainLogsRequest &request
    );
    // 查询转码模板组列表
    //
    // 查询转码模板组列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplateGroupResponse> listTemplateGroup(
        ListTemplateGroupRequest &request
    );
    // 查询自定义模板组集合
    //
    // 查询转码模板组集合
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplateGroupCollectionResponse> listTemplateGroupCollection(
        ListTemplateGroupCollectionRequest &request
    );
    // 查询TopN媒资信息
    //
    // 查询指定域名在指定日期播放次数排名Top 100的媒资统计数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTopStatisticsResponse> listTopStatistics(
        ListTopStatisticsRequest &request
    );
    // 查询转码模板列表
    //
    // 查询转码模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTranscodeTemplateResponse> listTranscodeTemplate(
        ListTranscodeTemplateRequest &request
    );
    // 查询水印列表
    //
    // 查询水印模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWatermarkTemplateResponse> listWatermarkTemplate(
        ListWatermarkTemplateRequest &request
    );
    // 多字幕封装
    //
    // 多字幕封装，仅支持 HLS VTT格式和HLS SRT格式
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifySubtitleResponse> modifySubtitle(
        ModifySubtitleRequest &request
    );
    // 创建媒资：OBS转存方式
    //
    // 若您在使用点播服务前，已经在OBS桶中存储了音视频文件，您可以使用该接口将存储在OBS桶中的音视频文件转存到点播服务中，使用点播服务的音视频管理功能。调用该接口前，您需要调用[桶授权](https://support.huaweicloud.com/api-vod/vod_04_0199.html)接口，将存储音视频文件的OBS桶授权给点播服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PublishAssetFromObsResponse> publishAssetFromObs(
        PublishAssetFromObsRequest &request
    );
    // 媒资发布
    //
    // 将媒资设置为发布状态。支持批量发布。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PublishAssetsResponse> publishAssets(
        PublishAssetsRequest &request
    );
    // 密钥查询
    //
    // 终端播放HLS加密视频时，向租户管理系统请求密钥，租户管理系统先查询其本地有没有已缓存的密钥，没有时则调用此接口向VOD查询。该接口的具体使用场景请参见[通过HLS加密防止视频泄露](https://support.huaweicloud.com/bestpractice-vod/vod_10_0004.html)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAssetCipherResponse> showAssetCipher(
        ShowAssetCipherRequest &request
    );
    // 查询指定媒资的详细信息
    //
    // 查询指定媒资的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAssetDetailResponse> showAssetDetail(
        ShowAssetDetailRequest &request
    );
    // 查询媒资信息
    //
    // 查询媒资信息，支持指定媒资ID、分类、状态、起止时间查询。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAssetMetaResponse> showAssetMeta(
        ShowAssetMetaRequest &request
    );
    // 获取分段上传授权
    //
    // 客户端请求创建媒资时，如果媒资文件超过20MB，需采用分段的方式向OBS上传，在每次与OBS交互前，客户端需通过此接口获取到授权方可与OBS交互。
    // 
    // 该接口可以获取[初始化多段上传任务](https://support.huaweicloud.com/api-obs/obs_04_0098.html)、[上传段](https://support.huaweicloud.com/api-obs/obs_04_0099.html)、[合并段](https://support.huaweicloud.com/api-obs/obs_04_0102.html)、[列举已上传段](https://support.huaweicloud.com/api-obs/obs_04_0101.html)、[取消段合并](https://support.huaweicloud.com/api-obs/obs_04_0103.html)的带有临时授权的URL，用户需要根据OBS的接口文档配置相应请求的HTTP请求方法、请求头、请求体，然后请求对应的带有临时授权的URL。
    // 
    // 视频分段上传方式和OBS的接口文档保持一致，包括HTTP请求方法、请求头、请求体等各种入参，此接口的作用是为用户生成带有鉴权信息的URL（鉴权信息即query_str），用来替换OBS接口中对应的URL，临时给用户开通向点播服务的桶上传文件的权限。
    // 
    // 调用获取授权接口时需要传入bucket、object_key、http_verb，其中bucket和object_key是由[创建媒资：上传方式](https://support.huaweicloud.com/api-vod/vod_04_0196.html)接口中返回的响应体中的target字段获得的bucket和object，http_verb需要根据指定的操作选择。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAssetTempAuthorityResponse> showAssetTempAuthority(
        ShowAssetTempAuthorityRequest &request
    );
    // 查询CDN统计信息
    //
    // 查询CDN的统计数据，包括流量、峰值带宽、请求总数、请求命中率、流量命中率。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCdnStatisticsResponse> showCdnStatistics(
        ShowCdnStatisticsRequest &request
    );
    // 查询CDN预热
    //
    // 查询预热结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPreheatingAssetResponse> showPreheatingAsset(
        ShowPreheatingAssetRequest &request
    );
    // 查询媒资降冷配置
    //
    // 查询媒资降冷配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStorageModeTypeResponse> showStorageModeType(
        ShowStorageModeTypeRequest &request
    );
    // 查询取回数据信息
    //
    // ## 典型场景 ##
    //  用于查询点播低频和归档取回量统计数据。&lt;br/&gt;
    // 
    // ## 接口功能 ##
    //  用于查询点播低频和归档取回量统计数据。&lt;br/&gt;
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVodRetrievalResponse> showVodRetrieval(
        ShowVodRetrievalRequest &request
    );
    // 查询源站统计信息
    //
    // 查询点播源站的统计数据，包括存储空间、转码时长。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVodStatisticsResponse> showVodStatistics(
        ShowVodStatisticsRequest &request
    );
    // 媒资发布取消
    //
    // 将媒资设置为未发布状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnpublishAssetsResponse> unpublishAssets(
        UnpublishAssetsRequest &request
    );
    // 视频更新
    //
    // 媒资创建后，单独上传封面、更新视频文件或更新已有封面。
    // 
    // 如果是更新视频文件，更新完后要通过[确认媒资上传](https://support.huaweicloud.com/api-vod/vod_04_0198.html)接口通知点播服务。
    // 
    // 如果是更新封面或单独上传封面，则不需通知。
    // 
    // 更新视频可以使用分段上传，具体方式可以参考[示例2：媒资分段上传（20M以上）](https://support.huaweicloud.com/api-vod/vod_04_0216.html)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAssetResponse> updateAsset(
        UpdateAssetRequest &request
    );
    // 修改媒资分类
    //
    // 修改媒资分类。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAssetCategoryResponse> updateAssetCategory(
        UpdateAssetCategoryRequest &request
    );
    // 修改媒资属性
    //
    // 修改媒资属性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAssetMetaResponse> updateAssetMeta(
        UpdateAssetMetaRequest &request
    );
    // 桶授权
    //
    // 用户可以通过该接口将OBS桶授权给点播服务或取消点播服务的授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBucketAuthorizedResponse> updateBucketAuthorized(
        UpdateBucketAuthorizedRequest &request
    );
    // 设置封面
    //
    // 将视频截图生成的某张图片设置成封面。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateCoverByThumbnailResponse> updateCoverByThumbnail(
        UpdateCoverByThumbnailRequest &request
    );
    // 修改媒资文件在obs的存储模式
    //
    // ## 接口功能 ##
    //   修改媒资文件在obs的存储模式&lt;br/&gt;
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStorageModeResponse> updateStorageMode(
        UpdateStorageModeRequest &request
    );
    // 修改媒资降冷粒度
    //
    // 修改媒资降冷粒度。
    // 
    // 默认为整个媒资粒度，支持转为仅原文件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateStorageModeTypeResponse> updateStorageModeType(
        UpdateStorageModeTypeRequest &request
    );
    // 修改自定义转码模板组
    //
    // 修改自定义转码模板组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTemplateGroupResponse> updateTemplateGroup(
        UpdateTemplateGroupRequest &request
    );
    // 修改转码模板组集合
    //
    // 修改转码模板组结合
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTemplateGroupCollectionResponse> updateTemplateGroupCollection(
        UpdateTemplateGroupCollectionRequest &request
    );
    // 修改转码模板
    //
    // 修改转码模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTranscodeTemplateResponse> updateTranscodeTemplate(
        UpdateTranscodeTemplateRequest &request
    );
    // 修改水印模板
    //
    // 修改水印模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateWatermarkTemplateResponse> updateWatermarkTemplate(
        UpdateWatermarkTemplateRequest &request
    );
    // 创建媒资：URL拉取注入
    //
    // 基于音视频源文件URL，将音视频文件离线拉取上传到点播服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadMetaDataByUrlResponse> uploadMetaDataByUrl(
        UploadMetaDataByUrlRequest &request
    );

    // 查询托管任务
    //
    // 查询OBS存量托管任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTakeOverTaskResponse> listTakeOverTask(
        ListTakeOverTaskRequest &request
    );
    // 查询托管媒资详情
    //
    // 查询OBS托管媒资的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTakeOverAssetDetailsResponse> showTakeOverAssetDetails(
        ShowTakeOverAssetDetailsRequest &request
    );
    // 查询托管任务详情
    //
    // 查询OBS存量托管任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
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
    std::string parameterToString(const Object& obj);
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

