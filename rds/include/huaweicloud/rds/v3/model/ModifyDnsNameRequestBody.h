
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyDnsNameRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyDnsNameRequestBody_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ModifyDnsNameRequestBody
    : public ModelBase
{
public:
    ModifyDnsNameRequestBody();
    virtual ~ModifyDnsNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyDnsNameRequestBody members

    /// <summary>
    /// 新域名的前缀，校验规则是^[0-9a-zA-Z]{8,64}$
    /// </summary>

    std::string getDnsName() const;
    bool dnsNameIsSet() const;
    void unsetdnsName();
    void setDnsName(const std::string& value);


protected:
    std::string dnsName_;
    bool dnsNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ModifyDnsNameRequestBody_H_
