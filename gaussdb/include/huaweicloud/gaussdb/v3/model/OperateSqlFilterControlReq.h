
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateSqlFilterControlReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateSqlFilterControlReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 开启/关闭SQL限流参数体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  OperateSqlFilterControlReq
    : public ModelBase
{
public:
    OperateSqlFilterControlReq();
    virtual ~OperateSqlFilterControlReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OperateSqlFilterControlReq members

    /// <summary>
    /// SQL限流开关状态。 取值： - ON，表示开启。 - OFF，表示关闭。
    /// </summary>

    std::string getSwitchStatus() const;
    bool switchStatusIsSet() const;
    void unsetswitchStatus();
    void setSwitchStatus(const std::string& value);


protected:
    std::string switchStatus_;
    bool switchStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_OperateSqlFilterControlReq_H_
