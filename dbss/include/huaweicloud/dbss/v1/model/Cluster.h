
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_Cluster_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_Cluster_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dbss/v1/model/ServerList.h>
#include <huaweicloud/dbss/v1/model/InstanceActivateInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  Cluster
    : public ModelBase
{
public:
    Cluster();
    virtual ~Cluster();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Cluster members

    /// <summary>
    /// 
    /// </summary>

    InstanceActivateInfo getActivateInfo() const;
    bool activateInfoIsSet() const;
    void unsetactivateInfo();
    void setActivateInfo(const InstanceActivateInfo& value);

    /// <summary>
    /// 计费模式  - Period：包周期  - Demand：按需
    /// </summary>

    std::string getChargeModel() const;
    bool chargeModelIsSet() const;
    void unsetchargeModel();
    void setChargeModel(const std::string& value);

    /// <summary>
    /// 备注信息
    /// </summary>

    std::string getComment() const;
    bool commentIsSet() const;
    void unsetcomment();
    void setComment(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    int64_t getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(int64_t value);

    /// <summary>
    /// 部署方式  - CLOUD：云上  - OUTSIDE：云外
    /// </summary>

    std::string getDeployMode() const;
    bool deployModeIsSet() const;
    void unsetdeployMode();
    void setDeployMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ServerList getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const ServerList& value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    int64_t getExpired() const;
    bool expiredIsSet() const;
    void unsetexpired();
    void setExpired(int64_t value);

    /// <summary>
    /// 浮动IP
    /// </summary>

    std::string getFloatIp() const;
    bool floatIpIsSet() const;
    void unsetfloatIp();
    void setFloatIp(const std::string& value);

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 是否激活备用
    /// </summary>

    bool isIsActiveStandby() const;
    bool isActiveStandbyIsSet() const;
    void unsetisActiveStandby();
    void setIsActiveStandby(bool value);

    /// <summary>
    /// 使用天数
    /// </summary>

    std::string getKeepDays() const;
    bool keepDaysIsSet() const;
    void unsetkeepDays();
    void setKeepDays(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 最新版本
    /// </summary>

    std::string getNewVersion() const;
    bool newVersionIsSet() const;
    void unsetnewVersion();
    void setNewVersion(const std::string& value);

    /// <summary>
    /// 公网IP
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);

    /// <summary>
    /// 剩余天数
    /// </summary>

    std::string getRemainDays() const;
    bool remainDaysIsSet() const;
    void unsetremainDays();
    void setRemainDays(const std::string& value);


protected:
    InstanceActivateInfo activateInfo_;
    bool activateInfoIsSet_;
    std::string chargeModel_;
    bool chargeModelIsSet_;
    std::string comment_;
    bool commentIsSet_;
    int64_t created_;
    bool createdIsSet_;
    std::string deployMode_;
    bool deployModeIsSet_;
    ServerList detail_;
    bool detailIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int64_t expired_;
    bool expiredIsSet_;
    std::string floatIp_;
    bool floatIpIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    bool isActiveStandby_;
    bool isActiveStandbyIsSet_;
    std::string keepDays_;
    bool keepDaysIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string newVersion_;
    bool newVersionIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;
    std::string remainDays_;
    bool remainDaysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_Cluster_H_
