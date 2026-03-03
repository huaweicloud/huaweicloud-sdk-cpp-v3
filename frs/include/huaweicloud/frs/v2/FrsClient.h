#ifndef HUAWEICLOUD_SDK_FRS_V2_FrsClient_H_
#define HUAWEICLOUD_SDK_FRS_V2_FrsClient_H_

#include <huaweicloud/frs/v2/FrsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


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
#include <huaweicloud/frs/v2/model/DeleteFaceSetRequest.h>
#include <huaweicloud/frs/v2/model/DeleteFaceSetResponse.h>
#include <huaweicloud/frs/v2/model/DeleteFacesBatchReq.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByBase64Request.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByBase64Response.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByFileRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByFileRequestBody.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByFileResponse.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByUrlRequest.h>
#include <huaweicloud/frs/v2/model/DetectLiveFaceByUrlResponse.h>
#include <huaweicloud/frs/v2/model/FaceCompareBase64Req.h>
#include <huaweicloud/frs/v2/model/FaceCompareUrlReq.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/frs/v2/model/LiveDetectFaceBase64Req.h>
#include <huaweicloud/frs/v2/model/LiveDetectFaceUrlReq.h>
#include <huaweicloud/frs/v2/model/ShowAllFaceSetsRequest.h>
#include <huaweicloud/frs/v2/model/ShowAllFaceSetsResponse.h>
#include <huaweicloud/frs/v2/model/ShowFaceSetRequest.h>
#include <huaweicloud/frs/v2/model/ShowFaceSetResponse.h>
#include <huaweicloud/frs/v2/model/ShowFacesByFaceIdRequest.h>
#include <huaweicloud/frs/v2/model/ShowFacesByFaceIdResponse.h>
#include <huaweicloud/frs/v2/model/ShowFacesByLimitRequest.h>
#include <huaweicloud/frs/v2/model/ShowFacesByLimitResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
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

    // 批量删除人脸
    //
    // 自定义筛选条件，批量删除人脸库中的符合指定条件的多张人脸。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteFacesResponse> batchDeleteFaces(
        BatchDeleteFacesRequest &request
    );
    // 人脸比对
    //
    // 人脸比对是将两个人脸进行比对，来判断是否为同一个人，返回比对置信度。如果传入的图片中包含多个人脸，选取最大的人脸进行比对。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CompareFaceByBase64Response> compareFaceByBase64(
        CompareFaceByBase64Request &request
    );
    // 人脸比对
    //
    // 人脸比对是将两个人脸进行比对，来判断是否为同一个人，返回比对置信度。如果传入的图片中包含多个人脸，选取最大的人脸进行比对。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CompareFaceByFileResponse> compareFaceByFile(
        CompareFaceByFileRequest &request
    );
    // 人脸比对
    //
    // 人脸比对是将两个人脸进行比对，来判断是否为同一个人，返回比对置信度。如果传入的图片中包含多个人脸，选取最大的人脸进行比对。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CompareFaceByUrlResponse> compareFaceByUrl(
        CompareFaceByUrlRequest &request
    );
    // 创建人脸库
    //
    // 创建用于存储人脸特征的人脸库。您最多可以创建10个人脸库，每个人脸库最大容量为10万个人脸特征。如有更大规格的需求请联系客服。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateFaceSetResponse> createFaceSet(
        CreateFaceSetRequest &request
    );
    // 删除人脸库
    //
    // 删除人脸库以及其中所有的人脸。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFaceSetResponse> deleteFaceSet(
        DeleteFaceSetRequest &request
    );
    // 静默活体检测
    //
    // 静默活体检测是基于人脸图片中可能存在的畸变、摩尔纹、反光、倒影、边框等信息，判断图片中的人脸是否来自于真人活体，有效抵御纸质翻拍照、电子翻拍照以及视频翻拍等各种攻击方式。静默活体检测支持单张图片，不支持多人脸图片。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetectLiveFaceByBase64Response> detectLiveFaceByBase64(
        DetectLiveFaceByBase64Request &request
    );
    // 静默活体检测
    //
    // 静默活体检测是基于人脸图片中可能存在的畸变、摩尔纹、反光、倒影、边框等信息，判断图片中的人脸是否来自于真人活体，有效抵御纸质翻拍照、电子翻拍照以及视频翻拍等各种攻击方式。静默活体检测支持单张图片，不支持多人脸图片。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetectLiveFaceByFileResponse> detectLiveFaceByFile(
        DetectLiveFaceByFileRequest &request
    );
    // 静默活体检测
    //
    // 静默活体检测是基于人脸图片中可能存在的畸变、摩尔纹、反光、倒影、边框等信息，判断图片中的人脸是否来自于真人活体，有效抵御纸质翻拍照、电子翻拍照以及视频翻拍等各种攻击方式。静默活体检测支持单张图片，不支持多人脸图片。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DetectLiveFaceByUrlResponse> detectLiveFaceByUrl(
        DetectLiveFaceByUrlRequest &request
    );
    // 查询所有人脸库
    //
    // 查询当前用户所有人脸库的状态信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAllFaceSetsResponse> showAllFaceSets(
        ShowAllFaceSetsRequest &request
    );
    // 查询人脸库
    //
    // 查询人脸库当前的状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFaceSetResponse> showFaceSet(
        ShowFaceSetRequest &request
    );
    // 查询人脸
    //
    // 查询指定人脸库中人脸信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFacesByFaceIdResponse> showFacesByFaceId(
        ShowFacesByFaceIdRequest &request
    );
    // 查询人脸
    //
    // 查询指定人脸库中人脸信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFacesByLimitResponse> showFacesByLimit(
        ShowFacesByLimitRequest &request
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

template class HUAWEICLOUD_FRS_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Frs::V2::FrsClient>;

#endif // HUAWEICLOUD_SDK_FRS_V2_FrsClient_H_

