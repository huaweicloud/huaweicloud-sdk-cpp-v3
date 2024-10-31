
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddAddressItemsInfoDto_address_items_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddAddressItemsInfoDto_address_items_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 成员信息
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddAddressItemsInfoDto_address_items
    : public ModelBase
{
public:
    AddAddressItemsInfoDto_address_items();
    virtual ~AddAddressItemsInfoDto_address_items();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddAddressItemsInfoDto_address_items members

    /// <summary>
    /// 地址类型0 ipv4，1 ipv6
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// ip
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 地址组成员描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    int32_t addressType_;
    bool addressTypeIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddAddressItemsInfoDto_address_items_H_
