
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_AddLogConfigResponseBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_AddLogConfigResponseBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/AddLogConfigs.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  AddLogConfigResponseBody
    : public ModelBase
{
public:
    AddLogConfigResponseBody();
    virtual ~AddLogConfigResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddLogConfigResponseBody members

    /// <summary>
    /// 实例日志配置信息。
    /// </summary>

    std::vector<AddLogConfigs>& getLogConfigs();
    bool logConfigsIsSet() const;
    void unsetlogConfigs();
    void setLogConfigs(const std::vector<AddLogConfigs>& value);


protected:
    std::vector<AddLogConfigs> logConfigs_;
    bool logConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_AddLogConfigResponseBody_H_
