
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PauseInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PauseInfo_H_


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
/// 暂停任务请求参数
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PauseInfo
    : public ModelBase
{
public:
    PauseInfo();
    virtual ~PauseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PauseInfo members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 暂停类型，target:停回放,all:停日志抓取和回放
    /// </summary>

    std::string getPauseMode() const;
    bool pauseModeIsSet() const;
    void unsetpauseMode();
    void setPauseMode(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string pauseMode_;
    bool pauseModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PauseInfo_H_
