
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ConfigurationRisks_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ConfigurationRisks_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 配置风险项来源
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ConfigurationRisks
    : public ModelBase
{
public:
    ConfigurationRisks();
    virtual ~ConfigurationRisks();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfigurationRisks members

    /// <summary>
    /// **参数解释：** 组件名称。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getPackage() const;
    bool packageIsSet() const;
    void unsetpackage();
    void setPackage(const std::string& value);

    /// <summary>
    /// **参数解释：** 涉及文件路径。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getSourceFile() const;
    bool sourceFileIsSet() const;
    void unsetsourceFile();
    void setSourceFile(const std::string& value);

    /// <summary>
    /// **参数解释：** 节点信息。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getNodeMsg() const;
    bool nodeMsgIsSet() const;
    void unsetnodeMsg();
    void setNodeMsg(const std::string& value);

    /// <summary>
    /// **参数解释：** 参数值。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getField() const;
    bool fieldIsSet() const;
    void unsetfield();
    void setField(const std::string& value);

    /// <summary>
    /// **参数解释：** 修改操作类型。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(const std::string& value);

    /// <summary>
    /// **参数解释：** 原始值。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getOriginalValue() const;
    bool originalValueIsSet() const;
    void unsetoriginalValue();
    void setOriginalValue(const std::string& value);

    /// <summary>
    /// **参数解释：** 当前值。 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);


protected:
    std::string package_;
    bool packageIsSet_;
    std::string sourceFile_;
    bool sourceFileIsSet_;
    std::string nodeMsg_;
    bool nodeMsgIsSet_;
    std::string field_;
    bool fieldIsSet_;
    std::string operation_;
    bool operationIsSet_;
    std::string originalValue_;
    bool originalValueIsSet_;
    std::string value_;
    bool valueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ConfigurationRisks_H_
