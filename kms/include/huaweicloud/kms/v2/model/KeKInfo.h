
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_KeKInfo_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_KeKInfo_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 密钥详细信息。
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  KeKInfo
    : public ModelBase
{
public:
    KeKInfo();
    virtual ~KeKInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// KeKInfo members

    /// <summary>
    /// 密钥ID。
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);

    /// <summary>
    /// 用户域ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// region ID。
    /// </summary>

    std::string getRegionId() const;
    bool regionIdIsSet() const;
    void unsetregionId();
    void setRegionId(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string regionId_;
    bool regionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_KeKInfo_H_
