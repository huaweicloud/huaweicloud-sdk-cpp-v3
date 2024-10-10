
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafCustomRuleResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafCustomRuleResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/WafCustomRule.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ListWafCustomRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWafCustomRuleResponse();
    virtual ~ListWafCustomRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWafCustomRuleResponse members

    /// <summary>
    /// total
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// items
    /// </summary>

    std::vector<WafCustomRule>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<WafCustomRule>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<WafCustomRule> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafCustomRuleResponse_H_
