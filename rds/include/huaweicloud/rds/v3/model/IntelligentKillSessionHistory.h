
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_IntelligentKillSessionHistory_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_IntelligentKillSessionHistory_H_


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
/// 限流信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  IntelligentKillSessionHistory
    : public ModelBase
{
public:
    IntelligentKillSessionHistory();
    virtual ~IntelligentKillSessionHistory();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IntelligentKillSessionHistory members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// kill开始时间
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// kill结束时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 操作历史下载链接
    /// </summary>

    std::string getDownloadLink() const;
    bool downloadLinkIsSet() const;
    void unsetdownloadLink();
    void setDownloadLink(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::string downloadLink_;
    bool downloadLinkIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_IntelligentKillSessionHistory_H_
