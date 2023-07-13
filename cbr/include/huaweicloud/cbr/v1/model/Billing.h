
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_Billing_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_Billing_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  Billing
    : public ModelBase
{
public:
    Billing();
    virtual ~Billing();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Billing members

    /// <summary>
    /// 已分配容量，单位GB
    /// </summary>

    int32_t getAllocated() const;
    bool allocatedIsSet() const;
    void unsetallocated();
    void setAllocated(int32_t value);

    /// <summary>
    /// 创建模式
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 云平台
    /// </summary>

    std::string getCloudType() const;
    bool cloudTypeIsSet() const;
    void unsetcloudType();
    void setCloudType(const std::string& value);

    /// <summary>
    /// 崩溃一致性（crash_consistent）或应用一致性（app_consistent）
    /// </summary>

    std::string getConsistentLevel() const;
    bool consistentLevelIsSet() const;
    void unsetconsistentLevel();
    void setConsistentLevel(const std::string& value);

    /// <summary>
    /// 对象类型：云服务器（server），云硬盘（disk），文件系统（turbo），云桌面（workspace），VMware（vmware），关系型数据库（rds），文件（file）。
    /// </summary>

    std::string getObjectType() const;
    bool objectTypeIsSet() const;
    void unsetobjectType();
    void setObjectType(const std::string& value);

    /// <summary>
    /// 订单ID
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 产品ID
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 保护类型
    /// </summary>

    std::string getProtectType() const;
    bool protectTypeIsSet() const;
    void unsetprotectType();
    void setProtectType(const std::string& value);

    /// <summary>
    /// 容量，单位GB
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 规格编码: 云服务备份存储库:vault.backup.server.normal;云硬盘备份存储库:vault.backup.volume.normal;文件备份存储库:vault.backup.turbo.normal;数据库备份存储库:vault.backup.database.normal;混合云备份存储库:vault.hybrid.server.normal;复制备份存储库:vault.replication.server.normal
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// 存储库状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 存储库桶名
    /// </summary>

    std::string getStorageUnit() const;
    bool storageUnitIsSet() const;
    void unsetstorageUnit();
    void setStorageUnit(const std::string& value);

    /// <summary>
    /// 已使用容量，单位MB
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 冻结场景
    /// </summary>

    std::string getFrozenScene() const;
    bool frozenSceneIsSet() const;
    void unsetfrozenScene();
    void setFrozenScene(const std::string& value);

    /// <summary>
    /// 存储库多az属性
    /// </summary>

    bool isIsMultiAz() const;
    bool isMultiAzIsSet() const;
    void unsetisMultiAz();
    void setIsMultiAz(bool value);


protected:
    int32_t allocated_;
    bool allocatedIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string cloudType_;
    bool cloudTypeIsSet_;
    std::string consistentLevel_;
    bool consistentLevelIsSet_;
    std::string objectType_;
    bool objectTypeIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string protectType_;
    bool protectTypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string storageUnit_;
    bool storageUnitIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string frozenScene_;
    bool frozenSceneIsSet_;
    bool isMultiAz_;
    bool isMultiAzIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_Billing_H_
