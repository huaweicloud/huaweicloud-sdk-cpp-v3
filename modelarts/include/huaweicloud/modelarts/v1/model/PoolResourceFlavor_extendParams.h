
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResourceFlavor_extendParams_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResourceFlavor_extendParams_H_


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
/// **参数解释**：自定义配置参数。 **约束限制**：不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolResourceFlavor_extendParams
    : public ModelBase
{
public:
    PoolResourceFlavor_extendParams();
    virtual ~PoolResourceFlavor_extendParams();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolResourceFlavor_extendParams members

    /// <summary>
    /// **参数解释**：指定资源池节点的容器引擎空间大小。值为0时表示不限制大小。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getDockerBaseSize() const;
    bool dockerBaseSizeIsSet() const;
    void unsetdockerBaseSize();
    void setDockerBaseSize(const std::string& value);


protected:
    std::string dockerBaseSize_;
    bool dockerBaseSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolResourceFlavor_extendParams_H_
