
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlRecommendRulesRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlRecommendRulesRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListSqlRecommendRulesRequestBody
    : public ModelBase
{
public:
    ListSqlRecommendRulesRequestBody();
    virtual ~ListSqlRecommendRulesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSqlRecommendRulesRequestBody members

    /// <summary>
    /// **参数解释**: 推荐类型。 **约束限制**: 不涉及。 **取值范围**: - all：全部 - exec_count：执行次数 - avg_exec_time：平均执行时间 - max_exec_time：最大执行时间  **默认取值**: all
    /// </summary>

    std::string getRecommendType() const;
    bool recommendTypeIsSet() const;
    void unsetrecommendType();
    void setRecommendType(const std::string& value);

    /// <summary>
    /// **参数解释**: 推荐规则返回条数。 **约束限制**: 不涉及。 **取值范围**: 不涉及。 **默认取值**: 不涉及。
    /// </summary>

    int32_t getRecommendCount() const;
    bool recommendCountIsSet() const;
    void unsetrecommendCount();
    void setRecommendCount(int32_t value);

    /// <summary>
    /// **参数解释**: 是否使用紧急通道。 **约束限制**: 不涉及。 **取值范围**: - true：开启紧急通道 - false：关闭紧急通道  **默认取值**: false
    /// </summary>

    bool isUseOpsTunnel() const;
    bool useOpsTunnelIsSet() const;
    void unsetuseOpsTunnel();
    void setUseOpsTunnel(bool value);


protected:
    std::string recommendType_;
    bool recommendTypeIsSet_;
    int32_t recommendCount_;
    bool recommendCountIsSet_;
    bool useOpsTunnel_;
    bool useOpsTunnelIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListSqlRecommendRulesRequestBody_H_
