
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListFullSqlSwitchesResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListFullSqlSwitchesResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/SqlTypeRangeConfigResult.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/FullSqlSwitchResult.h>
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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListFullSqlSwitchesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListFullSqlSwitchesResponse();
    virtual ~ListFullSqlSwitchesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFullSqlSwitchesResponse members

    /// <summary>
    /// **参数解释**: 总记录数量。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// **参数解释**: 开关记录列表。
    /// </summary>

    std::vector<FullSqlSwitchResult>& getFullSqlSwitchs();
    bool fullSqlSwitchsIsSet() const;
    void unsetfullSqlSwitchs();
    void setFullSqlSwitchs(const std::vector<FullSqlSwitchResult>& value);

    /// <summary>
    /// **参数解释**: 可选择的SQL采集类别清单列表。供开启全量SQL时做配置下发参考。
    /// </summary>

    std::vector<SqlTypeRangeConfigResult>& getAllowedSqlTypes();
    bool allowedSqlTypesIsSet() const;
    void unsetallowedSqlTypes();
    void setAllowedSqlTypes(const std::vector<SqlTypeRangeConfigResult>& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<FullSqlSwitchResult> fullSqlSwitchs_;
    bool fullSqlSwitchsIsSet_;
    std::vector<SqlTypeRangeConfigResult> allowedSqlTypes_;
    bool allowedSqlTypesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListFullSqlSwitchesResponse_H_
