
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_CertInfo_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_CertInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  CertInfo
    : public ModelBase
{
public:
    CertInfo();
    virtual ~CertInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertInfo members

    /// <summary>
    /// 证书名称
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// 证书id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 适用域名
    /// </summary>

    std::string getApplyDomain() const;
    bool applyDomainIsSet() const;
    void unsetapplyDomain();
    void setApplyDomain(const std::string& value);

    /// <summary>
    /// 过期时间
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// 过期状态
    /// </summary>

    int32_t getExpireStatus() const;
    bool expireStatusIsSet() const;
    void unsetexpireStatus();
    void setExpireStatus(int32_t value);


protected:
    std::string certName_;
    bool certNameIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string applyDomain_;
    bool applyDomainIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;
    int32_t expireStatus_;
    bool expireStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_CertInfo_H_
