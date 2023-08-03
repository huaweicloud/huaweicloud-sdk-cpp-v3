
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequestBody_target_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequestBody_target_H_

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
/// 恢复目标对象。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  RestoreToExistingInstanceRequestBody_target
    : public ModelBase
{
public:
    RestoreToExistingInstanceRequestBody_target();
    virtual ~RestoreToExistingInstanceRequestBody_target();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreToExistingInstanceRequestBody_target members

    /// <summary>
    /// 恢复目标实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_RestoreToExistingInstanceRequestBody_target_H_
