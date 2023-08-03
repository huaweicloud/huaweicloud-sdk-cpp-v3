
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchDeleteManualBackupResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchDeleteManualBackupResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/DeleteBackupResult.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BatchDeleteManualBackupResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeleteManualBackupResponse();
    virtual ~BatchDeleteManualBackupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteManualBackupResponse members

    /// <summary>
    /// 备份删除结果
    /// </summary>

    std::vector<DeleteBackupResult>& getDeleteResults();
    bool deleteResultsIsSet() const;
    void unsetdeleteResults();
    void setDeleteResults(const std::vector<DeleteBackupResult>& value);


protected:
    std::vector<DeleteBackupResult> deleteResults_;
    bool deleteResultsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchDeleteManualBackupResponse_H_
