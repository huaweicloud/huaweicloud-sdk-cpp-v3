
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ConfigTaskParameterBody_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ConfigTaskParameterBody_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/TaskCheckSettingsItem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 任务配置检查参数请求信息。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ConfigTaskParameterBody
    : public ModelBase
{
public:
    ConfigTaskParameterBody();
    virtual ~ConfigTaskParameterBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigTaskParameterBody members

    /// <summary>
    /// **参数解释：** 参数已废弃，默认填写0即可。 **约束限制:** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getCheckId() const;
    bool checkIdIsSet() const;
    void unsetcheckId();
    void setCheckId(int32_t value);

    /// <summary>
    /// **参数解释:** 兼容历史版本的废弃参数，不校验真实性。规则集ID，通过[[查询规则集列表](https://support.huaweicloud.com/api-codecheck/ListRulesets.html)](tag:hws)[[查询规则集列表](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRulesets.html)](tag:hws_hk)[查询规则集列表](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)接口可获取到规则集ID。 **约束限制:** 不涉及。 **取值范围:** 长度为[1~32]个字符。 **默认取值：** 不涉及。
    /// </summary>

    std::string getRulesetId() const;
    bool rulesetIdIsSet() const;
    void unsetrulesetId();
    void setRulesetId(const std::string& value);

    /// <summary>
    /// **参数解释:** 兼容历史版本的废弃参数，不校验真实性。规则集对应语言，通过[[查询规则集列表](https://support.huaweicloud.com/api-codecheck/ListRulesets.html)](tag:hws)[[查询规则集列表](https://support.huaweicloud.com/intl/zh-cn/api-codecheck/ListRulesets.html)](tag:hws_hk)[查询规则集列表](tag:hcs,hcs_sm,hcs_site,hcs_sitesm,fcs)接口可获取到规则集ID对应的语言。 **约束限制:** 不涉及。 **取值范围:** 与ruleset_id规则集的语言对应。 **默认取值：** 不涉及。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释:** 当前规则集对应的编译配置总开关。 **约束限制:** 不涉及。 **取值范围:** - off：关闭。 - on：打开。 **默认取值：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释:** 数组类型，当前规则集对应编译配置具体详情，可基于web页面查看当前规则集所涉及的编译配置，多个参数配置多条即可。 **约束限制:** 不涉及。
    /// </summary>

    std::vector<TaskCheckSettingsItem>& getTaskCheckSettings();
    bool taskCheckSettingsIsSet() const;
    void unsettaskCheckSettings();
    void setTaskCheckSettings(const std::vector<TaskCheckSettingsItem>& value);


protected:
    int32_t checkId_;
    bool checkIdIsSet_;
    std::string rulesetId_;
    bool rulesetIdIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<TaskCheckSettingsItem> taskCheckSettings_;
    bool taskCheckSettingsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ConfigTaskParameterBody_H_
