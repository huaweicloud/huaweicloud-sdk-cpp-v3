
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Ha_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Ha_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// HA配置参数，创建HA实例时使用。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Ha
    : public ModelBase
{
public:
    Ha();
    virtual ~Ha();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Ha members

    /// <summary>
    /// 实例主备模式，取值：Ha（主备），不区分大小写。
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// 备机同步参数。实例主备模式为Ha时有效。 取值： - MySQL为“async”或“semisync”。 - PostgreSQL为“async”或“sync”。 - Microsoft SQL Server为“sync”。
    /// </summary>

    std::string getReplicationMode() const;
    bool replicationModeIsSet() const;
    void unsetreplicationMode();
    void setReplicationMode(const std::string& value);


protected:
    std::string mode_;
    bool modeIsSet_;
    std::string replicationMode_;
    bool replicationModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Ha_H_
