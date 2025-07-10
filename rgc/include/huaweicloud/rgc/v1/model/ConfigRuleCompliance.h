
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ConfigRuleCompliance_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ConfigRuleCompliance_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ConfigRuleCompliance
    : public ModelBase
{
public:
    ConfigRuleCompliance();
    virtual ~ConfigRuleCompliance();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigRuleCompliance members

    /// <summary>
    /// 合规规则。
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// 合规状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 区域信息。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 控制策略ID。
    /// </summary>

    std::string getControlId() const;
    bool controlIdIsSet() const;
    void unsetcontrolId();
    void setControlId(const std::string& value);


protected:
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string controlId_;
    bool controlIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ConfigRuleCompliance_H_
