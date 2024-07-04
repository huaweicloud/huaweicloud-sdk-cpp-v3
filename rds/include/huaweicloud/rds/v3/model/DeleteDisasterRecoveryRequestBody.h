
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteDisasterRecoveryRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteDisasterRecoveryRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 解除实例容灾关系请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DeleteDisasterRecoveryRequestBody
    : public ModelBase
{
public:
    DeleteDisasterRecoveryRequestBody();
    virtual ~DeleteDisasterRecoveryRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDisasterRecoveryRequestBody members

    /// <summary>
    /// 解除目标的实例id
    /// </summary>

    std::string getTargetInstanceId() const;
    bool targetInstanceIdIsSet() const;
    void unsettargetInstanceId();
    void setTargetInstanceId(const std::string& value);

    /// <summary>
    /// 解除目标的project id
    /// </summary>

    std::string getTargetProjectId() const;
    bool targetProjectIdIsSet() const;
    void unsettargetProjectId();
    void setTargetProjectId(const std::string& value);

    /// <summary>
    /// 解除目标的region
    /// </summary>

    std::string getTargetRegion() const;
    bool targetRegionIsSet() const;
    void unsettargetRegion();
    void setTargetRegion(const std::string& value);

    /// <summary>
    /// 解除目标的数据浮动ip
    /// </summary>

    std::string getTargetIp() const;
    bool targetIpIsSet() const;
    void unsettargetIp();
    void setTargetIp(const std::string& value);

    /// <summary>
    /// 当前操作对象是否是主实例
    /// </summary>

    bool isIsMaster() const;
    bool isMasterIsSet() const;
    void unsetisMaster();
    void setIsMaster(bool value);


protected:
    std::string targetInstanceId_;
    bool targetInstanceIdIsSet_;
    std::string targetProjectId_;
    bool targetProjectIdIsSet_;
    std::string targetRegion_;
    bool targetRegionIsSet_;
    std::string targetIp_;
    bool targetIpIsSet_;
    bool isMaster_;
    bool isMasterIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteDisasterRecoveryRequestBody_H_
