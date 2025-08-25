
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_runtimeConfig_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_runtimeConfig_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/NodeTemplate_runtimeConfig_runtime.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeTemplate_runtimeConfig
    : public ModelBase
{
public:
    NodeTemplate_runtimeConfig();
    virtual ~NodeTemplate_runtimeConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeTemplate_runtimeConfig members

    /// <summary>
    /// 
    /// </summary>

    NodeTemplate_runtimeConfig_runtime getRuntime() const;
    bool runtimeIsSet() const;
    void unsetruntime();
    void setRuntime(const NodeTemplate_runtimeConfig_runtime& value);


protected:
    NodeTemplate_runtimeConfig_runtime runtime_;
    bool runtimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_runtimeConfig_H_
