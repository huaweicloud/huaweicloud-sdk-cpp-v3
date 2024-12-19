
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_DeleteWafWhiteIpRuleV2RequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_DeleteWafWhiteIpRuleV2RequestBody_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  DeleteWafWhiteIpRuleV2RequestBody
    : public ModelBase
{
public:
    DeleteWafWhiteIpRuleV2RequestBody();
    virtual ~DeleteWafWhiteIpRuleV2RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteWafWhiteIpRuleV2RequestBody members

    /// <summary>
    /// 待删除规则id
    /// </summary>

    std::vector<std::string>& getIds();
    bool idsIsSet() const;
    void unsetids();
    void setIds(const std::vector<std::string>& value);

    /// <summary>
    /// 域名+端口组合，标准端口80/443无须加端口。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 防护区域
    /// </summary>

    int32_t getOverseasType() const;
    bool overseasTypeIsSet() const;
    void unsetoverseasType();
    void setOverseasType(int32_t value);


protected:
    std::vector<std::string> ids_;
    bool idsIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    int32_t overseasType_;
    bool overseasTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_DeleteWafWhiteIpRuleV2RequestBody_H_
