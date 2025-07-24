
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddTestCaseResultLogInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddTestCaseResultLogInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  AddTestCaseResultLogInfo
    : public ModelBase
{
public:
    AddTestCaseResultLogInfo();
    virtual ~AddTestCaseResultLogInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTestCaseResultLogInfo members

    /// <summary>
    /// 版本号
    /// </summary>

    std::string getReleaseDev() const;
    bool releaseDevIsSet() const;
    void unsetreleaseDev();
    void setReleaseDev(const std::string& value);


protected:
    std::string releaseDev_;
    bool releaseDevIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_AddTestCaseResultLogInfo_H_
