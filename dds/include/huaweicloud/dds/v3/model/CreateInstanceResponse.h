
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateInstanceResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateInstanceResponse_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/TagWithKeyValue.h>
#include <huaweicloud/dds/v3/model/BackupStrategy.h>
#include <string>
#include <huaweicloud/dds/v3/model/CreateInstanceConfigurationsOption.h>
#include <huaweicloud/dds/v3/model/ChargeInfoResult.h>
#include <huaweicloud/dds/v3/model/Datastore.h>
#include <vector>
#include <huaweicloud/dds/v3/model/CreateInstanceFlavorOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CreateInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateInstanceResponse();
    virtual ~CreateInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateInstanceResponse members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Datastore getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const Datastore& value);

    /// <summary>
    /// 实例名称，与请求参数相同。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 创建时间为本地时间，格式为“yyyy-mm-dd hh:mm:ss”。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 实例状态，取值为“creating”。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 区域ID，与请求参数相同。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 可用区ID，与请求参数相同。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID，与请求参数相同。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网ID，与请求参数相同。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 实例所属的安全组ID，与请求参数相同。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 数据库访问端口。
    /// </summary>

    int64_t getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(int64_t value);

    /// <summary>
    /// 磁盘加密的密钥ID，与请求参数相同。
    /// </summary>

    std::string getDiskEncryptionId() const;
    bool diskEncryptionIdIsSet() const;
    void unsetdiskEncryptionId();
    void setDiskEncryptionId(const std::string& value);

    /// <summary>
    /// 实例类型，与请求参数相同。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 参数组配置信息。
    /// </summary>

    std::vector<CreateInstanceConfigurationsOption>& getConfigurations();
    bool configurationsIsSet() const;
    void unsetconfigurations();
    void setConfigurations(const std::vector<CreateInstanceConfigurationsOption>& value);

    /// <summary>
    /// 实例规格详情，与请求参数相同。
    /// </summary>

    std::vector<CreateInstanceFlavorOption>& getFlavor();
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::vector<CreateInstanceFlavorOption>& value);

    /// <summary>
    /// 
    /// </summary>

    BackupStrategy getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const BackupStrategy& value);

    /// <summary>
    /// 企业项目ID。取值为“0”，表示为default企业项目。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// SSL开关选项，与请求参数相同。
    /// </summary>

    std::string getSslOption() const;
    bool sslOptionIsSet() const;
    void unsetsslOption();
    void setSslOption(const std::string& value);

    /// <summary>
    /// 专属存储池ID。
    /// </summary>

    std::string getDssPoolId() const;
    bool dssPoolIdIsSet() const;
    void unsetdssPoolId();
    void setDssPoolId(const std::string& value);

    /// <summary>
    /// 创建实例的工作流ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 标签列表，与请求参数相同。
    /// </summary>

    std::vector<TagWithKeyValue>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TagWithKeyValue>& value);

    /// <summary>
    /// 创建实例的订单ID，仅创建包年包月实例时返回该参数。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChargeInfoResult getChargeInfo() const;
    bool chargeInfoIsSet() const;
    void unsetchargeInfo();
    void setChargeInfo(const ChargeInfoResult& value);


protected:
    std::string id_;
    bool idIsSet_;
    Datastore datastore_;
    bool datastoreIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string status_;
    bool statusIsSet_;
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
    int64_t port_;
    bool portIsSet_;
    std::string diskEncryptionId_;
    bool diskEncryptionIdIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::vector<CreateInstanceConfigurationsOption> configurations_;
    bool configurationsIsSet_;
    std::vector<CreateInstanceFlavorOption> flavor_;
    bool flavorIsSet_;
    BackupStrategy backupStrategy_;
    bool backupStrategyIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string sslOption_;
    bool sslOptionIsSet_;
    std::string dssPoolId_;
    bool dssPoolIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::vector<TagWithKeyValue> tags_;
    bool tagsIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    ChargeInfoResult chargeInfo_;
    bool chargeInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateInstanceResponse_H_
