
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_Resources_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_Resources_H_


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
/// 
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  Resources
    : public ModelBase
{
public:
    Resources();
    virtual ~Resources();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Resources members

    /// <summary>
    /// 配额类型。枚举值说明:  - CMK，用户主密钥  - grant_per_CMK，单个用户主密钥可创建授权数
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
    /// 配额总数。
    /// </summary>

    int32_t getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t used_;
    bool usedIsSet_;
    int32_t quota_;
    bool quotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_Resources_H_
