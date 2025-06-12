
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InteractionRuleGroup_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InteractionRuleGroup_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/InteractionRuleInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 互动规则库信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  InteractionRuleGroup
    : public ModelBase
{
public:
    InteractionRuleGroup();
    virtual ~InteractionRuleGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InteractionRuleGroup members

    /// <summary>
    /// 互动规则库名称
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 互动规则列表
    /// </summary>

    std::vector<InteractionRuleInfo>& getInteractionRules();
    bool interactionRulesIsSet() const;
    void unsetinteractionRules();
    void setInteractionRules(const std::vector<InteractionRuleInfo>& value);


protected:
    std::string groupName_;
    bool groupNameIsSet_;
    std::vector<InteractionRuleInfo> interactionRules_;
    bool interactionRulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_InteractionRuleGroup_H_
