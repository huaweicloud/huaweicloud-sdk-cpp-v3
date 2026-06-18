
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepoStatisticsSummaryResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepoStatisticsSummaryResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRepoStatisticsSummaryResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepoStatisticsSummaryResponse();
    virtual ~ShowRepoStatisticsSummaryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepoStatisticsSummaryResponse members

    /// <summary>
    /// **参数解释：** 仓库名称。 **取值范围：** 最小1个字节，最大200字节 **默认取值：** 不涉及。
    /// </summary>

    std::string getRepoName() const;
    bool repoNameIsSet() const;
    void unsetrepoName();
    void setRepoName(const std::string& value);

    /// <summary>
    /// **参数解释：** 默认分支的提交数量。 **取值范围：** 最小0 **默认取值：** 0
    /// </summary>

    int32_t getCommitCount() const;
    bool commitCountIsSet() const;
    void unsetcommitCount();
    void setCommitCount(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库占用磁盘空间大小。 **取值范围：** 最小0 **默认取值：** 0
    /// </summary>

    std::string getRepoSize() const;
    bool repoSizeIsSet() const;
    void unsetrepoSize();
    void setRepoSize(const std::string& value);

    /// <summary>
    /// **参数解释：** 仓库最新的提交日期，格式yyyy-MM-dd&#39;T&#39;HH:mm:ssXXX,例：2025-10-30T08:27:43.000Z **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getLastCommitTime() const;
    bool lastCommitTimeIsSet() const;
    void unsetlastCommitTime();
    void setLastCommitTime(const std::string& value);

    /// <summary>
    /// **参数解释：** 默认分支的代码行数。 **取值范围：** 最小0 **默认取值：** 0。
    /// </summary>

    int32_t getCodeLines() const;
    bool codeLinesIsSet() const;
    void unsetcodeLines();
    void setCodeLines(int32_t value);

    /// <summary>
    /// **参数解释：** 仓库分支数量 **取值范围：** 最小0 **默认取值：** 0
    /// </summary>

    int32_t getBranchCount() const;
    bool branchCountIsSet() const;
    void unsetbranchCount();
    void setBranchCount(int32_t value);


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

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepoStatisticsSummaryResponse_H_
