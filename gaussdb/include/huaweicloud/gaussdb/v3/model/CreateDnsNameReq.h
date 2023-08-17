
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateDnsNameReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateDnsNameReq_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 申请内网域名
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CreateDnsNameReq
    : public ModelBase
{
public:
    CreateDnsNameReq();
    virtual ~CreateDnsNameReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDnsNameReq members

    /// <summary>
    /// 域名类型，当前只支持private。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CreateDnsNameReq_H_
