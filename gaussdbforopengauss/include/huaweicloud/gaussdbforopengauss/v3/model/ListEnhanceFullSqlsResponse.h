
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnhanceFullSqlsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnhanceFullSqlsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/FullSqlResult.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListEnhanceFullSqlsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEnhanceFullSqlsResponse();
    virtual ~ListEnhanceFullSqlsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnhanceFullSqlsResponse members

    /// <summary>
    /// **参数解释**: 总记录数量。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// **参数解释**: 全量SQL列表。
    /// </summary>

    std::vector<FullSqlResult>& getFullSqls();
    bool fullSqlsIsSet() const;
    void unsetfullSqls();
    void setFullSqls(const std::vector<FullSqlResult>& value);

    /// <summary>
    /// **参数解释**: 最大查询记录数量。主要供前端交互控制使用。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getLimitCount() const;
    bool limitCountIsSet() const;
    void unsetlimitCount();
    void setLimitCount(int64_t value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<FullSqlResult> fullSqls_;
    bool fullSqlsIsSet_;
    int64_t limitCount_;
    bool limitCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnhanceFullSqlsResponse_H_
