
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateSlowlogSensitiveSwitchRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateSlowlogSensitiveSwitchRequestBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpdateSlowlogSensitiveSwitchRequestBody
    : public ModelBase
{
public:
    UpdateSlowlogSensitiveSwitchRequestBody();
    virtual ~UpdateSlowlogSensitiveSwitchRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSlowlogSensitiveSwitchRequestBody members

    /// <summary>
    /// 慢日志开关状态。
    /// </summary>

    bool isOpenSlowLogSwitch() const;
    bool openSlowLogSwitchIsSet() const;
    void unsetopenSlowLogSwitch();
    void setOpenSlowLogSwitch(bool value);


protected:
    bool openSlowLogSwitch_;
    bool openSlowLogSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpdateSlowlogSensitiveSwitchRequestBody_H_
