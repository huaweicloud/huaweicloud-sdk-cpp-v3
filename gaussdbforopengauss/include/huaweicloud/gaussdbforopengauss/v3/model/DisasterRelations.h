
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DisasterRelations_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DisasterRelations_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/RegionInstanceInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 对端容灾关系信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DisasterRelations
    : public ModelBase
{
public:
    DisasterRelations();
    virtual ~DisasterRelations();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DisasterRelations members

    /// <summary>
    /// 容灾类型。
    /// </summary>

    std::string getDisasterType() const;
    bool disasterTypeIsSet() const;
    void unsetdisasterType();
    void setDisasterType(const std::string& value);

    /// <summary>
    /// 容灾任务名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 容灾角色。
    /// </summary>

    std::string getDisasterRole() const;
    bool disasterRoleIsSet() const;
    void unsetdisasterRole();
    void setDisasterRole(const std::string& value);

    /// <summary>
    /// 创建时间，格式为“yyyy-mm-dd hh:mm:ss”。
    /// </summary>

    std::string getCreated() const;
    bool createdIsSet() const;
    void unsetcreated();
    void setCreated(const std::string& value);

    /// <summary>
    /// 更新时间，格式为“yyyy-mm-dd hh:mm:ss”。
    /// </summary>

    std::string getUpdated() const;
    bool updatedIsSet() const;
    void unsetupdated();
    void setUpdated(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RegionInstanceInfo getSlaveRegionInstanceInfo() const;
    bool slaveRegionInstanceInfoIsSet() const;
    void unsetslaveRegionInstanceInfo();
    void setSlaveRegionInstanceInfo(const RegionInstanceInfo& value);

    /// <summary>
    /// 
    /// </summary>

    RegionInstanceInfo getMasterRegionInstanceInfo() const;
    bool masterRegionInstanceInfoIsSet() const;
    void unsetmasterRegionInstanceInfo();
    void setMasterRegionInstanceInfo(const RegionInstanceInfo& value);

    /// <summary>
    /// 容灾记录id。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 容灾关系唯一id。
    /// </summary>

    std::string getSynchronizationId() const;
    bool synchronizationIdIsSet() const;
    void unsetsynchronizationId();
    void setSynchronizationId(const std::string& value);

    /// <summary>
    /// 当前region实例id。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 当前region实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 当前region实例状态。
    /// </summary>

    std::string getInstanceStatus() const;
    bool instanceStatusIsSet() const;
    void unsetinstanceStatus();
    void setInstanceStatus(const std::string& value);

    /// <summary>
    /// 容灾记录状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 预校验失败原因。
    /// </summary>

    std::string getPrecheckFailedReason() const;
    bool precheckFailedReasonIsSet() const;
    void unsetprecheckFailedReason();
    void setPrecheckFailedReason(const std::string& value);

    /// <summary>
    /// 实例当前操作action。
    /// </summary>

    std::vector<std::string>& getActions();
    bool actionsIsSet() const;
    void unsetactions();
    void setActions(const std::vector<std::string>& value);


protected:
    std::string disasterType_;
    bool disasterTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string disasterRole_;
    bool disasterRoleIsSet_;
    std::string created_;
    bool createdIsSet_;
    std::string updated_;
    bool updatedIsSet_;
    RegionInstanceInfo slaveRegionInstanceInfo_;
    bool slaveRegionInstanceInfoIsSet_;
    RegionInstanceInfo masterRegionInstanceInfo_;
    bool masterRegionInstanceInfoIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string synchronizationId_;
    bool synchronizationIdIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string instanceStatus_;
    bool instanceStatusIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string precheckFailedReason_;
    bool precheckFailedReasonIsSet_;
    std::vector<std::string> actions_;
    bool actionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DisasterRelations_H_
