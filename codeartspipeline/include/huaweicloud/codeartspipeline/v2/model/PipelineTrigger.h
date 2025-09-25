
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineTrigger_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineTrigger_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartspipeline/v2/model/CodeEvent.h>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  PipelineTrigger
    : public ModelBase
{
public:
    PipelineTrigger();
    virtual ~PipelineTrigger();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PipelineTrigger members

    /// <summary>
    /// **参数解释**： 流水线ID，可以通过[查询流水线列表](ListPipelines.xml)接口，其中pipelines.pipelineId即为流水线ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓git链接。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： git代码仓类型。 **约束限制**： 不涉及。 **取值范围**： - codehub。 - gitee。 - github。 - gitcode。 - gitlab。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGitType() const;
    bool gitTypeIsSet() const;
    void unsetgitType();
    void setGitType(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否自动提交。gitee仓库特有，webhook触发流水线后，自动添加评论。 **约束限制**： 不涉及。 **取值范围**： - true：是自动提交。 - false：不是自动提交。 **默认取值**： 不涉及。 
    /// </summary>

    bool isIsAutoCommit() const;
    bool isAutoCommitIsSet() const;
    void unsetisAutoCommit();
    void setIsAutoCommit(bool value);

    /// <summary>
    /// **参数解释**： 触发事件列表。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<CodeEvent>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<CodeEvent>& value);

    /// <summary>
    /// **参数解释**： 系统生成的回调ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getHookId() const;
    bool hookIdIsSet() const;
    void unsethookId();
    void setHookId(const std::string& value);

    /// <summary>
    /// **参数解释**： Repo仓库ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码源扩展点ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getEndpointId() const;
    bool endpointIdIsSet() const;
    void unsetendpointId();
    void setEndpointId(const std::string& value);

    /// <summary>
    /// **参数解释**： 回调链接，注册Webhook时生成。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户token，注册Webhook时生成。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getSecurityToken() const;
    bool securityTokenIsSet() const;
    void unsetsecurityToken();
    void setSecurityToken(const std::string& value);


protected:
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string gitType_;
    bool gitTypeIsSet_;
    bool isAutoCommit_;
    bool isAutoCommitIsSet_;
    std::vector<CodeEvent> events_;
    bool eventsIsSet_;
    std::string hookId_;
    bool hookIdIsSet_;
    std::string repoId_;
    bool repoIdIsSet_;
    std::string endpointId_;
    bool endpointIdIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string securityToken_;
    bool securityTokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_PipelineTrigger_H_
