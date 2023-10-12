
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteSqlFilterRuleReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteSqlFilterRuleReq_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/DeleteNodeSqlFilterRuleInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// - 开启/关闭sql限流参数体。
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  DeleteSqlFilterRuleReq
    : public ModelBase
{
public:
    DeleteSqlFilterRuleReq();
    virtual ~DeleteSqlFilterRuleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSqlFilterRuleReq members

    /// <summary>
    /// 
    /// </summary>

    std::vector<DeleteNodeSqlFilterRuleInfo>& getSqlFilterRules();
    bool sqlFilterRulesIsSet() const;
    void unsetsqlFilterRules();
    void setSqlFilterRules(const std::vector<DeleteNodeSqlFilterRuleInfo>& value);


protected:
    std::vector<DeleteNodeSqlFilterRuleInfo> sqlFilterRules_;
    bool sqlFilterRulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_DeleteSqlFilterRuleReq_H_
