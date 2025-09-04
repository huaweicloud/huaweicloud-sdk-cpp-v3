
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapLTSConfigResponse_instance_lts_configs_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapLTSConfigResponse_instance_lts_configs_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/HtapLTSConfigResponse_instance.h>
#include <huaweicloud/gaussdb/v3/model/HtapLTSConfigResponse_lts_configs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  HtapLTSConfigResponse_instance_lts_configs
    : public ModelBase
{
public:
    HtapLTSConfigResponse_instance_lts_configs();
    virtual ~HtapLTSConfigResponse_instance_lts_configs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HtapLTSConfigResponse_instance_lts_configs members

    /// <summary>
    /// **参数解释**： LTS配置信息。  **约束限制**： 不涉及。
    /// </summary>

    std::vector<HtapLTSConfigResponse_lts_configs>& getLtsConfigs();
    bool ltsConfigsIsSet() const;
    void unsetltsConfigs();
    void setLtsConfigs(const std::vector<HtapLTSConfigResponse_lts_configs>& value);

    /// <summary>
    /// 
    /// </summary>

    HtapLTSConfigResponse_instance getInstance() const;
    bool instanceIsSet() const;
    void unsetinstance();
    void setInstance(const HtapLTSConfigResponse_instance& value);


protected:
    std::vector<HtapLTSConfigResponse_lts_configs> ltsConfigs_;
    bool ltsConfigsIsSet_;
    HtapLTSConfigResponse_instance instance_;
    bool instanceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_HtapLTSConfigResponse_instance_lts_configs_H_
