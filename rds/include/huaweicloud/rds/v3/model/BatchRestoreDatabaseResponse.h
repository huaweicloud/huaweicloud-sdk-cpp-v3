
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchRestoreDatabaseResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchRestoreDatabaseResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PostgreSQLRestoreResult.h>
#include <vector>

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
class HUAWEICLOUD_RDS_V3_EXPORT  BatchRestoreDatabaseResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchRestoreDatabaseResponse();
    virtual ~BatchRestoreDatabaseResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchRestoreDatabaseResponse members

    /// <summary>
    /// 表信息
    /// </summary>

    std::vector<PostgreSQLRestoreResult>& getRestoreResult();
    bool restoreResultIsSet() const;
    void unsetrestoreResult();
    void setRestoreResult(const std::vector<PostgreSQLRestoreResult>& value);


protected:
    std::vector<PostgreSQLRestoreResult> restoreResult_;
    bool restoreResultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchRestoreDatabaseResponse_H_
