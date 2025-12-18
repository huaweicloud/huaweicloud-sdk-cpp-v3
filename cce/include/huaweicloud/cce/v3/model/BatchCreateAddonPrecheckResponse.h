
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateAddonPrecheckResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateAddonPrecheckResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AddonCheckSpec.h>
#include <huaweicloud/cce/v3/model/AddonCheckStatus.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  BatchCreateAddonPrecheckResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchCreateAddonPrecheckResponse();
    virtual ~BatchCreateAddonPrecheckResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateAddonPrecheckResponse members

    /// <summary>
    /// **参数解释：** API类型 **约束限制：** 该值不可修改 **取值范围：** 固定值\&quot;AddonCheck\&quot; **默认取值：** AddonCheck 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释：** API版本 **约束限制：** 该值不可修改 **取值范围：** 固定值\&quot;v3\&quot; **默认取值：** v3 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddonCheckSpec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const AddonCheckSpec& value);

    /// <summary>
    /// 
    /// </summary>

    AddonCheckStatus getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const AddonCheckStatus& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    AddonCheckSpec spec_;
    bool specIsSet_;
    AddonCheckStatus status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateAddonPrecheckResponse_H_
