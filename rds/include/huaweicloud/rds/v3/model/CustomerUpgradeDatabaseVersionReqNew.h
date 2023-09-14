
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CustomerUpgradeDatabaseVersionReqNew_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CustomerUpgradeDatabaseVersionReqNew_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CustomerUpgradeDatabaseVersionReqNew
    : public ModelBase
{
public:
    CustomerUpgradeDatabaseVersionReqNew();
    virtual ~CustomerUpgradeDatabaseVersionReqNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CustomerUpgradeDatabaseVersionReqNew members

    /// <summary>
    /// 是否延迟至可维护时间段内升级。 取值范围： - true：延迟升级。表示实例将在设置的可维护时间段内升级。 - false：立即升级，默认该方式。
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);


protected:
    bool delay_;
    bool delayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CustomerUpgradeDatabaseVersionReqNew_H_
