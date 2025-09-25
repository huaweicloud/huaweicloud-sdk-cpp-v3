
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Artifact_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Artifact_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/codeartspipeline/v2/model/Artifact_hash_code.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 产物
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  Artifact
    : public ModelBase
{
public:
    Artifact();
    virtual ~Artifact();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Artifact members

    /// <summary>
    /// **参数解释**： 项目ID，获取方式请参见[获取项目ID](https://support.huaweicloud.com/api-codeartsrepo/codehub_api_0014.html)。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物版本。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getArtifactVersion() const;
    bool artifactVersionIsSet() const;
    void unsetartifactVersion();
    void setArtifactVersion(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物存放平台。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getUploadTarget() const;
    bool uploadTargetIsSet() const;
    void unsetuploadTarget();
    void setUploadTarget(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物包类型，例如jar。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getArtifactPackageType() const;
    bool artifactPackageTypeIsSet() const;
    void unsetartifactPackageType();
    void setArtifactPackageType(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品仓文件存放路径。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getArtifactUri() const;
    bool artifactUriIsSet() const;
    void unsetartifactUri();
    void setArtifactUri(const std::string& value);

    /// <summary>
    /// **参数解释**： 制品仓下载链接。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getArtifactDownloadUrlWithId() const;
    bool artifactDownloadUrlWithIdIsSet() const;
    void unsetartifactDownloadUrlWithId();
    void setArtifactDownloadUrlWithId(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getArtifactType() const;
    bool artifactTypeIsSet() const;
    void unsetartifactType();
    void setArtifactType(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物哈希码。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::vector<Artifact_hash_code>& getHashCode();
    bool hashCodeIsSet() const;
    void unsethashCode();
    void setHashCode(const std::vector<Artifact_hash_code>& value);

    /// <summary>
    /// **参数解释**： 构建任务ID。 **约束限制**： 不涉及。 **取值范围**： 32位字符，由数字和字母组成。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**： 构建任务编号。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(const std::string& value);

    /// <summary>
    /// **参数解释**： 构建任务序号。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getDailyBuildNumber() const;
    bool dailyBuildNumberIsSet() const;
    void unsetdailyBuildNumber();
    void setDailyBuildNumber(const std::string& value);

    /// <summary>
    /// **参数解释**： 产物大小。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string artifactVersion_;
    bool artifactVersionIsSet_;
    std::string uploadTarget_;
    bool uploadTargetIsSet_;
    std::string artifactPackageType_;
    bool artifactPackageTypeIsSet_;
    std::string artifactUri_;
    bool artifactUriIsSet_;
    std::string artifactDownloadUrlWithId_;
    bool artifactDownloadUrlWithIdIsSet_;
    std::string artifactType_;
    bool artifactTypeIsSet_;
    std::vector<Artifact_hash_code> hashCode_;
    bool hashCodeIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string buildNo_;
    bool buildNoIsSet_;
    std::string dailyBuildNumber_;
    bool dailyBuildNumberIsSet_;
    std::string fileSize_;
    bool fileSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Artifact_H_
