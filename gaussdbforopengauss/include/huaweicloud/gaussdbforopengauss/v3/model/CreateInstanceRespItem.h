
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateInstanceRespItem_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateInstanceRespItem_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussBackupStrategyForResponse.h>
#include <string>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussDatastoreResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussHaResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussVolumeResponse.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  CreateInstanceRespItem
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
    /// 实例名称。 用于表示实例的名称，同一租户下，同类型的实例名可重名。 取值范围：4~64个字符之间，必须以字母开头，区分大小写，可以包含字母、数字、中划线或者下划线，不能包含其他的特殊字符。
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

    OpenGaussDatastoreResponse getDatastore() const;
    bool datastoreIsSet() const;
    void unsetdatastore();
    void setDatastore(const OpenGaussDatastoreResponse& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussHaResponse getHa() const;
    bool haIsSet() const;
    void unsetha();
    void setHa(const OpenGaussHaResponse& value);

    /// <summary>
    /// 数据库端口信息。 当不传该参数时，默认端口8000。
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussVolumeResponse getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(const OpenGaussVolumeResponse& value);

    /// <summary>
    /// 实例副本数。
    /// </summary>

    int32_t getReplicaNum() const;
    bool replicaNumIsSet() const;
    void unsetreplicaNum();
    void setReplicaNum(int32_t value);

    /// <summary>
    /// 区域ID。创建主实例时必选，其它场景不可选。 取值参见[地区和终端节点](https://developer.huaweicloud.com/endpoint)。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpenGaussBackupStrategyForResponse getBackupStrategy() const;
    bool backupStrategyIsSet() const;
    void unsetbackupStrategy();
    void setBackupStrategy(const OpenGaussBackupStrategyForResponse& value);

    /// <summary>
    /// 规格码。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 可用区ID。GaussDB取值范围：非空，可选部署在同一可用区或三个不同可用区，可用区之间用逗号隔开。 取值参见[地区和终端节点](https://developer.huaweicloud.com/endpoint)。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 虚拟私有云ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 子网ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 安全组ID。
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


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    OpenGaussDatastoreResponse datastore_;
    bool datastoreIsSet_;
    OpenGaussHaResponse ha_;
    bool haIsSet_;
    std::string port_;
    bool portIsSet_;
    OpenGaussVolumeResponse volume_;
    bool volumeIsSet_;
    int32_t replicaNum_;
    bool replicaNumIsSet_;
    std::string region_;
    bool regionIsSet_;
    OpenGaussBackupStrategyForResponse backupStrategy_;
    bool backupStrategyIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_CreateInstanceRespItem_H_
