
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigStatus_configsStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigStatus_configsStatus_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeconfigStatus_configsStatus_image_warm_up.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：各配置项的执行状态。 **约束限制**：仅在请求体/插件中存在对应配置项时返回。 **取值范围**：不涉及。 **默认取值**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigStatus_configsStatus
    : public ModelBase
{
public:
    NodeconfigStatus_configsStatus();
    virtual ~NodeconfigStatus_configsStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigStatus_configsStatus members

    /// <summary>
    /// 
    /// </summary>

    NodeconfigStatus_configsStatus_image_warm_up getImageWarmUp() const;
    bool imageWarmUpIsSet() const;
    void unsetimageWarmUp();
    void setImageWarmUp(const NodeconfigStatus_configsStatus_image_warm_up& value);


protected:
    NodeconfigStatus_configsStatus_image_warm_up imageWarmUp_;
    bool imageWarmUpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigStatus_configsStatus_H_
