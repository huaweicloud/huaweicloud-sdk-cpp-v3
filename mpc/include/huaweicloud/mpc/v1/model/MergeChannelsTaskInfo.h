
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MergeChannelsTaskInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MergeChannelsTaskInfo_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/BasicTaskInfo.h>
#include <huaweicloud/mpc/v1/model/ObsObjInfo.h>
#include <string>
#include <huaweicloud/mpc/v1/model/AudioFile.h>
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
class HUAWEICLOUD_MPC_V1_EXPORT  MergeChannelsTaskInfo
    : public ModelBase
{
public:
    MergeChannelsTaskInfo();
    virtual ~MergeChannelsTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeChannelsTaskInfo members

    /// <summary>
    /// 任务Id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 任务执行状态，取值如下。 \&quot;NO_TASK\&quot;      //无任务，task_id非法 \&quot;WAITING\&quot;      //等待启动 \&quot;PROCESSING\&quot;   //处理中 \&quot;SUCCEEDED\&quot;    //成功 \&quot;FAILED\&quot;       //失败 \&quot;CANCELED\&quot;     //已删除 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务启动时间 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 任务结束时间 
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ObsObjInfo getOutput() const;
    bool outputIsSet() const;
    void unsetoutput();
    void setOutput(const ObsObjInfo& value);

    /// <summary>
    /// 任务描述，当出现异常时，此字段为异常的原因。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 音频文件列表
    /// </summary>

    std::vector<AudioFile>& getAudioFiles();
    bool audioFilesIsSet() const;
    void unsetaudioFiles();
    void setAudioFiles(const std::vector<AudioFile>& value);

    /// <summary>
    /// 输出文件名。
    /// </summary>

    std::string getOutputFilename() const;
    bool outputFilenameIsSet() const;
    void unsetoutputFilename();
    void setOutputFilename(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    ObsObjInfo output_;
    bool outputIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<AudioFile> audioFiles_;
    bool audioFilesIsSet_;
    std::string outputFilename_;
    bool outputFilenameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MergeChannelsTaskInfo_H_
