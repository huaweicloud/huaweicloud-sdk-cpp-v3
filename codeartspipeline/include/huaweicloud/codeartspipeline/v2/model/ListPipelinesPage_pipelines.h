
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelinesPage_pipelines_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelinesPage_pipelines_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartspipeline/v2/model/ListPipelinesPage_latest_run.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ListPipelinesPage_pipelines
    : public ModelBase
{
public:
    ListPipelinesPage_pipelines();
    virtual ~ListPipelinesPage_pipelines();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPipelinesPage_pipelines members

    /// <summary>
    /// **参数解释**： 流水线ID，可以通过[查询流水线列表](ListPipelines.xml)接口，其中pipelines.pipelineId即为流水线ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getPipelineId() const;
    bool pipelineIdIsSet() const;
    void unsetpipelineId();
    void setPipelineId(const std::string& value);

    /// <summary>
    /// **参数解释**： 流水线名称。 **取值范围**： 仅包含中文、大小写英文字母、数字、&#39;-&#39;和&#39;_&#39;，且长度为[1,128]个字符。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目ID。 **取值范围**： 32位字符，仅由数字和字母组成。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 项目名称。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// **参数解释**： 组件ID。 **取值范围**： 不涉及。 
    /// </summary>

    std::string getComponentId() const;
    bool componentIdIsSet() const;
    void unsetcomponentId();
    void setComponentId(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否为变更流水线。 **取值范围**： - true：是变更流水线。 - false：不是变更流水线。 
    /// </summary>

    bool isIsPublish() const;
    bool isPublishIsSet() const;
    void unsetisPublish();
    void setIsPublish(bool value);

    /// <summary>
    /// **参数解释**： 是否收藏此流水线。 **取值范围**： - true：已收藏流水线。 - false：未收藏流水线。 
    /// </summary>

    bool isIsCollect() const;
    bool isCollectIsSet() const;
    void unsetisCollect();
    void setIsCollect(bool value);

    /// <summary>
    /// **参数解释**： 流水线版本。 **取值范围**： 默认3.0。 
    /// </summary>

    std::string getManifestVersion() const;
    bool manifestVersionIsSet() const;
    void unsetmanifestVersion();
    void setManifestVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 创建时间。 **取值范围**： 不涉及。 
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    ListPipelinesPage_latest_run getLatestRun() const;
    bool latestRunIsSet() const;
    void unsetlatestRun();
    void setLatestRun(const ListPipelinesPage_latest_run& value);

    /// <summary>
    /// **参数解释**： 旧版转新版标识。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getConvertSign() const;
    bool convertSignIsSet() const;
    void unsetconvertSign();
    void setConvertSign(int32_t value);

    /// <summary>
    /// **参数解释**： 流水线涉密等级。 **取值范围**： 正整数。 null：未设置密级。 1：最低密级。 
    /// </summary>

    int32_t getSecurityLevel() const;
    bool securityLevelIsSet() const;
    void unsetsecurityLevel();
    void setSecurityLevel(int32_t value);


protected:
    std::string pipelineId_;
    bool pipelineIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string componentId_;
    bool componentIdIsSet_;
    bool isPublish_;
    bool isPublishIsSet_;
    bool isCollect_;
    bool isCollectIsSet_;
    std::string manifestVersion_;
    bool manifestVersionIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    ListPipelinesPage_latest_run latestRun_;
    bool latestRunIsSet_;
    int32_t convertSign_;
    bool convertSignIsSet_;
    int32_t securityLevel_;
    bool securityLevelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ListPipelinesPage_pipelines_H_
