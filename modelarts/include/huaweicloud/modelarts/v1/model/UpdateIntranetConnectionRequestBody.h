
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateIntranetConnectionRequestBody_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateIntranetConnectionRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  UpdateIntranetConnectionRequestBody
    : public ModelBase
{
public:
    UpdateIntranetConnectionRequestBody();
    virtual ~UpdateIntranetConnectionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateIntranetConnectionRequestBody members

    /// <summary>
    /// **参数解释：** 内网接入申请操作。 **约束限制：** 不涉及。 **取值范围：** - APPROVE：通过申请。只有当内网接入申请处于“审批中”状态时，才可进行此操作。 - REJECT： 拒绝申请。只有当内网接入申请处于“审批中”状态时，才可进行此操作。 - CANCEL： 取消授权，只有当内网接入申请处于“通过”（CONNECTED）状态时，才可进行取消授权操作。 - RETRY：  重试申请，只有当内网接入申请处于“异常”状态并且异常原因为“连接失败，请重试”时，才可进行重试操作。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 拒绝时可以填入拒绝的原因。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string reason_;
    bool reasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_UpdateIntranetConnectionRequestBody_H_
