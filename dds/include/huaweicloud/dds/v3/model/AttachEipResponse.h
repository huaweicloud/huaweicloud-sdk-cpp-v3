
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachEipResponse_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachEipResponse_H_

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
class HUAWEICLOUD_DDS_V3_EXPORT  AttachEipResponse
    : public ModelBase, public HttpResponse
{
public:
    AttachEipResponse();
    virtual ~AttachEipResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachEipResponse members

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
    /// 节点名称。
    /// </summary>

    std::string getNodeName() const;
    bool nodeNameIsSet() const;
    void unsetnodeName();
    void setNodeName(const std::string& value);

    /// <summary>
    /// 公网IP的ID。
    /// </summary>

    std::string getPublicIpId() const;
    bool publicIpIdIsSet() const;
    void unsetpublicIpId();
    void setPublicIpId(const std::string& value);

    /// <summary>
    /// 公网IP。
    /// </summary>

    std::string getPublicIp() const;
    bool publicIpIsSet() const;
    void unsetpublicIp();
    void setPublicIp(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string nodeName_;
    bool nodeNameIsSet_;
    std::string publicIpId_;
    bool publicIpIdIsSet_;
    std::string publicIp_;
    bool publicIpIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachEipResponse_H_
