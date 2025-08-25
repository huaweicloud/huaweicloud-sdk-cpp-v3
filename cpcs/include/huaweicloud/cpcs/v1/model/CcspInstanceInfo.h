
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CcspInstanceInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CcspInstanceInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  CcspInstanceInfo
    : public ModelBase
{
public:
    CcspInstanceInfo();
    virtual ~CcspInstanceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CcspInstanceInfo members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// cbc资源id
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 实例所属的服务
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 实例所属的集群的ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 实例的健康状态
    /// </summary>

    bool isIsNormal() const;
    bool isNormalIsSet() const;
    void unsetisNormal();
    void setIsNormal(bool value);

    /// <summary>
    /// 实例的服务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 实例的镜像名称
    /// </summary>

    std::string getImageName() const;
    bool imageNameIsSet() const;
    void unsetimageName();
    void setImageName(const std::string& value);

    /// <summary>
    /// 实例的虚机规格
    /// </summary>

    std::string getSpecification() const;
    bool specificationIsSet() const;
    void unsetspecification();
    void setSpecification(const std::string& value);

    /// <summary>
    /// az
    /// </summary>

    std::string getAz() const;
    bool azIsSet() const;
    void unsetaz();
    void setAz(const std::string& value);

    /// <summary>
    /// 超期时间
    /// </summary>

    int64_t getExpiredTime() const;
    bool expiredTimeIsSet() const;
    void unsetexpiredTime();
    void setExpiredTime(int64_t value);

    /// <summary>
    /// 实例的创建时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    bool isNormal_;
    bool isNormalIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string imageName_;
    bool imageNameIsSet_;
    std::string specification_;
    bool specificationIsSet_;
    std::string az_;
    bool azIsSet_;
    int64_t expiredTime_;
    bool expiredTimeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CcspInstanceInfo_H_
