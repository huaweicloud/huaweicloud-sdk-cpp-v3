
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateTaskRulesetItem_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateTaskRulesetItem_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  UpdateTaskRulesetItem
    : public ModelBase
{
public:
    UpdateTaskRulesetItem();
    virtual ~UpdateTaskRulesetItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTaskRulesetItem members

    /// <summary>
    /// **参数解释：** 检查语言，支持的语言请关注服务更新特性文档。 **约束限制:** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// **参数解释：** 规则集ID。 **约束限制:** 长度为[1~32]个字符。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getRuleSetId() const;
    bool ruleSetIdIsSet() const;
    void unsetruleSetId();
    void setRuleSetId(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否启用。 **约束限制:** 不涉及。 **取值范围：** - 0：不启用。 - 1：启用。 **默认取值：** 不涉及。
    /// </summary>

    std::string getIfUse() const;
    bool ifUseIsSet() const;
    void unsetifUse();
    void setIfUse(const std::string& value);

    /// <summary>
    /// **参数解释：** 新/老数据。 **约束限制:** 不涉及。 **取值范围：** 1 **默认取值：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string language_;
    bool languageIsSet_;
    std::string ruleSetId_;
    bool ruleSetIdIsSet_;
    std::string ifUse_;
    bool ifUseIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_UpdateTaskRulesetItem_H_
