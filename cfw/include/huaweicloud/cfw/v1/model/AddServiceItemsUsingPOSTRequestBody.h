
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddServiceItemsUsingPOSTRequestBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddServiceItemsUsingPOSTRequestBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/AddServiceItemsUsingPOSTRequestBody_service_items.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  AddServiceItemsUsingPOSTRequestBody
    : public ModelBase
{
public:
    AddServiceItemsUsingPOSTRequestBody();
    virtual ~AddServiceItemsUsingPOSTRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddServiceItemsUsingPOSTRequestBody members

    /// <summary>
    /// 服务组id
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 添加服务组成员
    /// </summary>

    std::vector<AddServiceItemsUsingPOSTRequestBody_service_items>& getServiceItems();
    bool serviceItemsIsSet() const;
    void unsetserviceItems();
    void setServiceItems(const std::vector<AddServiceItemsUsingPOSTRequestBody_service_items>& value);


protected:
    std::string setId_;
    bool setIdIsSet_;
    std::vector<AddServiceItemsUsingPOSTRequestBody_service_items> serviceItems_;
    bool serviceItemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddServiceItemsUsingPOSTRequestBody_H_
