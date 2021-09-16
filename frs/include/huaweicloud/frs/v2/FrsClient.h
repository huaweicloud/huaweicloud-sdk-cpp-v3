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
#include <huaweicloud/frs/v2/model/DetectFaceByBase64Request.h>
#include <huaweicloud/frs/v2/model/DetectFaceByBase64Response.h>
#include <huaweicloud/frs/v2/model/DetectFaceByFileRequest.h>
#include <huaweicloud/frs/v2/model/DetectFaceByFileRequestBody.h>
#include <huaweicloud/frs/v2/model/DetectFaceByFileResponse.h>
#include <huaweicloud/frs/v2/model/DetectFaceByUrlRequest.h>
#include <huaweicloud/frs/v2/model/DetectFaceByUrlResponse.h>
#include <huaweicloud/frs/v2/model/DetectLiveByBase64Request.h>
#include <huaweicloud/frs/v2/model/DetectLiveByBase64Response.h>
#include <huaweicloud/frs/v2/model/DetectLiveByFileRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveByFileRequestBody.h>
#include <huaweicloud/frs/v2/model/DetectLiveByFileResponse.h>
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

    /// <summary>
    /// 添加人脸
    /// </summary>
    /// <remarks>
    /// 添加人脸到人脸库中，检测到传入的单张图片中存在多少张人脸，则增加多少张人脸到人脸库当中。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="addFacesBase64Req">This is a auto create Body Object</param>
    std::shared_ptr<AddFacesByBase64Response> addFacesByBase64(
        AddFacesByBase64Request &request
    );
    /// <summary>
    /// 添加人脸
    /// </summary>
    /// <remarks>
    /// 添加人脸到人脸库中，检测到传入的单张图片中存在多少张人脸，则增加多少张人脸到人脸库当中。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="imageFile">本地图片文件，图片不能超过8MB，建议小于1MB。上传文件时，请求格式为multipart。</param>
    /// <param name="externalImageId">用户指定的图片外部ID，与当前图像绑定。用户没提供，系统会生成一个。 该ID长度范围为1～36位，可以包含字母、数字、中划线或者下划线，不包含其他的特殊字符。 (optional, default to &quot;&quot;)</param>
    /// <param name="externalFields">根据用户自定义数据类型，填入相应的数值。 创建faceset时定义该字段，Json字符串不校验重复性，参考[自定义字段](https://support.huaweicloud.com/api-face/face_02_0012.html)。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<AddFacesByFileResponse> addFacesByFile(
        AddFacesByFileRequest &request
    );
    /// <summary>
    /// 添加人脸
    /// </summary>
    /// <remarks>
    /// 添加人脸到人脸库中，检测到传入的单张图片中存在多少张人脸，则增加多少张人脸到人脸库当中。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="addFacesUrlReq">This is a auto create Body Object</param>
    std::shared_ptr<AddFacesByUrlResponse> addFacesByUrl(
        AddFacesByUrlRequest &request
    );
    /// <summary>
    /// 批量删除人脸
    /// </summary>
    /// <remarks>
    /// 自定义筛选条件，批量删除人脸库中的符合指定条件的多张人脸。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="deleteFacesBatchReq">This is a auto create Body Object</param>
    std::shared_ptr<BatchDeleteFacesResponse> batchDeleteFaces(
        BatchDeleteFacesRequest &request
    );
    /// <summary>
    /// 人脸比对
    /// </summary>
    /// <remarks>
    /// 人脸比对是将两个人脸进行比对，来判断是否为同一个人，返回比对置信度。如果传入的图片中包含多个人脸，选取最大的人脸进行比对。
    /// </remarks>
    /// <param name="faceCompareBase64Req">This is a auto create Body Object</param>
    std::shared_ptr<CompareFaceByBase64Response> compareFaceByBase64(
        CompareFaceByBase64Request &request
    );
    /// <summary>
    /// 人脸比对
    /// </summary>
    /// <remarks>
    /// 人脸比对是将两个人脸进行比对，来判断是否为同一个人，返回比对置信度。如果传入的图片中包含多个人脸，选取最大的人脸进行比对。
    /// </remarks>
    /// <param name="image1File">本地图片文件，图片不能超过8MB。上传文件时，请求格式为multipart。</param>
    /// <param name="image2File">本地图片文件，图片不能超过8MB。上传文件时，请求格式为multipart。</param>
    std::shared_ptr<CompareFaceByFileResponse> compareFaceByFile(
        CompareFaceByFileRequest &request
    );
    /// <summary>
    /// 人脸比对
    /// </summary>
    /// <remarks>
    /// 人脸比对是将两个人脸进行比对，来判断是否为同一个人，返回比对置信度。如果传入的图片中包含多个人脸，选取最大的人脸进行比对。
    /// </remarks>
    /// <param name="faceCompareUrlReq">This is a auto create Body Object</param>
    std::shared_ptr<CompareFaceByUrlResponse> compareFaceByUrl(
        CompareFaceByUrlRequest &request
    );
    /// <summary>
    /// 创建人脸库
    /// </summary>
    /// <remarks>
    /// 创建用于存储人脸特征的人脸库。您最多可以创建10个人脸库，每个人脸库最大容量为10万个人脸特征。如有更大规格的需求请联系客服。
    /// </remarks>
    /// <param name="createFaceSetReq">This is a auto create Body Object</param>
    std::shared_ptr<CreateFaceSetResponse> createFaceSet(
        CreateFaceSetRequest &request
    );
    /// <summary>
    /// 删除人脸
    /// </summary>
    /// <remarks>
    /// 根据external_image_id删除人脸。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="externalImageId">external_image_id。</param>
    std::shared_ptr<DeleteFaceByExternalImageIdResponse> deleteFaceByExternalImageId(
        DeleteFaceByExternalImageIdRequest &request
    );
    /// <summary>
    /// 删除人脸
    /// </summary>
    /// <remarks>
    /// 根据face_id删除人脸。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="faceId">人脸ID。</param>
    std::shared_ptr<DeleteFaceByFaceIdResponse> deleteFaceByFaceId(
        DeleteFaceByFaceIdRequest &request
    );
    /// <summary>
    /// 删除人脸库
    /// </summary>
    /// <remarks>
    /// 删除人脸库以及其中所有的人脸。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    std::shared_ptr<DeleteFaceSetResponse> deleteFaceSet(
        DeleteFaceSetRequest &request
    );
    /// <summary>
    /// 人脸检测
    /// </summary>
    /// <remarks>
    /// 人脸检测是对输入图片进行人脸检测和分析，输出人脸在图像中的位置、人脸关键点位置和人脸关键属性。
    /// </remarks>
    /// <param name="faceDetectBase64Req">This is a auto create Body Object</param>
    std::shared_ptr<DetectFaceByBase64Response> detectFaceByBase64(
        DetectFaceByBase64Request &request
    );
    /// <summary>
    /// 人脸检测
    /// </summary>
    /// <remarks>
    /// 人脸检测是对输入图片进行人脸检测和分析，输出人脸在图像中的位置、人脸关键点位置和人脸关键属性。
    /// </remarks>
    /// <param name="imageFile">本地图片文件，图片不能超过8MB。上传文件时，请求格式为multipart。</param>
    /// <param name="attributes">是否返回人脸属性，希望获取的属性列表，多个属性间使用逗号（,）隔开。目前支持的属性有： • 1：性别 • 2：年龄 • 4：装束（帽子、眼镜） • 6：口罩 • 7：发型 • 8：胡须 • 9：肤色 • 10：民族 • 11：图片类型 • 12：质量 • 13：表情 • 21：人脸图片旋转角（顺时针偏转角度），支持0°、90°、180°和270°图片旋转 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<DetectFaceByFileResponse> detectFaceByFile(
        DetectFaceByFileRequest &request
    );
    /// <summary>
    /// 人脸检测
    /// </summary>
    /// <remarks>
    /// 人脸检测是对输入图片进行人脸检测和分析，输出人脸在图像中的位置、人脸关键点位置和人脸关键属性。
    /// </remarks>
    /// <param name="faceDetectUrlReq">This is a auto create Body Object</param>
    std::shared_ptr<DetectFaceByUrlResponse> detectFaceByUrl(
        DetectFaceByUrlRequest &request
    );
    /// <summary>
    /// 动作活体检测
    /// </summary>
    /// <remarks>
    /// 动作活体检测是通过判断视频中的人物动作与传入动作列表是否一致来识别视频中人物是否为活体。如果有多张人脸出现，则选取最大的人脸进行判定。
    /// </remarks>
    /// <param name="liveDetectBase64Req">This is a auto create Body Object</param>
    std::shared_ptr<DetectLiveByBase64Response> detectLiveByBase64(
        DetectLiveByBase64Request &request
    );
    /// <summary>
    /// 动作活体检测
    /// </summary>
    /// <remarks>
    /// 动作活体检测是通过判断视频中的人物动作与传入动作列表是否一致来识别视频中人物是否为活体。如果有多张人脸出现，则选取最大的人脸进行判定。
    /// </remarks>
    /// <param name="videoFile">本地视频文件。上传文件时，请求格式为multipart。 视频要求： • 视频文件大小不超过8MB，建议客户端压缩到200KB~2MB。 • 限制视频时长1～15秒。 • 建议帧率10fps～30fps。 • 封装格式：mp4、avi、flv、webm、asf、mov。 • 视频编码格式： h261、h263、h264、hevc、vc1、vp8、vp9、wmv3。</param>
    /// <param name="actions">动作代码顺序列表，英文逗号（,）分隔。建议单动作，目前支持的动作有： • 1：左摇头 • 2：右摇头 • 3：点头 • 4：嘴部动作</param>
    /// <param name="actionTime">该参数为动作时间数组拼接的字符串，数组的长度和actions的数量一致，每一项代表了对应次序动作的起始时间和结束时间，单位为距视频开始的毫秒数。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<DetectLiveByFileResponse> detectLiveByFile(
        DetectLiveByFileRequest &request
    );
    /// <summary>
    /// 动作活体检测
    /// </summary>
    /// <remarks>
    /// 动作活体检测是通过判断视频中的人物动作与传入动作列表是否一致来识别视频中人物是否为活体。如果有多张人脸出现，则选取最大的人脸进行判定。
    /// </remarks>
    /// <param name="liveDetectUrlReq">This is a auto create Body Object</param>
    std::shared_ptr<DetectLiveByUrlResponse> detectLiveByUrl(
        DetectLiveByUrlRequest &request
    );
    /// <summary>
    /// 静默活体检测
    /// </summary>
    /// <remarks>
    /// 静默活体检测是基于人脸图片中可能存在的畸变、摩尔纹、反光、倒影、边框等信息，判断图片中的人脸是否来自于真人活体，有效抵御纸质翻拍照、电子翻拍照以及视频翻拍等各种攻击方式。静默活体检测支持单张图片，不支持多人脸图片。
    /// </remarks>
    /// <param name="liveDetectFaceBase64Req">This is a auto create Body Object</param>
    std::shared_ptr<DetectLiveFaceByBase64Response> detectLiveFaceByBase64(
        DetectLiveFaceByBase64Request &request
    );
    /// <summary>
    /// 静默活体检测
    /// </summary>
    /// <remarks>
    /// 静默活体检测是基于人脸图片中可能存在的畸变、摩尔纹、反光、倒影、边框等信息，判断图片中的人脸是否来自于真人活体，有效抵御纸质翻拍照、电子翻拍照以及视频翻拍等各种攻击方式。静默活体检测支持单张图片，不支持多人脸图片。
    /// </remarks>
    /// <param name="imageFile">本地图片文件。上传文件时，请求格式为multipart。</param>
    std::shared_ptr<DetectLiveFaceByFileResponse> detectLiveFaceByFile(
        DetectLiveFaceByFileRequest &request
    );
    /// <summary>
    /// 静默活体检测
    /// </summary>
    /// <remarks>
    /// 静默活体检测是基于人脸图片中可能存在的畸变、摩尔纹、反光、倒影、边框等信息，判断图片中的人脸是否来自于真人活体，有效抵御纸质翻拍照、电子翻拍照以及视频翻拍等各种攻击方式。静默活体检测支持单张图片，不支持多人脸图片。
    /// </remarks>
    /// <param name="liveDetectFaceUrlReq">This is a auto create Body Object</param>
    std::shared_ptr<DetectLiveFaceByUrlResponse> detectLiveFaceByUrl(
        DetectLiveFaceByUrlRequest &request
    );
    /// <summary>
    /// 人脸搜索
    /// </summary>
    /// <remarks>
    /// 人脸搜索是指在已有的人脸库中，查询与目标人脸相似的一张或者多张人脸，并返回相应的置信度。 支持传入图片或者faceID进行人脸搜索，如果传入的是多张人脸图片，选取图片中检测到的最大尺寸人脸作为检索的输入。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="faceSearchBase64Req">This is a auto create Body Object</param>
    std::shared_ptr<SearchFaceByBase64Response> searchFaceByBase64(
        SearchFaceByBase64Request &request
    );
    /// <summary>
    /// 人脸搜索
    /// </summary>
    /// <remarks>
    /// 人脸搜索是指在已有的人脸库中，查询与目标人脸相似的一张或者多张人脸，并返回相应的置信度。 支持传入图片或者faceID进行人脸搜索，如果传入的是多张人脸图片，选取图片中检测到的最大尺寸人脸作为检索的输入。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="faceSearchFaceIdReq">This is a auto create Body Object</param>
    std::shared_ptr<SearchFaceByFaceIdResponse> searchFaceByFaceId(
        SearchFaceByFaceIdRequest &request
    );
    /// <summary>
    /// 人脸搜索
    /// </summary>
    /// <remarks>
    /// 人脸搜索是指在已有的人脸库中，查询与目标人脸相似的一张或者多张人脸，并返回相应的置信度。 支持传入图片或者faceID进行人脸搜索，如果传入的是多张人脸图片，选取图片中检测到的最大尺寸人脸作为检索的输入。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="imageFile">本地图片文件，图片不能超过8MB,建议小于1MB。上传文件时，请求格式为multipart。  必选，与image_url、image_base64、face_id四选一。</param>
    /// <param name="topN">返回查询到的最相似的N张人脸，N默认为10。 (optional, default to 0)</param>
    /// <param name="threshold">人脸相似度阈值，低于这个阈值则不返回，取值范围0~1，一般情况下建议取值0.93，默认为0。 (optional, default to 0.0)</param>
    /// <param name="sort">支持字段排序，参考[sort语法](https://support.huaweicloud.com/api-face/face_02_0013.html)。 (optional, default to &quot;&quot;)</param>
    /// <param name="filter">过滤条件，参考[filter语法](https://support.huaweicloud.com/api-face/face_02_0014.html)。 (optional, default to &quot;&quot;)</param>
    /// <param name="returnFields">指定返回的自定义字段。 (optional, default to &quot;&quot;)</param>
    std::shared_ptr<SearchFaceByFileResponse> searchFaceByFile(
        SearchFaceByFileRequest &request
    );
    /// <summary>
    /// 人脸搜索
    /// </summary>
    /// <remarks>
    /// 人脸搜索是指在已有的人脸库中，查询与目标人脸相似的一张或者多张人脸，并返回相应的置信度。 支持传入图片或者faceID进行人脸搜索，如果传入的是多张人脸图片，选取图片中检测到的最大尺寸人脸作为检索的输入。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="faceSearchUrlReq">This is a auto create Body Object</param>
    std::shared_ptr<SearchFaceByUrlResponse> searchFaceByUrl(
        SearchFaceByUrlRequest &request
    );
    /// <summary>
    /// 查询所有人脸库
    /// </summary>
    /// <remarks>
    /// 查询当前用户所有人脸库的状态信息。
    /// </remarks>
    std::shared_ptr<ShowAllFaceSetsResponse> showAllFaceSets(
        ShowAllFaceSetsRequest &request
    );
    /// <summary>
    /// 查询人脸库
    /// </summary>
    /// <remarks>
    /// 查询人脸库当前的状态。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    std::shared_ptr<ShowFaceSetResponse> showFaceSet(
        ShowFaceSetRequest &request
    );
    /// <summary>
    /// 查询人脸
    /// </summary>
    /// <remarks>
    /// 查询指定人脸库中人脸信息。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="faceId">人脸ID。</param>
    std::shared_ptr<ShowFacesByFaceIdResponse> showFacesByFaceId(
        ShowFacesByFaceIdRequest &request
    );
    /// <summary>
    /// 查询人脸
    /// </summary>
    /// <remarks>
    /// 查询指定人脸库中人脸信息。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="offset">从第几条数据读起，默认为0。</param>
    /// <param name="limit">读取多少条，默认为5。</param>
    std::shared_ptr<ShowFacesByLimitResponse> showFacesByLimit(
        ShowFacesByLimitRequest &request
    );
    /// <summary>
    /// 更新人脸
    /// </summary>
    /// <remarks>
    /// 根据人脸ID（face_id）更新单张人脸信息。
    /// </remarks>
    /// <param name="faceSetName">人脸库名称。</param>
    /// <param name="updateFaceReq">This is a auto create Body Object</param>
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

