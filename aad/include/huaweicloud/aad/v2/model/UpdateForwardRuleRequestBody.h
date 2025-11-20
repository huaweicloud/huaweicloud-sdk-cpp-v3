
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateForwardRuleRequestBody_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateForwardRuleRequestBody_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_AAD_V2_EXPORT  UpdateForwardRuleRequestBody
    : public ModelBase
{
public:
    UpdateForwardRuleRequestBody();
    virtual ~UpdateForwardRuleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateForwardRuleRequestBody members

    /// <summary>
    /// 源站IP
    /// </summary>

    std::string getSourceIp() const;
    bool sourceIpIsSet() const;
    void unsetsourceIp();
    void setSourceIp(const std::string& value);


protected:
    std::string sourceIp_;
    bool sourceIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_UpdateForwardRuleRequestBody_H_
