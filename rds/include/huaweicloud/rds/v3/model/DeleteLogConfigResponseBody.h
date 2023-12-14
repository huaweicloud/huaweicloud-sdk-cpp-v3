
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteLogConfigResponseBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteLogConfigResponseBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DeleteLogConfigs.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DeleteLogConfigResponseBody
    : public ModelBase
{
public:
    DeleteLogConfigResponseBody();
    virtual ~DeleteLogConfigResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteLogConfigResponseBody members

    /// <summary>
    /// 实例日志配置信息。
    /// </summary>

    std::vector<DeleteLogConfigs>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<DeleteLogConfigs>& value);


protected:
    std::vector<DeleteLogConfigs> logConfigs_;
    bool logConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DeleteLogConfigResponseBody_H_
