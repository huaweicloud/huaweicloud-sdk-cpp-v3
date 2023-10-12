
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAomMappingRulesResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAomMappingRulesResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AomMappingRuleInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateAomMappingRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateAomMappingRulesResponse();
    virtual ~UpdateAomMappingRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateAomMappingRulesResponse members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 接入规则名称
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 接入规则id
    /// </summary>

    std::string getRuleId() const;
    bool ruleIdIsSet() const;
    void unsetruleId();
    void setRuleId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AomMappingRuleInfo getRuleInfo() const;
    bool ruleInfoIsSet() const;
    void unsetruleInfo();
    void setRuleInfo(const AomMappingRuleInfo& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string ruleId_;
    bool ruleIdIsSet_;
    AomMappingRuleInfo ruleInfo_;
    bool ruleInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateAomMappingRulesResponse_H_
