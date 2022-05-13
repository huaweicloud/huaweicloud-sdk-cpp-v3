#ifndef HUAWEICLOUD_SDK_FRS_V2_FrsClient_H_
#define HUAWEICLOUD_SDK_FRS_V2_FrsClient_H_

#include <huaweicloud/frs/v2/FrsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/frs/v2/model/AddFacesBase64Req.h>
#include <huaweicloud/frs/v2/model/AddFacesByBase64Request.h>
#include <huaweicloud/frs/v2/model/AddFacesByBase64Response.h>
#include <huaweicloud/frs/v2/model/AddFacesByFileRequest.h>
#include <huaweicloud/frs/v2/model/AddFacesByFileRequestBody.h>
#include <huaweicloud/frs/v2/model/AddFacesByFileResponse.h>
#include <huaweicloud/frs/v2/model/AddFacesByUrlRequest.h>
#include <huaweicloud/frs/v2/model/AddFacesByUrlResponse.h>
#include <huaweicloud/frs/v2/model/AddFacesUrlReq.h>
#include <huaweicloud/frs/v2/model/BatchDeleteFacesRequest.h>
#include <huaweicloud/frs/v2/model/BatchDeleteFacesResponse.h>
#include <huaweicloud/frs/v2/model/CompareFaceByBase64Request.h>
#include <huaweicloud/frs/v2/model/CompareFaceByBase64Response.h>
#include <huaweicloud/frs/v2/model/CompareFaceByFileRequest.h>
#include <huaweicloud/frs/v2/model/CompareFaceByFileRequestBody.h>
#include <huaweicloud/frs/v2/model/CompareFaceByFileResponse.h>
#include <huaweicloud/frs/v2/model/CompareFaceByUrlRequest.h>
#include <huaweicloud/frs/v2/model/CompareFaceByUrlResponse.h>
#include <huaweicloud/frs/v2/model/CreateFaceSetReq.h>
#include <huaweicloud/frs/v2/model/CreateFaceSetRequest.h>
#include <huaweicloud/frs/v2/model/CreateFaceSetResponse.h>
#include <huaweicloud/frs/v2/model/DeleteFaceByExternalImageIdRequest.h>
#include <huaweicloud/frs/v2/model/DeleteFaceByExternalImageIdResponse.h>
#include <huaweicloud/frs/v2/model/DeleteFaceByFaceIdRequest.h>
#include <huaweicloud/frs/v2/model/DeleteFaceByFaceIdResponse.h>
#include <huaweicloud/frs/v2/model/DeleteFaceSetRequest.h>
#include <huaweicloud/frs/v2/model/DeleteFaceSetResponse.h>
#include <huaweicloud/frs/v2/model/DeleteFacesBatchReq.h>
#include <huaweicloud/frs/v2/model/DetectFaceByBase64IntlRequest.h>
#include <huaweicloud/frs/v2/model/DetectFaceByBase64IntlResponse.h>
#include <huaweicloud/frs/v2/model/DetectFaceByBase64Request.h>
#include <huaweicloud/frs/v2/model/DetectFaceByBase64Response.h>
#include <huaweicloud/frs/v2/model/DetectFaceByFileIntlRequest.h>
#include <huaweicloud/frs/v2/model/DetectFaceByFileIntlRequestBody.h>
#include <huaweicloud/frs/v2/model/DetectFaceByFileIntlResponse.h>
#include <huaweicloud/frs/v2/model/DetectFaceByFileRequest.h>
#include <huaweicloud/frs/v2/model/DetectFaceByFileRequestBody.h>
#include <huaweicloud/frs/v2/model/DetectFaceByFileResponse.h>
#include <huaweicloud/frs/v2/model/DetectFaceByUrlIntlRequest.h>
#include <huaweicloud/frs/v2/model/DetectFaceByUrlIntlResponse.h>
#include <huaweicloud/frs/v2/model/DetectFaceByUrlRequest.h>
#include <huaweicloud/frs/v2/model/DetectFaceByUrlResponse.h>
#include <huaweicloud/frs/v2/model/DetectLiveByBase64IntlRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveByBase64IntlResponse.h>
#include <huaweicloud/frs/v2/model/DetectLiveByBase64Request.h>
#include <huaweicloud/frs/v2/model/DetectLiveByBase64Response.h>
#include <huaweicloud/frs/v2/model/DetectLiveByFileIntlRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveByFileIntlRequestBody.h>
#include <huaweicloud/frs/v2/model/DetectLiveByFileIntlResponse.h>
#include <huaweicloud/frs/v2/model/DetectLiveByFileRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveByFileRequestBody.h>
#include <huaweicloud/frs/v2/model/DetectLiveByFileResponse.h>
#include <huaweicloud/frs/v2/model/DetectLiveByUrlIntlRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveByUrlIntlResponse.h>
#include <huaweicloud/frs/v2/model/DetectLiveByUrlRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveByUrlResponse.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByBase64Request.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByBase64Response.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByFileRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByFileRequestBody.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByFileResponse.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByUrlRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByUrlResponse.h>
#include <huaweicloud/frs/v2/model/FaceCompareBase64Req.h>
#include <huaweicloud/frs/v2/model/FaceCompareUrlReq.h>
#include <huaweicloud/frs/v2/model/FaceDetectBase64Req.h>
#include <huaweicloud/frs/v2/model/FaceDetectUrlReq.h>
#include <huaweicloud/frs/v2/model/FaceSearchBase64Req.h>
#include <huaweicloud/frs/v2/model/FaceSearchFaceIdReq.h>
#include <huaweicloud/frs/v2/model/FaceSearchUrlReq.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/frs/v2/model/LiveDetectBase64Req.h>
#include <huaweicloud/frs/v2/model/LiveDetectFaceBase64Req.h>
#include <huaweicloud/frs/v2/model/LiveDetectFaceUrlReq.h>
#include <huaweicloud/frs/v2/model/LiveDetectUrlReq.h>
#include <huaweicloud/frs/v2/model/SearchFaceByBase64Request.h>
#include <huaweicloud/frs/v2/model/SearchFaceByBase64Response.h>
#include <huaweicloud/frs/v2/model/SearchFaceByFaceIdRequest.h>
#include <huaweicloud/frs/v2/model/SearchFaceByFaceIdResponse.h>
#include <huaweicloud/frs/v2/model/SearchFaceByFileRequest.h>
#include <huaweicloud/frs/v2/model/SearchFaceByFileRequestBody.h>
#include <huaweicloud/frs/v2/model/SearchFaceByFileResponse.h>
#include <huaweicloud/frs/v2/model/SearchFaceByUrlRequest.h>
#include <huaweicloud/frs/v2/model/SearchFaceByUrlResponse.h>
#include <huaweicloud/frs/v2/model/ShowAllFaceSetsRequest.h>
#include <huaweicloud/frs/v2/model/ShowAllFaceSetsResponse.h>
#include <huaweicloud/frs/v2/model/ShowFaceSetRequest.h>
#include <huaweicloud/frs/v2/model/ShowFaceSetResponse.h>
#include <huaweicloud/frs/v2/model/ShowFacesByFaceIdRequest.h>
#include <huaweicloud/frs/v2/model/ShowFacesByFaceIdResponse.h>
#include <huaweicloud/frs/v2/model/ShowFacesByLimitRequest.h>
#include <huaweicloud/frs/v2/model/ShowFacesByLimitResponse.h>
#include <huaweicloud/frs/v2/model/UpdateFaceReq.h>
#include <huaweicloud/frs/v2/model/UpdateFaceRequest.h>
#include <huaweicloud/frs/v2/model/UpdateFaceResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Frs::V2::Model;

