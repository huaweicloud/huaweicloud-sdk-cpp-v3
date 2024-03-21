
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_PackageRequestArgs_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_PackageRequestArgs_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/RecordRequestArgs.h>
#include <huaweicloud/live/v1/model/LiveRequestArgs.h>
#include <vector>
#include <huaweicloud/live/v1/model/TimeshiftRequestArgs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  PackageRequestArgs
    : public ModelBase
{
public:
    PackageRequestArgs();
    virtual ~PackageRequestArgs();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PackageRequestArgs members

    /// <summary>
    /// 录制播放相关配置
    /// </summary>

    std::vector<RecordRequestArgs>& getRecord();
    bool recordIsSet() const;
    void unsetrecord();
    void setRecord(const std::vector<RecordRequestArgs>& value);

    /// <summary>
    /// 时移播放相关配置
    /// </summary>

    std::vector<TimeshiftRequestArgs>& getTimeshift();
    bool timeshiftIsSet() const;
    void unsettimeshift();
    void setTimeshift(const std::vector<TimeshiftRequestArgs>& value);

    /// <summary>
    /// 直播播放相关配置
    /// </summary>

    std::vector<LiveRequestArgs>& getLive();
    bool liveIsSet() const;
    void unsetlive();
    void setLive(const std::vector<LiveRequestArgs>& value);


protected:
    std::vector<RecordRequestArgs> record_;
    bool recordIsSet_;
    std::vector<TimeshiftRequestArgs> timeshift_;
    bool timeshiftIsSet_;
    std::vector<LiveRequestArgs> live_;
    bool liveIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_PackageRequestArgs_H_
