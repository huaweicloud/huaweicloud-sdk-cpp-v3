
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BatchDeleteManualBackupRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BatchDeleteManualBackupRequestBody_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  BatchDeleteManualBackupRequestBody
    : public ModelBase
{
public:
    BatchDeleteManualBackupRequestBody();
    virtual ~BatchDeleteManualBackupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteManualBackupRequestBody members

    /// <summary>
    /// 需要批量删除的手动备份id列表，最多一次不超过10条
    /// </summary>

    std::vector<std::string>& getBackupIds();
    bool backupIdsIsSet() const;
    void unsetbackupIds();
    void setBackupIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> backupIds_;
    bool backupIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_BatchDeleteManualBackupRequestBody_H_
