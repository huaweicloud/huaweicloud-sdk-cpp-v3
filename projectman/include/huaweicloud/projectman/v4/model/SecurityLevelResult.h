
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SecurityLevelResult_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SecurityLevelResult_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 密级字段信息。仅在涉密环境（SM）下存在此字段，非涉密环境下无此字段。
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  SecurityLevelResult
    : public ModelBase
{
public:
    SecurityLevelResult();
    virtual ~SecurityLevelResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecurityLevelResult members

    /// <summary>
    /// **参数解释**： 密级字段ID。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**： 密级字段名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getDisplayValue() const;
    bool displayValueIsSet() const;
    void unsetdisplayValue();
    void setDisplayValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户自定义的密级字段的值。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// **参数解释**： 密级编码。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// **参数解释**： 密级排序值，越大级别越高。 **取值范围**： 不涉及。
    /// </summary>

    double getSequence() const;
    bool sequenceIsSet() const;
    void unsetsequence();
    void setSequence(double value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string displayValue_;
    bool displayValueIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string code_;
    bool codeIsSet_;
    double sequence_;
    bool sequenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SecurityLevelResult_H_
