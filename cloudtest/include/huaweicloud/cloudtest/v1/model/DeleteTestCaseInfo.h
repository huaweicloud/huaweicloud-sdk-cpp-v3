
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTestCaseInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTestCaseInfo_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DeleteTestCaseInfo
    : public ModelBase
{
public:
    DeleteTestCaseInfo();
    virtual ~DeleteTestCaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTestCaseInfo members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 分支uri
    /// </summary>

    std::string getVersionUri() const;
    bool versionUriIsSet() const;
    void unsetversionUri();
    void setVersionUri(const std::string& value);

    /// <summary>
    /// 用例id列表
    /// </summary>

    std::vector<std::string>& getCaseIds();
    bool caseIdsIsSet() const;
    void unsetcaseIds();
    void setCaseIds(const std::vector<std::string>& value);


protected:
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string versionUri_;
    bool versionUriIsSet_;
    std::vector<std::string> caseIds_;
    bool caseIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DeleteTestCaseInfo_H_
