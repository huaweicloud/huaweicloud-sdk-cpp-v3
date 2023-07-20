
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachInternalIpRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachInternalIpRequestBody_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_DDS_V3_EXPORT  AttachInternalIpRequestBody
    : public ModelBase
{
public:
    AttachInternalIpRequestBody();
    virtual ~AttachInternalIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachInternalIpRequestBody members

    /// <summary>
    /// 节点ID。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 新的Ip需要为用户可用vpc中的网段。只支持IPV4。
    /// </summary>

    std::string getNewIp() const;
    bool newIpIsSet() const;
    void unsetnewIp();
    void setNewIp(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string newIp_;
    bool newIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachInternalIpRequestBody_H_
