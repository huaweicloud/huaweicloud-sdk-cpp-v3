
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_SelectedSetAlarmTaskReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_SelectedSetAlarmTaskReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 需要设置SMN的任务信息。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  SelectedSetAlarmTaskReq
    : public ModelBase
{
public:
    SelectedSetAlarmTaskReq();
    virtual ~SelectedSetAlarmTaskReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SelectedSetAlarmTaskReq members

    /// <summary>
    /// 任务ID
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 引擎类型
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_SelectedSetAlarmTaskReq_H_
