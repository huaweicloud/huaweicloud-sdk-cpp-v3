
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListBlockIpsResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListBlockIpsResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/BlockList_blocking_list.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  ListBlockIpsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListBlockIpsResponse();
    virtual ~ListBlockIpsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBlockIpsResponse members

    /// <summary>
    /// 封堵列表响应体
    /// </summary>

    std::vector<BlockList_blocking_list>& getBlockingList();
    bool blockingListIsSet() const;
    void unsetblockingList();
    void setBlockingList(const std::vector<BlockList_blocking_list>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<BlockList_blocking_list> blockingList_;
    bool blockingListIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListBlockIpsResponse_H_
