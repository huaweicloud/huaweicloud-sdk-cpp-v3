
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainFullConfigRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainFullConfigRequest_H_


#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v1/model/ModifyDomainConfigRequestBody.h>

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
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateDomainFullConfigRequest
    : public ModelBase
{
public:
    UpdateDomainFullConfigRequest();
    virtual ~UpdateDomainFullConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDomainFullConfigRequest members

    /// <summary>
    /// 加速域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示修改当前企业项目下加速域名的配置，\&quot;all\&quot;代表所有项目。  &gt; 当使用子帐号调用接口时，该参数必传。 您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ModifyDomainConfigRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ModifyDomainConfigRequestBody& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    ModifyDomainConfigRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateDomainFullConfigRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateDomainFullConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateDomainFullConfigRequest_H_
