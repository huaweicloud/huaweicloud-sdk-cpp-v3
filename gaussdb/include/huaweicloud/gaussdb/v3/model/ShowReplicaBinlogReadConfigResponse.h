
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowReplicaBinlogReadConfigResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowReplicaBinlogReadConfigResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowReplicaBinlogReadConfigResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplicaBinlogReadConfigResponse();
    virtual ~ShowReplicaBinlogReadConfigResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowReplicaBinlogReadConfigResponse members

    /// <summary>
    /// **参数解释**：  实例是否支持开启只读Binlog拉取。  **取值范围**：  - true：支持。 - false：不支持。
    /// </summary>

    bool isSupported() const;
    bool supportedIsSet() const;
    void unsetsupported();
    void setSupported(bool value);

    /// <summary>
    /// **参数解释**：  只读Binlog拉取开关状态。  **取值范围**：  - true：开启。 - false：关闭。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
    bool supported_;
    bool supportedIsSet_;
    bool enabled_;
    bool enabledIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowReplicaBinlogReadConfigResponse_H_
