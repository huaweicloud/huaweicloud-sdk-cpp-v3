
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineSource_params_build_params_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineSource_params_build_params_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 构建相关参数。 **取值范围**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RunPipelineSource_params_build_params
    : public ModelBase
{
public:
    RunPipelineSource_params_build_params();
    virtual ~RunPipelineSource_params_build_params();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunPipelineSource_params_build_params members

    /// <summary>
    /// **参数解释**： 合并请求事件类型 **取值范围**： - open：打开。 - reopen：重开。 - update：更新。 - merge：合并。 
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释**： 基于分支还是tag运行。 **取值范围**： - branch：分支触发。 - tag：标签触发。 
    /// </summary>

    std::string getBuildType() const;
    bool buildTypeIsSet() const;
    void unsetbuildType();
    void setBuildType(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓提交ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// **参数解释**： CodeArts项目ID。 **取值范围**： - Manual：手动触发。 - Scheduler：定时任务。 - MR：MR触发。 - Push：Push事件触发。 - CreateTag：Tag事件触发。 - Issue：Issue触发。 - Note：评论触发。 
    /// </summary>

    std::string getEventType() const;
    bool eventTypeIsSet() const;
    void unseteventType();
    void setEventType(const std::string& value);

    /// <summary>
    /// **参数解释**： 合并请求ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getMergeId() const;
    bool mergeIdIsSet() const;
    void unsetmergeId();
    void setMergeId(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓提交信息。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释**： 源分支。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSourceBranch() const;
    bool sourceBranchIsSet() const;
    void unsetsourceBranch();
    void setSourceBranch(const std::string& value);

    /// <summary>
    /// **参数解释**： 标签。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// **参数解释**： 目标分支。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getTargetBranch() const;
    bool targetBranchIsSet() const;
    void unsettargetBranch();
    void setTargetBranch(const std::string& value);

    /// <summary>
    /// **参数解释**： Repo代码仓ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCodehubId() const;
    bool codehubIdIsSet() const;
    void unsetcodehubId();
    void setCodehubId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源Repo代码仓ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSourceCodehubId() const;
    bool sourceCodehubIdIsSet() const;
    void unsetsourceCodehubId();
    void setSourceCodehubId(const std::string& value);

    /// <summary>
    /// **参数解释**： 源Repo代码仓地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSourceCodehubUrl() const;
    bool sourceCodehubUrlIsSet() const;
    void unsetsourceCodehubUrl();
    void setSourceCodehubUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 源Repo代码仓http地址。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getSourceCodehubHttpUrl() const;
    bool sourceCodehubHttpUrlIsSet() const;
    void unsetsourceCodehubHttpUrl();
    void setSourceCodehubHttpUrl(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string buildType_;
    bool buildTypeIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    std::string eventType_;
    bool eventTypeIsSet_;
    std::string mergeId_;
    bool mergeIdIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string sourceBranch_;
    bool sourceBranchIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string targetBranch_;
    bool targetBranchIsSet_;
    std::string codehubId_;
    bool codehubIdIsSet_;
    std::string sourceCodehubId_;
    bool sourceCodehubIdIsSet_;
    std::string sourceCodehubUrl_;
    bool sourceCodehubUrlIsSet_;
    std::string sourceCodehubHttpUrl_;
    bool sourceCodehubHttpUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineSource_params_build_params_H_
