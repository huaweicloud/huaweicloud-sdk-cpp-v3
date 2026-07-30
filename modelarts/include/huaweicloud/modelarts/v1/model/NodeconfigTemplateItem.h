
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigTemplateItem_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigTemplateItem_H_


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
/// **参数解释**：节点自定义配置模板
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigTemplateItem
    : public ModelBase
{
public:
    NodeconfigTemplateItem();
    virtual ~NodeconfigTemplateItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigTemplateItem members

    /// <summary>
    /// **参数解释**：支持的配置项列表和默认值。
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

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigTemplateItem_H_
