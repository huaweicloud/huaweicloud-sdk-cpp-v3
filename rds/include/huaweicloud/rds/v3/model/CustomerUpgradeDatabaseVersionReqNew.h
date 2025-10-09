
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CustomerUpgradeDatabaseVersionReqNew_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CustomerUpgradeDatabaseVersionReqNew_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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

    bool isIsDelayed() const;
    bool isDelayedIsSet() const;
    void unsetisDelayed();
    void setIsDelayed(bool value);

    /// <summary>
    /// 设置仅对RDS for MySQL数据库实例（主备）生效。主备实例升级过程中，备机升级成功后，会触发主备倒换继续升级主机，主机升级完成后，若主备可用区不同则触发第二次倒换，保证可用区不变。若主备可用区相同，该选项无效。 取值范围： - true：默认该方式。表示升级过程中会进行二次倒换保证主备实例可用区不变。 - false：升级过程中不进行第二次主备倒换，适合对主备所在可用区不敏感，对业务连续性敏感的客户。
    /// </summary>

    bool isSecondSwitch() const;
    bool secondSwitchIsSet() const;
    void unsetsecondSwitch();
    void setSecondSwitch(bool value);


protected:
    bool isDelayed_;
    bool isDelayedIsSet_;
    bool secondSwitch_;
    bool secondSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CustomerUpgradeDatabaseVersionReqNew_H_
