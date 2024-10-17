
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlResponse_sqls_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlResponse_sqls_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/AuditSqlResponse_sql.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AuditSqlResponse_sqls
    : public ModelBase
{
public:
    AuditSqlResponse_sqls();
    virtual ~AuditSqlResponse_sqls();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuditSqlResponse_sqls members

    /// <summary>
    /// 
    /// </summary>

    AuditSqlResponse_sql getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const AuditSqlResponse_sql& value);


protected:
    AuditSqlResponse_sql sql_;
    bool sqlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AuditSqlResponse_sqls_H_
