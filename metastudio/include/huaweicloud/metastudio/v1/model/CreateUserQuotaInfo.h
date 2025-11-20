
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateUserQuotaInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateUserQuotaInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/UserQuotaDetail.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateUserQuotaInfo
    : public ModelBase
{
public:
    CreateUserQuotaInfo();
    virtual ~CreateUserQuotaInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateUserQuotaInfo members

    /// <summary>
    /// 子账户（用户）ID。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserQuotaDetail getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(const UserQuotaDetail& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    UserQuotaDetail quota_;
    bool quotaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateUserQuotaInfo_H_
