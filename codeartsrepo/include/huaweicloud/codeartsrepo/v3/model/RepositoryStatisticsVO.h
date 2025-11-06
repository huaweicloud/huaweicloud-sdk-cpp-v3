
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepositoryStatisticsVO_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepositoryStatisticsVO_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  RepositoryStatisticsVO
    : public ModelBase
{
public:
    RepositoryStatisticsVO();
    virtual ~RepositoryStatisticsVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RepositoryStatisticsVO members

    /// <summary>
    /// 仓库名称
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// 提交次数
    /// </summary>

    int32_t getCommitCount() const;
    bool commitCountIsSet() const;
    void unsetcommitCount();
    void setCommitCount(int32_t value);

    /// <summary>
    /// 仓库容量
    /// </summary>

    std::string getRepoSize() const;
    bool repoSizeIsSet() const;
    void unsetrepoSize();
    void setRepoSize(const std::string& value);

    /// <summary>
    /// 最近一次提交时间
    /// </summary>

    std::string getLastCommitTime() const;
    bool lastCommitTimeIsSet() const;
    void unsetlastCommitTime();
    void setLastCommitTime(const std::string& value);

    /// <summary>
    /// 代码行数
    /// </summary>

    int32_t getCodeLines() const;
    bool codeLinesIsSet() const;
    void unsetcodeLines();
    void setCodeLines(int32_t value);

    /// <summary>
    /// 分支数量
    /// </summary>

    int32_t getBranchCount() const;
    bool branchCountIsSet() const;
    void unsetbranchCount();
    void setBranchCount(int32_t value);

    /// <summary>
    /// 代码仓下载地址
    /// </summary>

    std::string getArchiveUrl() const;
    bool archiveUrlIsSet() const;
    void unsetarchiveUrl();
    void setArchiveUrl(const std::string& value);


protected:
    std::string repoName_;
    bool repoNameIsSet_;
    int32_t commitCount_;
    bool commitCountIsSet_;
    std::string repoSize_;
    bool repoSizeIsSet_;
    std::string lastCommitTime_;
    bool lastCommitTimeIsSet_;
    int32_t codeLines_;
    bool codeLinesIsSet_;
    int32_t branchCount_;
    bool branchCountIsSet_;
    std::string archiveUrl_;
    bool archiveUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_RepositoryStatisticsVO_H_
