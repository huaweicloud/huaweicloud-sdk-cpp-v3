
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueAssociatedCommitsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueAssociatedCommitsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/CommitRecordDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueAssociatedCommitsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIssueAssociatedCommitsResponse();
    virtual ~ListIssueAssociatedCommitsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueAssociatedCommitsResponse members

    /// <summary>
    /// 提交记录列表
    /// </summary>

    std::vector<CommitRecordDetail>& getCommits();
    bool commitsIsSet() const;
    void unsetcommits();
    void setCommits(const std::vector<CommitRecordDetail>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<CommitRecordDetail> commits_;
    bool commitsIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueAssociatedCommitsResponse_H_
