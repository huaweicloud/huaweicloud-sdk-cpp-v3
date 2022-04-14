
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretsResponse_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretsResponse_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/Secret.h>
#include <huaweicloud/csms/v1/model/PageInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListSecretsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSecretsResponse();
    virtual ~ListSecretsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSecretsResponse members

    /// <summary>
    /// 凭据详情列表。
    /// </summary>

    std::vector<Secret>& getSecrets();
    bool secretsIsSet() const;
    void unsetsecrets();
    void setSecrets(const std::vector<Secret>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<Secret> secrets_;
    bool secretsIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListSecretsResponse_H_
