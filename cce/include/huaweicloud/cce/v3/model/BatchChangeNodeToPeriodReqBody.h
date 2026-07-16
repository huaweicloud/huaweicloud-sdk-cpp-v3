
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchChangeNodeToPeriodReqBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchChangeNodeToPeriodReqBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/PeriodOrderParam.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  BatchChangeNodeToPeriodReqBody
    : public ModelBase
{
public:
    BatchChangeNodeToPeriodReqBody();
    virtual ~BatchChangeNodeToPeriodReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchChangeNodeToPeriodReqBody members

    /// <summary>
    /// **参数解释**： API类型 **约束限制**： 该值不可修改 **取值范围**： 不涉及 **默认取值**： Node 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： API版本 **约束限制**： 该值不可修改 **取值范围**： 不涉及 **默认取值**： v3 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 要进行按需转包的CCE节点ID列表，示例如下： &#x60;&#x60;&#x60; \&quot;nodeList\&quot;: [\&quot;xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx\&quot;, \&quot;xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx\&quot;] &#x60;&#x60;&#x60; **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::vector<std::string>& getNodeList();
    bool nodeListIsSet() const;
    void unsetnodeList();
    void setNodeList(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    PeriodOrderParam getPeriodOrderParam() const;
    bool periodOrderParamIsSet() const;
    void unsetperiodOrderParam();
    void setPeriodOrderParam(const PeriodOrderParam& value);

    /// <summary>
    /// **参数解释**： 需要一起转包周期的资源类型列表，示例如下： &#x60;&#x60;&#x60; \&quot;includeResources\&quot;: [\&quot;eip\&quot;] &#x60;&#x60;&#x60; **约束限制**： 当前仅支持eip（弹性公网IP）资源 **取值范围**： - \&quot;eip\&quot;：弹性公网IP **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getIncludeResources();
    bool includeResourcesIsSet() const;
    void unsetincludeResources();
    void setIncludeResources(const std::vector<std::string>& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::vector<std::string> nodeList_;
    bool nodeListIsSet_;
    PeriodOrderParam periodOrderParam_;
    bool periodOrderParamIsSet_;
    std::vector<std::string> includeResources_;
    bool includeResourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchChangeNodeToPeriodReqBody_H_
