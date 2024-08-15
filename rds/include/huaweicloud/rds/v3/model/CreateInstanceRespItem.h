
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateInstanceRespItem_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateInstanceRespItem_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/BackupStrategy.h>
#include <huaweicloud/rds/v3/model/Volume.h>
#include <huaweicloud/rds/v3/model/Ha.h>
#include <string>
#include <huaweicloud/rds/v3/model/RestorePoint.h>
#include <huaweicloud/rds/v3/model/Datastore.h>
#include <huaweicloud/rds/v3/model/ChargeInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  CreateInstanceRespItem
    : public ModelBase
{
public:
    CreateInstanceRespItem();
    virtual ~CreateInstanceRespItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstanceRespItem members

    /// <summary>
    /// 实例id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称。 用于表示实例的名称，同一租户下，同类型的实例名可重名，其中，SQL Server实例名唯一。 取值范围：4~64个字符之间，必须以字母开头，区分大小写，可以包含字母、数字、中划线或者下划线，不能包含其他的特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例状态。如BUILD，表示创建中。 仅创建按需实例时会返回该参数。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const Datastore& value);

    /// <summary>
    /// 
    /// </summary>

    Ha getHa() const;
    bool haIsSet() const;
    void unsetha();
    void setHa(const Ha& value);

    /// <summary>
    /// 参数组ID。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 数据库端口信息。  - MySQL数据库端口设置范围为1024～65535（其中12017和33071被RDS系统占用不可设置）。 - PostgreSQL数据库端口修改范围为2100～9500。 - Microsoft SQL Server实例的端口设置范围为1433和2100~9500（其中5355和5985不可设置。对于2017 EE、2017 SE、2017 Web版，5050、5353和5986不可设置。  当不传该参数时，默认端口如下：  - MySQL默认3306。 - PostgreSQL默认5432。 - Microsoft SQL Server默认1433。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

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
    /// 用于磁盘加密的密钥ID。
    /// </summary>

    std::string getDiskEncryptionId() const;
    bool diskEncryptionIdIsSet() const;
    void unsetdiskEncryptionId();
    void setDiskEncryptionId(const std::string& value);

    /// <summary>
    /// 规格码。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Volume getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const Volume& value);

    /// <summary>
    /// 区域ID。创建主实例时必选，其它场景不可选。 取值参见OpenAPI查询数据库规格(https://console.huaweicloud.com/apiexplorer/#/openapi/RDS/doc?api&#x3D;ListFlavors)响应体的az_desc字段。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 可用区ID。对于数据库实例类型不是单机的实例，需要分别为实例所有节点指定可用区，并用逗号隔开。 取值参见OpenAPI查询数据库规格(https://console.huaweicloud.com/apiexplorer/#/openapi/RDS/doc?api&#x3D;ListFlavors)响应体的az_desc字段。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID。创建只读实例时不可选（只读实例的网络属性默认和主实例相同），其它场景必选。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网ID。创建只读实例时不可选（只读实例的网络属性默认和主实例相同），其它场景必选。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 安全组ID。创建只读实例时不可选（只读实例的网络属性默认和主实例相同），其它场景必选。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const ChargeInfo& value);

    /// <summary>
    /// 仅限Microsoft SQL Server实例使用。取值范围：根据查询SQL Server可用字符集的字符集查询列表查询可设置的字符集。
    /// </summary>

    std::string getCollation() const;
    bool collationIsSet() const;
    void unsetcollation();
    void setCollation(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RestorePoint getRestorePoint() const;
    bool restorePointIsSet() const;
    void unsetrestorePoint();
    void setRestorePoint(const RestorePoint& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    Datastore datastore_;
    bool datastoreIsSet_;
    Ha ha_;
    bool haIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;
    std::string port_;
    bool portIsSet_;
    BackupStrategy backupStrategy_;
    bool backupStrategyIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string diskEncryptionId_;
    bool diskEncryptionIdIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    Volume volume_;
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
    ChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;
    std::string collation_;
    bool collationIsSet_;
    RestorePoint restorePoint_;
    bool restorePointIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateInstanceRespItem_H_
