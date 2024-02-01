
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/MysqlVolume.h>
#include <huaweicloud/gaussdb/v3/model/MysqlBackupStrategy.h>
#include <huaweicloud/gaussdb/v3/model/MysqlChargeInfo.h>
#include <huaweicloud/gaussdb/v3/model/MysqlRestorePoint.h>
#include <huaweicloud/gaussdb/v3/model/MysqlTags.h>
#include <huaweicloud/gaussdb/v3/model/MysqlDatastoreInReq.h>
#include <vector>
#include <huaweicloud/gaussdb/v3/model/MysqlTdeInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlInstanceRequest
    : public ModelBase
{
public:
    MysqlInstanceRequest();
    virtual ~MysqlInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlInstanceRequest members

    /// <summary>
    /// 
    /// </summary>

    MysqlChargeInfo getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const MysqlChargeInfo& value);

    /// <summary>
    /// 区域ID。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 实例名称。用于表示实例的名称，同一租户下，同类型的实例名可重名。  取值范围：最小为4个字符，最大为64个字符且不超过64个字节（注意：一个中文字符占用3个字节），必须以字母或中文开头，区分大小写，可以包含字母、数字、中划线、下划线或中文，不能包含其他特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlDatastoreInReq getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const MysqlDatastoreInReq& value);

    /// <summary>
    /// 实例类型，目前仅支持Cluster。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 规格码。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网的网络ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 安全组ID。如果实例所选用的子网开启网络ACL进行访问控制，则该参数非必选。如果未开启ACL进行访问控制，则该参数必选。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 参数模板ID。
    /// </summary>

    std::string getConfigurationId() const;
    bool configurationIdIsSet() const;
    void unsetconfigurationId();
    void setConfigurationId(const std::string& value);

    /// <summary>
    /// 数据库密码。  取值范围：至少包含以下字符的三种：大小写字母、数字和特殊符号~!@#$%^*-_&#x3D;+?,()&amp;，长度8~32个字符。 建议您输入高强度密码，以提高安全性，防止出现密码被暴力破解等安全风险。如果您输入弱密码，系统会自动判定密码非法。
    /// </summary>

    std::string getPassword() const;
    bool passwordIsSet() const;
    void unsetpassword();
    void setPassword(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlBackupStrategy getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const MysqlBackupStrategy& value);

    /// <summary>
    /// 时区。默认时区为UTC。
    /// </summary>

    std::string getTimeZone() const;
    bool timeZoneIsSet() const;
    void unsettimeZone();
    void setTimeZone(const std::string& value);

    /// <summary>
    /// 可用区类型,单可用区single或多可用区multi。
    /// </summary>

    std::string getAvailabilityZoneMode() const;
    bool availabilityZoneModeIsSet() const;
    void unsetavailabilityZoneMode();
    void setAvailabilityZoneMode(const std::string& value);

    /// <summary>
    /// 主可用区。
    /// </summary>

    std::string getMasterAvailabilityZone() const;
    bool masterAvailabilityZoneIsSet() const;
    void unsetmasterAvailabilityZone();
    void setMasterAvailabilityZone(const std::string& value);

    /// <summary>
    /// 只读节点个数。单次接口调用最多支持创建9个只读节点。
    /// </summary>

    int32_t getSlaveCount() const;
    bool slaveCountIsSet() const;
    void unsetslaveCount();
    void setSlaveCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    MysqlVolume getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const MysqlVolume& value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<MysqlTags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<MysqlTags>& value);

    /// <summary>
    /// 表名大小写是否敏感，默认值是“1”。  取值范围： - 0：表名被存储成固定且表名称大小写敏感。 - 1：表名将被存储成小写且表名称大小写不敏感。
    /// </summary>

    int32_t getLowerCaseTableNames() const;
    bool lowerCaseTableNamesIsSet() const;
    void unsetlowerCaseTableNames();
    void setLowerCaseTableNames(int32_t value);

    /// <summary>
    /// 企业项目ID。如果账户开通企业项目服务则该参数必选，未开启该参数不可选。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 专属资源池ID，只有开通专属资源池后才可以下发此参数。
    /// </summary>

    std::string getDedicatedResourceId() const;
    bool dedicatedResourceIdIsSet() const;
    void unsetdedicatedResourceId();
    void setDedicatedResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlRestorePoint getRestorePoint() const;
    bool restorePointIsSet() const;
    void unsetrestorePoint();
    void setRestorePoint(const MysqlRestorePoint& value);

    /// <summary>
    /// 
    /// </summary>

    MysqlTdeInfo getTdeInfo() const;
    bool tdeInfoIsSet() const;
    void unsettdeInfo();
    void setTdeInfo(const MysqlTdeInfo& value);


protected:
    MysqlChargeInfo chargeInfo_;
    bool chargeInfoIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string name_;
    bool nameIsSet_;
    MysqlDatastoreInReq datastore_;
    bool datastoreIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string configurationId_;
    bool configurationIdIsSet_;
    std::string password_;
    bool passwordIsSet_;
    MysqlBackupStrategy backupStrategy_;
    bool backupStrategyIsSet_;
    std::string timeZone_;
    bool timeZoneIsSet_;
    std::string availabilityZoneMode_;
    bool availabilityZoneModeIsSet_;
    std::string masterAvailabilityZone_;
    bool masterAvailabilityZoneIsSet_;
    int32_t slaveCount_;
    bool slaveCountIsSet_;
    MysqlVolume volume_;
    bool volumeIsSet_;
    std::vector<MysqlTags> tags_;
    bool tagsIsSet_;
    int32_t lowerCaseTableNames_;
    bool lowerCaseTableNamesIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string dedicatedResourceId_;
    bool dedicatedResourceIdIsSet_;
    MysqlRestorePoint restorePoint_;
    bool restorePointIsSet_;
    MysqlTdeInfo tdeInfo_;
    bool tdeInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlInstanceRequest_H_
