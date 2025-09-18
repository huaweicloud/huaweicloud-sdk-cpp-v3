
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListScrumProjectStatusesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListScrumProjectStatusesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueStatus.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListScrumProjectStatusesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListScrumProjectStatusesResponse();
    virtual ~ListScrumProjectStatusesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListScrumProjectStatusesResponse members

    /// <summary>
    /// 状态总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 状态列表
    /// </summary>

    std::vector<IssueStatus>& getIssueStatuses();
    bool issueStatusesIsSet() const;
    void unsetissueStatuses();
    void setIssueStatuses(const std::vector<IssueStatus>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<IssueStatus> issueStatuses_;
    bool issueStatusesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListScrumProjectStatusesResponse_H_
