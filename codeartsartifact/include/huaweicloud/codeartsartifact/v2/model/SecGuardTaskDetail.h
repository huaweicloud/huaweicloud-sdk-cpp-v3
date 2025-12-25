
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SecGuardTaskDetail_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SecGuardTaskDetail_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsartifact/v2/model/OpensourceCount.h>
#include <string>
#include <huaweicloud/codeartsartifact/v2/model/MalwareCount.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  SecGuardTaskDetail
    : public ModelBase
{
public:
    SecGuardTaskDetail();
    virtual ~SecGuardTaskDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SecGuardTaskDetail members

    /// <summary>
    /// **参数解释**: 任务id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTaskId() const;
    bool taskIdIsSet() const;
    void unsettaskId();
    void setTaskId(const std::string& value);

    /// <summary>
    /// **参数解释**: 任务名。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTaskName() const;
    bool taskNameIsSet() const;
    void unsettaskName();
    void setTaskName(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件扫描路径。 **取值范围**: 不涉及。
    /// </summary>

    std::string getScanPath() const;
    bool scanPathIsSet() const;
    void unsetscanPath();
    void setScanPath(const std::string& value);

    /// <summary>
    /// **参数解释**: 文件名。 **取值范围**: 不涉及。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// **参数解释**: 展示名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// **参数解释**: 路径。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释**: 创建时间。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OpensourceCount getOpensource() const;
    bool opensourceIsSet() const;
    void unsetopensource();
    void setOpensource(const OpensourceCount& value);

    /// <summary>
    /// **参数解释**: 病毒文件数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getVirus() const;
    bool virusIsSet() const;
    void unsetvirus();
    void setVirus(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    MalwareCount getMalware() const;
    bool malwareIsSet() const;
    void unsetmalware();
    void setMalware(const MalwareCount& value);

    /// <summary>
    /// **参数解释**: 状态。 **取值范围**: 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string taskId_;
    bool taskIdIsSet_;
    std::string taskName_;
    bool taskNameIsSet_;
    std::string scanPath_;
    bool scanPathIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    OpensourceCount opensource_;
    bool opensourceIsSet_;
    int32_t virus_;
    bool virusIsSet_;
    MalwareCount malware_;
    bool malwareIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_SecGuardTaskDetail_H_
