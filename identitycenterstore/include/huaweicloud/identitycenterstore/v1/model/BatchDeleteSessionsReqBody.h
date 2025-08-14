
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BatchDeleteSessionsReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BatchDeleteSessionsReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  BatchDeleteSessionsReqBody
    : public ModelBase
{
public:
    BatchDeleteSessionsReqBody();
    virtual ~BatchDeleteSessionsReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteSessionsReqBody members

    /// <summary>
    /// 用户登录会话标识符（ID）
    /// </summary>

    std::vector<std::string>& getSessionIds();
    bool sessionIdsIsSet() const;
    void unsetsessionIds();
    void setSessionIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> sessionIds_;
    bool sessionIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BatchDeleteSessionsReqBody_H_
