
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ConfigurationHistoryRsp_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ConfigurationHistoryRsp_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ConfigurationHistoryRsp
    : public ModelBase
{
public:
    ConfigurationHistoryRsp();
    virtual ~ConfigurationHistoryRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigurationHistoryRsp members

    /// <summary>
    /// **参数解释：** 参数名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getParameterName() const;
    bool parameterNameIsSet() const;
    void unsetparameterName();
    void setParameterName(const std::string& value);

    /// <summary>
    /// **参数解释：** 参数旧值。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getOldValue() const;
    bool oldValueIsSet() const;
    void unsetoldValue();
    void setOldValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 参数新值。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getNewValue() const;
    bool newValueIsSet() const;
    void unsetnewValue();
    void setNewValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新结果。 **约束限制：** 不涉及。 **取值范围：** - SUCCESS：成功。 - FAILED：失败。 **默认取值：** 不涉及。
    /// </summary>

    std::string getUpdateResult() const;
    bool updateResultIsSet() const;
    void unsetupdateResult();
    void setUpdateResult(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否生效。 **约束限制：** 不涉及。 **取值范围：** - true:已生效。 - false:未生效。 **默认取值：** 不涉及。
    /// </summary>

    std::string getApplied() const;
    bool appliedIsSet() const;
    void unsetapplied();
    void setApplied(const std::string& value);

    /// <summary>
    /// **参数解释：** 更新时间。 **约束限制：** 不涉及。 **取值范围：** 格式为\&quot;yyyy-MM-ddTHH:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **默认取值：** 不涉及。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// **参数解释：** 生效时间。 **约束限制：** 不涉及。 **取值范围：** 格式为\&quot;yyyy-MM-ddTHH:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAppliedAt() const;
    bool appliedAtIsSet() const;
    void unsetappliedAt();
    void setAppliedAt(const std::string& value);


protected:
    std::string parameterName_;
    bool parameterNameIsSet_;
    std::string oldValue_;
    bool oldValueIsSet_;
    std::string newValue_;
    bool newValueIsSet_;
    std::string updateResult_;
    bool updateResultIsSet_;
    std::string applied_;
    bool appliedIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    std::string appliedAt_;
    bool appliedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ConfigurationHistoryRsp_H_
