
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_scope_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_scope_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolStatus_scope
    : public ModelBase
{
public:
    PoolStatus_scope();
    virtual ~PoolStatus_scope();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolStatus_scope members

    /// <summary>
    /// **参数解释**：资源池的业务类型。 **取值范围**：可选值如下： - Train：训练任务。 - Infer：推理任务。 - Notebook：Notebook作业。
    /// </summary>

    std::string getScopeType() const;
    bool scopeTypeIsSet() const;
    void unsetscopeType();
    void setScopeType(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池业务类型状态。 **取值范围**：可选值如下： - Enabling：启动中。 - Enabled：已启动。 - Disabling：关闭中。 - Disabled：已关闭。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);


protected:
    std::string scopeType_;
    bool scopeTypeIsSet_;
    std::string state_;
    bool stateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolStatus_scope_H_
