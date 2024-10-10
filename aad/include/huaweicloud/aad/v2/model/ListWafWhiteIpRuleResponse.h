
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafWhiteIpRuleResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafWhiteIpRuleResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/BlackWhiteListRule.h>
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
class HUAWEICLOUD_AAD_V2_EXPORT  ListWafWhiteIpRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWafWhiteIpRuleResponse();
    virtual ~ListWafWhiteIpRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWafWhiteIpRuleResponse members

    /// <summary>
    /// total
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// black
    /// </summary>

    std::vector<BlackWhiteListRule>& getBlack();
    bool blackIsSet() const;
    void unsetblack();
    void setBlack(const std::vector<BlackWhiteListRule>& value);

    /// <summary>
    /// white
    /// </summary>

    std::vector<BlackWhiteListRule>& getWhite();
    bool whiteIsSet() const;
    void unsetwhite();
    void setWhite(const std::vector<BlackWhiteListRule>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<BlackWhiteListRule> black_;
    bool blackIsSet_;
    std::vector<BlackWhiteListRule> white_;
    bool whiteIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWafWhiteIpRuleResponse_H_
