
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveJobLog_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveJobLog_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 直播任务记录。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  LiveJobLog
    : public ModelBase
{
public:
    LiveJobLog();
    virtual ~LiveJobLog();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LiveJobLog members

    /// <summary>
    /// 直播互动记录文件地址
    /// </summary>

    std::string getInteractionRecordsUrl() const;
    bool interactionRecordsUrlIsSet() const;
    void unsetinteractionRecordsUrl();
    void setInteractionRecordsUrl(const std::string& value);

    /// <summary>
    /// 任务配置记录文件地址
    /// </summary>

    std::string getJobConfigRecordsUrl() const;
    bool jobConfigRecordsUrlIsSet() const;
    void unsetjobConfigRecordsUrl();
    void setJobConfigRecordsUrl(const std::string& value);

    /// <summary>
    /// 剧本播放记录文件地址
    /// </summary>

    std::string getScriptsRecordsUrl() const;
    bool scriptsRecordsUrlIsSet() const;
    void unsetscriptsRecordsUrl();
    void setScriptsRecordsUrl(const std::string& value);

    /// <summary>
    /// 命令接受记录文件地址
    /// </summary>

    std::string getCommandRevicedRecordsUrl() const;
    bool commandRevicedRecordsUrlIsSet() const;
    void unsetcommandRevicedRecordsUrl();
    void setCommandRevicedRecordsUrl(const std::string& value);

    /// <summary>
    /// 命令执行记录文件地址
    /// </summary>

    std::string getCommandExecRecordsUrl() const;
    bool commandExecRecordsUrlIsSet() const;
    void unsetcommandExecRecordsUrl();
    void setCommandExecRecordsUrl(const std::string& value);


protected:
    std::string interactionRecordsUrl_;
    bool interactionRecordsUrlIsSet_;
    std::string jobConfigRecordsUrl_;
    bool jobConfigRecordsUrlIsSet_;
    std::string scriptsRecordsUrl_;
    bool scriptsRecordsUrlIsSet_;
    std::string commandRevicedRecordsUrl_;
    bool commandRevicedRecordsUrlIsSet_;
    std::string commandExecRecordsUrl_;
    bool commandExecRecordsUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_LiveJobLog_H_
