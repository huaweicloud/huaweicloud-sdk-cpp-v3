
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlUpdateBackupPolicyRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlUpdateBackupPolicyRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/MysqlBackupPolicy.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置自动备份策略信息
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  MysqlUpdateBackupPolicyRequest
    : public ModelBase
{
public:
    MysqlUpdateBackupPolicyRequest();
    virtual ~MysqlUpdateBackupPolicyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MysqlUpdateBackupPolicyRequest members

    /// <summary>
    /// 
    /// </summary>

    MysqlBackupPolicy getBackupPolicy() const;
    bool backupPolicyIsSet() const;
    void unsetbackupPolicy();
    void setBackupPolicy(const MysqlBackupPolicy& value);


protected:
    MysqlBackupPolicy backupPolicy_;
    bool backupPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_MysqlUpdateBackupPolicyRequest_H_
