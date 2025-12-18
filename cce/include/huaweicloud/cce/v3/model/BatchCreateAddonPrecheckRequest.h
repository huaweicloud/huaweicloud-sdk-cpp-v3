
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateAddonPrecheckRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateAddonPrecheckRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/AddonCheckRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  BatchCreateAddonPrecheckRequest
    : public ModelBase
{
public:
    BatchCreateAddonPrecheckRequest();
    virtual ~BatchCreateAddonPrecheckRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateAddonPrecheckRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AddonCheckRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddonCheckRequest& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    AddonCheckRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateAddonPrecheckRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateAddonPrecheckRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateAddonPrecheckRequest_H_
