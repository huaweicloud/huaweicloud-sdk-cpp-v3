
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceRestartRequsetBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceRestartRequsetBody_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  InstanceRestartRequsetBody
    : public ModelBase
{
public:
    InstanceRestartRequsetBody();
    virtual ~InstanceRestartRequsetBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InstanceRestartRequsetBody members

    /// <summary>
    /// 空值
    /// </summary>

    Object getRestart() const;
    bool restartIsSet() const;
    void unsetrestart();
    void setRestart(const Object& value);


protected:
    Object restart_;
    bool restartIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceRestartRequsetBody_H_
