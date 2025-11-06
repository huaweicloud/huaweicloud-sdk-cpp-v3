
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DownloadBlobsRawRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DownloadBlobsRawRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  DownloadBlobsRawRequest
    : public ModelBase
{
public:
    DownloadBlobsRawRequest();
    virtual ~DownloadBlobsRawRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadBlobsRawRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** blob文件ID。通过[[查询某个仓库的文件信息](https://support.huaweicloud.com/api-codeartsrepo/ListFilesByQuery.html)](tag:hws)[[查询某个仓库的文件信息](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListFilesByQuery.html)](tag:hws_hk)[查询某个仓库的文件信息](tag:hcs,hcs_sm)接口查询某个仓库的文件信息获取。 **取值范围：** 不涉及。
    /// </summary>

    std::string getBlobId() const;
    bool blobIdIsSet() const;
    void unsetblobId();
    void setBlobId(const std::string& value);

    /// <summary>
    /// **参数解释：** 下载文件名。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件路径。 **取值范围：** 字符串长度不少于1，不超过10000。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string blobId_;
    bool blobIdIsSet_;
    std::string fileName_;
    bool fileNameIsSet_;
    std::string filePath_;
    bool filePathIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadBlobsRawRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadBlobsRawRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_DownloadBlobsRawRequest_H_
