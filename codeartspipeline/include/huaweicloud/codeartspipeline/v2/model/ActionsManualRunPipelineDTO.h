
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ActionsManualRunPipelineDTO_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ActionsManualRunPipelineDTO_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  ActionsManualRunPipelineDTO
    : public ModelBase
{
public:
    ActionsManualRunPipelineDTO();
    virtual ~ActionsManualRunPipelineDTO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionsManualRunPipelineDTO members

    /// <summary>
    /// **参数解释**： 触发URL。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getHttpsUrl() const;
    bool httpsUrlIsSet() const;
    void unsethttpsUrl();
    void setHttpsUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件存储路径。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件详情。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getFileContent() const;
    bool fileContentIsSet() const;
    void unsetfileContent();
    void setFileContent(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码源分支名。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// **参数解释**： 文件编码方式。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getEncoding() const;
    bool encodingIsSet() const;
    void unsetencoding();
    void setEncoding(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码源标签。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码源提交记录id。 **约束限制**： 不涉及。 **取值范围**： 40位字符。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// **参数解释**： 代码源访问权限token。 **约束限制**： 不涉及。 **取值范围**： 不涉及。 **默认取值**： 不涉及。 
    /// </summary>

    std::string getAccessToken() const;
    bool accessTokenIsSet() const;
    void unsetaccessToken();
    void setAccessToken(const std::string& value);


protected:
    std::string httpsUrl_;
    bool httpsUrlIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string fileContent_;
    bool fileContentIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string encoding_;
    bool encodingIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    std::string accessToken_;
    bool accessTokenIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_ActionsManualRunPipelineDTO_H_
