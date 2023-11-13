
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlListHistoryTablesRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlListHistoryTablesRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/rds/v3/model/PostgreSQLHistoryTableRequest.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListPostgresqlListHistoryTablesRequest
    : public ModelBase
{
public:
    ListPostgresqlListHistoryTablesRequest();
    virtual ~ListPostgresqlListHistoryTablesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPostgresqlListHistoryTablesRequest members

    /// <summary>
    /// 语言
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 数据库引擎。支持的引擎如下，不区分大小写：postgresql
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PostgreSQLHistoryTableRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PostgreSQLHistoryTableRequest& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    PostgreSQLHistoryTableRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPostgresqlListHistoryTablesRequest& dereference_from_shared_ptr(std::shared_ptr<ListPostgresqlListHistoryTablesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListPostgresqlListHistoryTablesRequest_H_
