
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateRuleReq_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateRuleReq_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改规则触发条件请求结构体
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UpdateRuleReq
    : public ModelBase
{
public:
    UpdateRuleReq();
    virtual ~UpdateRuleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRuleReq members

    /// <summary>
    /// **参数说明**：规则名称。 **取值范围**：长度不超过256，只允许中文、字母、数字、以及_?&#39;#().,&amp;%@!-等字符的组合
    /// </summary>

    std::string getRuleName() const;
    bool ruleNameIsSet() const;
    void unsetruleName();
    void setRuleName(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义的规则描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义sql select语句，最大长度2500，更新sql时，select跟where必须同时传参，如果需要清除该参数的值，输入空字符串，该参数仅供标准版和企业版用户使用。
    /// </summary>

    std::string getSelect() const;
    bool selectIsSet() const;
    void unsetselect();
    void setSelect(const std::string& value);

    /// <summary>
    /// **参数说明**：用户自定义sql where语句，最大长度2500，更新操作时，select跟where必须同时传参，如果需要清除该参数的值，输入空字符串，该参数仅供标准版和企业版用户使用。
    /// </summary>

    std::string getWhere() const;
    bool whereIsSet() const;
    void unsetwhere();
    void setWhere(const std::string& value);

    /// <summary>
    /// **参数说明**：修改规则条件的状态是否为激活。
    /// </summary>

    bool isActive() const;
    bool activeIsSet() const;
    void unsetactive();
    void setActive(bool value);


protected:
    std::string ruleName_;
    bool ruleNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string select_;
    bool selectIsSet_;
    std::string where_;
    bool whereIsSet_;
    bool active_;
    bool activeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UpdateRuleReq_H_
