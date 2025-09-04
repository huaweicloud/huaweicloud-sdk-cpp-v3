
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHtapLtsConfigResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHtapLtsConfigResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapLTSConfigResponse_instance_lts_configs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowHtapLtsConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHtapLtsConfigResponse();
    virtual ~ShowHtapLtsConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHtapLtsConfigResponse members

    /// <summary>
    /// **参数解释**： 实例LTS配置信息。  **约束限制**： 不涉及。
    /// </summary>

    std::vector<HtapLTSConfigResponse_instance_lts_configs>& getInstanceLtsConfigs();
    bool instanceLtsConfigsIsSet() const;
    void unsetinstanceLtsConfigs();
    void setInstanceLtsConfigs(const std::vector<HtapLTSConfigResponse_instance_lts_configs>& value);

    /// <summary>
    /// **参数解释**： 实例数。  **取值范围**：  不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<HtapLTSConfigResponse_instance_lts_configs> instanceLtsConfigs_;
    bool instanceLtsConfigsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowHtapLtsConfigResponse_H_
