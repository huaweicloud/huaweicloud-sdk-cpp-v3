
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchImportSmnInfoReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchImportSmnInfoReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/BatchSetAlarmNotifyInfo.h>
#include <vector>
#include <huaweicloud/drs/v3/model/SelectedSetAlarmTaskReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 录入、修改收件方式与信息请求体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchImportSmnInfoReq
    : public ModelBase
{
public:
    BatchImportSmnInfoReq();
    virtual ~BatchImportSmnInfoReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchImportSmnInfoReq members

    /// <summary>
    /// 任务信息
    /// </summary>

    std::vector<SelectedSetAlarmTaskReq>& getJobs();
    bool jobsIsSet() const;
    void unsetjobs();
    void setJobs(const std::vector<SelectedSetAlarmTaskReq>& value);

    /// <summary>
    /// 
    /// </summary>

    BatchSetAlarmNotifyInfo getAlarmNotifyInfo() const;
    bool alarmNotifyInfoIsSet() const;
    void unsetalarmNotifyInfo();
    void setAlarmNotifyInfo(const BatchSetAlarmNotifyInfo& value);


protected:
    std::vector<SelectedSetAlarmTaskReq> jobs_;
    bool jobsIsSet_;
    BatchSetAlarmNotifyInfo alarmNotifyInfo_;
    bool alarmNotifyInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchImportSmnInfoReq_H_
