
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyFlavorsByAzCodeRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyFlavorsByAzCodeRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowProxyFlavorsByAzCodeRequest
    : public ModelBase
{
public:
    ShowProxyFlavorsByAzCodeRequest();
    virtual ~ShowProxyFlavorsByAzCodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProxyFlavorsByAzCodeRequest members

    /// <summary>
    /// **参数解释**：              请求语言类型。  **约束限制**：  不涉及。  **取值范围**： - en-us - zh-cn  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  可用区。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getAzCodes() const;
    bool azCodesIsSet() const;
    void unsetazCodes();
    void setAzCodes(const std::string& value);

    /// <summary>
    /// **参数解释**：  代理引擎名称。  **约束限制**：  不涉及。  **取值范围**：  taurusproxy。  **默认取值**：  不涉及。
    /// </summary>

    std::string getProxyEngineName() const;
    bool proxyEngineNameIsSet() const;
    void unsetproxyEngineName();
    void setProxyEngineName(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string azCodes_;
    bool azCodesIsSet_;
    std::string proxyEngineName_;
    bool proxyEngineNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowProxyFlavorsByAzCodeRequest& dereference_from_shared_ptr(std::shared_ptr<ShowProxyFlavorsByAzCodeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyFlavorsByAzCodeRequest_H_
