
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateAddressSetDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateAddressSetDto_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 更新地址组信息
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  UpdateAddressSetDto
    : public ModelBase
{
public:
    UpdateAddressSetDto();
    virtual ~UpdateAddressSetDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateAddressSetDto members

    /// <summary>
    /// 地址组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 地址组描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 地址类型0 ipv4,1 ipv6,2 domain
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t addressType_;
    bool addressTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_UpdateAddressSetDto_H_
