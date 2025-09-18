
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SearchIssuesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SearchIssuesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/WorkTableIssuseListResponseBody_issue_list.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  SearchIssuesResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchIssuesResponse();
    virtual ~SearchIssuesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchIssuesResponse members

    /// <summary>
    /// 工作项信息列表
    /// </summary>

    std::vector<WorkTableIssuseListResponseBody_issue_list>& getIssueList();
    bool issueListIsSet() const;
    void unsetissueList();
    void setIssueList(const std::vector<WorkTableIssuseListResponseBody_issue_list>& value);

    /// <summary>
    /// 工作项总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<WorkTableIssuseListResponseBody_issue_list> issueList_;
    bool issueListIsSet_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_SearchIssuesResponse_H_
