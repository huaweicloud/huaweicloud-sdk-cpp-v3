
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRefCompareResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRefCompareResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/DiffDto.h>
#include <huaweicloud/codehub/v4/model/CommitDto.h>
#include <string>
#include <vector>
#include <huaweicloud/codehub/v4/model/ConflictFileDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowRefCompareResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRefCompareResponse();
    virtual ~ShowRefCompareResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRefCompareResponse members

    /// <summary>
    /// 
    /// </summary>

    CommitDto getCommit() const;
    bool commitIsSet() const;
    void unsetcommit();
    void setCommit(const CommitDto& value);

    /// <summary>
    /// commit相关信息列表
    /// </summary>

    std::vector<CommitDto>& getCommits();
    bool commitsIsSet() const;
    void unsetcommits();
    void setCommits(const std::vector<CommitDto>& value);

    /// <summary>
    /// 变更文件信息
    /// </summary>

    std::vector<DiffDto>& getDiffs();
    bool diffsIsSet() const;
    void unsetdiffs();
    void setDiffs(const std::vector<DiffDto>& value);

    /// <summary>
    /// 变更文件信息
    /// </summary>

    std::vector<DiffDto>& getDiffsFiles();
    bool diffsFilesIsSet() const;
    void unsetdiffsFiles();
    void setDiffsFiles(const std::vector<DiffDto>& value);

    /// <summary>
    /// 是否超时
    /// </summary>

    bool isCompareTimeout() const;
    bool compareTimeoutIsSet() const;
    void unsetcompareTimeout();
    void setCompareTimeout(bool value);

    /// <summary>
    /// 是否相同
    /// </summary>

    bool isCompareSameRef() const;
    bool compareSameRefIsSet() const;
    void unsetcompareSameRef();
    void setCompareSameRef(bool value);

    /// <summary>
    /// 冲突文件
    /// </summary>

    std::vector<ConflictFileDto>& getConflictFiles();
    bool conflictFilesIsSet() const;
    void unsetconflictFiles();
    void setConflictFiles(const std::vector<ConflictFileDto>& value);

    /// <summary>
    /// 增加行数
    /// </summary>

    int32_t getAddedLines() const;
    bool addedLinesIsSet() const;
    void unsetaddedLines();
    void setAddedLines(int32_t value);

    /// <summary>
    /// 删除行数
    /// </summary>

    int32_t getRemovedLines() const;
    bool removedLinesIsSet() const;
    void unsetremovedLines();
    void setRemovedLines(int32_t value);

    /// <summary>
    /// 提交数量
    /// </summary>

    int32_t getCommitsCount() const;
    bool commitsCountIsSet() const;
    void unsetcommitsCount();
    void setCommitsCount(int32_t value);

    /// <summary>
    /// 文件变更数量
    /// </summary>

    int32_t getDiffsCount() const;
    bool diffsCountIsSet() const;
    void unsetdiffsCount();
    void setDiffsCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    CommitDto commit_;
    bool commitIsSet_;
    std::vector<CommitDto> commits_;
    bool commitsIsSet_;
    std::vector<DiffDto> diffs_;
    bool diffsIsSet_;
    std::vector<DiffDto> diffsFiles_;
    bool diffsFilesIsSet_;
    bool compareTimeout_;
    bool compareTimeoutIsSet_;
    bool compareSameRef_;
    bool compareSameRefIsSet_;
    std::vector<ConflictFileDto> conflictFiles_;
    bool conflictFilesIsSet_;
    int32_t addedLines_;
    bool addedLinesIsSet_;
    int32_t removedLines_;
    bool removedLinesIsSet_;
    int32_t commitsCount_;
    bool commitsCountIsSet_;
    int32_t diffsCount_;
    bool diffsCountIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowRefCompareResponse_H_
