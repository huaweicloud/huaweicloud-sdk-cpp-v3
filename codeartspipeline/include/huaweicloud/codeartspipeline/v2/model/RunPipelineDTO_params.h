
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineDTO_params_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineDTO_params_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/RunPipelineDTO_params_build_params.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 流水线源相关参数。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  RunPipelineDTO_params
    : public ModelBase
{
public:
    RunPipelineDTO_params();
    virtual ~RunPipelineDTO_params();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RunPipelineDTO_params members

    /// <summary>
    /// **参数解释**： 代码仓类型。 **约束限制**： 不涉及。 **取值范围**： - codehub。 - gitee。 - github。 - gitcode。 - gitlab。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGitType() const;
    bool gitTypeIsSet() const;
    void unsetgitType();
    void setGitType(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码仓别名，用户自定义，用于多仓时帮助区分系统参数。例如：A_REPO_COMMIT_ID，B_REPO_COMMIT_ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// **参数解释**： CodeArts Repo代码仓ID。可以通过代码仓查询接口获取，代码仓的唯一标识。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCodehubId() const;
    bool codehubIdIsSet() const;
    void unsetcodehubId();
    void setCodehubId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线执行时代码仓默认分支。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDefaultBranch() const;
    bool defaultBranchIsSet() const;
    void unsetdefaultBranch();
    void setDefaultBranch(const std::string& value);

    /// <summary>
    /// **参数解释**： Git仓库https地址，例如https://example.com/CloudPipelinezycs00001/2000.git。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码源扩展点ID。可以通过[查询扩展点列表接口](ListEndpointsDetails.xml)获取，其中endpoints.uuid即为扩展点的唯一标识。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getEndpointId() const;
    bool endpointIdIsSet() const;
    void unsetendpointId();
    void setEndpointId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RunPipelineDTO_params_build_params getBuildParams() const;
    bool buildParamsIsSet() const;
    void unsetbuildParams();
    void setBuildParams(const RunPipelineDTO_params_build_params& value);

    /// <summary>
    /// **参数解释**： 执行变更流水线变更ID列表。可以通过[查询变更列表](ListChangeRequests.xml)接口，其中data.id即为变更ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getChangeRequestIds();
    bool changeRequestIdsIsSet() const;
    void unsetchangeRequestIds();
    void setChangeRequestIds(const std::vector<std::string>& value);


protected:
    std::string gitType_;
    bool gitTypeIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    std::string codehubId_;
    bool codehubIdIsSet_;
    std::string defaultBranch_;
    bool defaultBranchIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string endpointId_;
    bool endpointIdIsSet_;
    RunPipelineDTO_params_build_params buildParams_;
    bool buildParamsIsSet_;
    std::vector<std::string> changeRequestIds_;
    bool changeRequestIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_RunPipelineDTO_params_H_
