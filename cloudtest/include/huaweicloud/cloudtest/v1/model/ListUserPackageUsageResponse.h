
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUserPackageUsageResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUserPackageUsageResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/PackageUsage.h>
#include <string>
#include <huaweicloud/cloudtest/v1/model/CommonResponseErrorOfAPITest.h>
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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListUserPackageUsageResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUserPackageUsageResponse();
    virtual ~ListUserPackageUsageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserPackageUsageResponse members

    /// <summary>
    /// 是否请求成功
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 套餐用量信息列表
    /// </summary>

    std::vector<PackageUsage>& getResult();
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::vector<PackageUsage>& value);

    /// <summary>
    /// 
    /// </summary>

    CommonResponseErrorOfAPITest getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const CommonResponseErrorOfAPITest& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::vector<PackageUsage> result_;
    bool resultIsSet_;
    CommonResponseErrorOfAPITest error_;
    bool errorIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListUserPackageUsageResponse_H_
