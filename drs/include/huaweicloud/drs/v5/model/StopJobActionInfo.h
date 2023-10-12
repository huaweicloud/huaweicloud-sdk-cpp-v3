
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_StopJobActionInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_StopJobActionInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 结束任务请求体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  StopJobActionInfo
    : public ModelBase
{
public:
    StopJobActionInfo();
    virtual ~StopJobActionInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopJobActionInfo members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 强制结束任务时取值true，默认false。
    /// </summary>

    bool isIsForceStop() const;
    bool isForceStopIsSet() const;
    void unsetisForceStop();
    void setIsForceStop(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    bool isForceStop_;
    bool isForceStopIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_StopJobActionInfo_H_
