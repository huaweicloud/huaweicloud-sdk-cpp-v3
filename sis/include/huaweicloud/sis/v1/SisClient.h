#ifndef HUAWEICLOUD_SDK_SIS_V1_SisClient_H_
#define HUAWEICLOUD_SDK_SIS_V1_SisClient_H_

#include <huaweicloud/sis/v1/SisExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/sis/v1/model/CollectTranscriberJobRequest.h>
#include <huaweicloud/sis/v1/model/CollectTranscriberJobResponse.h>
#include <huaweicloud/sis/v1/model/CreateVocabularyRequest.h>
#include <huaweicloud/sis/v1/model/CreateVocabularyResponse.h>
#include <huaweicloud/sis/v1/model/DeleteVocabularyRequest.h>
#include <huaweicloud/sis/v1/model/DeleteVocabularyResponse.h>
#include <huaweicloud/sis/v1/model/PostCreateVocabReq.h>
#include <huaweicloud/sis/v1/model/PostCustomTTSReq.h>
#include <huaweicloud/sis/v1/model/PostMultiModalAssessmentReq.h>
#include <huaweicloud/sis/v1/model/PostShortAudioAssessmentReq.h>
#include <huaweicloud/sis/v1/model/PostShortAudioReq.h>
#include <huaweicloud/sis/v1/model/PostTranscriberJobs.h>
#include <huaweicloud/sis/v1/model/PushTranscriberJobsRequest.h>
#include <huaweicloud/sis/v1/model/PushTranscriberJobsResponse.h>
#include <huaweicloud/sis/v1/model/PutUpdateVocabReq.h>
#include <huaweicloud/sis/v1/model/RecognizeFlashAsrRequest.h>
#include <huaweicloud/sis/v1/model/RecognizeFlashAsrResponse.h>
#include <huaweicloud/sis/v1/model/RecognizeShortAudioRequest.h>
#include <huaweicloud/sis/v1/model/RecognizeShortAudioResponse.h>
#include <huaweicloud/sis/v1/model/RunAudioAssessmentRequest.h>
#include <huaweicloud/sis/v1/model/RunAudioAssessmentResponse.h>
#include <huaweicloud/sis/v1/model/RunMultiModalAssessmentRequest.h>
#include <huaweicloud/sis/v1/model/RunMultiModalAssessmentResponse.h>
#include <huaweicloud/sis/v1/model/RunTtsRequest.h>
#include <huaweicloud/sis/v1/model/RunTtsResponse.h>
#include <huaweicloud/sis/v1/model/ShowVocabulariesParams.h>
#include <huaweicloud/sis/v1/model/ShowVocabulariesRequest.h>
#include <huaweicloud/sis/v1/model/ShowVocabulariesResponse.h>
#include <huaweicloud/sis/v1/model/ShowVocabularyRequest.h>
#include <huaweicloud/sis/v1/model/ShowVocabularyResponse.h>
#include <huaweicloud/sis/v1/model/UpdateVocabularyRequest.h>
#include <huaweicloud/sis/v1/model/UpdateVocabularyResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Sis::V1::Model;

class HUAWEICLOUD_SIS_V1_EXPORT  SisClient : public Client
{
public:

    SisClient();

    virtual ~SisClient();

    static ClientBuilder<SisClient> newBuilder();

    // 获取录音文件识别结果
    //
    // 该接口用于获取录音文件识别结果及识别状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CollectTranscriberJobResponse> collectTranscriberJob(
        CollectTranscriberJobRequest &request
    );
    // 创建热词表
    //
    // 新建一个热词表，创建成功返回id。每个用户限制创建10个热词表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVocabularyResponse> createVocabulary(
        CreateVocabularyRequest &request
    );
    // 删除热词表
    //
    // 通过热词表id删除热词表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteVocabularyResponse> deleteVocabulary(
        DeleteVocabularyRequest &request
    );
    // 提交录音文件识别任务
    //
    // **录音文件识别**
    // 录音文件识别接口，用于识别长录音文件，录音文件放在华为云OBS（对象存储服务）上。
    // 
    // 由于录音文件识别通常会需要较长的时间，因此识别是异步的，也即接口分为创建识别任务和查询任务状态两个接口。创建识别任务接口创建任务完成后返回，然后用户通过调用查询任务状态接口来获得转写状态和结果。
    // 
    // **功能介绍**
    // 该接口用于提交录音文件识别任务，其中录音文件保存在用户的OBS桶中。用户开通录音识别服务时，需授权录音文件引擎读取用户OBS桶权限。
    // 
    // 接口约束
    // 录音时长不超过5小时，文件大小不超过300M，识别结果保存72小时（从识别完成的时间算起）。72小时后如果再访问，将会返回 \&quot;task id is not found\&quot;错误。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PushTranscriberJobsResponse> pushTranscriberJobs(
        PushTranscriberJobsRequest &request
    );
    // 录音文件识别极速版
    //
    // 极速版ASR(Restful API 接口, 适用于音频(文件大小&lt;&#x3D;100M,语音时长&lt;&#x3D;30分钟)文件的同步识别。
    // 此接口以POST方式一次性上传整个音频或从华为OBS中下载音频， 识别结果将在请求响应中即刻返回，用于语音文件极速转写，质检分析的离线场景。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeFlashAsrResponse> recognizeFlashAsr(
        RecognizeFlashAsrRequest &request
    );
    // 一句话识别
    //
    // 一句话识别接口，用于短语音的同步识别。一次性上传整个音频，响应中即返回识别结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RecognizeShortAudioResponse> recognizeShortAudio(
        RecognizeShortAudioRequest &request
    );
    // 语音评测
    //
    // 口语评测接口，基于一小段朗读语音和预期文本，评价朗读者发音质量。当前仅支持华北-北京四。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunAudioAssessmentResponse> runAudioAssessment(
        RunAudioAssessmentRequest &request
    );
    // 多模态评测
    //
    // 多模态评测接口，根据朗读视频数据、视频对应的音频数据和试题文本，综合给出朗读者口语的评测分数。当前仅支持华北-北京四。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunMultiModalAssessmentResponse> runMultiModalAssessment(
        RunMultiModalAssessmentRequest &request
    );
    // 语音合成
    //
    // 语音合成，是一种将文本转换成逼真语音的服务。用户通过实时访问和调用API获取语音合成结果，将用户输入的文字合成为音频。通过音色选择、自定义音量、语速，为企业和个人提供个性化的发音服务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunTtsResponse> runTts(
        RunTtsRequest &request
    );
    // 查询热词表列表
    //
    // 查询用户所有热词表列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVocabulariesResponse> showVocabularies(
        ShowVocabulariesRequest &request
    );
    // 查询热词表信息
    //
    // 通过热词表id查询热词表的信息和内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowVocabularyResponse> showVocabulary(
        ShowVocabularyRequest &request
    );
    // 更新热词表
    //
    // 更新一个热词表，更新成功返回id。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateVocabularyResponse> updateVocabulary(
        UpdateVocabularyRequest &request
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

template class HUAWEICLOUD_SIS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Sis::V1::SisClient>;

#endif // HUAWEICLOUD_SDK_SIS_V1_SisClient_H_

