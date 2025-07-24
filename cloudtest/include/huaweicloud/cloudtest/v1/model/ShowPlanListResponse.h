
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowPlanListResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowPlanListResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/TestPlanDetail.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowPlanListResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPlanListResponse();
    virtual ~ShowPlanListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowPlanListResponse members

    /// <summary>
    /// 项目下查询测试计划列表返回结构
    /// </summary>

    std::vector<TestPlanDetail>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<TestPlanDetail>& value);


protected:
    std::vector<TestPlanDetail> body_;
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

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowPlanListResponse_H_
