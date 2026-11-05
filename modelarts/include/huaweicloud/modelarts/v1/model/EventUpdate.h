
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventUpdate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventUpdate_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/RedeployConfig.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  EventUpdate
    : public ModelBase
{
public:
    EventUpdate();
    virtual ~EventUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EventUpdate members

    /// <summary>
    /// **参数解释**：计划执行开始时间，格式为yyyy-MM-ddTHH:mm:ssZ。 **约束限制**：不涉及。 **取值范围**：大于当前时间。 **默认取值**：不填表示立即执行。
    /// </summary>

    std::string getNotBefore() const;
    bool notBeforeIsSet() const;
    void unsetnotBefore();
    void setNotBefore(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RedeployConfig getRedeployConfig() const;
    bool redeployConfigIsSet() const;
    void unsetredeployConfig();
    void setRedeployConfig(const RedeployConfig& value);

    /// <summary>
    /// **参数解释**：授权节点ID列表。授权重部处理时可选填,支持填入单个故障节点ID。 **约束限制**：不涉及。 **取值范围**：计划事件故障节点列表。 **默认取值**：不填表示授权所有节点。
    /// </summary>

    std::vector<std::string>& getInstanceId();
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::vector<std::string>& value);


protected:
    std::string notBefore_;
    bool notBeforeIsSet_;
    RedeployConfig redeployConfig_;
    bool redeployConfigIsSet_;
    std::vector<std::string> instanceId_;
    bool instanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_EventUpdate_H_
