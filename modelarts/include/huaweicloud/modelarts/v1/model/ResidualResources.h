
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResidualResources_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResidualResources_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ResidualResources
    : public ModelBase
{
public:
    ResidualResources();
    virtual ~ResidualResources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResidualResources members

    /// <summary>
    /// **参数解释：** 负载均衡器监听器ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getElbListenerId() const;
    bool elbListenerIdIsSet() const;
    void unsetelbListenerId();
    void setElbListenerId(const std::string& value);

    /// <summary>
    /// **参数解释：** 后端服务器组ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getElbPoolId() const;
    bool elbPoolIdIsSet() const;
    void unsetelbPoolId();
    void setElbPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 终端节点ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVpcepId() const;
    bool vpcepIdIsSet() const;
    void unsetvpcepId();
    void setVpcepId(const std::string& value);


protected:
    std::string elbListenerId_;
    bool elbListenerIdIsSet_;
    std::string elbPoolId_;
    bool elbPoolIdIsSet_;
    std::string vpcepId_;
    bool vpcepIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ResidualResources_H_
