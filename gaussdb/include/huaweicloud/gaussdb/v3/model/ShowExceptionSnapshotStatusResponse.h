
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowExceptionSnapshotStatusResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowExceptionSnapshotStatusResponse_H_


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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowExceptionSnapshotStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowExceptionSnapshotStatusResponse();
    virtual ~ShowExceptionSnapshotStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowExceptionSnapshotStatusResponse members

    /// <summary>
    /// **参数解释**：  异常快照开关状态。  **取值范围**：  - true：开启。 - false：关闭。
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);


protected:
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowExceptionSnapshotStatusResponse_H_
