
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlProxyAltRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlProxyAltRequestBody_H_


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
/// 更改数据库代理ALT开关的请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  SwitchGaussMySqlProxyAltRequestBody
    : public ModelBase
{
public:
    SwitchGaussMySqlProxyAltRequestBody();
    virtual ~SwitchGaussMySqlProxyAltRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchGaussMySqlProxyAltRequestBody members

    /// <summary>
    /// **参数解释**：  ALT开关状态。  **取值范围**： - on：开启。 - off：关闭。  **默认取值**： 不涉及。
    /// </summary>

    std::string getAltEnabled() const;
    bool altEnabledIsSet() const;
    void unsetaltEnabled();
    void setAltEnabled(const std::string& value);


protected:
    std::string altEnabled_;
    bool altEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_SwitchGaussMySqlProxyAltRequestBody_H_
