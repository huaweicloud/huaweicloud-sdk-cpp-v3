
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyDnsNameReq_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyDnsNameReq_H_

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
/// 修改内网域名
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ModifyDnsNameReq
    : public ModelBase
{
public:
    ModifyDnsNameReq();
    virtual ~ModifyDnsNameReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyDnsNameReq members

    /// <summary>
    /// 新域名的前缀，取值范围如下：8~63个字符之间，可以包含小写字母、数字，不能包含其他特殊字符。
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ModifyDnsNameReq_H_
