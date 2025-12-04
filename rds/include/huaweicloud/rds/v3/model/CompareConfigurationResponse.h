
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CompareConfigurationResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CompareConfigurationResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/ParamGroupParameterDiff.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CompareConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    CompareConfigurationResponse();
    virtual ~CompareConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CompareConfigurationResponse members

    /// <summary>
    /// **参数解释**：  源参数模板id。  **约束限制**：  不涉及。
    /// </summary>

    std::string getSourceId() const;
    bool sourceIdIsSet() const;
    void unsetsourceId();
    void setSourceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  目标参数模板id。  **约束限制**：  不涉及。
    /// </summary>

    std::string getTargetId() const;
    bool targetIdIsSet() const;
    void unsettargetId();
    void setTargetId(const std::string& value);

    /// <summary>
    /// **参数解释**：  源参数模板名称。  **约束限制**：  不涉及。
    /// </summary>

    std::string getSourceName() const;
    bool sourceNameIsSet() const;
    void unsetsourceName();
    void setSourceName(const std::string& value);

    /// <summary>
    /// **参数解释**：  目标参数模板名称。  **约束限制**：  不涉及。
    /// </summary>

    std::string getTargetName() const;
    bool targetNameIsSet() const;
    void unsettargetName();
    void setTargetName(const std::string& value);

    /// <summary>
    /// **参数解释**：  模板参数差异信息。  **约束限制**：  不涉及。
    /// </summary>

    std::vector<ParamGroupParameterDiff>& getParameters();
    bool parametersIsSet() const;
    void unsetparameters();
    void setParameters(const std::vector<ParamGroupParameterDiff>& value);


protected:
    std::string sourceId_;
    bool sourceIdIsSet_;
    std::string targetId_;
    bool targetIdIsSet_;
    std::string sourceName_;
    bool sourceNameIsSet_;
    std::string targetName_;
    bool targetNameIsSet_;
    std::vector<ParamGroupParameterDiff> parameters_;
    bool parametersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CompareConfigurationResponse_H_
