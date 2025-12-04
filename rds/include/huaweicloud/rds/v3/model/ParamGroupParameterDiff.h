
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ParamGroupParameterDiff_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ParamGroupParameterDiff_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 参数差异信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ParamGroupParameterDiff
    : public ModelBase
{
public:
    ParamGroupParameterDiff();
    virtual ~ParamGroupParameterDiff();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ParamGroupParameterDiff members

    /// <summary>
    /// **参数解释**：  参数名称  **约束限制**：  不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  源模板参数值。  **约束限制**：  不涉及。
    /// </summary>

    std::string getSourceValue() const;
    bool sourceValueIsSet() const;
    void unsetsourceValue();
    void setSourceValue(const std::string& value);

    /// <summary>
    /// **参数解释**：  目标模板参数值。  **约束限制**：  不涉及。
    /// </summary>

    std::string getTargetValue() const;
    bool targetValueIsSet() const;
    void unsettargetValue();
    void setTargetValue(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string sourceValue_;
    bool sourceValueIsSet_;
    std::string targetValue_;
    bool targetValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ParamGroupParameterDiff_H_
