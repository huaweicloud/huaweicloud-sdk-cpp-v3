
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobActions_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobActions_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务操作命令集合。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobActions
    : public ModelBase
{
public:
    JobActions();
    virtual ~JobActions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobActions members

    /// <summary>
    /// 任务可操作命令集合。 - CREATE：创建任务 - CHOOSE_OBJECT：选择对象，任务增量中再编辑 - PRE_CHECK：预检查 - CHANGE_MODE：修改任务模式 - FREE_RESOURCE：释放资源 - MODIFY_DB_CONFIG：修改数据库配置 - RESET_DB_PWD：重置数据库密码（源库、目标库） - MODIFY_CONFIGURATION：修改任务配置 - PAUSE：暂停任务 - START：启动任务 - CHANGE：修改任务 - RETRY：重试任务 - RESET：重置任务 - DELETE：删除任务 - QUERY_PRE_CHECK：预检查 - SWITCH_OVER：容灾倒换 - START_INCR：CASSANDRA启动增量任务 - MODIFY_TASK_NUMBER：CASSANDRA修改线程数配置 - CONTINUE_JOB：oracle-GaussDB分布式:启动失败或者停止的任务 - STOP_JOB：oracle-GaussDB分布式:停止任务 - CONTINUE_CAPTURE：启动抓取 - STOP_CAPTURE：停止抓取 - CONTINUE_APPLY：启动回放 - STOP_APPLY：停止回放 - PAY_ORDER：包年包月支付订单 - UNSUBSCRIBE：包年包月退订 - TO_PERIOD：转包周期 - TO_RENEW：包周期续费 - ORDER_INFO：订单详情 - CHANGE_FLAVOR：规格变更 - CLONE：克隆任务
    /// </summary>

    std::vector<std::string>& getAvailableActions();
    bool availableActionsIsSet() const;
    void unsetavailableActions();
    void setAvailableActions(const std::vector<std::string>& value);

    /// <summary>
    /// 任务可操作命令集合。 - CREATE：创建任务 - CHOOSE_OBJECT：选择对象，任务增量中再编辑 - PRE_CHECK：预检查 - CHANGE_MODE：修改任务模式 - FREE_RESOURCE：释放资源 - MODIFY_DB_CONFIG：修改数据库配置 - RESET_DB_PWD：重置数据库密码（源库、目标库） - MODIFY_CONFIGURATION：修改任务配置 - PAUSE：暂停任务 - START：启动任务 - CHANGE：修改任务 - RETRY：重试任务 - RESET：重置任务 - DELETE：删除任务 - QUERY_PRE_CHECK：预检查 - SWITCH_OVER：容灾倒换 - START_INCR：CASSANDRA启动增量任务 - MODIFY_TASK_NUMBER：CASSANDRA修改线程数配置 - CONTINUE_JOB：oracle-GaussDB分布式:启动失败或者停止的任务 - STOP_JOB：oracle-GaussDB分布式:停止任务 - CONTINUE_CAPTURE：启动抓取 - STOP_CAPTURE：停止抓取 - CONTINUE_APPLY：启动回放 - STOP_APPLY：停止回放 - PAY_ORDER：包年包月支付订单 - UNSUBSCRIBE：包年包月退订 - TO_PERIOD：转包周期 - TO_RENEW：包周期续费 - ORDER_INFO：订单详情 - CHANGE_FLAVOR：规格变更 - CLONE：克隆任务
    /// </summary>

    std::vector<std::string>& getUnavailableActions();
    bool unavailableActionsIsSet() const;
    void unsetunavailableActions();
    void setUnavailableActions(const std::vector<std::string>& value);

    /// <summary>
    /// 任务当前操作命令。取值： - API_CONFIGURATION_ACTION：OPEN API配置中的任务能调用。 - CHANGE：修改任务。 - CHANGE_MODE：修改任务模式。 - CHOOSE_OBJECT：选择对象。 - CLONE：克隆任务。 - CONTINUE_APPLY：启动回放，Oracle同步到GaussDB分布式适用。 - CONTINUE_CAPTURE：启动抓取，Oracle同步到GaussDB分布式适用。 - CONTINUE_JOB：启动失败或者停止的任务，Oracle同步到GaussDB分布式适用。 - CREATE：创建任务。 - DELETE：删除任务。 - FREE_RESOURCE：释放资源。 - JUMP_RETRY：跳跃续传任务。 - MODIFY_CONFIGURATION：修改任务配置。 - MODIFY_DB_CONFIG：修改数据库配置。 - MODIFY_TASK_NUMBER：修改线程数配置。 - NODE_FLAVOR_MODIFY：规格变更。 - ORDER_INFO：订单详情。 - PAUSE：暂停任务。 - PAY_ORDER：包年/包月支付订单。 - PRE_CHECK：预检查。 - QUERY_PRE_CHECK：查询预检查结果。 - RESET：重置任务。 - RESET_DB_PWD：重置数据库密码（源库、目标库）。 - RETRY：重试任务。 - START：启动任务。 - START_INCR：启动增量任务。 - STOP_APPLY：停止回放，Oracle同步到GaussDB分布式适用。 - STOP_CAPTURE：停止抓取，Oracle同步到GaussDB分布式适用。 - STOP_JOB：停止任务，Oracle同步到GaussDB分布式适用。 - SWITCH_OVER：灾备倒换。 - TO_PERIOD：转包年/包月任务。 - TO_RENEW：包年/包月任务续费。 - UNSUBSCRIBE：包年/包月任务退订。
    /// </summary>

    std::string getCurrentAction() const;
    bool currentActionIsSet() const;
    void unsetcurrentAction();
    void setCurrentAction(const std::string& value);


protected:
    std::vector<std::string> availableActions_;
    bool availableActionsIsSet_;
    std::vector<std::string> unavailableActions_;
    bool unavailableActionsIsSet_;
    std::string currentAction_;
    bool currentActionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobActions_H_
