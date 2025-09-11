
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopSqlsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopSqlsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/TopSQLInfoResult.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListTopSqlsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTopSqlsResponse();
    virtual ~ListTopSqlsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTopSqlsResponse members

    /// <summary>
    /// **参数解释**: Top SQL总条数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// **参数解释**: Top SQL信息列表。
    /// </summary>

    std::vector<TopSQLInfoResult>& getTopSqlInfos();
    bool topSqlInfosIsSet() const;
    void unsettopSqlInfos();
    void setTopSqlInfos(const std::vector<TopSQLInfoResult>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<TopSQLInfoResult> topSqlInfos_;
    bool topSqlInfosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListTopSqlsResponse_H_
