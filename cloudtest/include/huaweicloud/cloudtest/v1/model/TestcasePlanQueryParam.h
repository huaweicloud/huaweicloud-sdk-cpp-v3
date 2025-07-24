
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestcasePlanQueryParam_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestcasePlanQueryParam_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestcasePlanQueryParam
    : public ModelBase
{
public:
    TestcasePlanQueryParam();
    virtual ~TestcasePlanQueryParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestcasePlanQueryParam members

    /// <summary>
    /// 测试用例URI列表（测试用例URI和编号填其中一个即可）
    /// </summary>

    std::vector<std::string>& getCaseUriList();
    bool caseUriListIsSet() const;
    void unsetcaseUriList();
    void setCaseUriList(const std::vector<std::string>& value);

    /// <summary>
    /// 测试用例编号列表（测试用例URI和编号填其中一个即可
    /// </summary>

    std::vector<std::string>& getCaseNumberList();
    bool caseNumberListIsSet() const;
    void unsetcaseNumberList();
    void setCaseNumberList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> caseUriList_;
    bool caseUriListIsSet_;
    std::vector<std::string> caseNumberList_;
    bool caseNumberListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestcasePlanQueryParam_H_
