
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowIpInfoRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowIpInfoRequest_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  ShowIpInfoRequest
    : public ModelBase
{
public:
    ShowIpInfoRequest();
    virtual ~ShowIpInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowIpInfoRequest members

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，\&quot;all\&quot;表示所有项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// IP地址列表，以“，”分割，最多20个。
    /// </summary>

    std::string getIps() const;
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::string& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string ips_;
    bool ipsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowIpInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowIpInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowIpInfoRequest_H_
