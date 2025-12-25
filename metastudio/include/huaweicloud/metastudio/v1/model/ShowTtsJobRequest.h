
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTtsJobRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTtsJobRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowTtsJobRequest
    : public ModelBase
{
public:
    ShowTtsJobRequest();
    virtual ~ShowTtsJobRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTtsJobRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带项目ID信息。
    /// </summary>

    std::string getXProjectId() const;
    bool xProjectIdIsSet() const;
    void unsetxProjectId();
    void setXProjectId(const std::string& value);

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 过滤创建时间&gt;&#x3D;输入时间的记录。
    /// </summary>

    std::string getCreateSince() const;
    bool createSinceIsSet() const;
    void unsetcreateSince();
    void setCreateSince(const std::string& value);

    /// <summary>
    /// 过滤创建时间&lt;&#x3D;输入时间的记录。
    /// </summary>

    std::string getCreateUntil() const;
    bool createUntilIsSet() const;
    void unsetcreateUntil();
    void setCreateUntil(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务类型。 * AUDITION：试听任务 * ASYNC_JOB：异步任务 * WEBSOCKET：websocket接口合成任务
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// tts版本。 * TTS_LLM: 530大模型（V7版本） * TTS_LLM_VC：530大模型VC版本（V7版本） * TTS_LAB：lab小模型（V5版本） * TTS_LAB_GPU：lab小模型GPU版本（V5版本） * GPU_CLONE：V4模型 * TTS_LLM_VQ：VQ模型（V10版本）
    /// </summary>

    std::string getTtsServiceEnum() const;
    bool ttsServiceEnumIsSet() const;
    void unsetttsServiceEnum();
    void setTtsServiceEnum(const std::string& value);

    /// <summary>
    /// 业务类型。
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string createSince_;
    bool createSinceIsSet_;
    std::string createUntil_;
    bool createUntilIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    std::string ttsServiceEnum_;
    bool ttsServiceEnumIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTtsJobRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTtsJobRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowTtsJobRequest_H_
