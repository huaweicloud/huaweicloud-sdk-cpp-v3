
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceResponse_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlDatastore.h>
#include <string>
#include <huaweicloud/gaussdb/v3/model/MysqlBackupStrategy.h>
#include <huaweicloud/gaussdb/v3/model/MysqlChargeInfo.h>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlInstanceResponse
    : public ModelBase
{
public:
    MysqlInstanceResponse();
    virtual ~MysqlInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MysqlInstanceResponse members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称。用于表示实例的名称，同一租户下，同类型的实例名称可相同。  取值范围：4~64个字符之间，必须以字母开头，不区分大小写，可以包含字母、数字、中划线或者下划线, 不能包含其它的特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 实例状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlDatastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const MysqlDatastore& value);

    /// <summary>
    /// 实例类型，仅支持Cluster。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 参数组ID。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 数据库端口信息。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlBackupStrategy getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const MysqlBackupStrategy& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 区域ID，与请求参数相同。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 可用区模式，与请求参数相同。
    /// </summary>

    std::string getAvailabilityZoneMode() const;
    bool availabilityZoneModeIsSet() const;
    void unsetavailabilityZoneMode();
    void setAvailabilityZoneMode(const std::string& value);

    /// <summary>
    /// 主可用区ID。
    /// </summary>

    std::string getMasterAvailabilityZone() const;
    bool masterAvailabilityZoneIsSet() const;
    void unsetmasterAvailabilityZone();
    void setMasterAvailabilityZone(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID，与请求参数相同。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 安全组ID，与请求参数相同。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 子网ID，与请求参数相同。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 规格码，与请求参数相同。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const MysqlChargeInfo& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    MysqlDatastore datastore_;
    bool datastoreIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;
    std::string port_;
    bool portIsSet_;
    MysqlBackupStrategy backupStrategy_;
    bool backupStrategyIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string availabilityZoneMode_;
    bool availabilityZoneModeIsSet_;
    std::string masterAvailabilityZone_;
    bool masterAvailabilityZoneIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    MysqlChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceResponse_H_
