
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_HistoryRecord_1_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_HistoryRecord_1_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  HistoryRecord_1
    : public ModelBase
{
public:
    HistoryRecord_1();
    virtual ~HistoryRecord_1();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// HistoryRecord_1 members

    /// <summary>
    /// 构建记录id--唯一key
    /// </summary>

    std::string getRecordId() const;
    bool recordIdIsSet() const;
    void unsetrecordId();
    void setRecordId(const std::string& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 构建编号
    /// </summary>

    int32_t getBuildNumber() const;
    bool buildNumberIsSet() const;
    void unsetbuildNumber();
    void setBuildNumber(int32_t value);

    /// <summary>
    /// 构建开始时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 构建结束时间
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 构建结果
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 代码分支
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 代码提交的commit id
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// 代码提交时用户输入的提交信息，只有使用codehub仓库时有值
    /// </summary>

    std::string getCommitMessage() const;
    bool commitMessageIsSet() const;
    void unsetcommitMessage();
    void setCommitMessage(const std::string& value);

    /// <summary>
    /// 执行构建任务的用户的用户名
    /// </summary>

    std::string getExecutor() const;
    bool executorIsSet() const;
    void unsetexecutor();
    void setExecutor(const std::string& value);

    /// <summary>
    /// 触发方式，可选值：手工触发，定时触发，代码更新触发，流水线触发
    /// </summary>

    std::string getTriggerType() const;
    bool triggerTypeIsSet() const;
    void unsettriggerType();
    void setTriggerType(const std::string& value);


protected:
    std::string recordId_;
    bool recordIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t buildNumber_;
    bool buildNumberIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    std::string commitMessage_;
    bool commitMessageIsSet_;
    std::string executor_;
    bool executorIsSet_;
    std::string triggerType_;
    bool triggerTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_HistoryRecord_1_H_