class HUAWEICLOUD_FRS_V2_EXPORT  FrsClient : public Client
{
public:

    FrsClient();

    virtual ~FrsClient();

    static ClientBuilder<FrsClient> newBuilder();

    // 添加人脸
    //
    // 添加人脸到人脸库中。将单张图片中的人脸添加至人脸库中，支持添加最大人脸或所有人脸。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<AddFacesByBase64Response> addFacesByBase64(
        AddFacesByBase64Request &request
    );
    // 添加人脸
    //
    // 添加人脸到人脸库中。将单张图片中的人脸添加至人脸库中，支持添加最大人脸或所有人脸。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<AddFacesByFileResponse> addFacesByFile(
        AddFacesByFileRequest &request
    );
    // 添加人脸
    //
    // 添加人脸到人脸库中。将单张图片中的人脸添加至人脸库中，支持添加最大人脸或所有人脸。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<AddFacesByUrlResponse> addFacesByUrl(
        AddFacesByUrlRequest &request
    );
    // 批量删除人脸
    //
    // 自定义筛选条件，批量删除人脸库中的符合指定条件的多张人脸。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<BatchDeleteFacesResponse> batchDeleteFaces(
        BatchDeleteFacesRequest &request
    );
    // 人脸比对
    //
    // 人脸比对是将两个人脸进行比对，来判断是否为同一个人，返回比对置信度。如果传入的图片中包含多个人脸，选取最大的人脸进行比对。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CompareFaceByBase64Response> compareFaceByBase64(
        CompareFaceByBase64Request &request
    );
    // 人脸比对
    //
    // 人脸比对是将两个人脸进行比对，来判断是否为同一个人，返回比对置信度。如果传入的图片中包含多个人脸，选取最大的人脸进行比对。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CompareFaceByFileResponse> compareFaceByFile(
        CompareFaceByFileRequest &request
    );
    // 人脸比对
    //
    // 人脸比对是将两个人脸进行比对，来判断是否为同一个人，返回比对置信度。如果传入的图片中包含多个人脸，选取最大的人脸进行比对。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CompareFaceByUrlResponse> compareFaceByUrl(
        CompareFaceByUrlRequest &request
    );
    // 创建人脸库
    //
    // 创建用于存储人脸特征的人脸库。您最多可以创建10个人脸库，每个人脸库最大容量为10万个人脸特征。如有更大规格的需求请联系客服。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<CreateFaceSetResponse> createFaceSet(
        CreateFaceSetRequest &request
    );
    // 删除人脸
    //
    // 根据external_image_id删除人脸。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DeleteFaceByExternalImageIdResponse> deleteFaceByExternalImageId(
        DeleteFaceByExternalImageIdRequest &request
    );
    // 删除人脸
    //
    // 根据face_id删除人脸。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DeleteFaceByFaceIdResponse> deleteFaceByFaceId(
        DeleteFaceByFaceIdRequest &request
    );
    // 删除人脸库
    //
    // 删除人脸库以及其中所有的人脸。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DeleteFaceSetResponse> deleteFaceSet(
        DeleteFaceSetRequest &request
    );
    // 人脸检测
    //
    // 人脸检测是对输入图片进行人脸检测和分析，输出人脸在图像中的位置、人脸关键点位置和人脸关键属性。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectFaceByBase64Response> detectFaceByBase64(
        DetectFaceByBase64Request &request
    );
    // 人脸检测
    //
    // 人脸检测是对输入图片进行人脸检测和分析，输出人脸在图像中的位置、人脸关键点位置和人脸关键属性。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectFaceByBase64IntlResponse> detectFaceByBase64Intl(
        DetectFaceByBase64IntlRequest &request
    );
    // 人脸检测
    //
    // 人脸检测是对输入图片进行人脸检测和分析，输出人脸在图像中的位置、人脸关键点位置和人脸关键属性。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectFaceByFileResponse> detectFaceByFile(
        DetectFaceByFileRequest &request
    );
    // 人脸检测
    //
    // 人脸检测是对输入图片进行人脸检测和分析，输出人脸在图像中的位置、人脸关键点位置和人脸关键属性。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectFaceByFileIntlResponse> detectFaceByFileIntl(
        DetectFaceByFileIntlRequest &request
    );
    // 人脸检测
    //
    // 人脸检测是对输入图片进行人脸检测和分析，输出人脸在图像中的位置、人脸关键点位置和人脸关键属性。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectFaceByUrlResponse> detectFaceByUrl(
        DetectFaceByUrlRequest &request
    );
    // 人脸检测
    //
    // 人脸检测是对输入图片进行人脸检测和分析，输出人脸在图像中的位置、人脸关键点位置和人脸关键属性。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectFaceByUrlIntlResponse> detectFaceByUrlIntl(
        DetectFaceByUrlIntlRequest &request
    );
    // 动作活体检测
    //
    // 动作活体检测是通过判断视频中的人物动作与传入动作列表是否一致来识别视频中人物是否为活体。如果有多张人脸出现，则选取最大的人脸进行判定。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectLiveByBase64Response> detectLiveByBase64(
        DetectLiveByBase64Request &request
    );
    // 动作活体检测
    //
    // 动作活体检测是通过判断视频中的人物动作与传入动作列表是否一致来识别视频中人物是否为活体。如果有多张人脸出现，则选取最大的人脸进行判定。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectLiveByBase64IntlResponse> detectLiveByBase64Intl(
        DetectLiveByBase64IntlRequest &request
    );
    // 动作活体检测
    //
    // 动作活体检测是通过判断视频中的人物动作与传入动作列表是否一致来识别视频中人物是否为活体。如果有多张人脸出现，则选取最大的人脸进行判定。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectLiveByFileResponse> detectLiveByFile(
        DetectLiveByFileRequest &request
    );
    // 动作活体检测
    //
    // 动作活体检测是通过判断视频中的人物动作与传入动作列表是否一致来识别视频中人物是否为活体。如果有多张人脸出现，则选取最大的人脸进行判定。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectLiveByFileIntlResponse> detectLiveByFileIntl(
        DetectLiveByFileIntlRequest &request
    );
    // 动作活体检测
    //
    // 动作活体检测是通过判断视频中的人物动作与传入动作列表是否一致来识别视频中人物是否为活体。如果有多张人脸出现，则选取最大的人脸进行判定。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectLiveByUrlResponse> detectLiveByUrl(
        DetectLiveByUrlRequest &request
    );
    // 动作活体检测
    //
    // 动作活体检测是通过判断视频中的人物动作与传入动作列表是否一致来识别视频中人物是否为活体。如果有多张人脸出现，则选取最大的人脸进行判定。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectLiveByUrlIntlResponse> detectLiveByUrlIntl(
        DetectLiveByUrlIntlRequest &request
    );
    // 静默活体检测
    //
    // 静默活体检测是基于人脸图片中可能存在的畸变、摩尔纹、反光、倒影、边框等信息，判断图片中的人脸是否来自于真人活体，有效抵御纸质翻拍照、电子翻拍照以及视频翻拍等各种攻击方式。静默活体检测支持单张图片，不支持多人脸图片。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectLiveFaceByBase64Response> detectLiveFaceByBase64(
        DetectLiveFaceByBase64Request &request
    );
    // 静默活体检测
    //
    // 静默活体检测是基于人脸图片中可能存在的畸变、摩尔纹、反光、倒影、边框等信息，判断图片中的人脸是否来自于真人活体，有效抵御纸质翻拍照、电子翻拍照以及视频翻拍等各种攻击方式。静默活体检测支持单张图片，不支持多人脸图片。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectLiveFaceByFileResponse> detectLiveFaceByFile(
        DetectLiveFaceByFileRequest &request
    );
    // 静默活体检测
    //
    // 静默活体检测是基于人脸图片中可能存在的畸变、摩尔纹、反光、倒影、边框等信息，判断图片中的人脸是否来自于真人活体，有效抵御纸质翻拍照、电子翻拍照以及视频翻拍等各种攻击方式。静默活体检测支持单张图片，不支持多人脸图片。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<DetectLiveFaceByUrlResponse> detectLiveFaceByUrl(
        DetectLiveFaceByUrlRequest &request
    );
    // 人脸搜索
    //
    // 人脸搜索是指在已有的人脸库中，查询与目标人脸相似的一张或者多张人脸，并返回相应的置信度。
    // 支持传入图片或者faceID进行人脸搜索，如果传入的是多张人脸图片，选取图片中检测到的最大尺寸人脸作为检索的输入。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<SearchFaceByBase64Response> searchFaceByBase64(
        SearchFaceByBase64Request &request
    );
    // 人脸搜索
    //
    // 人脸搜索是指在已有的人脸库中，查询与目标人脸相似的一张或者多张人脸，并返回相应的置信度。
    // 支持传入图片或者faceID进行人脸搜索，如果传入的是多张人脸图片，选取图片中检测到的最大尺寸人脸作为检索的输入。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<SearchFaceByFaceIdResponse> searchFaceByFaceId(
        SearchFaceByFaceIdRequest &request
    );
    // 人脸搜索
    //
    // 人脸搜索是指在已有的人脸库中，查询与目标人脸相似的一张或者多张人脸，并返回相应的置信度。
    // 支持传入图片或者faceID进行人脸搜索，如果传入的是多张人脸图片，选取图片中检测到的最大尺寸人脸作为检索的输入。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<SearchFaceByFileResponse> searchFaceByFile(
        SearchFaceByFileRequest &request
    );
    // 人脸搜索
    //
    // 人脸搜索是指在已有的人脸库中，查询与目标人脸相似的一张或者多张人脸，并返回相应的置信度。
    // 支持传入图片或者faceID进行人脸搜索，如果传入的是多张人脸图片，选取图片中检测到的最大尺寸人脸作为检索的输入。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<SearchFaceByUrlResponse> searchFaceByUrl(
        SearchFaceByUrlRequest &request
    );
    // 查询所有人脸库
    //
    // 查询当前用户所有人脸库的状态信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowAllFaceSetsResponse> showAllFaceSets(
        ShowAllFaceSetsRequest &request
    );
    // 查询人脸库
    //
    // 查询人脸库当前的状态。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowFaceSetResponse> showFaceSet(
        ShowFaceSetRequest &request
    );
    // 查询人脸
    //
    // 查询指定人脸库中人脸信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowFacesByFaceIdResponse> showFacesByFaceId(
        ShowFacesByFaceIdRequest &request
    );
    // 查询人脸
    //
    // 查询指定人脸库中人脸信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<ShowFacesByLimitResponse> showFacesByLimit(
        ShowFacesByLimitRequest &request
    );
    // 更新人脸
    //
    // 根据人脸ID（face_id）更新单张人脸信息。
    // 
    // 详细说明请参考华为云API Explorer。
    // Please refer to Huawei cloud API Explorer for details.
    std::shared_ptr<UpdateFaceResponse> updateFace(
        UpdateFaceRequest &request
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

template class HUAWEICLOUD_FRS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Frs::V2::FrsClient>;

#endif // HUAWEICLOUD_SDK_FRS_V2_FrsClient_H_

