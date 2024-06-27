
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceItemListResponseDto_data_records_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceItemListResponseDto_data_records_H_


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
/// service item
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ServiceItemListResponseDto_data_records
    : public ModelBase
{
public:
    ServiceItemListResponseDto_data_records();
    virtual ~ServiceItemListResponseDto_data_records();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceItemListResponseDto_data_records members

    /// <summary>
    /// 服务成员id
    /// </summary>

    std::string getItemId() const;
    bool itemIdIsSet() const;
    void unsetitemId();
    void setItemId(const std::string& value);

    /// <summary>
    /// 协议类型:TCP为6,UDP为17,ICMP为1,ICMPV6为58,ANY为-1,手动类型不为空，自动类型为空
    /// </summary>

    int32_t getProtocol() const;
    bool protocolIsSet() const;
    void unsetprotocol();
    void setProtocol(int32_t value);

    /// <summary>
    /// 源端口
    /// </summary>

    std::string getSourcePort() const;
    bool sourcePortIsSet() const;
    void unsetsourcePort();
    void setSourcePort(const std::string& value);

    /// <summary>
    /// 目的端口
    /// </summary>

    std::string getDestPort() const;
    bool destPortIsSet() const;
    void unsetdestPort();
    void setDestPort(const std::string& value);

    /// <summary>
    /// 服务成员描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string itemId_;
    bool itemIdIsSet_;
    int32_t protocol_;
    bool protocolIsSet_;
    std::string sourcePort_;
    bool sourcePortIsSet_;
    std::string destPort_;
    bool destPortIsSet_;
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceItemListResponseDto_data_records_H_
