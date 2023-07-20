
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachInternalIpResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachInternalIpResponse_H_

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
/// Response Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  AttachInternalIpResponse
    : public ModelBase, public HttpResponse
{
public:
    AttachInternalIpResponse();
    virtual ~AttachInternalIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachInternalIpResponse members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 节点ID。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 新的内网IP。
    /// </summary>

    std::string getNewIp() const;
    bool newIpIsSet() const;
    void unsetnewIp();
    void setNewIp(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string newIp_;
    bool newIpIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachInternalIpResponse_H_
