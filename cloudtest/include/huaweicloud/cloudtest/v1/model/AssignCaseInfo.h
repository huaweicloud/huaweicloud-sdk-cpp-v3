
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssignCaseInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssignCaseInfo_H_


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
/// 用例关联信息
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AssignCaseInfo
    : public ModelBase
{
public:
    AssignCaseInfo();
    virtual ~AssignCaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssignCaseInfo members

    /// <summary>
    /// 用例URI
    /// </summary>

    std::string getCaseUri() const;
    bool caseUriIsSet() const;
    void unsetcaseUri();
    void setCaseUri(const std::string& value);

    /// <summary>
    /// 是否可用
    /// </summary>

    bool isIsAvailable() const;
    bool isAvailableIsSet() const;
    void unsetisAvailable();
    void setIsAvailable(bool value);


protected:
    std::string caseUri_;
    bool caseUriIsSet_;
    bool isAvailable_;
    bool isAvailableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AssignCaseInfo_H_
