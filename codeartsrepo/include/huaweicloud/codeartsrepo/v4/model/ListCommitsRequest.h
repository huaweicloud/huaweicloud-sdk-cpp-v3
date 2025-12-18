
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListCommitsRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListCommitsRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListCommitsRequest
    : public ModelBase
{
public:
    ListCommitsRequest();
    virtual ~ListCommitsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCommitsRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[[查询用户所有仓库](https://support.huaweicloud.com/eu/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_eu)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 偏移量，从0开始。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 返回数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分支/tag名
    /// </summary>

    std::string getRefName() const;
    bool refNameIsSet() const;
    void unsetrefName();
    void setRefName(const std::string& value);

    /// <summary>
    /// 起始时间（不包含）
    /// </summary>

    std::string getSince() const;
    bool sinceIsSet() const;
    void unsetsince();
    void setSince(const std::string& value);

    /// <summary>
    /// 结束时间（不包含）
    /// </summary>

    std::string getUntil() const;
    bool untilIsSet() const;
    void unsetuntil();
    void setUntil(const std::string& value);

    /// <summary>
    /// The file path
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 提交信息或者commit id
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 代码作者名称
    /// </summary>

    std::string getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const std::string& value);

    /// <summary>
    /// 是否按照时间降序排序
    /// </summary>

    bool isOrderByDate() const;
    bool orderByDateIsSet() const;
    void unsetorderByDate();
    void setOrderByDate(bool value);

    /// <summary>
    /// 为true时可以追踪文件移动、改名前后的提交记录
    /// </summary>

    bool isFollow() const;
    bool followIsSet() const;
    void unsetfollow();
    void setFollow(bool value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string refName_;
    bool refNameIsSet_;
    std::string since_;
    bool sinceIsSet_;
    std::string until_;
    bool untilIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string author_;
    bool authorIsSet_;
    bool orderByDate_;
    bool orderByDateIsSet_;
    bool follow_;
    bool followIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCommitsRequest& dereference_from_shared_ptr(std::shared_ptr<ListCommitsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListCommitsRequest_H_
