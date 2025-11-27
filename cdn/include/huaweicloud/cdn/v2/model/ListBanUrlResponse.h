
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ListBanUrlResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ListBanUrlResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v2/model/BanUrlList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ListBanUrlResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBanUrlResponse();
    virtual ~ListBanUrlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBanUrlResponse members

    /// <summary>
    /// 查询结果总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// url信息。
    /// </summary>

    std::vector<BanUrlList>& getBanUrls();
    bool banUrlsIsSet() const;
    void unsetbanUrls();
    void setBanUrls(const std::vector<BanUrlList>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<BanUrlList> banUrls_;
    bool banUrlsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ListBanUrlResponse_H_
