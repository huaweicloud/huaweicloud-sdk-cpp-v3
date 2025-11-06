
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateBranchResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateBranchResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/CommitDto.h>
#include <huaweicloud/codeartsrepo/v4/model/DivergingCommitCounts.h>
#include <string>
#include <huaweicloud/codeartsrepo/v4/model/PipelineBasicDto.h>
#include <huaweicloud/codeartsrepo/v4/model/UserBasicDto.h>
#include <huaweicloud/codeartsrepo/v4/model/BranchSimpleDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CreateBranchResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateBranchResponse();
    virtual ~CreateBranchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBranchResponse members

    /// <summary>
    /// 分支名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否为默认分支
    /// </summary>

    bool isDefault() const;
    bool defaultIsSet() const;
    void unsetdefault();
    void setDefault(bool value);

    /// <summary>
    /// 用户是否为默认分支
    /// </summary>

    bool isCanDelete() const;
    bool canDeleteIsSet() const;
    void unsetcanDelete();
    void setCanDelete(bool value);

    /// <summary>
    /// 是否为默认分支
    /// </summary>

    bool isCanRead() const;
    bool canReadIsSet() const;
    void unsetcanRead();
    void setCanRead(bool value);

    /// <summary>
    /// 是否为默认分支
    /// </summary>

    bool isCanDownload() const;
    bool canDownloadIsSet() const;
    void unsetcanDownload();
    void setCanDownload(bool value);

    /// <summary>
    /// 是否为默认分支
    /// </summary>

    bool isCanPush() const;
    bool canPushIsSet() const;
    void unsetcanPush();
    void setCanPush(bool value);

    /// <summary>
    /// 
    /// </summary>

    CommitDto getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const CommitDto& value);

    /// <summary>
    /// 所有提交是否合入到默认分支
    /// </summary>

    bool isMerged() const;
    bool mergedIsSet() const;
    void unsetmerged();
    void setMerged(bool value);

    /// <summary>
    /// 是否为保护分支
    /// </summary>

    bool isProtected() const;
    bool protectedIsSet() const;
    void unsetprotected();
    void setProtected(bool value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserBasicDto getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const UserBasicDto& value);

    /// <summary>
    /// 分支描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 基于分支
    /// </summary>

    std::string getCreateSource() const;
    bool createSourceIsSet() const;
    void unsetcreateSource();
    void setCreateSource(const std::string& value);

    /// <summary>
    /// 基于分支是否存在
    /// </summary>

    bool isCreateSourceExists() const;
    bool createSourceExistsIsSet() const;
    void unsetcreateSourceExists();
    void setCreateSourceExists(bool value);

    /// <summary>
    /// 
    /// </summary>

    PipelineBasicDto getLatestPipeline() const;
    bool latestPipelineIsSet() const;
    void unsetlatestPipeline();
    void setLatestPipeline(const PipelineBasicDto& value);

    /// <summary>
    /// 该分支正在开启的合并请求个数
    /// </summary>

    int32_t getOpenedMrCount() const;
    bool openedMrCountIsSet() const;
    void unsetopenedMrCount();
    void setOpenedMrCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    DivergingCommitCounts getDivergingCommitCounts() const;
    bool divergingCommitCountsIsSet() const;
    void unsetdivergingCommitCounts();
    void setDivergingCommitCounts(const DivergingCommitCounts& value);


protected:
    std::string name_;
    bool nameIsSet_;
    bool default_;
    bool defaultIsSet_;
    bool canDelete_;
    bool canDeleteIsSet_;
    bool canRead_;
    bool canReadIsSet_;
    bool canDownload_;
    bool canDownloadIsSet_;
    bool canPush_;
    bool canPushIsSet_;
    CommitDto commit_;
    bool commitIsSet_;
    bool merged_;
    bool mergedIsSet_;
    bool protected_;
    bool protectedIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    UserBasicDto creator_;
    bool creatorIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createSource_;
    bool createSourceIsSet_;
    bool createSourceExists_;
    bool createSourceExistsIsSet_;
    PipelineBasicDto latestPipeline_;
    bool latestPipelineIsSet_;
    int32_t openedMrCount_;
    bool openedMrCountIsSet_;
    DivergingCommitCounts divergingCommitCounts_;
    bool divergingCommitCountsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CreateBranchResponse_H_
