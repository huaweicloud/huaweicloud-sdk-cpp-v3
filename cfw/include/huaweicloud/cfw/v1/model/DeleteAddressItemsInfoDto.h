
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteAddressItemsInfoDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteAddressItemsInfoDto_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  DeleteAddressItemsInfoDto
    : public ModelBase
{
public:
    DeleteAddressItemsInfoDto();
    virtual ~DeleteAddressItemsInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAddressItemsInfoDto members

    /// <summary>
    /// 地址组id
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 地址组成员id列表
    /// </summary>

    std::vector<std::string>& getAddressItemIds();
    bool addressItemIdsIsSet() const;
    void unsetaddressItemIds();
    void setAddressItemIds(const std::vector<std::string>& value);


protected:
    std::string setId_;
    bool setIdIsSet_;
    std::vector<std::string> addressItemIds_;
    bool addressItemIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DeleteAddressItemsInfoDto_H_
