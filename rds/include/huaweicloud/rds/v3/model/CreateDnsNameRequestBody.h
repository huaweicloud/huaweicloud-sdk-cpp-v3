
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDnsNameRequestBody_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDnsNameRequestBody_H_


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
class HUAWEICLOUD_RDS_V3_EXPORT  CreateDnsNameRequestBody
    : public ModelBase
{
public:
    CreateDnsNameRequestBody();
    virtual ~CreateDnsNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDnsNameRequestBody members

    /// <summary>
    /// 域名类型，当前只支持private
    /// </summary>

    std::string getDnsType() const;
    bool dnsTypeIsSet() const;
    void unsetdnsType();
    void setDnsType(const std::string& value);


protected:
    std::string dnsType_;
    bool dnsTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_CreateDnsNameRequestBody_H_
