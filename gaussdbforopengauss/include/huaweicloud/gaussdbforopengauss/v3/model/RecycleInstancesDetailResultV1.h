
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RecycleInstancesDetailResultV1_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RecycleInstancesDetailResultV1_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RecycleInstancesDetailResultV1
    : public ModelBase
{
public:
    RecycleInstancesDetailResultV1();
    virtual ~RecycleInstancesDetailResultV1();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecycleInstancesDetailResultV1 members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 部署形态(Ha:主备版;Independent:独立部署;Combined:混合部署)。
    /// </summary>

    std::string getHaMode() const;
    bool haModeIsSet() const;
    void unsethaMode();
    void setHaMode(const std::string& value);

    /// <summary>
    /// 引擎名称
    /// </summary>

    std::string getEngineName() const;
    bool engineNameIsSet() const;
    void unsetengineName();
    void setEngineName(const std::string& value);

    /// <summary>
    /// 引擎版本号。
    /// </summary>

    std::string getEngineVersion() const;
    bool engineVersionIsSet() const;
    void unsetengineVersion();
    void setEngineVersion(const std::string& value);

    /// <summary>
    /// 计费模式（0：按需计费；1：包年/包月）。
    /// </summary>

    std::string getPayModel() const;
    bool payModelIsSet() const;
    void unsetpayModel();
    void setPayModel(const std::string& value);

    /// <summary>
    /// 创建时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 删除时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。
    /// </summary>

    std::string getDeletedAt() const;
    bool deletedAtIsSet() const;
    void unsetdeletedAt();
    void setDeletedAt(const std::string& value);

    /// <summary>
    /// 磁盘类型。（SAS：high；SSD：ultrahigh；ESSD：essd）。
    /// </summary>

    std::string getVolumeType() const;
    bool volumeTypeIsSet() const;
    void unsetvolumeType();
    void setVolumeType(const std::string& value);

    /// <summary>
    /// 磁盘大小
    /// </summary>

    std::string getVolumeSize() const;
    bool volumeSizeIsSet() const;
    void unsetvolumeSize();
    void setVolumeSize(const std::string& value);

    /// <summary>
    /// 数据vip。
    /// </summary>

    std::string getDataVip() const;
    bool dataVipIsSet() const;
    void unsetdataVip();
    void setDataVip(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 企业项目名称
    /// </summary>

    std::string getEnterpriseProjectName() const;
    bool enterpriseProjectNameIsSet() const;
    void unsetenterpriseProjectName();
    void setEnterpriseProjectName(const std::string& value);

    /// <summary>
    /// 备份级别
    /// </summary>

    std::string getBackupLevel() const;
    bool backupLevelIsSet() const;
    void unsetbackupLevel();
    void setBackupLevel(const std::string& value);

    /// <summary>
    /// 备份ID。（指删除实例时产生备份信息中的备份ID）。
    /// </summary>

    std::string getRecycleBackupId() const;
    bool recycleBackupIdIsSet() const;
    void unsetrecycleBackupId();
    void setRecycleBackupId(const std::string& value);

    /// <summary>
    /// 回收站备份状态。（Running：运行中；Active：有效的）。
    /// </summary>

    std::string getRecycleStatus() const;
    bool recycleStatusIsSet() const;
    void unsetrecycleStatus();
    void setRecycleStatus(const std::string& value);

    /// <summary>
    /// 产品类型（basic：基础版；standard：标准版；enterprise：企业版）。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string haMode_;
    bool haModeIsSet_;
    std::string engineName_;
    bool engineNameIsSet_;
    std::string engineVersion_;
    bool engineVersionIsSet_;
    std::string payModel_;
    bool payModelIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string deletedAt_;
    bool deletedAtIsSet_;
    std::string volumeType_;
    bool volumeTypeIsSet_;
    std::string volumeSize_;
    bool volumeSizeIsSet_;
    std::string dataVip_;
    bool dataVipIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string enterpriseProjectName_;
    bool enterpriseProjectNameIsSet_;
    std::string backupLevel_;
    bool backupLevelIsSet_;
    std::string recycleBackupId_;
    bool recycleBackupIdIsSet_;
    std::string recycleStatus_;
    bool recycleStatusIsSet_;
    std::string mode_;
    bool modeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RecycleInstancesDetailResultV1_H_
