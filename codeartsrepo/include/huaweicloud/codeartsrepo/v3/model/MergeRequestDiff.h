
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_MergeRequestDiff_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_MergeRequestDiff_H_


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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  MergeRequestDiff
    : public ModelBase
{
public:
    MergeRequestDiff();
    virtual ~MergeRequestDiff();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeRequestDiff members

    /// <summary>
    /// base提交
    /// </summary>

    std::string getBaseCommitSha() const;
    bool baseCommitShaIsSet() const;
    void unsetbaseCommitSha();
    void setBaseCommitSha(const std::string& value);

    /// <summary>
    /// 提交数
    /// </summary>

    double getCommitsCount() const;
    bool commitsCountIsSet() const;
    void unsetcommitsCount();
    void setCommitsCount(double value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const std::string& value);

    /// <summary>
    /// head提交
    /// </summary>

    std::string getHeadCommitSha() const;
    bool headCommitShaIsSet() const;
    void unsetheadCommitSha();
    void setHeadCommitSha(const std::string& value);

    /// <summary>
    /// 合并请求id
    /// </summary>

    double getMergeRequestId() const;
    bool mergeRequestIdIsSet() const;
    void unsetmergeRequestId();
    void setMergeRequestId(double value);

    /// <summary>
    /// start提交
    /// </summary>

    std::string getStartCommitSha() const;
    bool startCommitShaIsSet() const;
    void unsetstartCommitSha();
    void setStartCommitSha(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);


protected:
    std::string baseCommitSha_;
    bool baseCommitShaIsSet_;
    double commitsCount_;
    bool commitsCountIsSet_;
    std::string createdAt_;
    bool createdAtIsSet_;
    std::string headCommitSha_;
    bool headCommitShaIsSet_;
    double mergeRequestId_;
    bool mergeRequestIdIsSet_;
    std::string startCommitSha_;
    bool startCommitShaIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_MergeRequestDiff_H_
