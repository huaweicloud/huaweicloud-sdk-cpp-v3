
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddAddressItemsInfoDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddAddressItemsInfoDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AddAddressItemsInfoDto_address_items.h>
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
/// 地址组成员信息
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddAddressItemsInfoDto
    : public ModelBase
{
public:
    AddAddressItemsInfoDto();
    virtual ~AddAddressItemsInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddAddressItemsInfoDto members

    /// <summary>
    /// 地址组id，可通过[查询地址组列表接口](ListAddressSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 地址组成员列表
    /// </summary>

    std::vector<AddAddressItemsInfoDto_address_items>& getAddressItems();
    bool addressItemsIsSet() const;
    void unsetaddressItems();
    void setAddressItems(const std::vector<AddAddressItemsInfoDto_address_items>& value);


protected:
    std::string setId_;
    bool setIdIsSet_;
    std::vector<AddAddressItemsInfoDto_address_items> addressItems_;
    bool addressItemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddAddressItemsInfoDto_H_
