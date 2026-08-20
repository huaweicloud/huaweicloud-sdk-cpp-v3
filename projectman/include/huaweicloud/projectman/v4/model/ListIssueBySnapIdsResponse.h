
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueBySnapIdsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueBySnapIdsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/IssueVO.h>
#include <string>
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
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListIssueBySnapIdsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListIssueBySnapIdsResponse();
    virtual ~ListIssueBySnapIdsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListIssueBySnapIdsResponse members

    /// <summary>
    /// 请求返回的结果信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 请求状态码。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 快照对应的工作项信息。
    /// </summary>

    std::vector<IssueVO>& getIssues();
    bool issuesIsSet() const;
    void unsetissues();
    void setIssues(const std::vector<IssueVO>& value);


protected:
    std::string message_;
    bool messageIsSet_;
    std::string code_;
    bool codeIsSet_;
    std::vector<IssueVO> issues_;
    bool issuesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListIssueBySnapIdsResponse_H_
