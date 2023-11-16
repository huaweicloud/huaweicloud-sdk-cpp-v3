
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListInstanceIpRuleResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListInstanceIpRuleResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/TransferRuleInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ListInstanceIpRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceIpRuleResponse();
    virtual ~ListInstanceIpRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceIpRuleResponse members

    /// <summary>
    /// 转发规则总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 转发规则列表
    /// </summary>

    std::vector<TransferRuleInfo>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<TransferRuleInfo>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<TransferRuleInfo> rules_;
    bool rulesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListInstanceIpRuleResponse_H_
