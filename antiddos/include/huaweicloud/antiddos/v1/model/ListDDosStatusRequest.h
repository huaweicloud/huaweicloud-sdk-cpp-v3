
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDDosStatusRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDDosStatusRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  ListDDosStatusRequest
    : public ModelBase
{
public:
    ListDDosStatusRequest();
    virtual ~ListDDosStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDDosStatusRequest members

    /// <summary>
    /// 可选范围： - normal：表示正常 - configging：表示设置中 - notConfig：表示未设置 - packetcleaning：表示清洗 - packetdropping：表示黑洞  不带此参数默认所有列表，以neutron查询到的顺序为准。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 返回结果个数限制，取值范围：1~100
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 偏移量，取值范围：0~2147483647
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// IP地址，支持IPv4格式和IPv6格式输入，支持部分查询。例如“？ip&#x3D;192.168”，会返回192.168.111.1和10.192.168.8所对应的EIP防护状态。
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string ip_;
    bool ipIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDDosStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ListDDosStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_ListDDosStatusRequest_H_
