
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchRestorePostgreSqlTablesRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchRestorePostgreSqlTablesRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PostgreSQLRestoreTableRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  BatchRestorePostgreSqlTablesRequest
    : public ModelBase
{
public:
    BatchRestorePostgreSqlTablesRequest();
    virtual ~BatchRestorePostgreSqlTablesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchRestorePostgreSqlTablesRequest members

    /// <summary>
    /// 
    /// </summary>

    PostgreSQLRestoreTableRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PostgreSQLRestoreTableRequest& value);


protected:
    PostgreSQLRestoreTableRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchRestorePostgreSqlTablesRequest& dereference_from_shared_ptr(std::shared_ptr<BatchRestorePostgreSqlTablesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_BatchRestorePostgreSqlTablesRequest_H_
