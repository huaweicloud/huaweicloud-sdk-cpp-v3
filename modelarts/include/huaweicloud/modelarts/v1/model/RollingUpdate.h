
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RollingUpdate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RollingUpdate_H_


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
/// **参数解释：** 滚动更新配置。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RollingUpdate
    : public ModelBase
{
public:
    RollingUpdate();
    virtual ~RollingUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RollingUpdate members

    /// <summary>
    /// **参数解释：** 滚动更新时最多可以启动多少个Pod。 **约束限制：** 百分数类型字符串。 **取值范围：** 1%-100%。 **默认取值：** 1%。
    /// </summary>

    std::string getMaxSurge() const;
    bool maxSurgeIsSet() const;
    void unsetmaxSurge();
    void setMaxSurge(const std::string& value);

    /// <summary>
    /// **参数解释：** 滚动更新时最多可以删除多少个Pod。 **约束限制：** 百分数类型字符串。 **取值范围：** 1%-100%。 **默认取值：** 1%。
    /// </summary>

    std::string getMaxUnavailable() const;
    bool maxUnavailableIsSet() const;
    void unsetmaxUnavailable();
    void setMaxUnavailable(const std::string& value);


protected:
    std::string maxSurge_;
    bool maxSurgeIsSet_;
    std::string maxUnavailable_;
    bool maxUnavailableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RollingUpdate_H_
