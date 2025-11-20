
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListUserQuotasResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListUserQuotasResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/UserQuotaInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListUserQuotasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListUserQuotasResponse();
    virtual ~ListUserQuotasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserQuotasResponse members

    /// <summary>
    /// 子账户总数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 子账户列表。
    /// </summary>

    std::vector<UserQuotaInfo>& getAssets();
    bool assetsIsSet() const;
    void unsetassets();
    void setAssets(const std::vector<UserQuotaInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<UserQuotaInfo> assets_;
    bool assetsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListUserQuotasResponse_H_
