
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseSchemasResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseSchemasResponse_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussDatabaseForListSchema.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListDatabaseSchemasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDatabaseSchemasResponse();
    virtual ~ListDatabaseSchemasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDatabaseSchemasResponse members

    /// <summary>
    /// 列表中每个元素表示一个数据库schema。
    /// </summary>

    std::vector<GaussDBforOpenGaussDatabaseForListSchema>& getDatabaseSchemas();
    bool databaseSchemasIsSet() const;
    void unsetdatabaseSchemas();
    void setDatabaseSchemas(const std::vector<GaussDBforOpenGaussDatabaseForListSchema>& value);

    /// <summary>
    /// 数据库schema总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<GaussDBforOpenGaussDatabaseForListSchema> databaseSchemas_;
    bool databaseSchemasIsSet_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListDatabaseSchemasResponse_H_
