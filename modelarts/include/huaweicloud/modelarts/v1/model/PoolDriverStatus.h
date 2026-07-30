
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolDriverStatus_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolDriverStatus_H_


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
/// 资源池驱动状态数据模型。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolDriverStatus
    : public ModelBase
{
public:
    PoolDriverStatus();
    virtual ~PoolDriverStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolDriverStatus members

    /// <summary>
    /// **参数解释**：资源池当前驱动版本。 **取值范围**：不涉及。
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);

    /// <summary>
    /// **参数解释**：资源池当前驱动状态。 **取值范围**：可选值如下： - Creating：驱动安装中。 - Upgrading：驱动升级中。 - Running：驱动运行中。 - Abnormal：驱动异常。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);


protected:
    std::string version_;
    bool versionIsSet_;
    std::string state_;
    bool stateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolDriverStatus_H_
