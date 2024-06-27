
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeInstancesRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeInstancesRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// GaussDB批量升级查询接口传参参数。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpgradeInstancesRequestBody
    : public ModelBase
{
public:
    UpgradeInstancesRequestBody();
    virtual ~UpgradeInstancesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeInstancesRequestBody members

    /// <summary>
    /// 批量实例ID
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeInstancesRequestBody_H_
