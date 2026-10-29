
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateTaskRequestV2_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateTaskRequestV2_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/RuleSetV2.h>
#include <string>
#include <huaweicloud/codeartscheck/v2/model/IncConfigV2.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  CreateTaskRequestV2
    : public ModelBase
{
public:
    CreateTaskRequestV2();
    virtual ~CreateTaskRequestV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTaskRequestV2 members

    /// <summary>
    /// **参数解释：** 代码仓地址。 **约束限制：** 不涉及。 **取值范围：** repo仓传以git开头的地址；非repo仓传以http开头的地址。 **默认取值：** 不涉及。
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// **参数解释：** 计划创建任务的对应代码仓的分支。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getGitBranch() const;
    bool gitBranchIsSet() const;
    void unsetgitBranch();
    void setGitBranch(const std::string& value);

    /// <summary>
    /// **参数解释：** 启用的检查语言，数组格式，支持的语言请关注服务更新特性文档。 **约束限制：** 与rule_sets 2选1使用。
    /// </summary>

    std::vector<std::string>& getLanguage();
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 启用的规则集，数组格式，当只传语言，不传规则集ID时，与language参数等效，启用这些语言在项目下的默认规则集，支持的语言请关注服务更新特性文档。 **约束限制：** 与language 2选1使用。
    /// </summary>

    std::vector<RuleSetV2>& getRuleSets();
    bool ruleSetsIsSet() const;
    void unsetruleSets();
    void setRuleSets(const std::vector<RuleSetV2>& value);

    /// <summary>
    /// **参数解释：** 任务类型。 **约束限制：** 不涉及。 **取值范围：** - full：代码仓分支对应的全量任务。 - inc：MR增量任务。 **默认取值：** full
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户名，与access_token联合使用，用于在创建三方仓时，由Check服务创建1个通用git扩展点，从而保存代码仓信息。 **约束限制：** username、access_token组合与endpoint_id 2选1使用。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数解释：** 密码或访问密钥/令牌，username，用于在创建三方仓时，由Check服务创建1个通用git扩展点，从而保存代码仓信息。 **约束限制：** username、access_token组合与endpoint_id 2选1使用。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAccessToken() const;
    bool accessTokenIsSet() const;
    void unsetaccessToken();
    void setAccessToken(const std::string& value);

    /// <summary>
    /// **参数解释：** 用户预先创建的项目下的代码源扩展点ID，保存了代码仓信息。创建第三方代码源任务，若未填写endpoint，会自动创建扩展点，需要账号有创建扩展点权限，且项目下扩展点未达到上限。 **约束限制：** username、access_token组合与endpoint_id 2选1使用。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getEndpointId() const;
    bool endpointIdIsSet() const;
    void unsetendpointId();
    void setEndpointId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IncConfigV2 getIncConfig() const;
    bool incConfigIsSet() const;
    void unsetincConfig();
    void setIncConfig(const IncConfigV2& value);

    /// <summary>
    /// **参数解释：** 用户购买的资源池ID，创建任务时如传此参数，任务将使用对应资源池进行检查。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getResourcePoolId() const;
    bool resourcePoolIdIsSet() const;
    void unsetresourcePoolId();
    void setResourcePoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** [密级ID,可见信息密级的ID，从页面接口GET https://{endpoint}/projects/v1/options的响应参数中获取，其中的code值即为密级ID。](tag:hcs_sm,hcs_sitesm)[该参数暂无业务意义，传0即可。](tag:fcs) **约束限制：** [租户开启密级功能后必传。](tag:hcs_sm,hcs_sitesm)[不涉及。](tag:fcs) **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSmLevel() const;
    bool smLevelIsSet() const;
    void unsetsmLevel();
    void setSmLevel(const std::string& value);

    /// <summary>
    /// **参数解释：** 废弃参数
    /// </summary>

    std::vector<std::string>& getCheckType();
    bool checkTypeIsSet() const;
    void unsetcheckType();
    void setCheckType(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释：** 废弃参数
    /// </summary>

    bool isEnableFossbot() const;
    bool enableFossbotIsSet() const;
    void unsetenableFossbot();
    void setEnableFossbot(bool value);


protected:
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string gitBranch_;
    bool gitBranchIsSet_;
    std::vector<std::string> language_;
    bool languageIsSet_;
    std::vector<RuleSetV2> ruleSets_;
    bool ruleSetsIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string accessToken_;
    bool accessTokenIsSet_;
    std::string endpointId_;
    bool endpointIdIsSet_;
    IncConfigV2 incConfig_;
    bool incConfigIsSet_;
    std::string resourcePoolId_;
    bool resourcePoolIdIsSet_;
    std::string smLevel_;
    bool smLevelIsSet_;
    std::vector<std::string> checkType_;
    bool checkTypeIsSet_;
    bool enableFossbot_;
    bool enableFossbotIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_CreateTaskRequestV2_H_
