
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataFilterRulesResultResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataFilterRulesResultResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/DataFilterRuleResp.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowDataFilterRulesResultResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDataFilterRulesResultResponse();
    virtual ~ShowDataFilterRulesResultResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDataFilterRulesResultResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int64_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int64_t value);

    /// <summary>
    /// 数据过滤规则列表。
    /// </summary>

    std::vector<DataFilterRuleResp>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<DataFilterRuleResp>& value);

    /// <summary>
    /// 查询过滤规则进度。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    int64_t totalCount_;
    bool totalCountIsSet_;
    std::vector<DataFilterRuleResp> rules_;
    bool rulesIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDataFilterRulesResultResponse_H_
