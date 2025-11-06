
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DownloadArchiveRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DownloadArchiveRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  DownloadArchiveRequest
    : public ModelBase
{
public:
    DownloadArchiveRequest();
    virtual ~DownloadArchiveRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadArchiveRequest members

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
    /// **参数解释：** 下载格式。 **取值范围：** - zip。 - tar.gz。   - tar.bz2。 - tar。
    /// </summary>

    std::string getArchiveFormat() const;
    bool archiveFormatIsSet() const;
    void unsetarchiveFormat();
    void setArchiveFormat(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string sha_;
    bool shaIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string archiveFormat_;
    bool archiveFormatIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadArchiveRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadArchiveRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DownloadArchiveRequest_H_
