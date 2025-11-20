
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UserQuotaInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UserQuotaInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ListUserQuotaDetail.h>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UserQuotaInfo
    : public ModelBase
{
public:
    UserQuotaInfo();
    virtual ~UserQuotaInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserQuotaInfo members

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

    ListUserQuotaDetail getQuota() const;
    bool quotaIsSet() const;
    void unsetquota();
    void setQuota(const ListUserQuotaDetail& value);

    /// <summary>
    /// 
    /// </summary>

    ListUserQuotaDetail getUsage() const;
    bool usageIsSet() const;
    void unsetusage();
    void setUsage(const ListUserQuotaDetail& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    ListUserQuotaDetail quota_;
    bool quotaIsSet_;
    ListUserQuotaDetail usage_;
    bool usageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UserQuotaInfo_H_
