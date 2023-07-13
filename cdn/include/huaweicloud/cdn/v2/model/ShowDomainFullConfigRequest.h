
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainFullConfigRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainFullConfigRequest_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowDomainFullConfigRequest
    : public ModelBase
{
public:
    ShowDomainFullConfigRequest();
    virtual ~ShowDomainFullConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDomainFullConfigRequest members

    /// <summary>
    /// 加速域名。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 企业项目ID， all：所有项目。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 取值为auth_key，用来查询鉴权KEY和鉴权备KEY的值。
    /// </summary>

    std::string getShowSpecialConfigs() const;
    bool showSpecialConfigsIsSet() const;
    void unsetshowSpecialConfigs();
    void setShowSpecialConfigs(const std::string& value);


protected:
    std::string domainName_;
    bool domainNameIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string showSpecialConfigs_;
    bool showSpecialConfigsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDomainFullConfigRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDomainFullConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowDomainFullConfigRequest_H_
