
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeBaseInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeBaseInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务实例基本信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobNodeBaseInfo
    : public ModelBase
{
public:
    JobNodeBaseInfo();
    virtual ~JobNodeBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// JobNodeBaseInfo members

    /// <summary>
    /// 实例类型。取值： - single：单机。 - ha：主备。
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// CPU架构。取值： - x86 - arm
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// 可用区ID。 约束：对于任务实例类型不是单机的实例，需要分别为实例所有节点指定可用区，并用“,”英文逗号隔开。示例： - 实例类型为single：\&quot;cn-north-4a\&quot; - 实例类型为ha：\&quot;cn-north-4a,cn-north-4b\&quot;
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 状态。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务主备角色。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);


protected:
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string arch_;
    bool archIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string role_;
    bool roleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeBaseInfo_H_
