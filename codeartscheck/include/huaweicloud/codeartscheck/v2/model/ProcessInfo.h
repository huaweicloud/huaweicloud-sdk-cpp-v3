
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ProcessInfo_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ProcessInfo_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 执行记录信息。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ProcessInfo
    : public ModelBase
{
public:
    ProcessInfo();
    virtual ~ProcessInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProcessInfo members

    /// <summary>
    /// **参数解释：** 执行时间，单位为秒。 **取值范围：** 不涉及。
    /// </summary>

    std::string getExeTime() const;
    bool exeTimeIsSet() const;
    void unsetexeTime();
    void setExeTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 执行时间，格式为%dm%ds，例如\&quot;6m6s\&quot;。 **取值范围：** 不涉及。
    /// </summary>

    std::string getExecuteTime() const;
    bool executeTimeIsSet() const;
    void unsetexecuteTime();
    void setExecuteTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 执行过程。 **取值范围：** 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 任务执行的进度百分比。 **取值范围：** 不涉及。
    /// </summary>

    std::string getProcess() const;
    bool processIsSet() const;
    void unsetprocess();
    void setProcess(const std::string& value);

    /// <summary>
    /// **参数解释:** 任务执行状态。 **取值范围:** - quering：初始状态。 - running：执行中。 - success：检查成功。 - failed：检查失败。 - aborted：任务中止。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string exeTime_;
    bool exeTimeIsSet_;
    std::string executeTime_;
    bool executeTimeIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string process_;
    bool processIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ProcessInfo_H_
