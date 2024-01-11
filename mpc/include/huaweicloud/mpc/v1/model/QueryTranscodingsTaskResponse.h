
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_QueryTranscodingsTaskResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_QueryTranscodingsTaskResponse_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/AvParameters.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <huaweicloud/mpc/v1/model/TranscodeDetail.h>
#include <string>
#include <huaweicloud/mpc/v1/model/PicInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  QueryTranscodingsTaskResponse
    : public ModelBase
{
public:
    QueryTranscodingsTaskResponse();
    virtual ~QueryTranscodingsTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryTranscodingsTaskResponse members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务执行状态。 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务执行进度百分比, 取值范围：[0, 100]。 
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 转码任务启动时间 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 转码任务结束时间 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 转码任务对应的转码模板ID 
    /// </summary>

    std::vector<int32_t>& getTransTemplateId();
    bool transTemplateIdIsSet() const;
    void unsettransTemplateId();
    void setTransTemplateId(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getInput() const;
    bool inputIsSet() const;
    void unsetinput();
    void setInput(const ObsObjInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 转码生成的文件名，数组类型，可能包含多个，包含截图文件名。 
    /// </summary>

    std::vector<std::string>& getOutputFileName();
    bool outputFileNameIsSet() const;
    void unsetoutputFileName();
    void setOutputFileName(const std::vector<std::string>& value);

    /// <summary>
    /// 用户自定义数据。 
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 转码任务的返回码。 
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 转码任务描述，当转码出现异常时，此字段为异常的原因。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 转码成功，但音频采样率过低时的提示。 
    /// </summary>

    std::string getTips() const;
    bool tipsIsSet() const;
    void unsettips();
    void setTips(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TranscodeDetail getTranscodeDetail() const;
    bool transcodeDetailIsSet() const;
    void unsettranscodeDetail();
    void setTranscodeDetail(const TranscodeDetail& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getThumbnailOutput() const;
    bool thumbnailOutputIsSet() const;
    void unsetthumbnailOutput();
    void setThumbnailOutput(const ObsObjInfo& value);

    /// <summary>
    /// 截图压缩包名。 
    /// </summary>

    std::string getThumbnailOutputname() const;
    bool thumbnailOutputnameIsSet() const;
    void unsetthumbnailOutputname();
    void setThumbnailOutputname(const std::string& value);

    /// <summary>
    /// 截图文件信息。 
    /// </summary>

    std::vector<PicInfo>& getPicInfo();
    bool picInfoIsSet() const;
    void unsetpicInfo();
    void setPicInfo(const std::vector<PicInfo>& value);

    /// <summary>
    /// 转码参数。  若同时设置“trans_template_id”和此参数，则优先使用此参数进行转码。 
    /// </summary>

    std::vector<AvParameters>& getAvParameters();
    bool avParametersIsSet() const;
    void unsetavParameters();
    void setAvParameters(const std::vector<AvParameters>& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::vector<int32_t> transTemplateId_;
    bool transTemplateIdIsSet_;
    ObsObjInfo input_;
    bool inputIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::vector<std::string> outputFileName_;
    bool outputFileNameIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string tips_;
    bool tipsIsSet_;
    TranscodeDetail transcodeDetail_;
    bool transcodeDetailIsSet_;
    ObsObjInfo thumbnailOutput_;
    bool thumbnailOutputIsSet_;
    std::string thumbnailOutputname_;
    bool thumbnailOutputnameIsSet_;
    std::vector<PicInfo> picInfo_;
    bool picInfoIsSet_;
    std::vector<AvParameters> avParameters_;
    bool avParametersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_QueryTranscodingsTaskResponse_H_
