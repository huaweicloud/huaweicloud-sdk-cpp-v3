
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceGroupVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceGroupVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CFW_V1_EXPORT  ServiceGroupVO
    : public ModelBase
{
public:
    ServiceGroupVO();
    virtual ~ServiceGroupVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServiceGroupVO members

    /// <summary>
    /// 服务组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 协议列表，协议类型：TCP为6，UDP为17，ICMP为1，ICMPV6为58，ANY为-1
    /// </summary>

    std::vector<int32_t>& getProtocols();
    bool protocolsIsSet() const;
    void unsetprotocols();
    void setProtocols(std::vector<int32_t> value);

    /// <summary>
    /// 服务组类型，0表示自定义服务组，1表示预定义服务组
    /// </summary>

    int32_t getServiceSetType() const;
    bool serviceSetTypeIsSet() const;
    void unsetserviceSetType();
    void setServiceSetType(int32_t value);

    /// <summary>
    /// 服务组id，可通过[获取服务组列表接口](ListServiceSets.xml)查询获得，通过返回值中的data.records.set_id（.表示各对象之间层级的区分）获得。
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<int32_t> protocols_;
    bool protocolsIsSet_;
    int32_t serviceSetType_;
    bool serviceSetTypeIsSet_;
    std::string setId_;
    bool setIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ServiceGroupVO_H_
