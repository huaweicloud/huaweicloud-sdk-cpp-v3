
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_spec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_spec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec_configs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：待更新的节点配置插件实例请求信息。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigUpdate_spec
    : public ModelBase
{
public:
    NodeconfigUpdate_spec();
    virtual ~NodeconfigUpdate_spec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigUpdate_spec members

    /// <summary>
    /// 
    /// </summary>

    NodeconfigUpdate_spec_configs getConfigs() const;
    bool configsIsSet() const;
    void unsetconfigs();
    void setConfigs(const NodeconfigUpdate_spec_configs& value);


protected:
    NodeconfigUpdate_spec_configs configs_;
    bool configsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_spec_H_
