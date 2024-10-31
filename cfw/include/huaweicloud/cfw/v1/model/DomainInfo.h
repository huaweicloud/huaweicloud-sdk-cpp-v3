
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DomainInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DomainInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  DomainInfo
    : public ModelBase
{
public:
    DomainInfo();
    virtual ~DomainInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainInfo members

    /// <summary>
    /// 域名地址id
    /// </summary>

    std::string getDomainAddressId() const;
    bool domainAddressIdIsSet() const;
    void unsetdomainAddressId();
    void setDomainAddressId(const std::string& value);

    /// <summary>
    /// 域名，如www.test.com
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 域名描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string domainAddressId_;
    bool domainAddressIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DomainInfo_H_
