
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestCaseRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestCaseRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/ExternalServiceCaseInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建测试用例请求体
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CreateTestCaseRequestBody
    : public ModelBase
{
public:
    CreateTestCaseRequestBody();
    virtual ~CreateTestCaseRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTestCaseRequestBody members

    /// <summary>
    /// 页面上显示的用例名称，长度为[3-128]位字符
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 该值由注册接口返回,取值范围为10-9999
    /// </summary>

    int32_t getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(int32_t value);

    /// <summary>
    /// 测试用例等级，可选值为[0,1,2,3,4]，不填时默认为2
    /// </summary>

    std::string getRankId() const;
    bool rankIdIsSet() const;
    void unsetrankId();
    void setRankId(const std::string& value);

    /// <summary>
    /// 用例编号，不填该值时会自动生成，长度为[3-128]位字符
    /// </summary>

    std::string getTestcaseNumber() const;
    bool testcaseNumberIsSet() const;
    void unsettestcaseNumber();
    void setTestcaseNumber(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ExternalServiceCaseInfo getExtendInfo() const;
    bool extendInfoIsSet() const;
    void unsetextendInfo();
    void setExtendInfo(const ExternalServiceCaseInfo& value);


protected:
    std::string name_;
    bool nameIsSet_;
    int32_t serviceId_;
    bool serviceIdIsSet_;
    std::string rankId_;
    bool rankIdIsSet_;
    std::string testcaseNumber_;
    bool testcaseNumberIsSet_;
    ExternalServiceCaseInfo extendInfo_;
    bool extendInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CreateTestCaseRequestBody_H_
