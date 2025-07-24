
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新用例信息列表
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CaseInfo
    : public ModelBase
{
public:
    CaseInfo();
    virtual ~CaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CaseInfo members

    /// <summary>
    /// 用例id
    /// </summary>

    std::string getCaseId() const;
    bool caseIdIsSet() const;
    void unsetcaseId();
    void setCaseId(const std::string& value);

    /// <summary>
    /// 脚本路径
    /// </summary>

    std::string getScriptUrl() const;
    bool scriptUrlIsSet() const;
    void unsetscriptUrl();
    void setScriptUrl(const std::string& value);


protected:
    std::string caseId_;
    bool caseIdIsSet_;
    std::string scriptUrl_;
    bool scriptUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_CaseInfo_H_
