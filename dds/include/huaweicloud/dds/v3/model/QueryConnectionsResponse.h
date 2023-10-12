
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_QueryConnectionsResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_QueryConnectionsResponse_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  QueryConnectionsResponse
    : public ModelBase
{
public:
    QueryConnectionsResponse();
    virtual ~QueryConnectionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryConnectionsResponse members

    /// <summary>
    /// 连接到该实例或节点的客户端IP地址。
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// 该IP对应的连接数。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::string clientIp_;
    bool clientIpIsSet_;
    int32_t count_;
    bool countIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_QueryConnectionsResponse_H_
