
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotFeatureGatesResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotFeatureGatesResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <map>
#include <vector>

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
class HUAWEICLOUD_CCE_V3_EXPORT  ShowAutopilotFeatureGatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutopilotFeatureGatesResponse();
    virtual ~ShowAutopilotFeatureGatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutopilotFeatureGatesResponse members

    /// <summary>
    /// **参数解释：** API类型。 **约束限制：** 该值不可修改 **取值范围：** - Configuration  **默认取值：** 不涉及 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释：** API版本。 **约束限制：** 该值不可修改 **取值范围：** - v3.1  **默认取值：** 不涉及 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 特性开关详情 **取值范围**: 不涉及 
    /// </summary>

    std::map<std::string, Object>& getSpec();
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const std::map<std::string, Object>& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::map<std::string, Object> spec_;
    bool specIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ShowAutopilotFeatureGatesResponse_H_
