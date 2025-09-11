
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListWhitelistsResponse_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListWhitelistsResponse_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/WhitelistBean.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  ListWhitelistsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWhitelistsResponse();
    virtual ~ListWhitelistsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWhitelistsResponse members

    /// <summary>
    /// 总条数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 白名单列表
    /// </summary>

    std::vector<WhitelistBean>& getWhitelists();
    bool whitelistsIsSet() const;
    void unsetwhitelists();
    void setWhitelists(const std::vector<WhitelistBean>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<WhitelistBean> whitelists_;
    bool whitelistsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListWhitelistsResponse_H_
