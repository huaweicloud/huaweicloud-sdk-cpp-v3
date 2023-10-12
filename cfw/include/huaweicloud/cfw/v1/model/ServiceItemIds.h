
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceItemIds_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceItemIds_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/IdObject.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ServiceItemIds
    : public ModelBase
{
public:
    ServiceItemIds();
    virtual ~ServiceItemIds();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceItemIds members

    /// <summary>
    /// 服务组成员id列表
    /// </summary>

    std::vector<IdObject>& getItems();
    bool itemsIsSet() const;
    void unsetitems();
    void setItems(const std::vector<IdObject>& value);


protected:
    std::vector<IdObject> items_;
    bool itemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceItemIds_H_
