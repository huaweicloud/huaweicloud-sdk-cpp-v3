
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_CreateDomainResponse_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_CreateDomainResponse_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v1/model/CreateDomainResponseBodyContent.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  CreateDomainResponse
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
    /// 
    /// </summary>

    CreateDomainResponseBodyContent getDomain() const;
    bool domainIsSet() const;
    void unsetdomain();
    void setDomain(const CreateDomainResponseBodyContent& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    CreateDomainResponseBodyContent domain_;
    bool domainIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_CreateDomainResponse_H_
