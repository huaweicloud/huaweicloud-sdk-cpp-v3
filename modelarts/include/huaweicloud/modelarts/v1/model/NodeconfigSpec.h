
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigSpec
    : public ModelBase
{
public:
    NodeconfigSpec();
    virtual ~NodeconfigSpec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigSpec members

    /// <summary>
    /// **参数解释**： 节点自定义配置；当前支持节点绑核、是否启用缓存清理、是否启用透明大页。 \&quot;configs\&quot;: {    \&quot;cpu_manager\&quot;: {     \&quot;mode\&quot;: \&quot;static/none\&quot; //static为启用绑核, none为不启用绑核    },    \&quot;drop_cache\&quot;: {     \&quot;mode\&quot;: \&quot;enable/disable\&quot; // enable启用缓存清理    },    \&quot;transparent_hugepage\&quot;: {     \&quot;mode\&quot;: \&quot;always/madvise/never\&quot; // always为启用透明大页，never为关闭透明大页，madvice交给系统选择。    } }
    /// </summary>

    Object getConfigs() const;
    bool configsIsSet() const;
    void unsetconfigs();
    void setConfigs(const Object& value);


protected:
    Object configs_;
    bool configsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigSpec_H_
