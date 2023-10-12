
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_TakeOverTask_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_TakeOverTask_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  TakeOverTask
    : public ModelBase
{
public:
    TakeOverTask();
    virtual ~TakeOverTask();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TakeOverTask members

    /// <summary>
    /// 桶名。
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 目录/文件名。
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);

    /// <summary>
    /// 托管类型。  取值如下： - 0：表示存储到点播桶 - 1：表示存储在租户桶 - 2：表示存储到租户OBS桶中，且输出目录与源文件的存储目录相同。
    /// </summary>

    int32_t getHostType() const;
    bool hostTypeIsSet() const;
    void unsethostType();
    void setHostType(int32_t value);

    /// <summary>
    /// 输出桶 。
    /// </summary>

    std::string getOutputBucket() const;
    bool outputBucketIsSet() const;
    void unsetoutputBucket();
    void setOutputBucket(const std::string& value);

    /// <summary>
    /// 输出路径 。
    /// </summary>

    std::string getOutputPath() const;
    bool outputPathIsSet() const;
    void unsetoutputPath();
    void setOutputPath(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 托管文件类型。
    /// </summary>

    std::vector<std::string>& getSuffix();
    bool suffixIsSet() const;
    void unsetsuffix();
    void setSuffix(const std::vector<std::string>& value);

    /// <summary>
    /// 转码模板组 。
    /// </summary>

    std::string getTemplateGroupName() const;
    bool templateGroupNameIsSet() const;
    void unsettemplateGroupName();
    void setTemplateGroupName(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 任务状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 媒资的任务执行描述汇总。
    /// </summary>

    std::string getExecDesc() const;
    bool execDescIsSet() const;
    void unsetexecDesc();
    void setExecDesc(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string object_;
    bool objectIsSet_;
    int32_t hostType_;
    bool hostTypeIsSet_;
    std::string outputBucket_;
    bool outputBucketIsSet_;
    std::string outputPath_;
    bool outputPathIsSet_;
    std::string taskId_;
    bool taskIdIsSet_;
    std::vector<std::string> suffix_;
    bool suffixIsSet_;
    std::string templateGroupName_;
    bool templateGroupNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string execDesc_;
    bool execDescIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_TakeOverTask_H_
