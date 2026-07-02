
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_IntelligentKillSessionHistory_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_IntelligentKillSessionHistory_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  IntelligentKillSessionHistory
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
    /// **参数解释**：  智能Kill会话动作任务ID。  **取值范围**：  不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释**：  智能Kill会话动作起始时间。  **取值范围**：  开始执行智能Kill会话动作时刻的秒级时间戳。
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**：  智能Kill会话动作结束时间。  **取值范围**：  结束执行智能Kill会话动作时刻的秒级时间戳。
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**：  智能Kill会话历史记录下载链接。  **取值范围**：  不涉及。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_IntelligentKillSessionHistory_H_
