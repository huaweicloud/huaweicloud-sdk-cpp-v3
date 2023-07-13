
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_Quotas_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_Quotas_H_

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
/// 
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  Quotas
    : public ModelBase
{
public:
    Quotas();
    virtual ~Quotas();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Quotas members

    /// <summary>
    /// 配额上限。
    /// </summary>

    int32_t getQuotaLimit() const;
    bool quotaLimitIsSet() const;
    void unsetquotaLimit();
    void setQuotaLimit(int32_t value);

    /// <summary>
    /// 配额类型。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 已使用配额数。
    /// </summary>

    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetused();
    void setUsed(int32_t value);

    /// <summary>
    /// 域名所属用户的domain_id。
    /// </summary>

    std::string getUserDomainId() const;
    bool userDomainIdIsSet() const;
    void unsetuserDomainId();
    void setUserDomainId(const std::string& value);


protected:
    int32_t quotaLimit_;
    bool quotaLimitIsSet_;
    std::string type_;
    bool typeIsSet_;
    int32_t used_;
    bool usedIsSet_;
    std::string userDomainId_;
    bool userDomainIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_Quotas_H_
