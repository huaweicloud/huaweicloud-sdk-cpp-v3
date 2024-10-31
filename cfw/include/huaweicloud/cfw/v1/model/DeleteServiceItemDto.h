
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteServiceItemDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteServiceItemDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_CFW_V1_EXPORT  DeleteServiceItemDto
    : public ModelBase
{
public:
    DeleteServiceItemDto();
    virtual ~DeleteServiceItemDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteServiceItemDto members

    /// <summary>
    /// 服务组id，可通过[获取服务组列表接口](ListServiceSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 服务组成员id列表，服务组成员id可通过[查询服务成员列表接口](ListServiceItems.xml)查询获得，通过返回值中的data.records.item_id（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::vector<std::string>& getServiceItemIds();
    bool serviceItemIdsIsSet() const;
    void unsetserviceItemIds();
    void setServiceItemIds(const std::vector<std::string>& value);


protected:
    std::string setId_;
    bool setIdIsSet_;
    std::vector<std::string> serviceItemIds_;
    bool serviceItemIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteServiceItemDto_H_
