
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetLabelsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetLabelsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  GetLabelsResponse
    : public ModelBase, public HttpResponse
{
public:
    GetLabelsResponse();
    virtual ~GetLabelsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetLabelsResponse members

    /// <summary>
    /// **参数解释**： API类型 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： Labels 
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// **参数解释**： API版本 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： v3 
    /// </summary>

    std::string getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetapiVersion();
    void setApiVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 节点标签，按节点池分类。 - key表示节点池ID，默认节点池取值为\&quot;DefaultPool\&quot;。 - value表示标签，key/value对格式。其中key为标签的键，value为标签键对应的值列表。  **约束限制：** 不涉及 
    /// </summary>

    std::map<std::string, std::map<std::string, std::vector<std::string>>>& getSpec();
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const std::map<std::string, std::map<std::string, std::vector<std::string>>>& value);


protected:
    std::string kind_;
    bool kindIsSet_;
    std::string apiVersion_;
    bool apiVersionIsSet_;
    std::map<std::string, std::map<std::string, std::vector<std::string>>> spec_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetLabelsResponse_H_
