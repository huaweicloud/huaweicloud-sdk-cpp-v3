
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryDirDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryDirDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  RepositoryDirDto
    : public ModelBase
{
public:
    RepositoryDirDto();
    virtual ~RepositoryDirDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryDirDto members

    /// <summary>
    /// **参数解释：** 目录路径。 **约束限制：** 目录路径层级最大不能超过29。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支名。 **取值范围：** 最小1个字节，最大200字节 **约束限制：** 该仓库下的已有分支。
    /// </summary>

    std::string getBranchName() const;
    bool branchNameIsSet() const;
    void unsetbranchName();
    void setBranchName(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交信息。 **取值范围：** 不涉及。
    /// </summary>

    std::string getCommitMessage() const;
    bool commitMessageIsSet() const;
    void unsetcommitMessage();
    void setCommitMessage(const std::string& value);


protected:
    std::string filePath_;
    bool filePathIsSet_;
    std::string branchName_;
    bool branchNameIsSet_;
    std::string commitMessage_;
    bool commitMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_RepositoryDirDto_H_
