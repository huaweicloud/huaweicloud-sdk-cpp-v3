
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LeaseReq_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LeaseReq_H_


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
/// 实例租约配置。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  LeaseReq
    : public ModelBase
{
public:
    LeaseReq();
    virtual ~LeaseReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LeaseReq members

    /// <summary>
    /// **参数解释**：定时停止，以当前时刻为起点，运行的时长（到期后自动停止）。单位：毫秒。 **约束限制**：不涉及。 **取值范围**：3600000-259200000。 **默认取值**：3600000。
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);

    /// <summary>
    /// **参数解释**：自动停止类别。 **约束限制**：不涉及。 **取值范围**：枚举类型，取值如下： - TIMING：自动停止。 - IDLE：空闲停止。  **默认取值**：TIMING。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    int64_t duration_;
    bool durationIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LeaseReq_H_
