
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddressGroupVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddressGroupVO_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddressGroupVO
    : public ModelBase
{
public:
    AddressGroupVO();
    virtual ~AddressGroupVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddressGroupVO members

    /// <summary>
    /// 地址组类型，0表示自定义地址组，1表示WAF回源IP地址组，2表示DDoS回源IP地址组，3表示NAT64转换地址组
    /// </summary>

    int32_t getAddressSetType() const;
    bool addressSetTypeIsSet() const;
    void unsetaddressSetType();
    void setAddressSetType(int32_t value);

    /// <summary>
    /// 地址组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 地址组id
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);


protected:
    int32_t addressSetType_;
    bool addressSetTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string setId_;
    bool setIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddressGroupVO_H_
