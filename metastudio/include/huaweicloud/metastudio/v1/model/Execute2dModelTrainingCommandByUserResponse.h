
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Execute2dModelTrainingCommandByUserResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Execute2dModelTrainingCommandByUserResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/MultipartUploadInfo.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  Execute2dModelTrainingCommandByUserResponse
    : public ModelBase, public HttpResponse
{
public:
    Execute2dModelTrainingCommandByUserResponse();
    virtual ~Execute2dModelTrainingCommandByUserResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Execute2dModelTrainingCommandByUserResponse members

    /// <summary>
    /// 命令执行结果。 * EXCUTE_SUCCESS: 命令提交成功 * EXCUTE_FAILED: 命令提交失败
    /// </summary>

    std::string getCommondResult() const;
    bool commondResultIsSet() const;
    void unsetcommondResult();
    void setCommondResult(const std::string& value);

    /// <summary>
    /// 附件上传地址
    /// </summary>

    std::vector<std::string>& getAttachmentUploadUrl();
    bool attachmentUploadUrlIsSet() const;
    void unsetattachmentUploadUrl();
    void setAttachmentUploadUrl(const std::vector<std::string>& value);

    /// <summary>
    /// 训练视频已上传分片信息
    /// </summary>

    std::vector<MultipartUploadInfo>& getMultipartData();
    bool multipartDataIsSet() const;
    void unsetmultipartData();
    void setMultipartData(const std::vector<MultipartUploadInfo>& value);

    /// <summary>
    /// 命令执行失败原因描述
    /// </summary>

    std::string getExcuteFailedMsg() const;
    bool excuteFailedMsgIsSet() const;
    void unsetexcuteFailedMsg();
    void setExcuteFailedMsg(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string commondResult_;
    bool commondResultIsSet_;
    std::vector<std::string> attachmentUploadUrl_;
    bool attachmentUploadUrlIsSet_;
    std::vector<MultipartUploadInfo> multipartData_;
    bool multipartDataIsSet_;
    std::string excuteFailedMsg_;
    bool excuteFailedMsgIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_Execute2dModelTrainingCommandByUserResponse_H_
