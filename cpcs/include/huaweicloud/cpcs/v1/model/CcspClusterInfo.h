
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CcspClusterInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CcspClusterInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  CcspClusterInfo
    : public ModelBase
{
public:
    CcspClusterInfo();
    virtual ~CcspClusterInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CcspClusterInfo members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 账号ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 任务详情
    /// </summary>

    std::vector<Object>& getTaskDetails();
    bool taskDetailsIsSet() const;
    void unsettaskDetails();
    void setTaskDetails(const std::vector<Object>& value);

    /// <summary>
    /// ccsp集群id
    /// </summary>

    std::string getCcspId() const;
    bool ccspIdIsSet() const;
    void unsetccspId();
    void setCcspId(const std::string& value);

    /// <summary>
    /// 分布类型
    /// </summary>

    std::string getDistributedType() const;
    bool distributedTypeIsSet() const;
    void unsetdistributedType();
    void setDistributedType(const std::string& value);

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群名称
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// 集群所属的服务
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 集群的类型： - **SHARED** : 应用共享； - **EXCLUSIVE** : 应用独享
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 集群中包含的服务实例数量
    /// </summary>

    int32_t getInstanceNum() const;
    bool instanceNumIsSet() const;
    void unsetinstanceNum();
    void setInstanceNum(int32_t value);

    /// <summary>
    /// 集群状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 进度信息
    /// </summary>

    std::string getProgressInfo() const;
    bool progressInfoIsSet() const;
    void unsetprogressInfo();
    void setProgressInfo(const std::string& value);

    /// <summary>
    /// 集群使用VSM集群的vsm实例数量
    /// </summary>

    int32_t getVsmNum() const;
    bool vsmNumIsSet() const;
    void unsetvsmNum();
    void setVsmNum(int32_t value);

    /// <summary>
    /// 集群的创建时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 是否共享ccsp
    /// </summary>

    bool isSharedCcsp() const;
    bool sharedCcspIsSet() const;
    void unsetsharedCcsp();
    void setSharedCcsp(bool value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// az
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::vector<Object> taskDetails_;
    bool taskDetailsIsSet_;
    std::string ccspId_;
    bool ccspIdIsSet_;
    std::string distributedType_;
    bool distributedTypeIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t instanceNum_;
    bool instanceNumIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string progressInfo_;
    bool progressInfoIsSet_;
    int32_t vsmNum_;
    bool vsmNumIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    bool sharedCcsp_;
    bool sharedCcspIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string az_;
    bool azIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CcspClusterInfo_H_
