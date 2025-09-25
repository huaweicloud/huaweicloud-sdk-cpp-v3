
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineBasicInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineBasicInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineBasicInfo
    : public ModelBase
{
public:
    PipelineBasicInfo();
    virtual ~PipelineBasicInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineBasicInfo members

    /// <summary>
    /// **参数解释**： 项目id。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线id。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getPipelineName() const;
    bool pipelineNameIsSet() const;
    void unsetpipelineName();
    void setPipelineName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线创建人id。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getCreatorId() const;
    bool creatorIdIsSet() const;
    void unsetcreatorId();
    void setCreatorId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线创建人名字。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线执行人id。 **取值范围**： 32位字符，由数字和字母组成。 
    /// </summary>

    std::string getExecutorId() const;
    bool executorIdIsSet() const;
    void unsetexecutorId();
    void setExecutorId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线执行人名字。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getExecutorName() const;
    bool executorNameIsSet() const;
    void unsetexecutorName();
    void setExecutorName(const std::string& value);

    /// <summary>
    /// **参数解释**： 启动时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户是否关注流水线。 **取值范围**： - true：关注流水线。 - false：未关注流水线。 
    /// </summary>

    std::string getWatched() const;
    bool watchedIsSet() const;
    void unsetwatched();
    void setWatched(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string pipelineName_;
    bool pipelineNameIsSet_;
    std::string creatorId_;
    bool creatorIdIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string executorId_;
    bool executorIdIsSet_;
    std::string executorName_;
    bool executorNameIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string watched_;
    bool watchedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineBasicInfo_H_
