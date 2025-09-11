
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseSchemaTablesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseSchemaTablesResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/DatabaseForListTableResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListDatabaseSchemaTablesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatabaseSchemaTablesResponse();
    virtual ~ListDatabaseSchemaTablesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDatabaseSchemaTablesResponse members

    /// <summary>
    /// **参数解释**： 列表中每个元素表示一个数据库表。
    /// </summary>

    std::vector<DatabaseForListTableResult>& getDatabaseTables();
    bool databaseTablesIsSet() const;
    void unsetdatabaseTables();
    void setDatabaseTables(const std::vector<DatabaseForListTableResult>& value);

    /// <summary>
    /// **参数解释**： 数据库表总数。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<DatabaseForListTableResult> databaseTables_;
    bool databaseTablesIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseSchemaTablesResponse_H_
