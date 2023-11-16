
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_ListInstanceResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_ListInstanceResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/InstanceInfo.h>
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
class HUAWEICLOUD_AAD_V1_EXPORT  ListInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstanceResponse();
    virtual ~ListInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstanceResponse members

    /// <summary>
    /// 实例总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 实例
    /// </summary>

    std::vector<InstanceInfo>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<InstanceInfo>& value);


protected:
    int32_t count_;
    bool countIsSet_;
    std::vector<InstanceInfo> items_;
    bool itemsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_ListInstanceResponse_H_
