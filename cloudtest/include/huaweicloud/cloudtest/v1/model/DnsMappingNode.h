
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DnsMappingNode_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DnsMappingNode_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// DNS配置
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  DnsMappingNode
    : public ModelBase
{
public:
    DnsMappingNode();
    virtual ~DnsMappingNode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DnsMappingNode members

    /// <summary>
    /// 域名信息
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 域名对应的IP
    /// </summary>

    std::vector<std::string>& getIps();
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::vector<std::string>& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::vector<std::string> ips_;
    bool ipsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_DnsMappingNode_H_
