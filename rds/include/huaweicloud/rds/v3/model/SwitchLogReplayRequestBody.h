
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchLogReplayRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchLogReplayRequestBody_H_


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
/// 中止/恢复wal日志回放请求体
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  SwitchLogReplayRequestBody
    : public ModelBase
{
public:
    SwitchLogReplayRequestBody();
    virtual ~SwitchLogReplayRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SwitchLogReplayRequestBody members

    /// <summary>
    /// “true”表示中止回放，“false”表示恢复回放，其他情况表示不做操作
    /// </summary>

    std::string getPauseLogReplay() const;
    bool pauseLogReplayIsSet() const;
    void unsetpauseLogReplay();
    void setPauseLogReplay(const std::string& value);


protected:
    std::string pauseLogReplay_;
    bool pauseLogReplayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_SwitchLogReplayRequestBody_H_
