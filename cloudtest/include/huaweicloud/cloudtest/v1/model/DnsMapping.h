
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DnsMapping_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DnsMapping_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/DnsMappingNode.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// DNS配置结果集
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DnsMapping
    : public ModelBase
{
public:
    DnsMapping();
    virtual ~DnsMapping();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DnsMapping members

    /// <summary>
    /// 
    /// </summary>

    std::vector<DnsMappingNode>& getDns();
    bool dnsIsSet() const;
    void unsetdns();
    void setDns(const std::vector<DnsMappingNode>& value);


protected:
    std::vector<DnsMappingNode> dns_;
    bool dnsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DnsMapping_H_
