
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeDatabaseRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeDatabaseRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  UpgradeDatabaseRequest
    : public ModelBase
{
public:
    UpgradeDatabaseRequest();
    virtual ~UpgradeDatabaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeDatabaseRequest members

    /// <summary>
    /// 实例是否延迟升级，默认false，立即升级。  - true: 延迟升级，实例将在运维时间窗内自动升级。 - false: 立即升级。
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);


protected:
    bool delay_;
    bool delayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_UpgradeDatabaseRequest_H_
