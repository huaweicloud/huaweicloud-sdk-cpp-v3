
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradePgMajorVersion_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradePgMajorVersion_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_RDS_V3_EXPORT  UpgradePgMajorVersion
    : public ModelBase
{
public:
    UpgradePgMajorVersion();
    virtual ~UpgradePgMajorVersion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradePgMajorVersion members

    /// <summary>
    /// 目标版本。 高于实例当前的大版本，如当前为12，目标版本需要是13或14。
    /// </summary>

    std::string getTargetVersion() const;
    bool targetVersionIsSet() const;
    void unsettargetVersion();
    void setTargetVersion(const std::string& value);

    /// <summary>
    /// 是否将实例内网IP切换到大版本实例  true：升级后切换当前实例的内网IP到大版本实例 false：升级后当前实例的内网IP不变，大版本实例使用新的内网IP
    /// </summary>

    bool isIsChangePrivateIp() const;
    bool isChangePrivateIpIsSet() const;
    void unsetisChangePrivateIp();
    void setIsChangePrivateIp(bool value);

    /// <summary>
    /// 统计信息收集方式。is_change_private_ip为true时必选  before_change_private_ip：将实例内网IP切换到大版本实例前收集  after_change_private_ip：将实例内网IP切换到大版本实例后收集
    /// </summary>

    std::string getStatisticsCollectionMode() const;
    bool statisticsCollectionModeIsSet() const;
    void unsetstatisticsCollectionMode();
    void setStatisticsCollectionMode(const std::string& value);


protected:
    std::string targetVersion_;
    bool targetVersionIsSet_;
    bool isChangePrivateIp_;
    bool isChangePrivateIpIsSet_;
    std::string statisticsCollectionMode_;
    bool statisticsCollectionModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradePgMajorVersion_H_
