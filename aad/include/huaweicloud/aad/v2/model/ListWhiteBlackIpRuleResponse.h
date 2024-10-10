
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWhiteBlackIpRuleResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWhiteBlackIpRuleResponse_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/BwListIps.h>
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
class HUAWEICLOUD_AAD_V2_EXPORT  ListWhiteBlackIpRuleResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWhiteBlackIpRuleResponse();
    virtual ~ListWhiteBlackIpRuleResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWhiteBlackIpRuleResponse members

    /// <summary>
    /// total
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 名单列表
    /// </summary>

    std::vector<BwListIps>& getIps();
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::vector<BwListIps>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<BwListIps> ips_;
    bool ipsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ListWhiteBlackIpRuleResponse_H_
