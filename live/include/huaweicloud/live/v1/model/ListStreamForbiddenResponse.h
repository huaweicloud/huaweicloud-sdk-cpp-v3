
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListStreamForbiddenResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListStreamForbiddenResponse_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/StreamForbiddenList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ListStreamForbiddenResponse
    : public ModelBase, public HttpResponse
{
public:
    ListStreamForbiddenResponse();
    virtual ~ListStreamForbiddenResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListStreamForbiddenResponse members

    /// <summary>
    /// 查询结果的总元素数量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 禁播黑名单列表
    /// </summary>

    std::vector<StreamForbiddenList>& getBlocks();
    bool blocksIsSet() const;
    void unsetblocks();
    void setBlocks(const std::vector<StreamForbiddenList>& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<StreamForbiddenList> blocks_;
    bool blocksIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ListStreamForbiddenResponse_H_
