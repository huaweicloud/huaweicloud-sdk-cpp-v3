
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchRestorePostgreSqlTablesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchRestorePostgreSqlTablesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/RestoreResult.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  BatchRestorePostgreSqlTablesResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchRestorePostgreSqlTablesResponse();
    virtual ~BatchRestorePostgreSqlTablesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchRestorePostgreSqlTablesResponse members

    /// <summary>
    /// 表信息
    /// </summary>

    std::vector<RestoreResult>& getRestoreResult();
    bool restoreResultIsSet() const;
    void unsetrestoreResult();
    void setRestoreResult(const std::vector<RestoreResult>& value);


protected:
    std::vector<RestoreResult> restoreResult_;
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

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchRestorePostgreSqlTablesResponse_H_
