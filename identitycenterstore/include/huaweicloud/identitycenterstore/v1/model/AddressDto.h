
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_AddressDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_AddressDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// The address associated with the specified user.
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  AddressDto
    : public ModelBase
{
public:
    AddressDto();
    virtual ~AddressDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddressDto members

    /// <summary>
    /// 国家/地区
    /// </summary>

    std::string getCountry() const;
    bool countryIsSet() const;
    void unsetcountry();
    void setCountry(const std::string& value);

    /// <summary>
    /// 包含要显示的地址的格式化版本的字符串
    /// </summary>

    std::string getFormatted() const;
    bool formattedIsSet() const;
    void unsetformatted();
    void setFormatted(const std::string& value);

    /// <summary>
    /// 地址位置
    /// </summary>

    std::string getLocality() const;
    bool localityIsSet() const;
    void unsetlocality();
    void setLocality(const std::string& value);

    /// <summary>
    /// 邮政编码
    /// </summary>

    std::string getPostalCode() const;
    bool postalCodeIsSet() const;
    void unsetpostalCode();
    void setPostalCode(const std::string& value);

    /// <summary>
    /// 一个布尔值，表示这是否为用户的主地址
    /// </summary>

    bool isPrimary() const;
    bool primaryIsSet() const;
    void unsetprimary();
    void setPrimary(bool value);

    /// <summary>
    /// 区域
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 街道
    /// </summary>

    std::string getStreetAddress() const;
    bool streetAddressIsSet() const;
    void unsetstreetAddress();
    void setStreetAddress(const std::string& value);

    /// <summary>
    /// 表示地址类型的字符串
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string country_;
    bool countryIsSet_;
    std::string formatted_;
    bool formattedIsSet_;
    std::string locality_;
    bool localityIsSet_;
    std::string postalCode_;
    bool postalCodeIsSet_;
    bool primary_;
    bool primaryIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string streetAddress_;
    bool streetAddressIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_AddressDto_H_
