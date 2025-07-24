
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCasesChangeStatisticsRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCasesChangeStatisticsRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ShowTestCasesChangeStatisticsRequest
    : public ModelBase
{
public:
    ShowTestCasesChangeStatisticsRequest();
    virtual ~ShowTestCasesChangeStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTestCasesChangeStatisticsRequest members

    /// <summary>
    /// 项目ID，固定长度32位字符（字母和数字）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 版本uri
    /// </summary>

    std::string getVersionId() const;
    bool versionIdIsSet() const;
    void unsetversionId();
    void setVersionId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string versionId_;
    bool versionIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowTestCasesChangeStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowTestCasesChangeStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ShowTestCasesChangeStatisticsRequest_H_
