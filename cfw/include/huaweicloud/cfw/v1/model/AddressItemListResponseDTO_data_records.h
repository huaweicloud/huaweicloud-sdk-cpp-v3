
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddressItemListResponseDTO_data_records_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddressItemListResponseDTO_data_records_H_


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
/// 地址组成员列表
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddressItemListResponseDTO_data_records
    : public ModelBase
{
public:
    AddressItemListResponseDTO_data_records();
    virtual ~AddressItemListResponseDTO_data_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddressItemListResponseDTO_data_records members

    /// <summary>
    /// 地址组成员id
    /// </summary>

    std::string getItemId() const;
    bool itemIdIsSet() const;
    void unsetitemId();
    void setItemId(const std::string& value);

    /// <summary>
    /// 地址组成员name
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 地址组类型，0 ipv4,1 ipv6
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// 地址信息
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);


protected:
    std::string itemId_;
    bool itemIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t addressType_;
    bool addressTypeIsSet_;
    std::string address_;
    bool addressIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddressItemListResponseDTO_data_records_H_
