
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowAlertPolicyResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowAlertPolicyResponse_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartspipeline/v2/model/AlertRuleDTO.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ShowAlertPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAlertPolicyResponse();
    virtual ~ShowAlertPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAlertPolicyResponse members

    /// <summary>
    /// **参数解释**： 策略ID。 **约束限制**： 更新时传，新增时不传。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// **参数解释**： 策略名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID。 **约束限制**： 暂时不用。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否为默认策略。 **约束限制**： 不涉及。 **取值范围**： - true：是默认策略。 - false：不是默认策略。 **默认取值**： 不涉及。 
    /// </summary>

    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(bool value);

    /// <summary>
    /// **参数解释**： 创建时间。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// **参数解释**： 所有规则。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<AlertRuleDTO>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<AlertRuleDTO>& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    bool isDefault_;
    bool isDefaultIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    std::vector<AlertRuleDTO> rules_;
    bool rulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ShowAlertPolicyResponse_H_
