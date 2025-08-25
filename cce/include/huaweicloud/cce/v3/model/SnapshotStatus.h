
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  SnapshotStatus
    : public ModelBase
{
public:
    SnapshotStatus();
    virtual ~SnapshotStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SnapshotStatus members

    /// <summary>
    /// 任务状态
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// 任务进度
    /// </summary>

    std::string getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(const std::string& value);

    /// <summary>
    /// 完成时间
    /// </summary>

    std::string getCompletionTime() const;
    bool completionTimeIsSet() const;
    void unsetcompletionTime();
    void setCompletionTime(const std::string& value);


protected:
    std::string phase_;
    bool phaseIsSet_;
    std::string progress_;
    bool progressIsSet_;
    std::string completionTime_;
    bool completionTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_SnapshotStatus_H_
