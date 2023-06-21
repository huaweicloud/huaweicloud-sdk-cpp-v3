
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_RebootCloudTableClusterRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_RebootCloudTableClusterRequest_H_

#include <huaweicloud/cloudtable/v2/CloudtableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtable/v2/model/HbaseClusterActionReq.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  RebootCloudTableClusterRequest
    : public ModelBase
{
public:
    RebootCloudTableClusterRequest();
    virtual ~RebootCloudTableClusterRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RebootCloudTableClusterRequest members

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 语言类型
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    HbaseClusterActionReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const HbaseClusterActionReq& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    HbaseClusterActionReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RebootCloudTableClusterRequest& dereference_from_shared_ptr(std::shared_ptr<RebootCloudTableClusterRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_RebootCloudTableClusterRequest_H_
