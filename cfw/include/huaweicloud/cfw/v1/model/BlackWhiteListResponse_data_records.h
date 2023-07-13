
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_BlackWhiteListResponse_data_records_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_BlackWhiteListResponse_data_records_H_

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
/// items
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  BlackWhiteListResponse_data_records
    : public ModelBase
{
public:
    BlackWhiteListResponse_data_records();
    virtual ~BlackWhiteListResponse_data_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BlackWhiteListResponse_data_records members

    /// <summary>
    /// 黑白名单列表id
    /// </summary>

    std::string getListId() const;
    bool listIdIsSet() const;
    void unsetlistId();
    void setListId(const std::string& value);

    /// <summary>
    /// 黑白地址方向0：源地址1：目的地址
    /// </summary>

    int32_t getDirection() const;
    bool directionIsSet() const;
    void unsetdirection();
    void setDirection(int32_t value);

    /// <summary>
    /// IP地址类型0：ipv4,1:ipv6,2:domain
    /// </summary>

    int32_t getAddressType() const;
    bool addressTypeIsSet() const;
    void unsetaddressType();
    void setAddressType(int32_t value);

    /// <summary>
    /// ip地址
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 协议类型:TCP为6,UDP为17,ICMP为1,ICMPV6为58,ANY为-1,手动类型不为空，自动类型为空
    /// </summary>

    int32_t getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(int32_t value);

    /// <summary>
    /// 端口
    /// </summary>

    std::string getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const std::string& value);


protected:
    std::string listId_;
    bool listIdIsSet_;
    int32_t direction_;
    bool directionIsSet_;
    int32_t addressType_;
    bool addressTypeIsSet_;
    std::string address_;
    bool addressIsSet_;
    int32_t protocol_;
    bool protocolIsSet_;
    std::string port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_BlackWhiteListResponse_data_records_H_
