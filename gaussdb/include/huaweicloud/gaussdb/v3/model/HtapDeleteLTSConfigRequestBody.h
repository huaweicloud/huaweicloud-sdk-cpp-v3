
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapDeleteLTSConfigRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapDeleteLTSConfigRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapDeleteLTSConfigRequestBody_log_configs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**：  删除LTS配置。  **约束限制**：  不涉及。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapDeleteLTSConfigRequestBody
    : public ModelBase
{
public:
    HtapDeleteLTSConfigRequestBody();
    virtual ~HtapDeleteLTSConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapDeleteLTSConfigRequestBody members

    /// <summary>
    /// **参数解释**： LTS配置。  **约束限制**： 不涉及。
    /// </summary>

    std::vector<HtapDeleteLTSConfigRequestBody_log_configs>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<HtapDeleteLTSConfigRequestBody_log_configs>& value);


protected:
    std::vector<HtapDeleteLTSConfigRequestBody_log_configs> logConfigs_;
    bool logConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapDeleteLTSConfigRequestBody_H_
