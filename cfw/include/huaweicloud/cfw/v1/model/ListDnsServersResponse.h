
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDnsServersResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDnsServersResponse_H_

#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/DnsServersResponseDTO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListDnsServersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListDnsServersResponse();
    virtual ~ListDnsServersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListDnsServersResponse members

    /// <summary>
    /// dns服务器列表
    /// </summary>

    std::vector<DnsServersResponseDTO>& getData();
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::vector<DnsServersResponseDTO>& value);

    /// <summary>
    /// dns服务器总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<DnsServersResponseDTO> data_;
    bool dataIsSet_;
    int32_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDnsServersResponse_H_
