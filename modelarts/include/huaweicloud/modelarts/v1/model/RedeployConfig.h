
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RedeployConfig_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RedeployConfig_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RedeployConfig
    : public ModelBase
{
public:
    RedeployConfig();
    virtual ~RedeployConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RedeployConfig members

    /// <summary>
    /// 节点的重部署类型。若节点状态为不可用，将无法进行SOFT模式，只能进行HARD模式，HARD模式包含节点重置操作，会导致本地盘及云盘上的全部数据丢失，请谨慎操作
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 静默修复开关。开启autoFlow开关时，如重部署失败系统将自动流转至\&quot;系统维护\&quot;或发起\&quot;二次重部署\&quot;，并产生新的计划事件，该过程自动授权，无需二次授权
    /// </summary>

    std::string getAutoFlow() const;
    bool autoFlowIsSet() const;
    void unsetautoFlow();
    void setAutoFlow(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string autoFlow_;
    bool autoFlowIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RedeployConfig_H_
