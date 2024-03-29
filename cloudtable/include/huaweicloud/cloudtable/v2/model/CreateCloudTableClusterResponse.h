
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateCloudTableClusterResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateCloudTableClusterResponse_H_


#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  CreateCloudTableClusterResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateCloudTableClusterResponse();
    virtual ~CreateCloudTableClusterResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCloudTableClusterResponse members

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getGetJobEndpoint() const;
    bool getJobEndpointIsSet() const;
    void unsetgetJobEndpoint();
    void setGetJobEndpoint(const std::string& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string getJobEndpoint_;
    bool getJobEndpointIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_CreateCloudTableClusterResponse_H_
