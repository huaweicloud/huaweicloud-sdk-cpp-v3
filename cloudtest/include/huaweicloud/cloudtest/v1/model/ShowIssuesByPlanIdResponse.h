
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowIssuesByPlanIdResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowIssuesByPlanIdResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestPlanIssueDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowIssuesByPlanIdResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowIssuesByPlanIdResponse();
    virtual ~ShowIssuesByPlanIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowIssuesByPlanIdResponse members

    /// <summary>
    /// 项目下某个测试计划关联的需求列表的返回结构
    /// </summary>

    std::vector<TestPlanIssueDetail>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<TestPlanIssueDetail>& value);


protected:
    std::vector<TestPlanIssueDetail> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowIssuesByPlanIdResponse_H_
