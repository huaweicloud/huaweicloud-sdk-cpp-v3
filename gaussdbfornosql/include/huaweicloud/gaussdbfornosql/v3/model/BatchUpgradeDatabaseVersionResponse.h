
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BatchUpgradeDatabaseVersionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BatchUpgradeDatabaseVersionResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbfornosql/v3/model/UpgradeResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  BatchUpgradeDatabaseVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchUpgradeDatabaseVersionResponse();
    virtual ~BatchUpgradeDatabaseVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpgradeDatabaseVersionResponse members

    /// <summary>
    /// 批量升级结果。
    /// </summary>

    std::vector<UpgradeResult>& getUpgradeResults();
    bool upgradeResultsIsSet() const;
    void unsetupgradeResults();
    void setUpgradeResults(const std::vector<UpgradeResult>& value);


protected:
    std::vector<UpgradeResult> upgradeResults_;
    bool upgradeResultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BatchUpgradeDatabaseVersionResponse_H_
