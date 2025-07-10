
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_TransferPolicyParam_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_TransferPolicyParam_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 转储策略信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  TransferPolicyParam
    : public ModelBase
{
public:
    TransferPolicyParam();
    virtual ~TransferPolicyParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TransferPolicyParam members

    /// <summary>
    /// 转储目标前缀
    /// </summary>

    std::string getPrefix() const;
    bool prefixIsSet() const;
    void unsetprefix();
    void setPrefix(const std::string& value);

    /// <summary>
    /// 转储目标桶
    /// </summary>

    std::string getDestination() const;
    bool destinationIsSet() const;
    void unsetdestination();
    void setDestination(const std::string& value);

    /// <summary>
    /// 自动转储周期
    /// </summary>

    std::string getPeriod() const;
    bool periodIsSet() const;
    void unsetperiod();
    void setPeriod(const std::string& value);

    /// <summary>
    /// 转储备份类型， db:自动备份 log:增量备份, snapshot:手动备份 snapshot:手动备份 db:自动备份 log:日志备份
    /// </summary>

    std::string getBackupType() const;
    bool backupTypeIsSet() const;
    void unsetbackupType();
    void setBackupType(const std::string& value);


protected:
    std::string prefix_;
    bool prefixIsSet_;
    std::string destination_;
    bool destinationIsSet_;
    std::string period_;
    bool periodIsSet_;
    std::string backupType_;
    bool backupTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_TransferPolicyParam_H_
