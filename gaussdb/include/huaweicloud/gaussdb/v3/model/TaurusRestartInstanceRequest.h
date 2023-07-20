
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusRestartInstanceRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusRestartInstanceRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 重启实例
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaurusRestartInstanceRequest
    : public ModelBase
{
public:
    TaurusRestartInstanceRequest();
    virtual ~TaurusRestartInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TaurusRestartInstanceRequest members

    /// <summary>
    /// 实例是否延迟重启，默认false，立即重启。  - true: 延迟重启，实例将在运维时间窗内自动重启。 - false: 立即重启。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusRestartInstanceRequest_H_
