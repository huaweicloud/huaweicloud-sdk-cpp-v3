
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestartConfiguration_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestartConfiguration_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/RestartPolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RestartConfiguration
    : public ModelBase
{
public:
    RestartConfiguration();
    virtual ~RestartConfiguration();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestartConfiguration members

    /// <summary>
    /// 是否重启虚拟机。
    /// </summary>

    bool isRestartServer() const;
    bool restartServerIsSet() const;
    void unsetrestartServer();
    void setRestartServer(bool value);

    /// <summary>
    /// 是否强制重启, 强制重启会导致数据库服务中未提交的事务强制中断。
    /// </summary>

    bool isForcible() const;
    bool forcibleIsSet() const;
    void unsetforcible();
    void setForcible(bool value);

    /// <summary>
    /// 是否在可维护时间段内重启。
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);

    /// <summary>
    /// 
    /// </summary>

    RestartPolicy getRestartPolicy() const;
    bool restartPolicyIsSet() const;
    void unsetrestartPolicy();
    void setRestartPolicy(const RestartPolicy& value);


protected:
    bool restartServer_;
    bool restartServerIsSet_;
    bool forcible_;
    bool forcibleIsSet_;
    bool delay_;
    bool delayIsSet_;
    RestartPolicy restartPolicy_;
    bool restartPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestartConfiguration_H_
