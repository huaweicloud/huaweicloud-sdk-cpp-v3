
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ActionDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ActionDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 提交动作设置参数。
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ActionDto
    : public ModelBase
{
public:
    ActionDto();
    virtual ~ActionDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ActionDto members

    /// <summary>
    /// **参数解释：** 要执行的操作。 **取值范围：** - create，创建文件。 - create_dir，创建目录。 - update，更新。 - move，移动。 - delete，删除。 - chmod，更改权限。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件路径。 **取值范围：** 不涉及。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** 上一个路径。 **取值范围：** 不涉及。
    /// </summary>

    std::string getPreviousPath() const;
    bool previousPathIsSet() const;
    void unsetpreviousPath();
    void setPreviousPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件内容。 **取值范围：** 不涉及。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);

    /// <summary>
    /// **参数解释：** 编码方式。 **取值范围：** - text。 - base64.
    /// </summary>

    std::string getEncoding() const;
    bool encodingIsSet() const;
    void unsetencoding();
    void setEncoding(const std::string& value);

    /// <summary>
    /// **参数解释：** 上次已知的文件提交ID。 **取值范围：** 不涉及。
    /// </summary>

    bool isLastCommitId() const;
    bool lastCommitIdIsSet() const;
    void unsetlastCommitId();
    void setLastCommitId(bool value);

    /// <summary>
    /// **参数解释：** 执行文件模式。 **取值范围：** - true，启用文件上的执行标志。 - false，禁用文件上的执行标志
    /// </summary>

    bool isExecuteFilemode() const;
    bool executeFilemodeIsSet() const;
    void unsetexecuteFilemode();
    void setExecuteFilemode(bool value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string previousPath_;
    bool previousPathIsSet_;
    std::string content_;
    bool contentIsSet_;
    std::string encoding_;
    bool encodingIsSet_;
    bool lastCommitId_;
    bool lastCommitIdIsSet_;
    bool executeFilemode_;
    bool executeFilemodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ActionDto_H_
