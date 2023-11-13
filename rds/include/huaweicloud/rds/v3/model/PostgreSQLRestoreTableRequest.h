
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreTableRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreTableRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/PostgreSQLRestoreTableInstance.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 表级时间点恢复的请求信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  PostgreSQLRestoreTableRequest
    : public ModelBase
{
public:
    PostgreSQLRestoreTableRequest();
    virtual ~PostgreSQLRestoreTableRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostgreSQLRestoreTableRequest members

    /// <summary>
    /// 表信息
    /// </summary>

    std::vector<PostgreSQLRestoreTableInstance>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<PostgreSQLRestoreTableInstance>& value);


protected:
    std::vector<PostgreSQLRestoreTableInstance> instances_;
    bool instancesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_PostgreSQLRestoreTableRequest_H_
