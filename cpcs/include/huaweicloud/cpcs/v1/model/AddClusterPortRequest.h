
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AddClusterPortRequest_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AddClusterPortRequest_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cpcs/v1/model/CreateElbClusterPortRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  AddClusterPortRequest
    : public ModelBase
{
public:
    AddClusterPortRequest();
    virtual ~AddClusterPortRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddClusterPortRequest members

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

    CreateElbClusterPortRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateElbClusterPortRequestBody& value);


protected:
    std::string clusterId_;
    bool clusterIdIsSet_;
    CreateElbClusterPortRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddClusterPortRequest& dereference_from_shared_ptr(std::shared_ptr<AddClusterPortRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AddClusterPortRequest_H_
