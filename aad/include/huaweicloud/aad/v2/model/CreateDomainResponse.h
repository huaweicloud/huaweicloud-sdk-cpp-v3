
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_CreateDomainResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_CreateDomainResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  CreateDomainResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateDomainResponse();
    virtual ~CreateDomainResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDomainResponse members

    /// <summary>
    /// 高防提供的CNAME地址
    /// </summary>

    std::string getCname() const;
    bool cnameIsSet() const;
    void unsetcname();
    void setCname(const std::string& value);

    /// <summary>
    /// 域名id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


protected:
    std::string cname_;
    bool cnameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_CreateDomainResponse_H_
