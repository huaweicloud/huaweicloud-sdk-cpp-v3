
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdatePartitionRequest_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdatePartitionRequest_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/PartitionReqBody.h>
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
class HUAWEICLOUD_CCE_V3_EXPORT  UpdatePartitionRequest
    : public ModelBase
{
public:
    UpdatePartitionRequest();
    virtual ~UpdatePartitionRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePartitionRequest members

    /// <summary>
    /// 集群ID，获取方式请参见[如何获取接口URI中参数](cce_02_0271.xml)。
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// **参数解释**： 分区名称 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getPartitionName() const;
    bool partitionNameIsSet() const;
    void unsetpartitionName();
    void setPartitionName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PartitionReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const PartitionReqBody& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string partitionName_;
    bool partitionNameIsSet_;
    PartitionReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePartitionRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePartitionRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_UpdatePartitionRequest_H_
