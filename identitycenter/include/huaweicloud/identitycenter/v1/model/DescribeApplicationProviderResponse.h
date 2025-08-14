
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeApplicationProviderResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeApplicationProviderResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenter/v1/model/DisplayDataDto.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DescribeApplicationProviderResponse
    : public ModelBase, public HttpResponse
{
public:
    DescribeApplicationProviderResponse();
    virtual ~DescribeApplicationProviderResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DescribeApplicationProviderResponse members

    /// <summary>
    /// 应用程序提供者URN
    /// </summary>

    std::string getApplicationProviderUrn() const;
    bool applicationProviderUrnIsSet() const;
    void unsetapplicationProviderUrn();
    void setApplicationProviderUrn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DisplayDataDto getDisplayData() const;
    bool displayDataIsSet() const;
    void unsetdisplayData();
    void setDisplayData(const DisplayDataDto& value);

    /// <summary>
    /// 支持的协议
    /// </summary>

    std::string getFederationProtocol() const;
    bool federationProtocolIsSet() const;
    void unsetfederationProtocol();
    void setFederationProtocol(const std::string& value);

    /// <summary>
    /// 应用程序提供者唯一标识符（ID）
    /// </summary>

    std::string getApplicationProviderId() const;
    bool applicationProviderIdIsSet() const;
    void unsetapplicationProviderId();
    void setApplicationProviderId(const std::string& value);


protected:
    std::string applicationProviderUrn_;
    bool applicationProviderUrnIsSet_;
    DisplayDataDto displayData_;
    bool displayDataIsSet_;
    std::string federationProtocol_;
    bool federationProtocolIsSet_;
    std::string applicationProviderId_;
    bool applicationProviderIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DescribeApplicationProviderResponse_H_
