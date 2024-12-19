
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateDatabaseInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateDatabaseInstanceRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussBackupStrategy.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateInstanceDatastoreOption.h>
#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussVolume.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussChargeInfo.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussHaOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CreateDatabaseInstanceRequestBody
    : public ModelBase
{
public:
    CreateDatabaseInstanceRequestBody();
    virtual ~CreateDatabaseInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDatabaseInstanceRequestBody members

    /// <summary>
    /// 实例名称。 用于表示实例的名称，同一租户下，同类型的实例名可重名。  取值范围：4~64个字符之间，必须以字母开头，区分大小写，可以包含字母、数字、中划线或者下划线，不能包含其他的特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateInstanceDatastoreOption getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const CreateInstanceDatastoreOption& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussHaOption getHa() const;
    bool haIsSet() const;
    void unsetha();
    void setHa(const OpenGaussHaOption& value);

    /// <summary>
    /// 参数模板ID。当不传该参数时，使用系统默认的参数模板。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 数据库对外开放的端口，不填默认为8000，可选范围为：1024-39998。限制端口： 2378,2379,2380,4999,5000,5999,6000,6001,8097,8098,12016,12017,20049,20050,21731,21732,32122,32123,32124。  - GaussDB数据库端口当前只支持设置为8000，当不传该参数时，默认端口为8000。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 数据库密码。必选。  取值范围：  &#39;非空； 至少包含大写字母（A-Z），小写字母（a-z），数字（0-9），非字母数字字符（限定为~!@#%^*-_&#x3D;+?,）四类字符中的三类字符；长度8~32个字符。&#39;  &#39;建议您输入高强度密码，以提高安全性，防止出现密码被暴力破解等安全风险。&#39;
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussBackupStrategy getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const OpenGaussBackupStrategy& value);

    /// <summary>
    /// 企业项目ID。只有企业租户时该参数才生效。  使用请参考《企业管理 API参考》的“[查询企业项目列表](https://support.huaweicloud.com/api-em/zh-cn_topic_0121230880.html)”响应消息表“enterprise_project字段数据结构说明”的“id”。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 用于磁盘加密的密钥ID，默认为空。
    /// </summary>

    std::string getDiskEncryptionId() const;
    bool diskEncryptionIdIsSet() const;
    void unsetdiskEncryptionId();
    void setDiskEncryptionId(const std::string& value);

    /// <summary>
    /// 规格码，取值范围：非空。参考[表1](https://support.huaweicloud.com/api-opengauss/opengauss_api_0037.html#opengauss_api_0037__ted9b9d433c8a4c52884e199e17f94479)中GaussDB的“规格编码”列内容获取。
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
    /// 区域ID。  取值范围：非空，请参见[地区和终端节点](https://developer.huaweicloud.com/endpoint)。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 可用区ID。  GaussDB取值范围：非空，可选部署在同一可用区或三个不同可用区，可用区之间用逗号隔开。详见示例。  - 部署在同一可用区：需要输入三个相同的可用区。例如：部署在“cn-north-4a”可用区，则需要在此处输入\&quot;cn-north-4a,cn-north-4a,cn-north-4a\&quot;。 - 部署在三个不同可用区：需要分别输入三个不同的可用区。 取值范围：非空，请参见[地区和终端节点](https://developer.huaweicloud.com/endpoint)。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

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
    /// 
    /// </summary>

    OpenGaussChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const OpenGaussChargeInfo& value);

    /// <summary>
    /// UTC时区。  - 不选择时，GaussDB国内站、默认为UTC时间。 - 选择填写时，取值范围为UTC-12:00~UTC+12:00，且只支持整段时间，如UTC+08:00，不支持UTC+08:30。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// 仅分布式形态需要填写该参数。分片数量，取值范围1~9。
    /// </summary>

    int32_t getShardingNum() const;
    bool shardingNumIsSet() const;
    void unsetshardingNum();
    void setShardingNum(int32_t value);

    /// <summary>
    /// 仅分布式形态需要填写该参数。协调节点数量，取值范围1~9。CN数量必须小于或等于两倍的分片数。
    /// </summary>

    int32_t getCoordinatorNum() const;
    bool coordinatorNumIsSet() const;
    void unsetcoordinatorNum();
    void setCoordinatorNum(int32_t value);

    /// <summary>
    /// 实例副本数，支持取值3。不填默认为3。仅支持V2.0-1.3.0及以上版本的实例。
    /// </summary>

    int32_t getReplicaNum() const;
    bool replicaNumIsSet() const;
    void unsetreplicaNum();
    void setReplicaNum(int32_t value);

    /// <summary>
    /// enable_force_switch表示是否开启备机强升主功能，enable_force_switch&#x3D;true表示开启备机强升主功能，enable_force_switch&#x3D;false表示关闭，默认关闭。仅支持V2.0-1.2.2及以上版本。  说明：  备机强升主功能适用场景：在主机发生故障后，为了保障集群的可用性，强制拉起备机作为新主机对外提供服务的场景。 本功能在集群故障状态下，以丢失部分数据为代价换取集群尽可能快的恢复服务。本功能是集群状态为不可用时的一个逃生方法，如果操作者不清楚备机强升后丢失数据对业务的影响，请勿使用本功能。 备机强升主相关介绍请参考《故障处理》备机强升主章节。
    /// </summary>

    bool isEnableForceSwitch() const;
    bool enableForceSwitchIsSet() const;
    void unsetenableForceSwitch();
    void setEnableForceSwitch(bool value);

    /// <summary>
    /// 单浮动IP策略，仅主备版支持。默认值是false，表示不开启单浮动IP策略。 取值范围： true：开启单浮动IP策略，实例将只有一个浮动IP绑定主节点，如果发生主备倒换，浮动IP不会发生变化。 false：不开启单浮动IP策略，每个节点都会绑定一个浮动IP，如果发生主备倒换，浮动IP会发生变化。 说明： 仅支持V2.0-3.206及以上版本的主备版实例。
    /// </summary>

    bool isEnableSingleFloatIp() const;
    bool enableSingleFloatIpIsSet() const;
    void unsetenableSingleFloatIp();
    void setEnableSingleFloatIp(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    CreateInstanceDatastoreOption datastore_;
    bool datastoreIsSet_;
    OpenGaussHaOption ha_;
    bool haIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;
    std::string port_;
    bool portIsSet_;
    std::string password_;
    bool passwordIsSet_;
    OpenGaussBackupStrategy backupStrategy_;
    bool backupStrategyIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string diskEncryptionId_;
    bool diskEncryptionIdIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    OpenGaussVolume volume_;
    bool volumeIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    OpenGaussChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    int32_t shardingNum_;
    bool shardingNumIsSet_;
    int32_t coordinatorNum_;
    bool coordinatorNumIsSet_;
    int32_t replicaNum_;
    bool replicaNumIsSet_;
    bool enableForceSwitch_;
    bool enableForceSwitchIsSet_;
    bool enableSingleFloatIp_;
    bool enableSingleFloatIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateDatabaseInstanceRequestBody_H_
