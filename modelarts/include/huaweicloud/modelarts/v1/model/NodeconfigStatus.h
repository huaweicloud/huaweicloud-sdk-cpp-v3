
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeconfigStatus_configsStatus.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigStatus
    : public ModelBase
{
public:
    NodeconfigStatus();
    virtual ~NodeconfigStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigStatus members

    /// <summary>
    /// **参数解释**： 节点配置的执行状态。 **约束限制**：不涉及。 **取值范围**： 可选值如下： - Pending：安装中，表示插件正在安装中。 - Running：运行中，表示插件全部实例状态都在运行中，插件正常使用。 - Updating：升级中，表示插件正在更新中。 - Abnormal：不可用，表示插件状态异常，插件不可使用。可单击状态查看失败原因。 - Deleting：删除中，表示插件正在删除中。 **默认取值**：不涉及。
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NodeconfigStatus_configsStatus getConfigsStatus() const;
    bool configsStatusIsSet() const;
    void unsetconfigsStatus();
    void setConfigsStatus(const NodeconfigStatus_configsStatus& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    NodeconfigStatus_configsStatus configsStatus_;
    bool configsStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigStatus_H_
