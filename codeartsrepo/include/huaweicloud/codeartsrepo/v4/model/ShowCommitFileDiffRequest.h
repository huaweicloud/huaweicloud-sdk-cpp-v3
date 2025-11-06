
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowCommitFileDiffRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowCommitFileDiffRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowCommitFileDiffRequest
    : public ModelBase
{
public:
    ShowCommitFileDiffRequest();
    virtual ~ShowCommitFileDiffRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCommitFileDiffRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 分支名、tag名、提交ID。
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件路径。 **取值范围：** 字符串长度不少于1，不超过100000。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 改名之前的文件路径。 **取值范围：** 字符串长度不少于1，不超过100000。
    /// </summary>

    std::string getOldPath() const;
    bool oldPathIsSet() const;
    void unsetoldPath();
    void setOldPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否忽略空白数量更改。 **取值范围：** - true，忽略空白数量的更改。 - false，不会忽略空白数量的更改。
    /// </summary>

    bool isIgnoreWhitespaceChange() const;
    bool ignoreWhitespaceChangeIsSet() const;
    void unsetignoreWhitespaceChange();
    void setIgnoreWhitespaceChange(bool value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string sha_;
    bool shaIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string oldPath_;
    bool oldPathIsSet_;
    bool ignoreWhitespaceChange_;
    bool ignoreWhitespaceChangeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCommitFileDiffRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCommitFileDiffRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowCommitFileDiffRequest_H_
