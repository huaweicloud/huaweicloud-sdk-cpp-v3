
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteDataFilterRuleReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteDataFilterRuleReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量删除数据过滤规则请求体对象，包含待删除的规则ID列表和数据过滤类型。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  DeleteDataFilterRuleReq
    : public ModelBase
{
public:
    DeleteDataFilterRuleReq();
    virtual ~DeleteDataFilterRuleReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteDataFilterRuleReq members

    /// <summary>
    /// 待删除的数据过滤规则ID列表，支持批量删除多个规则。对应查询接口响应中的&#x60;batch_id&#x60;字段。
    /// </summary>

    std::vector<int64_t>& getRuleIds();
    bool ruleIdsIsSet() const;
    void unsetruleIds();
    void setRuleIds(std::vector<int64_t> value);

    /// <summary>
    /// 数据过滤条件类型，指定要删除的过滤规则所属的配置层级，取值common表示一般过滤条件，config表示高级配置过滤条件
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::vector<int64_t> ruleIds_;
    bool ruleIdsIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_DeleteDataFilterRuleReq_H_
