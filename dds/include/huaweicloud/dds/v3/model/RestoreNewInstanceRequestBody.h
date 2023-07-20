
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreNewInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreNewInstanceRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/RestoreNewInstanceFlavorOption.h>
#include <huaweicloud/dds/v3/model/BackupStrategy.h>
#include <string>
#include <huaweicloud/dds/v3/model/ChargeInfoOption.h>
#include <huaweicloud/dds/v3/model/RestoreNewInstanceConfigurationsOption.h>
#include <huaweicloud/dds/v3/model/RestorePoint.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息。
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  RestoreNewInstanceRequestBody
    : public ModelBase
{
public:
    RestoreNewInstanceRequestBody();
    virtual ~RestoreNewInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreNewInstanceRequestBody members

    /// <summary>
    /// 实例名称。用于表示实例的名称，用于表示实例的名称，允许和已有名称重复。 取值范围：长度为4~64位，必须以字母开头（A~Z或a~z），区分大小写，可以包含字母、数字（0~9）、中划线（-）或者下划线（_），不能包含其他特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 可用区ID，请参见[地区和终端节点](https://developer.huaweicloud.com/endpoint)。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID。获取方法请参见《虚拟私有云API参考》中“VPC”的内容。 取值：非空，字符长度校验，严格UUID正则校验。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网ID。获取方法请参见《虚拟私有云API参考》中“子网”的内容。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 指定实例所属的安全组ID。 获取方法请参见《虚拟私有云API参考》中“安全组”的内容。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 数据库密码。 取值范围：长度为8~32位，必须是大写字母（A~Z）、小写字母（a~z）、数字（0~9）、特殊字符~!@#%^*-_&#x3D;+?的组合。 建议您输入高强度密码，以提高安全性，防止出现密码被暴力破解等安全风险。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 磁盘加密时的密钥ID，严格UUID正则校验。 不传该参数时，表示不进行磁盘加密。
    /// </summary>

    std::string getDiskEncryptionId() const;
    bool diskEncryptionIdIsSet() const;
    void unsetdiskEncryptionId();
    void setDiskEncryptionId(const std::string& value);

    /// <summary>
    /// 参数组配置信息。
    /// </summary>

    std::vector<RestoreNewInstanceConfigurationsOption>& getConfigurations();
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const std::vector<RestoreNewInstanceConfigurationsOption>& value);

    /// <summary>
    /// 实例规格详情。
    /// </summary>

    std::vector<RestoreNewInstanceFlavorOption>& getFlavor();
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::vector<RestoreNewInstanceFlavorOption>& value);

    /// <summary>
    /// 
    /// </summary>

    BackupStrategy getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const BackupStrategy& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// SSL开关选项。 取值： - 取“0”，表示DDS实例默认不启用SSL连接。 - 取“1”，表示DDS实例默认启用SSL连接。 - 不传该参数时，默认启用SSL连接。
    /// </summary>

    std::string getSslOption() const;
    bool sslOptionIsSet() const;
    void unsetsslOption();
    void setSslOption(const std::string& value);

    /// <summary>
    /// 创建新实例所在专属存储池ID，仅专属云创建实例时有效。
    /// </summary>

    std::string getDssPoolId() const;
    bool dssPoolIdIsSet() const;
    void unsetdssPoolId();
    void setDssPoolId(const std::string& value);

    /// <summary>
    /// 创建新实例设置云服务器组关联的策略名称列表，仅专属云创建实例时有效。 取值    - 取“anti-affinity”，表示DDS实例开启反亲和部署，反亲和部署是出于高可用性考虑，将您的Primary、Secondary和Hidden节点分别创建在不同的物理机上。当前仅支持该值，不传该值默认不开启反亲和部署。
    /// </summary>

    std::vector<std::string>& getServerGroupPolicies();
    bool serverGroupPoliciesIsSet() const;
    void unsetserverGroupPolicies();
    void setServerGroupPolicies(const std::vector<std::string>& value);

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

    ChargeInfoOption getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const ChargeInfoOption& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string password_;
    bool passwordIsSet_;
    std::string diskEncryptionId_;
    bool diskEncryptionIdIsSet_;
    std::vector<RestoreNewInstanceConfigurationsOption> configurations_;
    bool configurationsIsSet_;
    std::vector<RestoreNewInstanceFlavorOption> flavor_;
    bool flavorIsSet_;
    BackupStrategy backupStrategy_;
    bool backupStrategyIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string sslOption_;
    bool sslOptionIsSet_;
    std::string dssPoolId_;
    bool dssPoolIdIsSet_;
    std::vector<std::string> serverGroupPolicies_;
    bool serverGroupPoliciesIsSet_;
    RestorePoint restorePoint_;
    bool restorePointIsSet_;
    ChargeInfoOption chargeInfo_;
    bool chargeInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreNewInstanceRequestBody_H_
