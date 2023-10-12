
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpengaussRestoreInstanceRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpengaussRestoreInstanceRequest_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussBackupStrategy.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestorePoint.h>
#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussVolume.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussChargeInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  OpengaussRestoreInstanceRequest
    : public ModelBase
{
public:
    OpengaussRestoreInstanceRequest();
    virtual ~OpengaussRestoreInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpengaussRestoreInstanceRequest members

    /// <summary>
    /// 实例名称。 用于表示实例的名称，同一租户下，同类型的实例名可重名。 取值范围：4~64个字符之间，必须以字母开头，区分大小写，可以包含字母、数字、中划线或者下划线，不能包含其他的特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 可用区ID。  GaussDB取值范围：非空，可选部署在同一可用区或三个不同可用区，可用区之间用逗号隔开。详见示例。  - 部署在同一可用区：需要输入三个相同的可用区。例如：部署在“cn-north-4a”可用区，则需要在此处输入\&quot;cn-north-4a,cn-north-4a,cn-north-4a\&quot;。 - 部署在三个不同可用区：需要分别输入三个不同的可用区。 取值范围：非空，请参见[地区和终端节点](https://developer.huaweicloud.com/endpoint)。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 规格码，取值范围：非空。参考[表1](https://support.huaweicloud.com/api-opengauss/opengauss_api_0037.html#opengauss_api_0037__ted9b9d433c8a4c52884e199e17f94479)中GaussDB 的“规格编码”列内容获取。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussVolume getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const OpenGaussVolume& value);

    /// <summary>
    /// 用于磁盘加密的密钥ID，默认为空。
    /// </summary>

    std::string getDiskEncryptionId() const;
    bool diskEncryptionIdIsSet() const;
    void unsetdiskEncryptionId();
    void setDiskEncryptionId(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID，获取方法如下：  - 方法1：登录虚拟私有云服务的控制台界面，在虚拟私有云的详情页面查找VPC ID。 - 方法2：通过虚拟私有云服务的API接口查询，具体操作可参考[查询VPC列表](https://support.huaweicloud.com/api-vpc/vpc_api01_0003.html)。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网的网络ID信息，获取方法如下：  - 方法1：登录虚拟私有云服务的控制台界面，单击VPC下的子网，进入子网详情页面，查找网络ID。 - 方法2：通过虚拟私有云服务的API接口查询，具体操作可参考[查询子网列表](https://support.huaweicloud.com/api-vpc/vpc_subnet01_0003.html)。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 指定实例所属的安全组。如果不需要指定安全组，请联系客服申请白名单。  - 方法1：登录虚拟私有云服务的控制台界面，在安全组的详情页面查找安全组ID。 - 方法2：通过虚拟私有云服务的API接口查询，具体操作可参考[查询安全组列表](https://support.huaweicloud.com/api-vpc/vpc_sg01_0003.html)。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 数据库密码。  取值范围：  非空，由大小写字母、数字和特殊符号~!@#%^*-_&#x3D;+?组成，长度8~32个字符。  建议您输入高强度密码，以提高安全性，防止出现密码被暴力破解等安全风险。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const OpenGaussChargeInfo& value);

    /// <summary>
    /// 
    /// </summary>

    RestorePoint getRestorePoint() const;
    bool restorePointIsSet() const;
    void unsetrestorePoint();
    void setRestorePoint(const RestorePoint& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussBackupStrategy getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const OpenGaussBackupStrategy& value);

    /// <summary>
    /// 是否支持备份并行恢复。当不传该参数时，企业版默认为不支持，主备版默认支持。
    /// </summary>

    bool isEnableParallelRestore() const;
    bool enableParallelRestoreIsSet() const;
    void unsetenableParallelRestore();
    void setEnableParallelRestore(bool value);

    /// <summary>
    /// 参数组ID，当不传该参数时，使用系统默认的参数模板。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 数据库对外开放的端口，不填默认为8000，可选范围为：1024-39998。限制端口： 2378,2379,2380,4999,5000,5999,6000,6001,8097,8098,12016,12017,20049,20050,21731,21732,32122,32123,32124。  - GaussDB数据库端口当前只支持设置为8000，当不传该参数时，默认端口为8000。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 时区。  - 不选择时，国内站默认为UTC+08:00，国际站默认为UTC时间。 - 选择填写时，取值范围为UTC-12:00~UTC+12:00，且只支持整段时间，如UTC+08:00，不支持UTC+08:30。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// enable_force_switch表示是否开启备机强升主功能，仅支持取值true，false。 enable_force_switch&#x3D;true表示开启备机强升主功能，enable_force_switch&#x3D;false表示关闭，默认关闭。仅支持1.2.2及以上版本。  说明：  备机强升主功能适用场景：在主机发生故障后，为了保障集群的可用性，强制拉起备机作为新主机对外提供服务的场景。 本功能在集群故障状态下，以丢失部分数据为代价换取集群尽可能快的恢复服务。本功能是集群状态为不可用时的一个逃生方法，如果操作者不清楚备机强升后丢失数据对业务的影响，请勿使用本功能。 备机强升主相关介绍请参考《故障处理》备机强升主章节。
    /// </summary>

    bool isEnableForceSwitch() const;
    bool enableForceSwitchIsSet() const;
    void unsetenableForceSwitch();
    void setEnableForceSwitch(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    OpenGaussVolume volume_;
    bool volumeIsSet_;
    std::string diskEncryptionId_;
    bool diskEncryptionIdIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string password_;
    bool passwordIsSet_;
    OpenGaussChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;
    RestorePoint restorePoint_;
    bool restorePointIsSet_;
    OpenGaussBackupStrategy backupStrategy_;
    bool backupStrategyIsSet_;
    bool enableParallelRestore_;
    bool enableParallelRestoreIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    bool enableForceSwitch_;
    bool enableForceSwitchIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_OpengaussRestoreInstanceRequest_H_
