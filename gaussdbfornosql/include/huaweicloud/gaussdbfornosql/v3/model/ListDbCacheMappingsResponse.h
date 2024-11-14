
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDbCacheMappingsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDbCacheMappingsResponse_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/QueryDBCacheMappingResponse.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListDbCacheMappingsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDbCacheMappingsResponse();
    virtual ~ListDbCacheMappingsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDbCacheMappingsResponse members

    /// <summary>
    /// 总记录数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// 内存加速映射信息。
    /// </summary>

    std::vector<QueryDBCacheMappingResponse>& getDbcacheMappings();
    bool dbcacheMappingsIsSet() const;
    void unsetdbcacheMappings();
    void setDbcacheMappings(const std::vector<QueryDBCacheMappingResponse>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<QueryDBCacheMappingResponse> dbcacheMappings_;
    bool dbcacheMappingsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListDbCacheMappingsResponse_H_
