
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssuesSfV4Response_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssuesSfV4Response_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueItemSfV4.h>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssuesSfV4Response
    : public ModelBase, public HttpResponse
{
public:
    ListIssuesSfV4Response();
    virtual ~ListIssuesSfV4Response();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssuesSfV4Response members

    /// <summary>
    /// 工作项
    /// </summary>

    std::vector<IssueItemSfV4>& getIssues();
    bool issuesIsSet() const;
    void unsetissues();
    void setIssues(const std::vector<IssueItemSfV4>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<IssueItemSfV4> issues_;
    bool issuesIsSet_;
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

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssuesSfV4Response_H_
