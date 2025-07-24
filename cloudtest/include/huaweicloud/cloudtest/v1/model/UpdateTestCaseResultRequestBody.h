
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseResultRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseResultRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseResultBean.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新测试用例状态请求体
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UpdateTestCaseResultRequestBody
    : public ModelBase
{
public:
    UpdateTestCaseResultRequestBody();
    virtual ~UpdateTestCaseResultRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateTestCaseResultRequestBody members

    /// <summary>
    /// 注册测试类型服务接口返回的服务id
    /// </summary>

    int32_t getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(int32_t value);

    /// <summary>
    /// 测试计划id
    /// </summary>

    std::string getPlanId() const;
    bool planIdIsSet() const;
    void unsetplanId();
    void setPlanId(const std::string& value);

    /// <summary>
    /// 测试用例状态信息，数组长度小于等于50
    /// </summary>

    std::vector<UpdateTestCaseResultBean>& getExecuteList();
    bool executeListIsSet() const;
    void unsetexecuteList();
    void setExecuteList(const std::vector<UpdateTestCaseResultBean>& value);


protected:
    int32_t serviceId_;
    bool serviceIdIsSet_;
    std::string planId_;
    bool planIdIsSet_;
    std::vector<UpdateTestCaseResultBean> executeList_;
    bool executeListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UpdateTestCaseResultRequestBody_H_
