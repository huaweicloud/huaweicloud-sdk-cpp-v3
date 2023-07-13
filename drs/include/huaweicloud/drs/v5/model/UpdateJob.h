
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateJob_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateJob_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/SpeedLimitInfo.h>
#include <huaweicloud/drs/v5/model/ModifyTuningParams.h>
#include <string>
#include <huaweicloud/drs/v5/model/JobNodeInfo.h>
#include <vector>
#include <huaweicloud/drs/v5/model/DbParamInfo.h>
#include <huaweicloud/drs/v5/model/UserMigrationInfo.h>
#include <huaweicloud/drs/v5/model/JobEndpointInfo.h>
#include <huaweicloud/drs/v5/model/PeriodOrderInfo.h>
#include <huaweicloud/drs/v5/model/DbObject.h>
#include <huaweicloud/drs/v5/model/JobBaseInfo.h>
#include <huaweicloud/drs/v5/model/AlarmNotifyConfig.h>
#include <huaweicloud/drs/v5/model/PolicyConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新任务信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UpdateJob
    : public ModelBase
{
public:
    UpdateJob();
    virtual ~UpdateJob();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateJob members

    /// <summary>
    /// 待更新的任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    JobBaseInfo getBaseInfo() const;
    bool baseInfoIsSet() const;
    void unsetbaseInfo();
    void setBaseInfo(const JobBaseInfo& value);

    /// <summary>
    /// 任务源数据库信息体。
    /// </summary>

    std::vector<JobEndpointInfo>& getSourceEndpoint();
    bool sourceEndpointIsSet() const;
    void unsetsourceEndpoint();
    void setSourceEndpoint(const std::vector<JobEndpointInfo>& value);

    /// <summary>
    /// 任务目标数据库信息体。
    /// </summary>

    std::vector<JobEndpointInfo>& getTargetEndpoint();
    bool targetEndpointIsSet() const;
    void unsettargetEndpoint();
    void setTargetEndpoint(const std::vector<JobEndpointInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    AlarmNotifyConfig getAlarmNotify() const;
    bool alarmNotifyIsSet() const;
    void unsetalarmNotify();
    void setAlarmNotify(const AlarmNotifyConfig& value);

    /// <summary>
    /// 限速信息体。 - 限速：自定义的最大迁移速度，迁移过程中的迁移速度将不会超过该速度。 - 不限速：对迁移速度不进行限制，通常会最大化使用源数据库的出口带宽。该流速模式同时会对源数据库造成读消耗，消耗取决于源数据库的出口带宽。比如：源数据库的出口带宽为100MB/s，假设高速模式使用了80%带宽，则迁移对源数据库将造成80MB/s的读操作IO消耗。
    /// </summary>

    std::vector<SpeedLimitInfo>& getSpeedLimit();
    bool speedLimitIsSet() const;
    void unsetspeedLimit();
    void setSpeedLimit(const std::vector<SpeedLimitInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    UserMigrationInfo getUserMigration() const;
    bool userMigrationIsSet() const;
    void unsetuserMigration();
    void setUserMigration(const UserMigrationInfo& value);

    /// <summary>
    /// 
    /// </summary>

    PolicyConfig getPolicyConfig() const;
    bool policyConfigIsSet() const;
    void unsetpolicyConfig();
    void setPolicyConfig(const PolicyConfig& value);

    /// <summary>
    /// 
    /// </summary>

    DbObject getDbObject() const;
    bool dbObjectIsSet() const;
    void unsetdbObject();
    void setDbObject(const DbObject& value);

    /// <summary>
    /// 
    /// </summary>

    DbParamInfo getDbParam() const;
    bool dbParamIsSet() const;
    void unsetdbParam();
    void setDbParam(const DbParamInfo& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyTuningParams getTuningParams() const;
    bool tuningParamsIsSet() const;
    void unsettuningParams();
    void setTuningParams(const ModifyTuningParams& value);

    /// <summary>
    /// 
    /// </summary>

    PeriodOrderInfo getPeriodOrder() const;
    bool periodOrderIsSet() const;
    void unsetperiodOrder();
    void setPeriodOrder(const PeriodOrderInfo& value);

    /// <summary>
    /// 
    /// </summary>

    JobNodeInfo getNodeInfo() const;
    bool nodeInfoIsSet() const;
    void unsetnodeInfo();
    void setNodeInfo(const JobNodeInfo& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    JobBaseInfo baseInfo_;
    bool baseInfoIsSet_;
    std::vector<JobEndpointInfo> sourceEndpoint_;
    bool sourceEndpointIsSet_;
    std::vector<JobEndpointInfo> targetEndpoint_;
    bool targetEndpointIsSet_;
    AlarmNotifyConfig alarmNotify_;
    bool alarmNotifyIsSet_;
    std::vector<SpeedLimitInfo> speedLimit_;
    bool speedLimitIsSet_;
    UserMigrationInfo userMigration_;
    bool userMigrationIsSet_;
    PolicyConfig policyConfig_;
    bool policyConfigIsSet_;
    DbObject dbObject_;
    bool dbObjectIsSet_;
    DbParamInfo dbParam_;
    bool dbParamIsSet_;
    ModifyTuningParams tuningParams_;
    bool tuningParamsIsSet_;
    PeriodOrderInfo periodOrder_;
    bool periodOrderIsSet_;
    JobNodeInfo nodeInfo_;
    bool nodeInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UpdateJob_H_
