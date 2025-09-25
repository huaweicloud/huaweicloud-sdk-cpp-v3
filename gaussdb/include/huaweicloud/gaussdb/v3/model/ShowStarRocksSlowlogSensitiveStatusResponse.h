
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarRocksSlowlogSensitiveStatusResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarRocksSlowlogSensitiveStatusResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowStarRocksSlowlogSensitiveStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStarRocksSlowlogSensitiveStatusResponse();
    virtual ~ShowStarRocksSlowlogSensitiveStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStarRocksSlowlogSensitiveStatusResponse members

    /// <summary>
    /// **参数解释**:  慢日志开关状态。  **取值范围**：  - true，开启。 - false，关闭。
    /// </summary>

    std::string getOpenSlowLogSwitch() const;
    bool openSlowLogSwitchIsSet() const;
    void unsetopenSlowLogSwitch();
    void setOpenSlowLogSwitch(const std::string& value);


protected:
    std::string openSlowLogSwitch_;
    bool openSlowLogSwitchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowStarRocksSlowlogSensitiveStatusResponse_H_
