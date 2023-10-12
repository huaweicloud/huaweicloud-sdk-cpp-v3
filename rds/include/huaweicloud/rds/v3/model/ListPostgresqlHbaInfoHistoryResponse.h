
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlHbaInfoHistoryResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlHbaInfoHistoryResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/PostgresqlHbaHistory.h>
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
class HUAWEICLOUD_RDS_V3_EXPORT  ListPostgresqlHbaInfoHistoryResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPostgresqlHbaInfoHistoryResponse();
    virtual ~ListPostgresqlHbaInfoHistoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPostgresqlHbaInfoHistoryResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<PostgresqlHbaHistory>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<PostgresqlHbaHistory>& value);


protected:
    std::vector<PostgresqlHbaHistory> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlHbaInfoHistoryResponse_H_
