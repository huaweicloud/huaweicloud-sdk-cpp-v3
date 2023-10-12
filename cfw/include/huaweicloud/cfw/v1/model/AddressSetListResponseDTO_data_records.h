
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddressSetListResponseDTO_data_records_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddressSetListResponseDTO_data_records_H_


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
/// 列表信息
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddressSetListResponseDTO_data_records
    : public ModelBase
{
public:
    AddressSetListResponseDTO_data_records();
    virtual ~AddressSetListResponseDTO_data_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddressSetListResponseDTO_data_records members

    /// <summary>
    /// 地址组id
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 引用次数
    /// </summary>

    int32_t getRefCount() const;
    bool refCountIsSet() const;
    void unsetrefCount();
    void setRefCount(int32_t value);

    /// <summary>
    /// 描述信息
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 地址组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 地址类型0 ipv4,1 ipv6
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);


protected:
    std::string setId_;
    bool setIdIsSet_;
    int32_t refCount_;
    bool refCountIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t addressType_;
    bool addressTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddressSetListResponseDTO_data_records_H_
