
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowMergeRequestCommentsByLineRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowMergeRequestCommentsByLineRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowMergeRequestCommentsByLineRequest
    : public ModelBase
{
public:
    ShowMergeRequestCommentsByLineRequest();
    virtual ~ShowMergeRequestCommentsByLineRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMergeRequestCommentsByLineRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/intl/zh-cn/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk_ch)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：**  合并请求 iid。
    /// </summary>

    int32_t getMergeRequestIid() const;
    bool mergeRequestIidIsSet() const;
    void unsetmergeRequestIid();
    void setMergeRequestIid(int32_t value);

    /// <summary>
    /// **参数解释：** 获取特定行的检视意见列表(新增、不变行使用右侧行号；删除行使用左侧行号)。
    /// </summary>

    int32_t getLine() const;
    bool lineIsSet() const;
    void unsetline();
    void setLine(int32_t value);

    /// <summary>
    /// **参数解释：** 是否返回在代码页签下加的评论。 **取值范围：** - true，补充代码页签下的评论并返回。 - false，不处理。
    /// </summary>

    bool isWithCommitComments() const;
    bool withCommitCommentsIsSet() const;
    void unsetwithCommitComments();
    void setWithCommitComments(bool value);

    /// <summary>
    /// **参数解释：** 文件路径。 **取值范围：** 字符串长度不少于1，不超过100000。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否只返回基础信息。 **取值范围：** - basic，返回基础信息(建议)。 - sample，额外返回代码片段等信息。
    /// </summary>

    std::string getView() const;
    bool viewIsSet() const;
    void unsetview();
    void setView(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求中原分支与目标分支的共同基准点。 **取值范围：** 长度为40的sha1字符串。
    /// </summary>

    std::string getBaseSha() const;
    bool baseShaIsSet() const;
    void unsetbaseSha();
    void setBaseSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求中，从共同基准点开始到原分支方向的第一个提交点。 **取值范围：** 长度为40的sha1字符串。
    /// </summary>

    std::string getStartSha() const;
    bool startShaIsSet() const;
    void unsetstartSha();
    void setStartSha(const std::string& value);

    /// <summary>
    /// **参数解释：** 合并请求中原分支指向的提交点。 **取值范围：** 长度为40的sha1字符串。
    /// </summary>

    std::string getHeadSha() const;
    bool headShaIsSet() const;
    void unsetheadSha();
    void setHeadSha(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    int32_t line_;
    bool lineIsSet_;
    bool withCommitComments_;
    bool withCommitCommentsIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string view_;
    bool viewIsSet_;
    std::string baseSha_;
    bool baseShaIsSet_;
    std::string startSha_;
    bool startShaIsSet_;
    std::string headSha_;
    bool headShaIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowMergeRequestCommentsByLineRequest& dereference_from_shared_ptr(std::shared_ptr<ShowMergeRequestCommentsByLineRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowMergeRequestCommentsByLineRequest_H_
