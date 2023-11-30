
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreDatabaseRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreDatabaseRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/RestoreDatabaseInstance.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 库级恢复请求信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgreSQLRestoreDatabaseRequest
    : public ModelBase
{
public:
    PostgreSQLRestoreDatabaseRequest();
    virtual ~PostgreSQLRestoreDatabaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgreSQLRestoreDatabaseRequest members

    /// <summary>
    /// 库级恢复实例信息
    /// </summary>

    std::vector<RestoreDatabaseInstance>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<RestoreDatabaseInstance>& value);


protected:
    std::vector<RestoreDatabaseInstance> instances_;
    bool instancesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreDatabaseRequest_H_
