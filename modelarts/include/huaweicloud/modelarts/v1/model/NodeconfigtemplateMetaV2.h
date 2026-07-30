
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigtemplateMetaV2_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigtemplateMetaV2_H_


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
/// **参数解释**：节点配置模板元数据。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigtemplateMetaV2
    : public ModelBase
{
public:
    NodeconfigtemplateMetaV2();
    virtual ~NodeconfigtemplateMetaV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigtemplateMetaV2 members

    /// <summary>
    /// **参数解释**：节点名称。 **取值范围**：固定为node-config-template。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigtemplateMetaV2_H_
