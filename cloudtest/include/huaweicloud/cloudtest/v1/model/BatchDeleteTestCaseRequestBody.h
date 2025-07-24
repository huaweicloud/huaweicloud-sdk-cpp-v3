
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchDeleteTestCaseRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchDeleteTestCaseRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 批量删除测试用例请求体
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  BatchDeleteTestCaseRequestBody
    : public ModelBase
{
public:
    BatchDeleteTestCaseRequestBody();
    virtual ~BatchDeleteTestCaseRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteTestCaseRequestBody members

    /// <summary>
    /// 注册测试类型服务接口返回的服务id，取值范围为10-9999
    /// </summary>

    int32_t getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(int32_t value);

    /// <summary>
    /// 测试用例唯一标识，数组长度小于50个
    /// </summary>

    std::vector<std::string>& getTestcaseIdList();
    bool testcaseIdListIsSet() const;
    void unsettestcaseIdList();
    void setTestcaseIdList(const std::vector<std::string>& value);


protected:
    int32_t serviceId_;
    bool serviceIdIsSet_;
    std::vector<std::string> testcaseIdList_;
    bool testcaseIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_BatchDeleteTestCaseRequestBody_H_
