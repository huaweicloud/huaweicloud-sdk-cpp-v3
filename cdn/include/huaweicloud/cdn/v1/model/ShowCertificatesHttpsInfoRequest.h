
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowCertificatesHttpsInfoRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowCertificatesHttpsInfoRequest_H_

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
class HUAWEICLOUD_CDN_V1_EXPORT  ShowCertificatesHttpsInfoRequest
    : public ModelBase
{
public:
    ShowCertificatesHttpsInfoRequest();
    virtual ~ShowCertificatesHttpsInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowCertificatesHttpsInfoRequest members

    /// <summary>
    /// 每页的数量，取值范围1-10000，不设值时默认值为30。
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 查询的页码。取值范围1-65535，不设值时默认值为1。
    /// </summary>

    int32_t getPageNumber() const;
    bool pageNumberIsSet() const;
    void unsetpageNumber();
    void setPageNumber(int32_t value);

    /// <summary>
    /// 加速域名。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 域名所属用户的domain_id。
    /// </summary>

    std::string getUserDomainId() const;
    bool userDomainIdIsSet() const;
    void unsetuserDomainId();
    void setUserDomainId(const std::string& value);

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示查询资源所属项目，\&quot;all\&quot;表示所有项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pageNumber_;
    bool pageNumberIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string userDomainId_;
    bool userDomainIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCertificatesHttpsInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCertificatesHttpsInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_ShowCertificatesHttpsInfoRequest_H_
